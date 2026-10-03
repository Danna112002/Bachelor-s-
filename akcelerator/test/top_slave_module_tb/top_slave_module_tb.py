"""
Główny plik testbencha (Cocotb) dla modułu top_slave_module.
Weryfikuje pełną funkcjonalność układu: komunikację AXI4-Lite, przepływ AXI4-Stream,
wyszukiwanie wzorców, walidację UTF-8, stany brzegowe oraz odporność na reset w locie.
Korzysta z funkcji pomocniczych zdefiniowanych w bus_helpers.py.
"""
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles, with_timeout
from cocotb.result import SimTimeoutError
import random
import os
import asyncio

from test.top_slave_module_tb.bus_helpers import *
from test.top_slave_module_tb.bus_helpers import _send_running_stream, _send_fixed_file


# ==============================================================================
# TEST 1: Pokrycie trybów pracy i obsługa sygnału TLAST
# ==============================================================================
@cocotb.test()
async def test_modes_and_multiple_files(dut):
    """
    Weryfikuje wszystkie 4 tryby pracy (aktywność matchera) oraz poprawną 
    izolację plików. Wysyła strumień zdrowy (sprawdzając wyniki) oraz 
    strumienie zepsute (sprawdzając wystawianie błędu UTF-8).
    """
    seed = int(os.environ.get("TEST_SEED", random.randint(0, 2**31 - 1)))
    random.seed(seed)
    dut._log.warning(f"TEST 1: Tryby pracy i granice plikow (SEED: {seed})")

    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)

    search_string = "iii"
    
    # Wczytanie próbek testowych z dysku
    with open("test.txt", "rb") as f: healthy_file = f.read()
    with open("exploit_c0_overlong.bin", "rb") as f: bad_1 = f.read()
    with open("corrupted_start_err.bin", "rb") as f: bad_2 = f.read()
    with open("corrupted_tlast_err.bin", "rb") as f: bad_3 = f.read()

    decoded = healthy_file.decode('utf-8')
    expected_positions = find_all_occurrences(decoded, search_string)

    await configure_pattern(dut, search_string, mode=3)

    # Odczyty "w ciemno" dla pokrycia kodu (Code Coverage) rejestrów AXI-Lite
    _ = await axi_lite_read(dut, ADDR_PATTERN_LEN, random_pauses=True)
    _ = await axi_lite_read(dut, ADDR_PATTERN_BASE, random_pauses=True)
    _ = await axi_lite_read(dut, ADDR_MASK_BASE, random_pauses=True)

    for mode in range(4):
        dut._log.info(f"Faza: Tryb {mode}")
        
        # Zmiana trybu w locie i kontrola fizycznego odcięcia ścieżki matchera
        await axi_lite_write(dut, ADDR_MODE, mode, random_pauses=True)
        _ = await axi_lite_read(dut, ADDR_MODE, random_pauses=True)
        await ClockCycles(dut.S_AXI_ACLK, 5)

        matcher_active = int(dut.u_subchar_matcher.matcher_active.value)
        if mode in [0, 1]:
            assert matcher_active == 0, f"BŁĄD: Tryb {mode} nie wyłączył matchera!"
        else:
            assert matcher_active == 1, f"BŁĄD: Tryb {mode} zgasił matchera!"

        # Przetwarzanie zdrowego pliku
        send_task = cocotb.start_soon(axi_stream_send(dut, healthy_file, random_pauses=True, task_name="HEALTHY_FILE"))
        
        retrieved_positions = []
        if mode == 3:
            # Równoległy odbiór zapobiegający zakleszczeniu magistrali (deadlock na FIFO)
            await with_timeout(drain_fifo_random(dut, retrieved_positions, len(expected_positions)), DRAIN_TIMEOUT_NS, 'ns')
        
        await with_timeout(send_task, SEND_TIMEOUT_NS, 'ns')
        await ClockCycles(dut.S_AXI_ACLK, 50)

        _, status_bits = await status_snapshot(dut, f"MODE_{mode}_HEALTHY")
        assert not status_bits["encoding_error"], "Fałszywy alarm błędu kodowania w czystym pliku!"

        total_chars = await axi_lite_read(dut, ADDR_CHAR_COUNT, random_pauses=True)
        hw_matches  = await axi_lite_read(dut, ADDR_MATCH_COUNT, random_pauses=True)
        assert total_chars == len(decoded), f"final_char_count={total_chars}, oczekiwano {len(decoded)}!"

        if mode in [2, 3]:
            assert hw_matches == len(expected_positions), f"Tryb {mode}: match_count={hw_matches}, oczekiwano {len(expected_positions)}!"

        if mode == 3:
            assert retrieved_positions == expected_positions, "Wyłowione pozycje nie pasują do wzorca!"
        
        if mode in [0, 1, 2]:
            fifo_val = await axi_lite_read(dut, ADDR_FIFO_DATA, random_pauses=True)
            assert fifo_val == 0xFFFFFFFF, f"BŁĄD: Tryb {mode} zanieczyścił FIFO!"
        
        bad_files = {
            "OVERLONG_C0": bad_1,
            "START_ERR": bad_2,
            "TLAST_ERR": bad_3
        }

        # Wstrzykiwanie błędów i weryfikacja automatycznego wznawiania (Recovery) po zepsutym pliku
        for fname, fdata in bad_files.items():
            await axi_stream_send(dut, fdata, random_pauses=True, task_name=f"BAD_{fname}")
            await ClockCycles(dut.S_AXI_ACLK, 50)
            
            _, status_bits = await status_snapshot(dut, f"MODE_{mode}_{fname}")
            assert status_bits["encoding_error"], f"Moduł NIE wykrył błędu w pliku {fname}!"
            
            # Odczyt zatrzaśniętej pozycji błędu
            err_pos = await axi_lite_read(dut, ADDR_ERROR_POS, random_pauses=True)
            dut._log.info(f"[{fname}] Błąd sprzętowo zatrzaśnięty na pozycji znaku: {err_pos}")
            
            await drain_until_empty(dut)


