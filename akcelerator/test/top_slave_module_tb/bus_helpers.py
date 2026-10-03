"""
================================================================================
BIBLIOTEKA FUNKCJI POMOCNICZYCH DLA TESTÓW COCOTB (top_slave_module)
================================================================================
Plik udostępnia zestaw funkcji stymulujących, monitorujących oraz model 
referencyjny, niezbędne do przeprowadzenia testów jednostkowych akceleratora.

Zgodność obsługiwanych interfejsów:
- AXI4-Lite   (32-bitowy dostęp rejestrowy: konfiguracja, status, odczyt wyników)
- AXI4-Stream (32-bitowy ciągły strumień danych z obsługą TKEEP i TLAST)
================================================================================
"""
import cocotb
from cocotb.triggers import RisingEdge, ClockCycles, with_timeout
from cocotb.result import SimTimeoutError
import random
import asyncio

# ==============================================================================
# STAŁE
# ==============================================================================
STATE_IDLE, STATE_RUNNING, STATE_PAUSED, STATE_FLUSHING = 0, 1, 2, 3
STATE_NAMES = {0: "IDLE", 1: "RUNNING", 2: "PAUSED", 3: "FLUSHING"}

DRAIN_TIMEOUT_NS = 500_000
SEND_TIMEOUT_NS  = 500_000
POLL_TIMEOUT_NS  = 100_000

# Adresy rejestrów AXI-Lite
ADDR_STATUS       = 0x000
ADDR_CHAR_COUNT   = 0x004
ADDR_MATCH_COUNT  = 0x008
ADDR_PATTERN_LEN  = 0x00C
ADDR_FIFO_DATA    = 0x010
ADDR_MODE         = 0x014
ADDR_ERROR_POS    = 0x018  # Rejestr zatrzaśniętej pozycji błędu UTF-8
ADDR_PATTERN_BASE = 0x100
ADDR_MASK_BASE    = 0x200



# ==============================================================================
# MODEL REFERENCYJNY
# ==============================================================================
# Wylicza oczekiwane pozycje (indeksy) wzorca w zadanym tekście. 
# Służy jako idealna, programowa wyrocznia (golden model) do weryfikacji sprzętu.
def find_all_occurrences(text: str, pattern: str) -> list[int]:
    positions = []
    start = 0
    while True:
        idx = text.find(pattern, start)
        if idx == -1:
            break
        positions.append(idx)
        start = idx + 1
    return positions


# ==============================================================================
# RESET I MAGISTRALA AXI-LITE
# ==============================================================================
# Wymusza standardowy, synchroniczny sprzętowy reset (ARESETN) dla całego modułu 
# i czyści flagi sterujące magistral.
async def reset_dut(dut):
    dut.S_AXI_AWVALID.value = 0
    dut.S_AXI_WVALID.value = 0
    dut.S_AXI_BREADY.value = 0
    dut.S_AXI_ARVALID.value = 0
    dut.S_AXI_RREADY.value = 0
    dut.S_AXIS_TVALID.value = 0

    dut.S_AXI_ARESETN.value = 0
    await ClockCycles(dut.S_AXI_ACLK, 5)
    dut.S_AXI_ARESETN.value = 1
    await ClockCycles(dut.S_AXI_ACLK, 5)

# Realizuje kompletną transakcję zapisu AXI4-Lite (kanał adresowy AW + danych W + odpowiedzi B) 
# z możliwością iniekcji losowych opóźnień symulujących opór magistrali.
async def axi_lite_write(dut, address, data, wstrb=0xF, random_pauses=False):
    if random_pauses and random.random() < 0.30:
        await ClockCycles(dut.S_AXI_ACLK, random.randint(1, 8))

    dut.S_AXI_AWADDR.value = address
    dut.S_AXI_AWVALID.value = 1
    dut.S_AXI_WDATA.value = data
    dut.S_AXI_WSTRB.value = wstrb
    dut.S_AXI_WVALID.value = 1
    # BREADY trzymane nisko aż do zakończenia fazy AW/W - pozwala przetestować
    # wstrzymanie kanału odpowiedzi zapisu (B), analogicznie do RREADY w odczycie.
    dut.S_AXI_BREADY.value = 0

    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXI_AWREADY.value == 1 and dut.S_AXI_WREADY.value == 1:
            break

    dut.S_AXI_AWVALID.value = 0
    dut.S_AXI_WVALID.value = 0

    if random_pauses and random.random() < 0.50:
        await ClockCycles(dut.S_AXI_ACLK, random.randint(2, 12))

    dut.S_AXI_BREADY.value = 1
    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXI_BVALID.value == 1:
            break
    dut.S_AXI_BREADY.value = 0
    await RisingEdge(dut.S_AXI_ACLK)

