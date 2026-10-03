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
    input  wire                         clk,        // zegar globalny układu
    input  wire                         rst_n,      // zsynchronizowany, aktywny stanem niskim sygnał resetu
    // Interfejs zapisu (przychodzący z modułu subchar_matcher)
    input  wire [DATA_WIDTH-1:0]        data_in,    // pozycja znalezionego dopasowania do zapisu
    input  wire                         wr_en,      // sygnał wyzwalający operację umieszczenia danych w buforze 
    // Interfejs odczytu (wychodzący do modułu axi_lite_registers)
    input  wire                         rd_en,      // sygnał potwierdzenia odczytu (zwalnia miejsce w FIFO)
    output wire [DATA_WIDTH-1:0]        data_out,   // najstarsza wartość w kolejce, gotowa do natychmiastowego odczytu
    output reg                          empty,      // flaga informująca, że kolejka jest całkowicie pusta
    // Sygnały statusowe (wychodzące do modułu subchar_matcher
    output reg  [$clog2(FIFO_DEPTH):0]  count_out   // aktualna liczba przetrzymywanych wyników (do weryfikacji przepłnienia w matcherze)
);

    // SYGNAŁY WEWNĘTRZNE - REJESTRY I LOGIKA KOMBINACYJNA
    // Rejestry pamięci i wskaźniki (Circular Buffer)
    reg [DATA_WIDTH-1:0]         mem [0:FIFO_DEPTH-1]; // wewnętrzna pamięć RAM przechowująca wpisy
    reg [$clog2(FIFO_DEPTH)-1:0] wr_ptr;               // wskaźnik zapisu (wskazuje adres, pod który trafią nowe dane)
    reg [$clog2(FIFO_DEPTH)-1:0] rd_ptr;               // wskaźnik odczytu (wskazuje adres najstarszych danych)
    reg [$clog2(FIFO_DEPTH):0]   count;                // wewnętrzny licznik aktualnie zajętych miejsc w kolejce
    // Wires (logika kombinacyjna dostępu)
    wire wr_allowed = wr_en;                           // flaga zezwolenia na zapis (zakłada zabezpieczenie przed przepełnieniem w module wyżej)
    wire rd_allowed = rd_en && !empty;                 // flaga zezwolenia na odczyt (zabezpieczenie przed sprzętowym czytaniem pustego FIFO)

    // BLOK KOMBINACYJNY (Asynchroniczny - Przypisanie ciągłe)
    assign data_out = mem[rd_ptr];                     // fizyczne wyprowadzenie wyjścia z komórki pamięci 

    // BLOK SEKWENCYJNY (Synchroniczny)
    
    always @(posedge clk) begin
        // 0. Obsługa globalnego resetu sprzętowego
        if (!rst_n) begin
            wr_ptr    <= 0;
            rd_ptr    <= 0;
            count     <= 0;
            count_out <= 0;
            empty     <= 1'b1;
        end else begin
            
            // Analiza macierzy żądań (Zapis, Odczyt)
            case ({wr_allowed, rd_allowed})
                
                // 1. Zapis nowych danych (bez jednoczesnego odczytu)
                2'b10: begin 
                    mem[wr_ptr] <= data_in;            // zapis do pamięci RAM pod wyznaczony adres
                    wr_ptr      <= wr_ptr + 1'b1;      // przesunięcie wskaźnika zapisu o jedną pozycję (z naturalnym zawijaniem)
                    
                    count       <= count + 1'b1;       // inkrementacja wewnętrznego licznika zajętości
                    count_out   <= count + 1'b1;       // zaktualizowanie zewnętrznego licznika
                    empty       <= 1'b0;               // po wpisaniu danych FIFO zdejmuje flagę pustości
                end
                
                // 2. Odczyt starych danych (bez zapisu nowych)
                2'b01: begin 
                    rd_ptr      <= rd_ptr + 1'b1;      // inkrementacja wskaźnika odczytu (skasowanie starych danych z horyzontu)
                    
                    count       <= count - 1'b1;       // dekrementacja wewnętrznego licznika zajętości
                    count_out   <= count - 1'b1;       // zaktualizowanie zewnętrznego licznika
                    empty       <= (count == 1);       // jeśli w kolejce był tylko 1 element, po tym odczycie staje się pusta
                end
                
                // 3. Równoczesny Zapis i Odczyt w tym samym takcie
                2'b11: begin
                    mem[wr_ptr] <= data_in;            // wpisanie nowych danych na tył kolejki
                    wr_ptr      <= wr_ptr + 1'b1;      // inkrementacja wskaźnika zapisu
                    rd_ptr      <= rd_ptr + 1'b1;      // równoległa inkrementacja wskaźnika odczytu
                    
                    // Uwaga: Stan liczników (count) oraz flaga (empty) pozostają zamrożone, 
                    // ponieważ jeden element jednocześnie wszedł i wyszedł z bufora.
                end
                
                // 4. Stan bezczynności
                2'b00: begin
                    // Brak aktywności na magistrali - wskaźniki i pamięć zachowują poprzedni stan
                end
            endcase
        end
    end
endmodule