# ==============================================================================
# TEST 2: Odporność na reset w stanie RUNNING
# ==============================================================================
@cocotb.test()
async def test_reset_during_running(dut):
    """
    Rozpędza potok nieskończonym strumieniem (RUNNING) i wymusza brutalny 
    reset sprzętowy. Sprawdza powrót do stabilnego stanu IDLE.
    """
    dut._log.warning("TEST 2: Reset podczas RUNNING")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
 
    await configure_pattern(dut, 'z', mode=3)
    send_task = cocotb.start_soon(_send_running_stream(dut))
 
    await wait_for_state(dut, STATE_RUNNING)
 
    # Twarde przerwanie zasilania sygnałami
    await force_reset(dut, "RUNNING", send_task)
    await verify_clean_recovery(dut, "RUNNING")
    
    # Przesłanie nowego pliku weryfikujące, czy rejestry wstały poprawnie
    await verify_functional_recovery(dut, "RUNNING")


# ==============================================================================
# TEST 3: Odporność na reset w stanie PAUSED
# ==============================================================================
@cocotb.test()
async def test_reset_during_paused(dut):
    """
    Blokuje potok nie odbierając danych (PAUSED z powodu backpressure na FIFO)
    i wykonuje reset. Weryfikuje poprawne wyczyszczenie zapchanych kolejek.
    """
    dut._log.warning("TEST 3: Reset podczas PAUSED (Przepelnione FIFO)")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
 
    await configure_pattern(dut, 'a', mode=3)
    send_task = cocotb.start_soon(_send_running_stream(dut))
 
    await wait_for_state(dut, STATE_PAUSED)
 
    await force_reset(dut, "PAUSED", send_task)
    await verify_clean_recovery(dut, "PAUSED")
    await verify_functional_recovery(dut, "PAUSED")


# ==============================================================================
# TEST 4: Odporność na reset w stanie FLUSHING
# ==============================================================================
@cocotb.test()
async def test_reset_during_flushing(dut):
    """
    Resetuje maszynę w bardzo krótkim, 6-taktowym oknie zrzucania resztek 
    z potoku (FLUSHING) po otrzymaniu TLAST.
    """
    dut._log.warning("TEST 4: Reset podczas FLUSHING (Okienko czasowe)")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
 
    await configure_pattern(dut, 'q', mode=3)  
    short_file = b"krotki_plik_bez_z"
    send_task = cocotb.start_soon(_send_fixed_file(dut, short_file))
 
    await wait_for_state(dut, STATE_FLUSHING)
 
    await force_reset(dut, "FLUSHING", send_task)
    await verify_clean_recovery(dut, "FLUSHING")
    await verify_functional_recovery(dut, "FLUSHING")


