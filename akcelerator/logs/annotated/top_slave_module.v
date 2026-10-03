//      // verilator_coverage annotation
        //Moduł top, z interfejsami AXI Lite i AXI Stream, konwencje nazewnictwa sygnałów:
        //S_AXI_* / S_AXIS_*     → porty zewnętrzne
        //sig_*                  → sygnały konfiguracyjne/statusowe 
        //gb_*                   → gearbox
        //val_*                  → validator
        //matcher_*              → matcher
        //hit_*                  → wynik dopasowania
        //fifo_*                  → FIFO
        //u_*                    → instancje modułów
        // moduł wykonuje wybrane operacje na dostarczonym strumieniu bajtów kodowanym w UTF-8. Tymi operacjami są
        // walidacja struktury ciągu, zliczanie wszystkich znaków na zadanym zakresie, zliczanie trafień wzorca na zadanym zakresie oraz 
        // zwracanie pozycji numerycznej odnalezionego wzorca z zadanego zakresu. 
        
        module top_slave_module #(
            // Parametry konfiguracyjne modułu
            parameter C_S_AXI_DATA_WIDTH = 32,      // Szerokość danych interfejsu AXI4-Lite oraz wejściowego AXI4-Stream.
            parameter C_S_AXI_ADDR_WIDTH = 12,      // Szerokość adresu interfejsu AXI4-Lite.
            parameter PATTERN_WIDTH      = 1024,    // Maksymalna szerokość przechowywanego wzorca.
            parameter POS_WIDTH          = 32,      // Szerokość pozycji znaku w strumieniu oraz liczników pozycji.
            parameter DATA_WIDTH         = 8,       // Szerokość pojedynczego bajtu przetwarzanego wewnątrz układu.
            parameter FIFO_DEPTH         = 16,      // Maksymalna liczba wyników przechowywanych w FIFO.
            parameter MATCH_LATENCY      = 6        // Liczba cykli opóźnienia występującego w module dopasowującym.
        )(
            // INTERFEJS AXI4-LITE
 020464     input  wire                                 S_AXI_ACLK,                 // zegar globalny
 000015     input  wire                                 S_AXI_ARESETN,              // reset asynchroniczny
            // Kanał AW - Write Address - kanał zapisu adresu
~000082     input  wire [C_S_AXI_ADDR_WIDTH-1:0]        S_AXI_AWADDR,               
 000200     input  wire                                 S_AXI_AWVALID,              
 000200     output wire                                 S_AXI_AWREADY,              
            // Kanał W - Write Data - kanał danych zapisu
~000084     input  wire [C_S_AXI_DATA_WIDTH-1:0]        S_AXI_WDATA,                
%000002     input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0]    S_AXI_WSTRB,                
 000200     input  wire                                 S_AXI_WVALID,               
 000200     output wire                                 S_AXI_WREADY,               
            // Kanał B - Write Response - kanał odpowiedzi na zapis
%000000     output wire [1:0]                           S_AXI_BRESP,                
 000200     output wire                                 S_AXI_BVALID,                 
 000200     input  wire                                 S_AXI_BREADY,               
            // Kanał AR - Read Address - kanał adresu odczytu
~000032     input  wire [C_S_AXI_ADDR_WIDTH-1:0]        S_AXI_ARADDR,               
 000366     input  wire                                 S_AXI_ARVALID,              
 000366     output wire                                 S_AXI_ARREADY,              
            // Kanał R - Read Data - kanał danych odczytu i odpowiedzi
 000059     output wire [C_S_AXI_DATA_WIDTH-1:0]        S_AXI_RDATA,
%000000     output wire [1:0]                           S_AXI_RRESP,
 000366     output wire                                 S_AXI_RVALID,
 000366     input  wire                                 S_AXI_RREADY,
        
            // INTERFEJS AXI4-STREAM
 000821     input  wire [C_S_AXI_DATA_WIDTH-1:0]        S_AXIS_TDATA,           // dane wejściowe,
