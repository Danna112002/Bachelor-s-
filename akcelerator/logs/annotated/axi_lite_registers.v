//      // verilator_coverage annotation
        // MODUŁ AXI_LITE_REGISTERS
        // Moduł realizuje interfejs komunikacyjny AXI4-Lite (Slave), umożliwiając 
        // procesorowi (np. Zynq PS) sterowanie akceleratorem. Przestrzeń adresowa zawiera 
        // rejestry konfiguracyjne (długość wzorca, tryb pracy), statusowe (liczniki znaków, błędy) 
        // oraz pozwala na sprzętowy odczyt kolejki wyników FIFO i zapis wektorów wzorca/maski.
        
        module axi_lite_registers #(
            // Parametry konfiguracyjne
            parameter C_S_AXI_DATA_WIDTH = 32,      // Szerokość magistrali danych AXI
            parameter C_S_AXI_ADDR_WIDTH = 10,      // Szerokość magistrali adresowej AXI
            parameter PATTERN_WIDTH      = 1024,    // Maksymalna szerokość przechowywanego wzorca (w bitach)
            parameter POS_WIDTH          = 32       // Szerokość liczników oraz sygnałów pozycji
        )(
            // Zegar i reset globalny
 020464     input  wire                                 S_AXI_ACLK,          // zegar globalny interfejsu AXI
 000015     input  wire                                 S_AXI_ARESETN,       // zsynchronizowany, aktywny stanem niskim sygnał resetu
        
            // Interfejs AXI4-Lite - kanały zapisu (od procesora do układu podrzędnego)
~000082     input  wire [C_S_AXI_ADDR_WIDTH-1:0]        S_AXI_AWADDR,        // adres zapisu z magistrali AXI
 000200     input  wire                                 S_AXI_AWVALID,       // informacja o ważności adresu zapisu
 000200     output wire                                 S_AXI_AWREADY,       // gotowość układu na przyjęcie adresu zapisu
~000084     input  wire [C_S_AXI_DATA_WIDTH-1:0]        S_AXI_WDATA,         // dane do zapisu przesłane przez procesor
%000002     input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0]    S_AXI_WSTRB,         // strob zapisu określający aktywne bajty
 000200     input  wire                                 S_AXI_WVALID,        // informacja o ważności danych zapisu
 000200     output wire                                 S_AXI_WREADY,        // gotowość na przyjęcie danych zapisu
%000000     output wire [1:0]                           S_AXI_BRESP,         // odpowiedź o statusie transakcji zapisu
 000200     output wire                                 S_AXI_BVALID,        // ważność odpowiedzi na zapis
 000200     input  wire                                 S_AXI_BREADY,        // gotowość procesora na przyjęcie odpowiedzi
        
            // Interfejs AXI4-Lite - kanały odczytu (od procesora do układu podrzędnego)
~000032     input  wire [C_S_AXI_ADDR_WIDTH-1:0]        S_AXI_ARADDR,        // adres odczytu z magistrali AXI
 000366     input  wire                                 S_AXI_ARVALID,       // informacja o ważności adresu odczytu
 000366     output wire                                 S_AXI_ARREADY,       // gotowość na przyjęcie adresu odczytu
 000059     output wire [C_S_AXI_DATA_WIDTH-1:0]        S_AXI_RDATA,         // dane odczytane z rejestrów wysyłane do procesora
%000000     output wire [1:0]                           S_AXI_RRESP,         // odpowiedź o statusie transakcji odczytu
 000366     output wire                                 S_AXI_RVALID,        // ważność danych odczytu
 000366     input  wire                                 S_AXI_RREADY,        // gotowość procesora na odbiór danych
        
            // Sygnały konfiguracyjne (wychodzące do modułu subchar_matcher)
            output wire [PATTERN_WIDTH-1:0]             pattern_in,          // wzorzec przekazywany do modułu matchera
            output wire [PATTERN_WIDTH-1:0]             mask_in,             // maska ignorowanych znaków
~000011     output reg  [31:0]                          pattern_len,         // długość skonfigurowanego wzorca
 000015     output reg  [1:0]                           operation_mode,      // tryb pracy akceleratora
            
            // Sygnały statusowe (przychodzące z modułu stream_validator)
