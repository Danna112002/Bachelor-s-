//      // verilator_coverage annotation
        // MODUŁ STREAM_GEARBOX
        // Moduł pełni funkcję serializatora danych (gearboxa) dla interfejsu AXI4-Stream.
        // Odbiera 32-bitowe słowa danych i rozkłada je na sekwencję pojedynczych 
        // bajtów (8-bitowych), ułatwiając ich późniejszą analizę.
        //
        // Układ wspiera sygnał TKEEP – w przypadku otrzymania flagi TLAST analizuje 
        // maskę bajtów, aby wypuścić na wyjście wyłącznie poprawne (aktywne) bajty
        // z ostatniego słowa, automatycznie odrzucając te puste. Realizuje pełną
        // obsługę backpressure (zatrzymywanie potoku przy opuszczeniu TREADY). 
        
        module stream_gearbox #(
            // Parametry konfiguracyjne
            parameter DATA_IN_WIDTH  = 32,                 // Szerokość wejściowego słowa danych
            parameter DATA_OUT_WIDTH = 8,                  // Szerokość pojedynczego wyjściowego bajtu
            parameter KEEP_WIDTH     = DATA_IN_WIDTH / 8   // Szerokość maski aktywnych bajtów (4 bity)
        )(
            // Zegar i reset globalny
 020464     input  wire                       clk,            // zegar globalny układu
 000015     input  wire                       rst_n,          // zsynchronizowany, aktywny stanem niskim sygnał resetu
            // Wejściowy strumień danych (z zewnątrz / z interfejsu procesora)
 000821     input  wire [DATA_IN_WIDTH-1:0]   s_axis_tdata,   // pełne 32-bitowe słowo wejściowe
~000031     input  wire [KEEP_WIDTH-1:0]      s_axis_tkeep,   // maska bitowa określająca ważne bajty w słowie
 001014     input  wire                       s_axis_tvalid,  // informacja o dostępności danych wejściowych
 003463     output wire                       s_axis_tready,  // gotowość gearboxa do przyjęcia nowego słowa
 000034     input  wire                       s_axis_tlast,   // flaga oznaczająca ostatnie słowo w pakiecie
            // Wyjściowy strumień danych (do modułu stream_validator)
 004242     output reg  [DATA_OUT_WIDTH-1:0]  m_axis_tdata,   // wyselekcjonowany, pojedynczy bajt danych
 000634     output reg                        m_axis_tvalid,  // informacja o ważności wysyłanego bajtu
 000034     output reg                        m_axis_tlast,   // flaga wybijana dla ostatniego ważnego bajtu w pakiecie
~000010     input  wire                       m_axis_tready   // sygnał gotowości walidatora na odbiór bajtu
        );
            // SYGNAŁY WEWNĘTRZNE - REJESTRY I LOGIKA KOMBINACYJNA:
            // Rejestry stanu i buforowania
 000821     reg [DATA_IN_WIDTH-1:0] buf_data;  // zatrzaśnięte 32-bitowe dane do serializacji
~000031     reg [KEEP_WIDTH-1:0]    buf_keep;  // zatrzaśnięta maska aktywnych bajtów (TKEEP)
 000034     reg                     buf_last;  // zatrzaśnięta flaga końca pakietu (TLAST)
 006904     reg [1:0]               buf_idx;   // wskaźnik/licznik wysyłanego bajtu (0 do 3)
 000634     reg                     buf_valid; // flaga obecności ważnych, nieprzetworzonych danych w buforze
            // Wires i zmienne logiki kombinacyjnej
 000029     reg [1:0]               max_idx;      // wyliczony maksymalny indeks dla aktualnego słowa (zależy od TKEEP)
 003459     wire is_last_byte = (buf_idx == max_idx);            // flaga osiągnięcia końca słowa (lub aktywnych bajtów)
