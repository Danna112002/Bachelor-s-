// MODUŁ SUBCHAR_MATCHER
// Główny silnik akceleratora odpowiedzialny za wyszukiwanie wzorca. 
// Moduł gromadzi nadchodzące z walidatora bajty w długim rejestrze przesuwnym 
// i w każdym takcie zrzuca je do szerokiego komparatora (wide_comparator).
// 
// Kluczowe cechy modułu:
// 1. Zabezpieczenie przed przepełnieniem FIFO: moduł wstrzymuje odbiór danych 
//    (opuszcza TREADY, przechodzi w stan PAUSED), uwzględniając głębokość 
//    potoku (MATCH_LATENCY), co gwarantuje, że "będące w locie" dopasowania 
//    nie zginą.
// 2. Automatyczny Flush: po otrzymaniu TLAST układ generuje "puste" takty 
//    (stan FLUSHING), aby wypchnąć z potoku komparatora ostatnie znaki.
// 3. Clock Gating: dla oszczędności energii szeroki komparator i potok pozycji 
//    są taktowane bramkowanym zegarem (zatrzymywanym w stanie PAUSED).
// 4. Kalkulacja pozycji: Moduł odejmuje długość wzorca od bieżącej pozycji 
//    znaku, aby do FIFO trafiał indeks początku znalezionego słowa, a nie jego końca.