~000031     input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0]    S_AXIS_TKEEP,           // informacja o aktywnych bajtach w słowie danych,
 000034     input  wire                                 S_AXIS_TLAST,           // oznaczenie ostatniego słowa danego strumienia,
 001014     input  wire                                 S_AXIS_TVALID,          // informacja o dostępności danych,
 003463     output wire                                 S_AXIS_TREADY           // informacja o gotowości odbiornika na przyjęcie danych.
        );
        
        
            // SYNCHRONIZACJA RESETU
 000015     reg rst_n_meta;     // pierwszy stopień synchronizacji
 000015     reg rst_n_sync;     // drugi stopień synchronizacji,
        
 020464     always @(posedge S_AXI_ACLK) begin
 020389         if (!S_AXI_ARESETN) begin
 000075             rst_n_meta <= 1'b0;
 000075             rst_n_sync <= 1'b0; 
 020389         end else begin
 020389             rst_n_meta <= 1'b1;
 020389             rst_n_sync <= rst_n_meta;
                end
            end
        
 000015     wire sys_rst_n = rst_n_sync;        // wewnętrzny, zsynchronizowany sygnał resetu.
        
        
            // WEWNĘTRZNE SYGNAŁY KONFIGURACYJNE I STATUSOWE - wchodzące lub wychodzące z axi_lite regs
            wire [PATTERN_WIDTH-1:0]      sig_pattern_in;                  // Wzorzec przekazywany do modułu matchera,
            wire [PATTERN_WIDTH-1:0]      sig_mask_in;                     // Maska przekazywana do modułu matchera,
~000011     wire [C_S_AXI_DATA_WIDTH-1:0] sig_pattern_len_full;            // Pełna, 32-bitowa wartość długości wzorca odczytana z rejestru AXI-Lite.
 000015     wire [1:0]                    sig_operation_mode;              // Tryb pracy modułu, ustawiany przez AXI-Lite, potrzebny do power control
~000012     wire [POS_WIDTH-1:0]          sig_final_char_count;            // Liczba znaków przetworzonych w strumieniu.
 000034     wire                          sig_char_count_valid;            // Sygnał informujący o dostępności końcowego licznika znaków.
 000020     wire                          sig_encoding_error;              // Informacja o wykryciu błędu kodowania UTF-8
~000013     wire [POS_WIDTH-1:0]          sig_error_position;              // Pozycja pierwszego błędu kodowania.
~000063     wire [POS_WIDTH-1:0]          sig_match_count;                 // Liczba wykrytych dopasowań wzorca.
 000026     wire                          sig_match_count_valid;           // Sygnał informujący o aktualizacji/liczności wyniku dopasowania.
            // Dane odczytywane z FIFO oraz sygnały sterujące FIFO.
~000027     wire [POS_WIDTH-1:0]          sig_fifo_data_out;               // Dane z fifo gotowe do odczytu
 000013     wire                          sig_fifo_empty;                  // Sygnał informujący o pustym fifo
 000075     wire                          sig_fifo_rd_en;                  // Sygnał odczytu i przesunięcia wskaźnika
            // KONWERSJA SZEROKOŚCI SYGNAŁU DŁUGOŚCI WZORCA
            //     sig_pattern_len_full - pełna wartość 32-bitowa z rejestru,
            //     sig_pattern_len      - zawężona wartość wykorzystywana przez matcher.
~000011     wire [$clog2((PATTERN_WIDTH/DATA_WIDTH)+1)-1:0] sig_pattern_len = sig_pattern_len_full[$clog2((PATTERN_WIDTH/DATA_WIDTH)+1)-1:0];
        
        
            // SYGNAŁY Z MODUŁU STREAM_GEARBOX, przedłużenia interfejsu axi stream, idące do walidatora
 004242     wire [DATA_WIDTH-1:0]         gb_tdata;
 000634     wire                          gb_tvalid;
~000010     wire                          gb_tready;
 000034     wire                          gb_tlast;
        
        
            // SYGNAŁY Z MODUŁU STREAM_VALIDATOR, przedłużenia interfejsu axi stream, idące do modułu matchera
 004242     wire [DATA_WIDTH-1:0]         val_tdata;
