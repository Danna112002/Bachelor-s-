//      // verilator_coverage annotation
        // MODUŁ HITS_FIFO
        // Moduł to synchroniczna kolejka FIFO, pełniąca rolę bufora na wyniki.
        // Przechowuje pozycje (indeksy) znalezionych dopasowań wzorca w strumieniu,
        // zabezpieczając układ przed utratą trafień, zanim procesor (AXI-Lite) 
        // zdąży je odebrać.
        //
        // Kolejka działa w trybie First Word Fall Through (FWFT) – najstarsze 
        // dane są od razu widoczne na wyjściu (data_out) bez opóźnienia, a sygnał 
        // rd_en służy do ich zatwierdzenia (przesunięcia wskaźnika na kolejny znak).
         
        
        module hits_fifo #(
            // Parametry konfiguracyjne
            parameter DATA_WIDTH = 32,      // Szerokość pojedynczego słowa w buforze (pozycji dopasowania)
            parameter FIFO_DEPTH = 32       // Maksymalna pojemność kolejki (liczba przechowywanych elementów)
        )(
            // Zegar i reset globalny
 020464     input  wire                         clk,        // zegar globalny układu
 000015     input  wire                         rst_n,      // zsynchronizowany, aktywny stanem niskim sygnał resetu
            // Interfejs zapisu (przychodzący z modułu subchar_matcher)
~000041     input  wire [DATA_WIDTH-1:0]        data_in,    // pozycja znalezionego dopasowania do zapisu
 000035     input  wire                         wr_en,      // sygnał wyzwalający operację umieszczenia danych w buforze 
            // Interfejs odczytu (wychodzący do modułu axi_lite_registers)
 000075     input  wire                         rd_en,      // sygnał potwierdzenia odczytu (zwalnia miejsce w FIFO)
~000027     output wire [DATA_WIDTH-1:0]        data_out,   // najstarsza wartość w kolejce, gotowa do natychmiastowego odczytu
 000013     output reg                          empty,      // flaga informująca, że kolejka jest całkowicie pusta
            // Sygnały statusowe (wychodzące do modułu subchar_matcher
~000075     output reg  [$clog2(FIFO_DEPTH):0]  count_out   // aktualna liczba przetrzymywanych wyników (do weryfikacji przepłnienia w matcherze)
        );
        
            // SYGNAŁY WEWNĘTRZNE - REJESTRY I LOGIKA KOMBINACYJNA
            // Rejestry pamięci i wskaźniki (Circular Buffer)
            reg [DATA_WIDTH-1:0]         mem [0:FIFO_DEPTH-1]; // wewnętrzna pamięć RAM przechowująca wpisy
~000049     reg [$clog2(FIFO_DEPTH)-1:0] wr_ptr;               // wskaźnik zapisu (wskazuje adres, pod który trafią nowe dane)
~000039     reg [$clog2(FIFO_DEPTH)-1:0] rd_ptr;               // wskaźnik odczytu (wskazuje adres najstarszych danych)
~000075     reg [$clog2(FIFO_DEPTH):0]   count;                // wewnętrzny licznik aktualnie zajętych miejsc w kolejce
            // Wires (logika kombinacyjna dostępu)
 000035     wire wr_allowed = wr_en;                           // flaga zezwolenia na zapis (zakłada zabezpieczenie przed przepełnieniem w module wyżej)
 000075     wire rd_allowed = rd_en && !empty;                 // flaga zezwolenia na odczyt (zabezpieczenie przed sprzętowym czytaniem pustego FIFO)
        
            // BLOK KOMBINACYJNY (Asynchroniczny - Przypisanie ciągłe)
            assign data_out = mem[rd_ptr];                     // fizyczne wyprowadzenie wyjścia z komórki pamięci 
        
            // BLOK SEKWENCYJNY (Synchroniczny)
            
 020464     always @(posedge clk) begin
                // 0. Obsługa globalnego resetu sprzętowego
 020373         if (!rst_n) begin
 000091             wr_ptr    <= 0;
 000091             rd_ptr    <= 0;
 000091             count     <= 0;
 000091             count_out <= 0;
 000091             empty     <= 1'b1;
 020373         end else begin
                    
                    // Analiza macierzy żądań (Zapis, Odczyt)
 020373             case ({wr_allowed, rd_allowed})
                        
                        // 1. Zapis nowych danych (bez jednoczesnego odczytu)
 000085                 2'b10: begin 
 000085                     mem[wr_ptr] <= data_in;            // zapis do pamięci RAM pod wyznaczony adres
 000085                     wr_ptr      <= wr_ptr + 1'b1;      // przesunięcie wskaźnika zapisu o jedną pozycję (z naturalnym zawijaniem)
                            
 000085                     count       <= count + 1'b1;       // inkrementacja wewnętrznego licznika zajętości
 000085                     count_out   <= count + 1'b1;       // zaktualizowanie zewnętrznego licznika
 000085                     empty       <= 1'b0;               // po wpisaniu danych FIFO zdejmuje flagę pustości
                        end
                        
                        // 2. Odczyt starych danych (bez zapisu nowych)
 000065                 2'b01: begin 
 000065                     rd_ptr      <= rd_ptr + 1'b1;      // inkrementacja wskaźnika odczytu (skasowanie starych danych z horyzontu)
                            
 000065                     count       <= count - 1'b1;       // dekrementacja wewnętrznego licznika zajętości
 000065                     count_out   <= count - 1'b1;       // zaktualizowanie zewnętrznego licznika
 000065                     empty       <= (count == 1);       // jeśli w kolejce był tylko 1 element, po tym odczycie staje się pusta
                        end
                        
                        // 3. Równoczesny Zapis i Odczyt w tym samym takcie
 000010                 2'b11: begin
 000010                     mem[wr_ptr] <= data_in;            // wpisanie nowych danych na tył kolejki
 000010                     wr_ptr      <= wr_ptr + 1'b1;      // inkrementacja wskaźnika zapisu
 000010                     rd_ptr      <= rd_ptr + 1'b1;      // równoległa inkrementacja wskaźnika odczytu
                            
                            // Uwaga: Stan liczników (count) oraz flaga (empty) pozostają zamrożone, 
                            // ponieważ jeden element jednocześnie wszedł i wyszedł z bufora.
                        end
                        
                        // 4. Stan bezczynności
 020213                 2'b00: begin
                            // Brak aktywności na magistrali - wskaźniki i pamięć zachowują poprzedni stan
                        end
                    endcase
                end
            end
        endmodule