~000010     wire pipe_advance = m_axis_tready || !m_axis_tvalid; // zgoda na przesunięcie potoku (backpressure wyjścia)
            
            // Multiplekser kombinacyjny wydzielający 1 bajt ze zbuforowanego słowa 32-bitowego
 004245     wire [DATA_OUT_WIDTH-1:0] ext_byte = 
 072655         (buf_idx == 2'd0) ? buf_data[7:0]   :
 050506         (buf_idx == 2'd1) ? buf_data[15:8]  :
 028268         (buf_idx == 2'd2) ? buf_data[23:16] : 
 028268                             buf_data[31:24];
        
            // Gearbox jest gotowy na nowe dane, gdy potok płynie ORAZ (bufor jest pusty LUB właśnie wysyłamy ostatni bajt)
            assign s_axis_tready = pipe_advance && (!buf_valid || is_last_byte);
        
        
            // BLOK KOMBINACYJNY (Asynchroniczny)
            // Na podstawie flagi TLAST oraz maski TKEEP układ natychmiast oblicza,
            // ile bajtów w zbuforowanym słowie jest faktycznie poprawnych.
            // Pozwala to na "odcięcie" pustych bajtów przy zamykaniu strumienia.
            
 108620     always @(*) begin
 085953         if (!buf_last) begin
                    // Transakcja w środku pliku: ignorujemy TKEEP, procesujemy pełne 4 bajty.
 085953             max_idx = 2'd3;
 022667         end else begin
                    // Ostatnia transakcja w pliku (TLAST = 1): zliczamy bajty z maski TKEEP.
 022667             case (buf_keep)
 011927                 4'b0001: max_idx = 2'd0; // tylko 1. bajt jest ważny
 004806                 4'b0011: max_idx = 2'd1; // 2 bajty są ważne
 004536                 4'b0111: max_idx = 2'd2; // 3 bajty są ważne
 001200                 4'b1111: max_idx = 2'd3; // wszystkie 4 bajty są ważne
 000198                 default: max_idx = 2'd3; // fallback awaryjny
                    endcase
                end
            end
            
            // BLOK SEKWENCYJNY (Synchroniczny)
            // Zarządza wpisywaniem danych do bufora po otrzymaniu całego słowa (handshake),
            // inkrementacją wskaźnika bajtów (serializacja) oraz wystawianiem ich
            // na rejestry wyjściowe wraz ze sterowaniem flagą wyjściową TLAST.
            
 020464     always @(posedge clk) begin
                // 0. Obsługa globalnego resetu sprzętowego
 020373         if (!rst_n) begin
 000091             buf_valid     <= 1'b0;
 000091             buf_idx       <= 2'd0;
 000091             m_axis_tvalid <= 1'b0;
 020373         end else begin
                    
                    // 1. ZARZĄDZANIE BUFOREM WEWNĘTRZNYM (DESERIALIZACJA)
 020111             if (pipe_advance) begin
 010360                 if (buf_valid && !is_last_byte) begin
                            // Słowo jest w trakcie serializacji - przechodzimy do kolejnego bajtu
 010360                     buf_idx <= buf_idx + 1'b1;
                            
~006274                 end else if (s_axis_tready && s_axis_tvalid) begin
                            // Handshake wejściowy - pobranie nowych 32-bitów ze strumienia
 003477                     buf_data  <= s_axis_tdata;
 003477                     buf_keep  <= s_axis_tkeep;
 003477                     buf_last  <= s_axis_tlast;
 003477                     buf_idx   <= 2'd0;         // wyzerowanie wskaźnika dla nowego słowa
 003477                     buf_valid <= 1'b1;         // oznaczenie obecności ważnych danych w buforze
                            
 005642                 end else if (buf_valid && is_last_byte) begin
                            // Bufor opróżniony, brak nowych danych na wejściu - przechodzimy w stan oczekiwania
 000632                     buf_valid <= 1'b0;
                        end
                    end
        
                    // 2. STEROWANIE REJESTRAMI WYJŚCIOWYMI (POTOK)
 020111             if (pipe_advance) begin
 013835                 if (buf_valid) begin
                            // Przepisanie wyselekcjonowanego bajtu (ext_byte) bezpośrednio na wyjście 
 013835                     m_axis_tdata  <= ext_byte;
 013835                     m_axis_tvalid <= 1'b1;
                            
                            // Wystawienie wyjściowego TLAST tylko na ostatnim aktywnym bajcie ostatniego słowa
 013835                     m_axis_tlast  <= (buf_last && is_last_byte);
 006276                 end else begin
                            // Jeśli bufor jest pusty, wstrzymujemy potok wyjściowy (zrzucenie TVALID)
 006276                     m_axis_tvalid <= 1'b0;
                        end
                    end
                end
            end
        endmodule