# Realizuje kompletną transakcję odczytu AXI4-Lite (kanał adresowy AR + danych R). 
# Celowo opóźnia podniesienie RREADY, aby sprawdzić odporność slave'a na wstrzymanie.
async def axi_lite_read(dut, address, random_pauses=False):
    if random_pauses and random.random() < 0.30:
        await ClockCycles(dut.S_AXI_ACLK, random.randint(1, 8))

    # --- Faza 1: Kanał adresowy (AR) ---
    dut.S_AXI_ARADDR.value = address
    dut.S_AXI_ARVALID.value = 1
    
    dut.S_AXI_RREADY.value = 0 

    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXI_ARREADY.value == 1:
            break
    dut.S_AXI_ARVALID.value = 0

    if random_pauses and random.random() < 0.50:
        await ClockCycles(dut.S_AXI_ACLK, random.randint(2, 12))

    # --- Faza 2: Kanał danych (R) ---
    dut.S_AXI_RREADY.value = 1

    read_data = 0
    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXI_RVALID.value == 1:
            read_data = int(dut.S_AXI_RDATA.value)
            break

    dut.S_AXI_RREADY.value = 0
    await RisingEdge(dut.S_AXI_ACLK)
    
    return read_data

# Pobiera z akceleratora bitowy rejestr statusu (adres 0x000) i zamienia go 
# na czytelny słownik mapujący stany flag na wartości logiczne.
async def status_snapshot(dut, label):
    status = await axi_lite_read(dut, ADDR_STATUS, random_pauses=True)
    bits = {
        "latched_data_valid": not (status & 0x1),
        "encoding_error":     bool((status >> 1) & 1),
        "char_count_valid":   bool((status >> 2) & 1),
        "match_count_valid":  bool((status >> 3) & 1),
    }
    dut._log.warning(f"[STATUS @ {label}] 0x{status:02X} -> {bits}")
    return status, bits


# ==============================================================================
# KONFIGURACJA WZORCA
# ==============================================================================
# Tłumaczy wprowadzony łańcuch znaków na serię 32-bitowych zapisów AXI-Lite 
# ustawiających docelowy wzorzec, maskę oraz długość i tryb działania układu.
async def configure_pattern(dut, pattern, pattern_len=None, mode=3):
    if isinstance(pattern, str):
        pattern_bytes = pattern.encode('utf-8')
    else:
        pattern_bytes = pattern

    actual_len = len(pattern_bytes)
    if pattern_len is None:
        pattern_len = actual_len

    pattern_int = int.from_bytes(pattern_bytes, byteorder='big')
    mask_int = (1 << (actual_len * 8)) - 1

    num_words = (actual_len + 3) // 4
    for w in range(num_words):
        word_val = (pattern_int >> (w * 32)) & 0xFFFFFFFF
        mask_val = (mask_int  >> (w * 32)) & 0xFFFFFFFF
        await axi_lite_write(dut, ADDR_PATTERN_BASE + w * 4, word_val, random_pauses=True)
        await axi_lite_write(dut, ADDR_MASK_BASE + w * 4, mask_val, random_pauses=True)

    await axi_lite_write(dut, ADDR_PATTERN_LEN, pattern_len, random_pauses=True)
    await axi_lite_write(dut, ADDR_MODE, mode, random_pauses=True)


# ==============================================================================
# AXI-STREAM: NADAWANIE
# ==============================================================================
# Nadaje na szynę AXI-Stream dokładnie jeden bajt, omijając mechanizm gearboxa.
async def drive_byte(dut, byte_val, is_last):
    dut.S_AXIS_TDATA.value = byte_val
    dut.S_AXIS_TKEEP.value = 0x1
    dut.S_AXIS_TLAST.value = 1 if is_last else 0
    dut.S_AXIS_TVALID.value = 1
    while True:
        await RisingEdge(dut.S_AXI_ACLK)
        if dut.S_AXIS_TREADY.value == 1:
            break
    dut.S_AXIS_TVALID.value = 0
    dut.S_AXIS_TLAST.value = 0