~000012     input  wire [POS_WIDTH-1:0]                 final_char_count,    // ostateczna liczba znaków zliczona w całym pliku
 000034     input  wire                                 char_count_valid,    // sygnał dostępności końcowego licznika znaków
 000020     input  wire                                 encoding_error,      // flaga błędu kodowania UTF-8
~000013     input  wire [POS_WIDTH-1:0]                 error_position,      // informacja pozycji wystąpienia pierwszego błędu
            
            // Sygnały statusowe (przychodzące z modułu subchar_matcher)
~000063     input  wire [POS_WIDTH-1:0]                 match_count,         // całkowita liczba wykrytych dopasowań
 000026     input  wire                                 match_count_valid,   // flaga potwierdzająca ostateczny wynik trafień
            
            // Interfejs odczytu z FIFO (przychodzący/wychodzący z modułu hits_fifo)
~000027     input  wire [POS_WIDTH-1:0]                 fifo_data_out,       // pozycja znaku na wyjściu bufora wyników
 000013     input  wire                                 fifo_empty,          // flaga oznaczająca brak nowych wyników
 000075     output reg                                  fifo_rd_en           // sygnał zatwierdzający (pobierający) odczyt danych
        );
        
            // PARAMETRY LOKALNE (Przestrzeń adresowa i wyliczenia rozmiarów)
            localparam PATTERN_REGS  = PATTERN_WIDTH / C_S_AXI_DATA_WIDTH;
            localparam PATTERN_IDX_W = $clog2(PATTERN_REGS);
            localparam ADDR_SHIFT    = $clog2(C_S_AXI_DATA_WIDTH / 8);
        
            localparam ADDR_PATTERN_BASE = 12'h100;
            localparam ADDR_PATTERN_HIGH = ADDR_PATTERN_BASE + (PATTERN_REGS * (C_S_AXI_DATA_WIDTH/8));
            
            localparam ADDR_MASK_BASE    = 12'h200;
            localparam ADDR_MASK_HIGH    = ADDR_MASK_BASE + (PATTERN_REGS * (C_S_AXI_DATA_WIDTH/8));
        
            // REJESTRY SYSTEMU
 000200     reg                               axi_awready;                 // wewnętrzny rejestr dla sygnału AWREADY
 000200     reg                               axi_wready;                  // wewnętrzny rejestr dla sygnału WREADY
 000200     reg                               axi_bvalid;                  // wewnętrzny rejestr dla sygnału BVALID
 000366     reg                               axi_arready;                 // wewnętrzny rejestr dla sygnału ARREADY
 000366     reg                               axi_rvalid;                  // wewnętrzny rejestr dla sygnału RVALID
 000059     reg  [C_S_AXI_DATA_WIDTH-1:0]     axi_rdata;                   // wewnętrzny bufor na dane wysyłane w RDATA
~000082     reg  [C_S_AXI_ADDR_WIDTH-1:0]     awaddr;                      // zatrzaśnięty adres żądania zapisu
~000033     reg  [C_S_AXI_ADDR_WIDTH-1:0]     axi_araddr_reg;              // zatrzaśnięty adres żądania odczytu
            
            reg  [C_S_AXI_DATA_WIDTH-1:0]     reg_pattern [0:PATTERN_REGS-1]; // pamięć przechowująca fragmenty wzorca (32-bit bloki)
            reg  [C_S_AXI_DATA_WIDTH-1:0]     reg_mask    [0:PATTERN_REGS-1]; // pamięć przechowująca fragmenty maski (32-bit bloki)
            
~000023     reg  [POS_WIDTH-1:0]              latched_fifo_data;           // sprzętowy bufor przetrzymujący odczytaną wartość z FIFO
 000075     reg                               latched_data_valid;          // flaga obecności ważnych danych w buforze FIFO modułu
 000073     reg                               sending_valid_fifo_data;     // flaga trwającej transakcji odczytu z FIFO przez magistralę
            
            integer                           i;                           // zmienna indeksująca do czyszczenia tablic w bloku reset
            integer                           byte_index;                  // zmienna indeksująca do zapisu bajtów z użyciem WSTRB
        
            // SYGNAŁY KOMBINACYJNE (WIRES)
 000200     wire                              slv_reg_wren;                // zezwolenie na zapis do rejestrów (po handshake AW i W)
