//      // verilator_coverage annotation
        // MODUŁ WIDE_COMPARATOR 
        // Moduł to w pełni zsynchronizowany, potokowy komparator szerokich wektorów 
        // danych (domyślnie 1024-bitowych). Porównuje zawartość rejestru przesuwnego 
        // z zadanym wzorcem, uwzględniając maskę ignorowanych bitów.
        //
        // Aby spełnić wymagania czasowe (Timing Closure) dla tak szerokiej magistrali,
        // operacja logiczna została podzielona na 3-stopniowy potok (pipeline):
        // 1. Bitowy XOR i nałożenie maski (wykrycie różnic w wektorze).
        // 2. Podział na 128-bitowe bloki (chunks) i weryfikacja dopasowania w blokach.
        // 3. Ostateczna redukcja (AND) i wystawienie wyniku zgodnie z opóźnionym TVALID.
         
        
        module wide_comparator #(
            // Parametry konfiguracyjne
            parameter WIDTH = 1024                  // Szerokość porównywanego słowa i wzorca
        )(
            // Zegar i reset globalny
 011423     input  wire             clk,            // zegar globalny układu
 000015     input  wire             rst_n,          // zsynchronizowany, aktywny stanem niskim sygnał resetu
        
            // Sygnały wejściowe (z modułu nadrzędnego np. subchar_matcher)
            input  wire [WIDTH-1:0] shift_reg,      // bieżąca zawartość okna przesuwanego strumienia
            input  wire [WIDTH-1:0] pattern_in,     // poszukiwany wzorzec (z axi_lite_regs)
            input  wire [WIDTH-1:0] mask_in,        // maska uwzględnianych bitów (1 = ważny, 0 = ignorowany)
 000326     input  wire             data_valid,     // potwierdzenie, że dane w rejestrze przesuwnym są ważne
        
            // Sygnały wyjściowe (do modułu nadrzędnego np. subchar_matcher) 
 000039     output reg              match_out       // synchroniczna flaga znalezienia idealnego dopasowania (wystawiana z opóźnieniem)
        );
        
         
            // SYGNAŁY WEWNĘTRZNE - PARAMETRY, REJESTRY I ZMIENNE
        
            // Lokalne parametry podziału potoku (skracają ścieżkę krytyczną)
            localparam CHUNK_SIZE = 128;            // docelowy rozmiar pojedynczego bloku porównawczego w bitach
            localparam CHUNKS = WIDTH / CHUNK_SIZE; // liczba bloków (dla 1024 bitów to równe 8 bloków)
        
            // Rejestry potoku przetwarzania (Pipeline)
            reg [WIDTH-1:0]  mismatch;              // Rejestr (Etap 1): zatrzaskuje bitowy wynik różnic (XOR) po uwzględnieniu maski (AND)
~000037     reg [CHUNKS-1:0] chunk_match;           // Rejestr (Etap 2): przechowuje 8 flag poprawności (po jednej dla każdego z 128-bitowych bloków)
 000326     reg [1:0]        valid_pipe;            // Rejestr (Opóźnienie): 2-bitowy rejestr przesuwny dla opóźnienia sygnału data_valid
        
            // Zmienne pomocnicze
            integer i;                              // zmienna indeksująca dla instrukcji pętli 'for' generującej struktury komparatorów blokowych
        
            // BLOK SEKWENCYJNY (Synchroniczny) - KONTROLA POTOKU I REDUKCJA WYNIKU
             
 011423     always @(posedge clk) begin
                // 0. Obsługa globalnego resetu sprzętowego
 011413         if (!rst_n) begin
 000010             match_out  <= 1'b0;
 000010             valid_pipe <= 2'b0;
 011413         end else begin
                    
                    // Rejestr przesuwny opóźniający TVALID dokładnie o 2 takty zegara 
                    // (kompensacja latencji etapów mismatch -> chunk_match)
 011413             valid_pipe <= {valid_pipe[0], data_valid};
                    
                    // ETAP 3 POTOKU: Ostateczna ewaluacja
                    // Dopasowanie jest zgłaszane, gdy na wszystkich 8 blokach (chunk_match) są jedynki
                    // ORAZ dane wejściowe sprzed dwóch taktów (valid_pipe[1]) były ważne.
 011413             match_out  <= (&chunk_match) && valid_pipe[1];
                end
            end
        
        
         
            // BLOK SEKWENCYJNY (Synchroniczny) - SZEROKA ŚCIEŻKA DANYCH (DATAPATH)
           
 011423     always @(posedge clk) begin
                
                // ETAP 1 POTOKU: Wykrywanie różnic na poziomie bitów
                // Operacja XOR porównuje wektory (1 tam, gdzie bity się różnią). 
                // Operacja AND maskuje wynik (wymusza 0 na zignorowanych pozycjach).
 011423         mismatch <= (shift_reg ^ pattern_in) & mask_in;
                
                // ETAP 2 POTOKU: Komparatory blokowe (Chunking)
                // Pętla rozkłada 1024-bitowy wektor błędów na 8 równych sekcji po 128 bitów.
                // Jeśli dana 128-bitowa sekcja składa się z samych zer, blok zgłasza brak różnic.
 091384         for (i = 0; i < CHUNKS; i = i + 1) begin
 091384             chunk_match[i] <= (mismatch[i*CHUNK_SIZE +: CHUNK_SIZE] == {CHUNK_SIZE{1'b0}});
                end
            end
        
        endmodule