# Serializuje surowe dane (bajty) w 32-bitowe bloki i przesyła je jako pakiety AXI-Stream, 
# dynamicznie przeliczając sygnał TKEEP dla ostatniej resztówki w bloku i podbijając TLAST.
async def axi_stream_send(dut, data_bytes, random_pauses=False, task_name="DMA"):
    idx = 0
    length = len(data_bytes)
    blocked_cycles = 0
    
    while idx < length:
        chunk = 0
        bytes_in_chunk = 0
        for i in range(4):
            if idx + i < length:
                chunk |= (data_bytes[idx + i] << (i * 8))
                bytes_in_chunk += 1

        is_last = (idx + bytes_in_chunk >= length)

        if random_pauses and random.random() < 0.30:
            dut.S_AXIS_TVALID.value = 0
            await ClockCycles(dut.S_AXI_ACLK, random.randint(1, 8))

        dut.S_AXIS_TDATA.value = chunk
        dut.S_AXIS_TKEEP.value = (1 << bytes_in_chunk) - 1
        dut.S_AXIS_TLAST.value = 1 if is_last else 0
        dut.S_AXIS_TVALID.value = 1

        while True:
            await RisingEdge(dut.S_AXI_ACLK)
            if dut.S_AXIS_TREADY.value == 1:
                break
            else:
                blocked_cycles += 1

        idx += bytes_in_chunk

    dut.S_AXIS_TVALID.value = 0
    dut.S_AXIS_TLAST.value = 0
    
    if blocked_cycles > 0 and not random_pauses:
        dut._log.info(f"[{task_name}] Akcelerator skutecznie dławił transmisję (S_AXIS_TREADY=0) przez łączny czas {blocked_cycles} cykli zegara.")

# Podtrzymuje aktywny, nieskończony strumień wejściowy bez wybijania flagi TLAST.
# Używane do testowania awaryjnych przerw transmisji (recovery).
async def _send_running_stream(dut):
    while True:
        await drive_byte(dut, ord('a'), is_last=False)

# Wypycha sekwencyjnie jednobajtowe bloki w trybie ciągłym (idealne do testowania stanów brzegowych).
async def _send_fixed_file(dut, data_bytes):
    for idx, b in enumerate(data_bytes):
        await drive_byte(dut, b, is_last=(idx == len(data_bytes) - 1))
    while True:
        await RisingEdge(dut.S_AXI_ACLK)


# ==============================================================================
# DRENAŻ FIFO
# ==============================================================================
# Wyczerpuje zasoby wewnętrznej pamięci FIFO poprzez cykliczny odczyt AXI-Lite 
# (adres 0x010) symulujący powolny lub zajęty procesor odbierający trafienia.
async def drain_fifo_random(dut, retrieved_positions, total_expected=None):
    while total_expected is None or len(retrieved_positions) < total_expected:
        if random.random() < 0.40:
            await ClockCycles(dut.S_AXI_ACLK, random.randint(10, 40))
        pos = await axi_lite_read(dut, ADDR_FIFO_DATA, random_pauses=True)
        if pos != 0xFFFFFFFF:
            retrieved_positions.append(pos)
        else:
            if total_expected is None:
                await RisingEdge(dut.S_AXI_ACLK)

# Drenuje FIFO do pustego stanu (0xFFFFFFFF) z twardym limitem czasu.
# Zwraca listę odczytanych pozycji. W odróżnieniu od gołej pętli "while ... != 0xFFFFFFFF: pass"
# rzuca SimTimeoutError zamiast zawiesić całą symulację, jeśli FIFO nigdy się nie opróżni
# (np. regresja w liczniku count/empty w hits_fifo).
async def drain_until_empty(dut, timeout_ns=DRAIN_TIMEOUT_NS):
    positions = []

    async def _drain():
        while True:
            pos = await axi_lite_read(dut, ADDR_FIFO_DATA, random_pauses=True)
            if pos == 0xFFFFFFFF:
                break
            positions.append(pos)

    await with_timeout(_drain(), timeout_ns, 'ns')
    return positions


# ==============================================================================
# STEROWANIE STANEM I RECOVERY
# ==============================================================================
# Asynchroniczny watch-dog: blokuje wątek dopóki wewnętrzna FSM nie osiągnie wybranego stanu. 
# Zgłasza błąd (timeout), jeśli przejście układu trwa zbyt długo.
async def wait_for_state(dut, target_state, timeout_ns=POLL_TIMEOUT_NS):
    async def _poll():
        while int(dut.u_subchar_matcher.state.value) != target_state:
            await RisingEdge(dut.S_AXI_ACLK)
    try:
        await with_timeout(_poll(), timeout_ns, 'ns')
    except SimTimeoutError:
        current = int(dut.u_subchar_matcher.state.value)
        dut._log.error(
            f"[TIMEOUT] Nie doczekano się stanu {STATE_NAMES[target_state]} "
            f"w {timeout_ns}ns. Ostatni zaobserwowany stan: {STATE_NAMES.get(current, current)}"
        )
        raise