~000083     wire [C_S_AXI_ADDR_WIDTH-1:0]     write_pat_offset;            // wyliczony indeks zapisu do tablicy wzorca
~000083     wire [C_S_AXI_ADDR_WIDTH-1:0]     write_mask_offset;           // wyliczony indeks zapisu do tablicy maski
~000033     wire [C_S_AXI_ADDR_WIDTH-1:0]     read_pat_offset;             // wyliczony indeks odczytu z tablicy wzorca
~000033     wire [C_S_AXI_ADDR_WIDTH-1:0]     read_mask_offset;            // wyliczony indeks odczytu z tablicy maski
 000073     wire                              cpu_reads_fifo;              // flaga informująca, że procesor właśnie pomyślnie przeczytał rejestr FIFO
        
            // BLOK KOMBINACYJNY (Asynchroniczny - Ciągłe Przypisanie Wyjść)
            // Bezpośrednie podpięcie fizycznych wyjść interfejsu pod wewnętrzne rejestry.
            assign S_AXI_AWREADY = axi_awready;
            assign S_AXI_WREADY  = axi_wready;
            assign S_AXI_BVALID  = axi_bvalid;
            assign S_AXI_BRESP   = 2'b00; // Oznacza "OKAY" (sukces transakcji zapisu)
            assign S_AXI_ARREADY = axi_arready;
            assign S_AXI_RVALID  = axi_rvalid;
            assign S_AXI_RDATA   = axi_rdata;
            assign S_AXI_RRESP   = 2'b00; // Oznacza "OKAY" (sukces transakcji odczytu)
        
            // Logika adresowania i dekodowania warunków odczytu/zapisu
            assign slv_reg_wren      = axi_wready && S_AXI_WVALID && axi_awready && S_AXI_AWVALID;
            assign write_pat_offset  = (awaddr - ADDR_PATTERN_BASE) >> ADDR_SHIFT;
            assign write_mask_offset = (awaddr - ADDR_MASK_BASE) >> ADDR_SHIFT;
            assign read_pat_offset   = (axi_araddr_reg - ADDR_PATTERN_BASE) >> ADDR_SHIFT;
            assign read_mask_offset  = (axi_araddr_reg - ADDR_MASK_BASE) >> ADDR_SHIFT;
            assign cpu_reads_fifo    = sending_valid_fifo_data && axi_rvalid && S_AXI_RREADY;
        
            // BLOK GENEROWANY (Asynchroniczny)
            // Spłaszcza 32-bitowe bloki pamięci z tablic reg_pattern i reg_mask do wielkich
            // 1024-bitowych ciągów płaskich wyprowadzonych na porty wyjściowe modułu.
            genvar j;
            generate
                for (j = 0; j < PATTERN_REGS; j = j + 1) begin : flat_assign
                    assign pattern_in[(j*C_S_AXI_DATA_WIDTH) +: C_S_AXI_DATA_WIDTH] = reg_pattern[j];
                    assign mask_in[(j*C_S_AXI_DATA_WIDTH) +: C_S_AXI_DATA_WIDTH]    = reg_mask[j];
                end
            endgenerate
        
            // BLOK SEKWENCYJNY (Synchroniczny) - Obsługa Zapisu (Write Channel)
            // Obsługuje wpisywanie konfiguracji przez procesor, zatrzaskiwanie adresów i danych 
            // oraz generowanie odpowiedzi BVALID na zakończenie transakcji.
 020464     always @(posedge S_AXI_ACLK) begin
 020373         if (!S_AXI_ARESETN) begin
 000091             axi_awready    <= 1'b0;
 000091             axi_wready     <= 1'b0;
 000091             axi_bvalid     <= 1'b0;
 000091             pattern_len    <= 32'd0;
 000091             operation_mode <= 2'd0;
 002912             for (i = 0; i < PATTERN_REGS; i = i + 1) begin
 002912                 reg_pattern[i] <= {C_S_AXI_DATA_WIDTH{1'b0}};
 002912                 reg_mask[i]    <= {C_S_AXI_DATA_WIDTH{1'b0}};
                    end
 020373         end else begin
                    // Handshake dla kanałów adresowych i danych
 020373             axi_awready <= (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID) ? 1'b1 : 1'b0;
 020373             axi_wready  <= (~axi_wready && S_AXI_WVALID && S_AXI_AWVALID) ? 1'b1 : 1'b0;
                    
                    // Odpowiedź zwrotna dla procesora
 020173             if (axi_awready && S_AXI_AWVALID && ~axi_bvalid && axi_wready && S_AXI_WVALID)
 000200                 axi_bvalid <= 1'b1;
 019973             else if (S_AXI_BREADY && axi_bvalid)
 000200                 axi_bvalid <= 1'b0;
        
                    // Zatrzaśnięcie adresu operacji zapisu
 020173             if (~axi_awready && S_AXI_AWVALID && S_AXI_WVALID) awaddr <= S_AXI_AWADDR;
        
                    // Zapis docelowy do konkretnych rejestrów układu
 020173             if (slv_reg_wren) begin
 000015                 if (awaddr == 12'h00C) begin
~000015                     if (S_AXI_WSTRB[0]) pattern_len[7:0]   <= S_AXI_WDATA[7:0];
~000015                     if (S_AXI_WSTRB[1]) pattern_len[15:8]  <= S_AXI_WDATA[15:8];
~000015                     if (S_AXI_WSTRB[2]) pattern_len[23:16] <= S_AXI_WDATA[23:16];
~000015                     if (S_AXI_WSTRB[3]) pattern_len[31:24] <= S_AXI_WDATA[31:24];
                        end
 000019                 else if (awaddr == 12'h014) begin
~000019                     if (S_AXI_WSTRB[0]) operation_mode <= S_AXI_WDATA[1:0];
                        end
~000088                 else if (awaddr >= ADDR_PATTERN_BASE && awaddr < ADDR_PATTERN_HIGH) begin
 000312                     for (byte_index = 0; byte_index <= (C_S_AXI_DATA_WIDTH/8)-1; byte_index = byte_index+1) begin
~000310                         if (S_AXI_WSTRB[byte_index]) begin
 000310                             reg_pattern[write_pat_offset[PATTERN_IDX_W-1:0]][(byte_index*8) +: 8] <= S_AXI_WDATA[(byte_index*8) +: 8];
                                end
                            end
                        end
~000076                 else if (awaddr >= ADDR_MASK_BASE && awaddr < ADDR_MASK_HIGH) begin
 000304                     for (byte_index = 0; byte_index <= (C_S_AXI_DATA_WIDTH/8)-1; byte_index = byte_index+1) begin
~000304                         if (S_AXI_WSTRB[byte_index]) begin
 000304                             reg_mask[write_mask_offset[PATTERN_IDX_W-1:0]][(byte_index*8) +: 8] <= S_AXI_WDATA[(byte_index*8) +: 8];
                                end
                            end
                        end
                    end
                end
            end
        
            // BLOK SEKWENCYJNY (Synchroniczny) - Wewnętrzny Bufor Wyników (Pre-fetch FIFO)
            // Pobiera pojedynczą wartość (najstarsze trafienie) ze sprzętowego FIFO. 
            // Odciąża to układ od konieczności rygorystycznego zarządzania sygnałami read_enable 
            // z taktu na takt przez szynę AXI i chroni przed powtórnymi odczytami tej samej wartości.
 020464     always @(posedge S_AXI_ACLK) begin
 020373         if (!S_AXI_ARESETN) begin
 000091             latched_data_valid <= 1'b0;
 000091             latched_fifo_data  <= 0;
 000091             fifo_rd_en         <= 1'b0;
 020373         end else begin
 020373             fifo_rd_en <= 1'b0; 
                    
                    // Oczyszczenie bufora w takcie udanego pobrania danych przez CPU
 020300             if (cpu_reads_fifo) latched_data_valid <= 1'b0; 
                    
                    // Jeżeli nasz wewnętrzny bufor jest pusty, układ FIFO zgłasza gotowe dane
                    // i aktualnie nie pobieramy ich stamtąd, zaciągamy nową wartość.
 020298             if (!latched_data_valid && !fifo_empty && !fifo_rd_en && !cpu_reads_fifo) begin
 000075                 latched_fifo_data  <= fifo_data_out; 
 000075                 latched_data_valid <= 1'b1;
 000075                 fifo_rd_en         <= 1'b1;          // Sygnał rd_en pulsuje na 1 takt usuwając dane z kolejki układu   
                    end
                end
            end
            
            // BLOK SEKWENCYJNY (Synchroniczny) - Obsługa Adresu Odczytu
            // Handshake autoryzujący przekazanie adresu dla procesu czytania danych z układu.
 020464     always @(posedge S_AXI_ACLK) begin
 020373         if (!S_AXI_ARESETN) begin
 000091             axi_arready    <= 1'b0;
 000091             axi_araddr_reg <= 12'b0;
 020373         end else begin
 020007             if (~axi_arready && S_AXI_ARVALID) begin
 000366                 axi_arready    <= 1'b1;
 000366                 axi_araddr_reg <= S_AXI_ARADDR;
 020007             end else begin
 020007                 axi_arready    <= 1'b0;
                    end
                end
            end
        
            // BLOK SEKWENCYJNY (Synchroniczny) - Przypisywanie Danych na Wyjście (Read Channel)
            // Zwraca dane do procesora w zależności od zażądanego adresu. Mapuje logiczne flagi 
            // błędów oraz statusu dopasowań, obsługuje zwracanie danych z wewnętrznego FIFO i pamięci.
 020464     always @(posedge S_AXI_ACLK) begin
 020373         if (!S_AXI_ARESETN) begin
 000091             axi_rvalid <= 1'b0;
 000091             axi_rdata  <= 32'd0;
 000091             sending_valid_fifo_data <= 1'b0;
 020373         end else begin
 020007             if (axi_rvalid && S_AXI_RREADY) begin
 000366                 axi_rvalid <= 1'b0; 
 000366                 sending_valid_fifo_data <= 1'b0; 
                    end 
 019641             else if (axi_arready && S_AXI_ARVALID && ~axi_rvalid) begin
 000366                 axi_rvalid <= 1'b1; 
                        
                        // Sygnalizacja odczytu przestrzeni bufora FIFO (adres 0x010)
 000366                 sending_valid_fifo_data <= (axi_araddr_reg == 12'h010) ? latched_data_valid : 1'b0;
                        
                        // Multiplekser danych (Mapowanie adresów)
 000366                 case (axi_araddr_reg)
 000030                     12'h000: axi_rdata <= {
 000030                         28'd0,                 
 000030                         match_count_valid,     // bit 3
 000030                         char_count_valid,      // bit 2
 000030                         encoding_error,        // bit 1
 000291                         ~latched_data_valid    // bit 0 (fifo empty - odwrotność ważności zbuforowanej danej)
                            };
%000006                     12'h004: axi_rdata <= final_char_count;
%000009                     12'h008: axi_rdata <= match_count;
%000001                     12'h00C: axi_rdata <= pattern_len;
 000291                     12'h010: axi_rdata <= latched_data_valid ? latched_fifo_data : 32'hFFFF_FFFF;
%000004                     12'h014: axi_rdata <= {30'd0, operation_mode};
 000020                     12'h018: axi_rdata <= error_position;
                            
%000007                     default: begin
~000360                         if (axi_araddr_reg >= ADDR_PATTERN_BASE && axi_araddr_reg < ADDR_PATTERN_HIGH)
%000003                             axi_rdata <= reg_pattern[read_pat_offset[PATTERN_IDX_W-1:0]];
%000003                         else if (axi_araddr_reg >= ADDR_MASK_BASE && axi_araddr_reg < ADDR_MASK_HIGH)
%000001                             axi_rdata <= reg_mask[read_mask_offset[PATTERN_IDX_W-1:0]];
                                else
%000003                             axi_rdata <= 32'd0; // Adres nie przypisany (odczytuje zera)
                            end
                        endcase
                    end
                end
            end
        endmodule