# ==============================================================================
# TEST 5: Przypadki brzegowe i zachowanie konfiguracji
# ==============================================================================
@cocotb.test()
async def test_pattern_boundaries(dut):
    """
    Weryfikuje matematykę dla skrajnych długości: pattern_len = 0 (Underflow), 
    pattern_len = 128 (maksymalna pojemność szyny) oraz pattern_len = 150 (Overflow).
    """
    dut._log.warning("TEST 5: Stany brzegowe (dlugosci 0, 128, 150)")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)

    await axi_lite_write(dut, ADDR_MODE, 3, random_pauses=True)

    dut._log.info("Faza: Scenariusz A (underflow, pattern_len=0)")
    await axi_lite_write(dut, ADDR_PATTERN_LEN, 0, random_pauses=True)
    drain_task = cocotb.start_soon(drain_fifo_random(dut, []))
    await with_timeout(axi_stream_send(dut, b"Test zera dlugosci", random_pauses=True), SEND_TIMEOUT_NS, 'ns')
    await ClockCycles(dut.S_AXI_ACLK, 20)
    drain_task.cancel()
    
    await drain_until_empty(dut)

    dut._log.info("Faza: Scenariusz B (max pattern, 128 bajtow)")
    max_pattern = bytes((i % 26) + ord('a') for i in range(128))
    await configure_pattern(dut, max_pattern, mode=3)
    
    test_stream = b"Szum_poczatkowy..." + max_pattern + b"...Szum_koncowy"
    expected_pos = len(b"Szum_poczatkowy...")
    
    await with_timeout(axi_stream_send(dut, test_stream, random_pauses=True), SEND_TIMEOUT_NS, 'ns')
    await ClockCycles(dut.S_AXI_ACLK, 150)
    
    hw_matches = await axi_lite_read(dut, ADDR_MATCH_COUNT, random_pauses=True)
    assert hw_matches == 1, f"BŁĄD: Nie znaleziono 128-bajtowego wzorca!"
    found_pos = await axi_lite_read(dut, ADDR_FIFO_DATA, random_pauses=True)
    assert found_pos == expected_pos, f"Zła pozycja! Oczekiwano {expected_pos}, dostano {found_pos}"

    await drain_until_empty(dut)

    dut._log.info("Faza: Scenariusz C (overflow, pattern_len=150 - tylko brak zawieszenia)")
    illegal_pattern = bytes((i % 26) + ord('a') for i in range(150))
    await configure_pattern(dut, illegal_pattern, pattern_len=150, mode=3)

    test_stream = b"Start_test_overflow_" + illegal_pattern[:32] + b"_trailing_data"
    drain_task = cocotb.start_soon(drain_fifo_random(dut, []))

    try:
        await with_timeout(axi_stream_send(dut, test_stream, random_pauses=True), SEND_TIMEOUT_NS, 'ns')
    except SimTimeoutError:
        assert False, "Układ zawiesił magistralę AXI-Stream przy nadmiarowym wzorcu!"

    await ClockCycles(dut.S_AXI_ACLK, 30)
    drain_task.cancel()
    assert dut.S_AXIS_TREADY.value == 1, "Układ nie odzyskał gotowości TREADY!"


# ==============================================================================
# TEST 6: Test strumienia uciętego do pełnego słowa (Aligned TKEEP)
# ==============================================================================
@cocotb.test()
async def test_word_aligned_file_length(dut):
    """
    Testuje deserializator (Gearbox) dla plików, których rozmiar jest idealną 
    wielokrotnością 4 bajtów (sygnał TLAST i maska TKEEP zrównane idealnie na wartości 1111).
    """
    dut._log.warning("TEST 6: Plik wyrownany do 4 bajtow (TKEEP=1111)")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
 
    search_char = 'a'
    probe_file = b"aabbaabb" 
    assert len(probe_file) % 4 == 0, "Plik MUSI mieć długość podzielną przez 4!"
    expected = [i for i, b in enumerate(probe_file) if chr(b) == search_char]
 
    await configure_pattern(dut, search_char, mode=3)
 
    await axi_stream_send(dut, probe_file, random_pauses=True, task_name="WORD_ALIGNED")
    await ClockCycles(dut.S_AXI_ACLK, 30)
 
    _, status_bits = await status_snapshot(dut, "WORD_ALIGNED")
    assert not status_bits["encoding_error"], "Fałszywy encoding_error!"
 
    retrieved = await drain_until_empty(dut)
 
    match_count = await axi_lite_read(dut, ADDR_MATCH_COUNT, random_pauses=True)
    assert retrieved == expected, f"Pozycje: {retrieved}, oczekiwano {expected}!"
    assert match_count == len(expected), f"match_count={match_count}, oczekiwano {len(expected)}!"