# Nagłe przerwanie operacji układu. Wymusza opadnięcie linii AXI, zabija trwające zadania 
# transmisji (taski) i wystawia twardy sprzętowy sygnał resetu na wejście akceleratora.
async def force_reset(dut, label, send_task=None):
    dut._log.warning(f"[RESET @ {label}] Natychmiastowe wyciszenie magistrali i anulowanie tasków w tle...")
    
    dut.S_AXIS_TVALID.value = 0
    dut.S_AXIS_TLAST.value = 0
    
    if send_task is not None:
        send_task.cancel()
        try:
            await send_task
        except asyncio.CancelledError:
            pass
        # Uwaga: celowo NIE łapiemy tu Exception ogólnie - jeśli zadanie w tle
        # padło z innego powodu niż anulowanie (np. asercja), chcemy, żeby test
        # się na tym wywalił, a nie żeby błąd zniknął po cichu.

    await ClockCycles(dut.S_AXI_ACLK, 5)

    dut._log.warning(f"[RESET @ {label}] Zerowanie ARESETN, aktualny state={STATE_NAMES.get(int(dut.u_subchar_matcher.state.value))}")
    dut.S_AXI_ARESETN.value = 0
    await ClockCycles(dut.S_AXI_ACLK, 5)
    dut.S_AXI_ARESETN.value = 1
    await ClockCycles(dut.S_AXI_ACLK, 10)

# Weryfikuje strukturę wewnętrzną akceleratora bezpośrednio po wymuszonym resecie.
# Assertuje osiągnięcie stanu IDLE, podniesienie TREADY dla nowych danych oraz wyczyszczenie FIFO.
async def verify_clean_recovery(dut, label):
    state = int(dut.u_subchar_matcher.state.value)
    assert state == STATE_IDLE, f"[{label}] Po resecie state={STATE_NAMES.get(state, state)}, oczekiwano IDLE!"
    assert dut.S_AXIS_TREADY.value == 1, f"[{label}] S_AXIS_TREADY nie jest wysokie po resecie w IDLE!"

    fifo_val = await axi_lite_read(dut, ADDR_FIFO_DATA, random_pauses=True)
    assert fifo_val == 0xFFFFFFFF, f"[{label}] FIFO nie jest puste po resecie! odczytano 0x{fifo_val:08X}"
    dut._log.info(f"[{label}] Stan po resecie czysty: IDLE, TREADY=1, FIFO puste.")

# Przeprowadza pełną testową transakcję (skonfigurowanie wzorca, puszczenie strumienia),
# żeby zweryfikować czy sprzęt po resecie potrafi normalnie wznawiać obliczenia na nowym pliku.
async def verify_functional_recovery(dut, label):
    await configure_pattern(dut, 'x', pattern_len=1, mode=3)

    probe_file = b"xx_test_po_resecie_xx"
    expected = find_all_occurrences(probe_file.decode('utf-8'), 'x')

    await axi_stream_send(dut, probe_file, random_pauses=True, task_name=f"FUNC_RECOVERY_{label}")
    await ClockCycles(dut.S_AXI_ACLK, 20)

    retrieved = await drain_until_empty(dut)

    match_count = await axi_lite_read(dut, ADDR_MATCH_COUNT, random_pauses=True)
    _, status_bits = await status_snapshot(dut, f"FUNC_RECOVERY_{label}")

    assert not status_bits["encoding_error"], f"[{label}] Fałszywy encoding_error na czystym pliku po resecie!"
    assert retrieved == expected, f"[{label}] Pozycje po resecie: {retrieved}, oczekiwano {expected}!"
    assert match_count == len(expected), f"[{label}] match_count={match_count}, oczekiwano {len(expected)}!"
    dut._log.info(f"[{label}] Funkcjonalne odzyskanie potwierdzone.")

# Analizator logiki działający w wątku w tle (concurrent task). Monitoruje sprzętową linię FIFO
# upewniając się, że wewnętrzny znacznik pojemności bufora jest stabilny podczas kolizji r/w.
async def reader_and_watcher(dut):
    collisions_seen = [0]
    
    async def watcher_task():
        while collisions_seen[0] < 3:
            wr_en = int(dut.u_hits_fifo.wr_allowed.value)
            rd_en = int(dut.u_hits_fifo.rd_allowed.value)
            count_before = int(dut.u_hits_fifo.count.value)

            await RisingEdge(dut.S_AXI_ACLK)

            if wr_en and rd_en:
                collisions_seen[0] += 1
                count_after = int(dut.u_hits_fifo.count.value)
                dut._log.info(
                    f"[KOLIZJA #{collisions_seen[0]}] wr_en=rd_en=1 w tym samym takcie: "
                    f"count {count_before} -> {count_after}"
                )
                assert count_after == count_before, (
                    f"BŁĄD: count zmienił się przy jednoczesnym zapisie i odczycie "
                    f"({count_before} -> {count_after}), a powinien zostać bez zmian!"
                )

    monitor = cocotb.start_soon(watcher_task())

    while collisions_seen[0] < 3:
        _ = await axi_lite_read(dut, ADDR_FIFO_DATA, random_pauses=True)
        
    monitor.kill()