~006163     wire [POS_WIDTH-1:0]          val_tpos;
 000634     wire                          val_tvalid;
 000046     wire                          val_tready;
 000034     wire                          val_tlast;
            
        
            // WYBÓR TRYBU PRACY MATCHERA
 000014     wire                       matcher_en = sig_operation_mode[1]; 
            // ODDZIELENIE STRUMIENIA DANYCH OD NIEAKTYWNEGO MATCHERA W PRZYPADKU OPERACJI WALIDACJI LUB ZLICZANIA WSZYSTKICH ZNAKÓW
 062247     wire                       matcher_tvalid = matcher_en ? val_tvalid : 1'b0;
 062247     wire [DATA_WIDTH-1:0]      matcher_tdata = matcher_en ? val_tdata : {DATA_WIDTH{1'b0}};
~062247     wire [POS_WIDTH-1:0]       matcher_tpos = matcher_en ? val_tpos : {POS_WIDTH{1'b0}};
 062247     wire                       matcher_tlast = matcher_en ? val_tlast : 1'b0;
        
        
            // STEROWANIE PRZEPŁYWEM DANYCH POMIĘDZY VALIDATOREM A MATCHEREM
 000048     wire                       matcher_tready;        // Sygnał gotowości generowany przez matcher.
 062247     assign                     val_tready = matcher_en ? matcher_tready : 1'b1;
        
            // SYGNAŁY KOMUNIKACYJNE MATCHER <-> FIFO
~000041     wire [POS_WIDTH-1:0]        hit_data_wire;          // pozycja znalezionego dopasowania,
 000040     wire                        hit_valid_wire;         // informacja o pojawieniu się nowego dopasowania,
~000075     wire [$clog2(FIFO_DEPTH):0] fifo_count_wire;        // aktualna liczba elementów znajdujących się w FIFO
        
            // WARUNEK ZAPISU WYNIKU DO FIFO
 000035     wire fifo_wr_en = hit_valid_wire && (sig_operation_mode == 2'b11);
        
            //INSTANCJE PODMODUŁÓW 
        
            // MODUŁ REJESTRÓW AXI4-LITE
            axi_lite_registers #(
                .C_S_AXI_DATA_WIDTH(C_S_AXI_DATA_WIDTH),
                .C_S_AXI_ADDR_WIDTH(C_S_AXI_ADDR_WIDTH),
                .PATTERN_WIDTH(PATTERN_WIDTH),
                .POS_WIDTH(POS_WIDTH)
            ) u_axi_lite_regs (
                // Zegar i reset interfejsu AXI4-Lite
                .S_AXI_ACLK         (S_AXI_ACLK),
                .S_AXI_ARESETN      (sys_rst_n),
                // Kanał AW - adres zapisu
                .S_AXI_AWADDR       (S_AXI_AWADDR),
                .S_AXI_AWVALID      (S_AXI_AWVALID),
                .S_AXI_AWREADY      (S_AXI_AWREADY),
                // Kanał W - dane zapisu
                .S_AXI_WDATA        (S_AXI_WDATA),
                .S_AXI_WSTRB        (S_AXI_WSTRB),
                .S_AXI_WVALID       (S_AXI_WVALID),
                .S_AXI_WREADY       (S_AXI_WREADY),
                // Kanał B - odpowiedź na zapis
                .S_AXI_BRESP        (S_AXI_BRESP),
                .S_AXI_BVALID       (S_AXI_BVALID),
                .S_AXI_BREADY       (S_AXI_BREADY),
                // Kanał AR - adres odczytu
                .S_AXI_ARADDR       (S_AXI_ARADDR),
                .S_AXI_ARVALID      (S_AXI_ARVALID),
                .S_AXI_ARREADY      (S_AXI_ARREADY),
                // Kanał R - dane odczytu
                .S_AXI_RDATA        (S_AXI_RDATA),
                .S_AXI_RRESP        (S_AXI_RRESP),
                .S_AXI_RVALID       (S_AXI_RVALID),
                .S_AXI_RREADY       (S_AXI_RREADY),
                // Rejestry konfiguracyjne
                .pattern_in         (sig_pattern_in),
                .mask_in            (sig_mask_in),
                .pattern_len        (sig_pattern_len_full),
                .operation_mode     (sig_operation_mode),
                // Dane statusowe przekazywane do rejestrów AXI4-Lite
                .final_char_count   (sig_final_char_count),
                .char_count_valid   (sig_char_count_valid),
                .encoding_error     (sig_encoding_error),
                .error_position     (sig_error_position),
                .match_count        (sig_match_count),
                .match_count_valid  (sig_match_count_valid),
                // Interfejs odczytu wyników z FIFO
                .fifo_data_out      (sig_fifo_data_out),
                .fifo_empty         (sig_fifo_empty),
                .fifo_rd_en         (sig_fifo_rd_en)
            );
        
            // MODUŁ STREAM_GEARBOX
            stream_gearbox #(
                .DATA_IN_WIDTH  (C_S_AXI_DATA_WIDTH),
                .DATA_OUT_WIDTH (DATA_WIDTH)
            ) u_stream_gearbox (
        
                .clk                (S_AXI_ACLK),
                .rst_n              (sys_rst_n),
                // Wejściowy strumień AXI4-Stream
                .s_axis_tdata       (S_AXIS_TDATA),
                .s_axis_tkeep       (S_AXIS_TKEEP),
                .s_axis_tvalid      (S_AXIS_TVALID),
                .s_axis_tlast       (S_AXIS_TLAST),
                .s_axis_tready      (S_AXIS_TREADY),
                // Wyjściowy strumień bajtowy
                .m_axis_tdata       (gb_tdata),
                .m_axis_tvalid      (gb_tvalid),
                .m_axis_tlast       (gb_tlast),
                .m_axis_tready      (gb_tready)
            );
        
            // MODUŁ STREAM_VALIDATOR
            stream_validator #(
                .DATA_WIDTH (DATA_WIDTH),
                .POS_WIDTH  (POS_WIDTH)
            ) u_stream_validator (
        
                .clk                (S_AXI_ACLK),
                .rst_n              (sys_rst_n),
                // Wejście ze stream_gearbox
                .s_axis_tdata       (gb_tdata),
                .s_axis_tvalid      (gb_tvalid),
                .s_axis_tlast       (gb_tlast),
                .s_axis_tready      (gb_tready),
                // Wyjście zwalidowanego strumienia
                .m_axis_tdata       (val_tdata),
                .m_current_pos      (val_tpos),
                .m_axis_tvalid      (val_tvalid),
                .m_axis_tlast       (val_tlast),
                .m_axis_tready      (val_tready), 
                // Wyniki walidacji
                .final_char_count   (sig_final_char_count),
                .char_count_valid   (sig_char_count_valid),
                .encoding_error     (sig_encoding_error),
                .error_position     (sig_error_position)
            );
        
            // MODUŁ SUBCHAR_MATCHER
            subchar_matcher #(
                .DATA_WIDTH         (DATA_WIDTH),
                .FIFO_DEPTH         (FIFO_DEPTH),
                .PATTERN_WIDTH      (PATTERN_WIDTH),
                .POS_WIDTH    (POS_WIDTH),
                .MATCH_LATENCY      (MATCH_LATENCY)
            ) u_subchar_matcher (
        
                .clk                (S_AXI_ACLK),
                .rst_n              (sys_rst_n),
                // Konfiguracja wzorca z rejestrów modułu axi_lite_regs
                .pattern_in         (sig_pattern_in),
                .mask_in            (sig_mask_in),
                .pattern_len        (sig_pattern_len),
                .matcher_active     (matcher_en),
                // Wejściowy strumień danych
                .s_axis_tdata       (matcher_tdata),
                .s_axis_tpos        (matcher_tpos),
                .s_axis_tvalid      (matcher_tvalid),
                .s_axis_tlast       (matcher_tlast),
                .s_axis_tready      (matcher_tready),
                // Wynik pojedynczego dopasowania
                .hit_data_out       (hit_data_wire),
                .hit_valid_out      (hit_valid_wire),
                // Informacja o zajętości FIFO
                .fifo_count_in      (fifo_count_wire),
                // Statystyki dopasowania
                .match_count        (sig_match_count),
                .match_count_valid  (sig_match_count_valid)
            );
        
            // MODUŁ HITS_FIFO
        
            hits_fifo #(
                .DATA_WIDTH         (POS_WIDTH),
                .FIFO_DEPTH         (FIFO_DEPTH)
            ) u_hits_fifo (
        
                .clk                (S_AXI_ACLK),
                .rst_n              (sys_rst_n),
                // Dane i sterowanie zapisem
                .data_in            (hit_data_wire),
                .wr_en              (fifo_wr_en),
                // Informacja o zajętości FIFO
                .count_out          (fifo_count_wire),
                // Dane i sterowanie odczytem
                .rd_en              (sig_fifo_rd_en),
                .data_out           (sig_fifo_data_out),
                .empty              (sig_fifo_empty)
            );
        
        endmodule