# ==============================================================================
# TEST 7: Weryfikacja bezpiecznego licznika bufora (Simultaneous R/W)
# ==============================================================================
@cocotb.test()
async def test_simultaneous_fifo_read_write(dut):
    """
    Monitoruje linie sprzętowe FIFO szukając taktu, w którym następuje jednoczesny 
    zapis i odczyt (stan 2'b11). Weryfikuje, czy licznik zajętości pozostaje nienaruszony.
    """
    dut._log.warning("TEST 7: Kolizja zapisu i odczytu FIFO w jednym takcie")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
 
    await configure_pattern(dut, 'a', mode=3)
 
    # Plik generujący trafienie dosłownie na każdym znaku
    long_file = b"a" * 200
    send_task = cocotb.start_soon(axi_stream_send(dut, long_file, random_pauses=True))
 
    try:
        from test.top_slave_module_tb.bus_helpers import reader_and_watcher
        await with_timeout(reader_and_watcher(dut), 200_000, 'ns')
    except SimTimeoutError:
        dut._log.error("[TIMEOUT] Nie wywołano kolizji zapis+odczyt w limicie czasu.")
        raise
    finally:
        send_task.cancel()


# ==============================================================================
# TEST 8: Selektywny zapis szyny danych (AXI-Lite WSTRB)
# ==============================================================================
@cocotb.test()
async def test_wstrb_byte_access(dut):
    """
    Testuje sygnał WSTRB (Write Strobe). Przeprowadza częściowy zapis 32-bitowego 
    słowa, weryfikując, czy hardware poprawnie skleja stare i nowe bajty.
    """
    dut._log.warning("TEST 8: Zapis z uzyciem maski bajtow WSTRB")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)

    initial_data = 0x12345678
    await axi_lite_write(dut, ADDR_PATTERN_BASE, initial_data, wstrb=0xF, random_pauses=True)

    read_val = await axi_lite_read(dut, ADDR_PATTERN_BASE)
    assert read_val == initial_data, "Stan początkowy błędny!"

    # Zapis tylko połowy słowa
    partial_data = 0xDEADBEEF
    await axi_lite_write(dut, ADDR_PATTERN_BASE, partial_data, wstrb=0x03, random_pauses=True)

    read_val_after = await axi_lite_read(dut, ADDR_PATTERN_BASE)
    expected_val = 0x1234BEEF
    assert read_val_after == expected_val, "Błąd aplikacji maski WSTRB przez slave'a!"


# ==============================================================================
# TEST 9: Bezpieczeństwo mapy adresowej (Unknown Address)
# ==============================================================================
@cocotb.test()
async def test_unknown_address_read(dut):
    """
    Próba odczytu spoza dozwolonego zakresu mapy pamięci w axi_lite_registers.
    Upewnia się, że nieistniejące rejestry bezpiecznie zwracają zera bez rzucania błędu.
    """
    dut._log.warning("TEST 9: Odczyt niezadeklarowanego adresu AXI")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)

    unknown_addresses = [0x050, 0x300, 0xFF8]

    for addr in unknown_addresses:
        val = await axi_lite_read(dut, addr)
        assert val == 0, f"Adres 0x{addr:03X} powinien zwracać zero!"


# ==============================================================================
# TEST 10: Ochrona dekodera i analiza błędów (RFC 3629 Exploits)
# ==============================================================================
@cocotb.test()
async def test_utf8_validator_exploits(dut):
    """
    Test wczytuje serię ładunków łamiących standard UTF-8 (np. fałszywe znaki ASCII,
    kody surogatów, urwane końcówki). Weryfikuje natychmiastowe blokowanie 
    niezgodnych znaków przez sprzętowy walidator.
    """
    dut._log.warning("TEST 10: Analiza podatnosci walidatora UTF-8")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)

    await configure_pattern(dut, "test", mode=3)

    exploit_files = [
        "exploit_c0_overlong.bin",
        "exploit_f5_limit.bin",
        "exploit_e0_overlong.bin",
        "exploit_f0_overlong.bin",
        "exploit_trunc_mid.bin",
        "exploit_surrogate.bin",
        "corrupted_start_err.bin",
        "corrupted_tlast_err.bin"
    ]

    for fname in exploit_files:
        if not os.path.exists(fname):
            assert False, f"Brak pliku testowego: {fname}"

        with open(fname, "rb") as f:
            fdata = f.read()

        await axi_stream_send(dut, fdata, random_pauses=True, task_name=f"SEC_{fname}")
        await ClockCycles(dut.S_AXI_ACLK, 30)
        
        # Sprawdzenie bitu bezpieczeństwa (bit 1 = encoding_error)
        _, status_bits = await status_snapshot(dut, f"EXPLOIT_{fname}")
        assert status_bits["encoding_error"], f"LUKA BEZPIECZEŃSTWA! Sprzęt nie zablokował wektora w {fname}!"
        
        # Odczyt zatrzaśniętej pozycji błędu
        err_pos = await axi_lite_read(dut, ADDR_ERROR_POS)
        dut._log.info(f"[SEC] Wektor ataku {fname} zablokowany. Zatrzaśnięta pozycja błędu: {err_pos}")
        
        await drain_until_empty(dut)