module subchar_matcher #(
    // Parametry konfiguracyjne
    parameter DATA_WIDTH     = 8,       // Szerokość pojedynczego znaku w strumieniu
    parameter FIFO_DEPTH     = 32,      // Pojemność zewnętrznej kolejki na wyniki
    parameter PATTERN_WIDTH  = 1024,    // Maksymalna szerokość wzorca (w bitach)
    parameter POS_WIDTH      = 32,      // Szerokość licznika pozycji
    parameter MATCH_LATENCY  = 6        // Opóźnienie potoku w komparatorze (w taktach zegara)
)
(
    // Zegar i reset globalny
    input  wire                                                clk,                 // zegar globalny układu
    input  wire                                                rst_n,               // zsynchronizowany, aktywny stanem niskim sygnał resetu 
    
    // Wejściowy strumień danych (przychodzący z modułu stream_validator)
    input  wire                                                s_axis_tvalid,       // ważność nadchodzącego znaku
    input  wire     [DATA_WIDTH-1:0]                           s_axis_tdata,        // pojedynczy zwalidowany znak UTF-8
    input  wire     [POS_WIDTH-1:0]                            s_axis_tpos,         // wyliczona przez walidator pozycja tego znaku
    input  wire                                                s_axis_tlast,        // znacznik końca przeszukiwanego strumienia
    output wire                                                s_axis_tready,       // gotowość matchera na odbiór danych (backpressure) 
    
    // Sygnały konfiguracyjne (przychodzące z modułu axi_lite_registers)
    input  wire     [PATTERN_WIDTH-1:0]                        pattern_in,          // wzorzec znaków do wyszukania
    input  wire     [PATTERN_WIDTH-1:0]                        mask_in,             // maska ignorowanych znaków
    input  wire     [$clog2((PATTERN_WIDTH/DATA_WIDTH)+1)-1:0] pattern_len,         // długość wprowadzonego wzorca w bajtach
    input  wire                                                matcher_active,      // flaga włączająca przeszukiwanie (zależna od operation_mode)
    
    // Interfejs wyników FIFO (wychodzący do modułu hits_fifo)
    output wire     [POS_WIDTH-1:0]                            hit_data_out,        // indeks początku dopasowania wpisywany do FIFO
    output wire                                                hit_valid_out,       // sygnał zatwierdzający (wr_en) dla trafienia
    input  wire     [$clog2(FIFO_DEPTH):0]                     fifo_count_in,       // aktualna liczba zajętych elementów w kolejce
    
    // Statystyki wyszukiwania (wychodzące do modułu axi_lite_registers)
    output reg      [POS_WIDTH-1:0]                            match_count,         // całkowita liczba wykrytych dopasowań wzorca
    output reg                                                 match_count_valid    // znacznik gotowości końcowego wyniku
);

    // PARAMETRY LOKALNE
    localparam IDLE    = 2'b00,  // Oczekiwanie na pierwsze dane (reset zmiennych)
               RUNNING = 2'b01,  // Standardowa praca, odbiór i przesuwanie danych
               PAUSED  = 2'b10,  // Wstrzymanie pracy (brak miejsca w FIFO dla wyników w locie)
               FLUSHING= 2'b11;  // Opróżnianie potoku komparatora po otrzymaniu TLAST

    localparam FLUSH_TARGET = MATCH_LATENCY - 1;           // Zlicza tyle taktów, ile wynosi długość potoku komparatora
    localparam FLUSH_CNT_W  = $clog2(MATCH_LATENCY + 1);   // Szerokość licznika flush
    localparam PAT_LEN_W    = $clog2((PATTERN_WIDTH/DATA_WIDTH)+1); // Szerokość parametru określającego długość

    // REJESTRY SYSTEMU
    reg [1:0]               state, next_state;             // aktualny i następny stan automatu
    reg [FLUSH_CNT_W-1:0]   flush_counter;                 // licznik taktów przy opróżnianiu potoku
    reg [PATTERN_WIDTH-1:0] shift_reg;                     // główny rejestr przesuwny akumulujący strumień znaków
    reg [POS_WIDTH-1:0]     data_in_fifo;                  // bufor wyliczonego indeksu trafienia przed podaniem na FIFO
    reg                     match_found;                   // zarejestrowana flaga trafienia dopasowana czasowo
    reg [POS_WIDTH-1:0]     pos_pipe [0:3];                // potok opóźniający pozycję znaku (odpowiada MATCH_LATENCY)
    reg [POS_WIDTH-1:0]     pattern_start_offset;          // zapamiętany offset (długość - 1) dla kalkulacji początku znaku
    reg                     clk_en_latch;                  // zatrzask eliminujący "szpilki" (glitches) na bramkowanym zegarze
    reg                     shift_reg_valid;               // synchronizuje sygnał ważności przesuwanego potoku z komparatorem
    integer                 i;                             // indeks do pętli for (przesuwanie potoku pozycji)

    // SYGNAŁY KOMBINACYJNE (WIRES)
    wire match_out;                                        // surowy sygnał trafienia przychodzący bezpośrednio z komparatora
    
    // Logika kontroli przepływu i backpressure
    wire ready_to_accept = (fifo_count_in < (FIFO_DEPTH - MATCH_LATENCY)); // zabezpieczenie FIFO przed przepełnieniem "w locie"
    wire s_axis_txfer    = s_axis_tvalid && s_axis_tready;                 // potwierdzenie udanego transferu AXI (Handshake)
    
    // Logika wyliczania pozycji początkowej trafienia
    wire [POS_WIDTH-1:0] pattern_len_ext = { {(POS_WIDTH - PAT_LEN_W){1'b0}}, pattern_len }; // rozszerzenie długości do 32-bitów
    wire [POS_WIDTH-1:0] const_one       = { {(POS_WIDTH - 1){1'b0}}, 1'b1 };                // stała 1 na 32-bitach
    wire [POS_WIDTH:0]   pos_diff_ext    = {1'b0, pos_pipe[3]} - {1'b0, pattern_start_offset}; // wynik odejmowania pozycji
    
    // Logika bramkowania zegara (Clock Gating)
    wire datapath_active = (state != PAUSED) && matcher_active; // warunek działania datapathu
    wire clk_gated       = clk & clk_en_latch;                  // finalny zegar bramkowany do komparatora i potoku pozycji

    // Ciągłe przypisania do wyjść układu
    assign s_axis_tready = rst_n && (
        (state == IDLE)    ? 1'b1 :
        (state == RUNNING) ? ready_to_accept : 1'b0
    );
    assign hit_data_out  = data_in_fifo;
    assign hit_valid_out = match_found;


    // BLOK KOMBINACYJNY (Asynchroniczny - Latch dla bramkowania zegara)
    // Zabezpieczenie przed tzw. "glitches". Zmiana sygnału aktywującego odbywa 
    // się wyłącznie w ujemnej połówce zegara, co daje idealnie czysty clk_gated.
    /* verilator lint_off LATCH */
    always @(*) begin
        if (!clk) begin
            clk_en_latch = datapath_active;
        end
    end
    /* verilator lint_on LATCH */
    
    // BLOK SEKWENCYJNY (Synchroniczny - Aktualizacja Stanu FSM)
    // Zwykłe, synchroniczne przepisanie następnego stanu wyliczonego przez logikę kombinacyjną.
    always @(posedge clk) begin
        if (!rst_n) state <= IDLE;
        else        state <= next_state;
    end

    // BLOK KOMBINACYJNY (Asynchroniczny - Logika Przejść FSM)
    // Podejmuje decyzje o zmianie stanu roboczego w zależności od zdarzeń 
    // na szynie danych (TVALID, TLAST) i zajętości kolejki wyjściowej.
    always @(*) begin
        next_state = state;
        case (state)
            IDLE:     if (s_axis_tvalid) next_state = RUNNING; // Start na pierwsze dane

            RUNNING:  begin
                if (!ready_to_accept)
                    next_state = PAUSED;                       // Zatrzymanie z powodu ryzyka przepełnienia FIFO
                else if (s_axis_txfer && s_axis_tlast)
                    next_state = FLUSHING;                     // Koniec strumienia - czas zrzucić resztki z potoku
            end

            PAUSED:   begin
                if (ready_to_accept)
                    next_state = RUNNING;                      // Wznowienie pracy po odczytaniu danych przez procesor
            end

            FLUSHING: if (flush_counter == FLUSH_TARGET)
                        next_state = IDLE;                     // Po odczekaniu N taktów, maszyna wraca w gotowość
        endcase
    end

    // BLOK SEKWENCYJNY (Synchroniczny/Gated - Potok Pozycji)
    // Zatrzymuje i przesuwa pozycję znaku równolegle z tym, jak znak wpada do 
    // potoku szerokiego komparatora. Zasilany bramkowanym zegarem.
    always @(posedge clk_gated) begin
        pos_pipe[0] <= s_axis_tpos;
        for (i = 1; i <= 3; i = i + 1) begin
            pos_pipe[i] <= pos_pipe[i-1];
        end
    end

    // BLOK SEKWENCYJNY (Synchroniczny - Rejestr Przesuwny)
    // 1024-bitowy "wąż" danych. Nowe bajty są wpychane od prawej strony, przesuwając stare w lewo.
    always @(posedge clk) begin
        if (s_axis_txfer) begin
            // Przyłączenie nowego znaku i usunięcie najstarszego
            shift_reg <= {shift_reg[PATTERN_WIDTH-DATA_WIDTH-1:0], s_axis_tdata};
        end else if (state == IDLE) begin
            // Wyczyszczenie rejestru na początku nowego strumienia
            shift_reg <= {PATTERN_WIDTH{1'b0}};
        end
    end

    // BLOK SEKWENCYJNY (Synchroniczny - Główna Logika Wyjść i Liczników)
    // Zlicza wykryte dopasowania, aktualizuje liczniki w taktach opróżniania 
    // (FLUSHING) i wystawia pozycję wyliczonego początku słowa do kolejki FIFO.
    always @(posedge clk) begin
        if (!rst_n) begin
            match_count          <= 0;
            match_found          <= 0;
            flush_counter        <= 0;
            match_count_valid    <= 1'b0;
            pattern_start_offset <= 0;
        end else begin
            
            // Rejestracja wartości offsetu na czas jednego całego strumienia
            if (state == IDLE) begin
                pattern_start_offset <= pattern_len_ext - const_one;
            end 

            case (state)
                IDLE: begin
                    match_found <= 1'b0;
                    if (s_axis_txfer) begin
                        match_count       <= 0;
                        flush_counter     <= 0;
                        match_count_valid <= 1'b0;
                    end
                end

                RUNNING: begin
                    match_found <= match_out; 
                    if (match_out) begin
                        match_count <= match_count + 1;
                        // Ochrona przed przekręceniem licznika - jeśli pozycja ujemna, daj zero
                        data_in_fifo <= pos_diff_ext[POS_WIDTH] ? {POS_WIDTH{1'b0}} : pos_diff_ext[POS_WIDTH-1:0];
                    end
                end

                PAUSED: begin
                    // Zatrzymanie zapisów do FIFO (ignorowanie potencjalnych szpilek)
                    match_found <= 1'b0;
                end

                FLUSHING: begin
                    flush_counter <= flush_counter + 1'b1;
                    match_found   <= match_out; // Nadal odbieramy z komparatora resztki wyników

                    if (flush_counter >= FLUSH_TARGET) begin
                        // Ostatni krok czyszczenia: zatwierdzamy zliczoną statystykę do rejestru AXI
                        match_found       <= 1'b0;
                        match_count_valid <= 1'b1;
                    end

                    if (match_out) begin
                        match_count <= match_count + 1;
                        data_in_fifo <= pos_diff_ext[POS_WIDTH] ? {POS_WIDTH{1'b0}} : pos_diff_ext[POS_WIDTH-1:0];
                    end
                end
            endcase
        end
    end

    // BLOK SEKWENCYJNY (Synchroniczny/Gated - Potok Validacji)
    // Synchronizuje sygnał ważności danych z komparatorem, informując go, kiedy
    // zawartość shift_reg stanowi nowe, użyteczne dane do porównania.
    always @(posedge clk_gated) begin
        if (!rst_n)
            shift_reg_valid <= 1'b0;
        else
            shift_reg_valid <= s_axis_txfer; // Sygnał do komparatora
    end

    // INSTANCJA MODUŁU: WIDE_COMPARATOR
    // Rdzeń logiczny weryfikujący poprawność wzorca. Otrzymuje bramkowany zegar,
    // dzięki czemu w stanie PAUSED wstrzymuje swoje działania, zamrażając pobór mocy.
    wide_comparator wide_comparator_inst (
        .clk        (clk_gated),            // Zegar zatrzymywany w stanie PAUSED
        .rst_n      (rst_n),              
        .shift_reg  (shift_reg),            // Aktualna ramka bitów ze strumienia
        .pattern_in (pattern_in),           // Szukany ciąg wejściowy (od użytkownika)
        .mask_in    (mask_in),              // Maska wykluczająca bity (np. znak końca linii)
        .data_valid (shift_reg_valid),      // Sygnał ważności przesuwanego potoku
        .match_out  (match_out)             // Wynik z komparatora (wchodzi z opóźnieniem potokowym)
    );

endmodule