@cocotb.test()
async def test_utf8_valid_f4_boundary(dut):
    """Domyka strone 'powinno przejsc' dla najwyzszego legalnego punktu
    kodowego Unicode (U+10FFFF = F4 8F BF BF) - dotychczas testowana byla
    tylko strona 'powinno wybuchnac' (0xF5+)."""
    dut._log.warning("TEST: legalny lider 0xF4 (gorna granica Unicode)")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
    await configure_pattern(dut, 'z', mode=3)

    valid_f4_char = bytes([0xF4, 0x8F, 0xBF, 0xBF])  # U+10FFFF
    probe_file = b"ab" + valid_f4_char + b"cd"

    await axi_stream_send(dut, probe_file, random_pauses=True, task_name="F4_VALID")
    await ClockCycles(dut.S_AXI_ACLK, 30)

    status = await axi_lite_read(dut, ADDR_STATUS)
    char_count = await axi_lite_read(dut, ADDR_CHAR_COUNT)

    assert (status >> 1) & 1 == 0, "Legalny znak U+10FFFF falszywie odrzucony!"
    assert char_count == 5, f"Oczekiwano 5 znakow (a,b,U+10FFFF,c,d), otrzymano {char_count}"
    dut._log.info("SUKCES: legalny lider 0xF4 poprawnie zaakceptowany.")



@cocotb.test()
async def test_empty_final_beat(dut):
    """Legalny wg AXI4-Stream 'widmowy' takt koncowy: TLAST=1, TKEEP=0000.
    Trafia w gałąź default:max_idx=2'd3 w gearboxie - sprawdzamy, że
    4 wstrzyknięte zerowe bajty poprawnie liczą się jako 4 znaki NUL,
    a nie coś gorszego (błąd, zawieszenie, złe TLAST)."""
    dut._log.warning("TEST: pusty takt koncowy (TLAST=1, TKEEP=0000)")
    cocotb.start_soon(Clock(dut.S_AXI_ACLK, 10, unit="ns").start())
    await reset_dut(dut)
    await configure_pattern(dut, 'z', mode=3)

    # Takt 1: realne dane, TLAST jeszcze nie
    dut.S_AXIS_TDATA.value = int.from_bytes(b"abcd", byteorder='little')
    dut.S_AXIS_TKEEP.value = 0xF
    dut.S_AXIS_TLAST.value = 0
    dut.S_AXIS_TVALID.value = 1
    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXIS_TREADY.value == 1: break

    # Takt 2: "widmowy" - TLAST=1, ale TKEEP=0000
    dut.S_AXIS_TDATA.value = 0
    dut.S_AXIS_TKEEP.value = 0x0
    dut.S_AXIS_TLAST.value = 1
    dut.S_AXIS_TVALID.value = 1
    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXIS_TREADY.value == 1: break
    dut.S_AXIS_TVALID.value = 0
    dut.S_AXIS_TLAST.value = 0

    await ClockCycles(dut.S_AXI_ACLK, 30)
    status = await axi_lite_read(dut, ADDR_STATUS)
    char_count = await axi_lite_read(dut, ADDR_CHAR_COUNT)

    assert (status >> 1) & 1 == 0, "Nieoczekiwany encoding_error dla pustego taktu!"
    assert char_count == 8, f"Oczekiwano 8 (4 realne + 4 widmowe NUL), otrzymano {char_count}"
    dut._log.info(f"Potwierdzono: pusty takt koncowy dolicza {char_count-4} widmowych znakow.")