//      // verilator_coverage annotation
        // MODUŁ STREAM_VALIDATOR
        // Moduł analizuje nadchodzący strumień bajtów i sprawdza jego zgodność 
        // ze ścisłym standardem kodowania znaków UTF-8. 
        //
        // Zapewnia przepływ danych ze strumienia wejściowego do wyjściowego,
        // generując jednocześnie pozycję aktualnie przetwarzanego znaku 
        // (m_current_pos) oraz ostateczny licznik znaków w pliku.
        //
        // Układ sprzętowo wykrywa 5 klas błędów (wystawiając flagę encoding_error):
        // 1. Nielegalne bajty (np. 0xFE, 0xFF) oraz samotne bajty kontynuacji 
        //    pojawiające się bez wcześniejszego bajtu startowego (lidera).
        // 2. Przewymiarowane kodowanie (Overlong encoding) - zapisanie znaku 
        //    na większej liczbie bajtów niż to konieczne (np. ASCII na 2 bajtach).
        // 3. Użycie kodów zastępczych (Surrogate pairs) z niedozwolonego dla 
        //    UTF-8 zakresu U+D800 - U+DFFF (wyłapywane po bajcie lidera 0xED).
        // 4. Przekroczenie limitu Unicode - wartości powyżej U+10FFFF (bajt startowy 
        //    większy niż 0xF4 lub niewłaściwy zakres kontynuacji po bajcie 0xF4).
        // 5. Urwana sekwencja - pojawienie się niewłaściwego bajtu zamiast 
        //    oczekiwanego bajtu kontynuacji, lub ucięcie strumienia (TLAST) w 
        //    środku przetwarzania wielobajtowego znaku.
        
        module stream_validator #(
            // Parametry konfiguracyjne
            parameter DATA_WIDTH = 8,       // Szerokość pojedynczego bajtu
            parameter POS_WIDTH  = 32       // Szerokość liczników oraz sygnału pozycji znaku
        )(
            // Zegar i reset globalny
 020464     input  wire                       clk,              // zegar globalny układu
 000015     input  wire                       rst_n,            // zsynchronizowany, aktywny stanem niskim sygnał resetu
            // Wejściowy strumień danych (z modułu stream_gearbox), niezbędna resztki protokołu axi stream
 004242     input  wire [DATA_WIDTH-1:0]      s_axis_tdata,     // pojedynczy bajt poddawany walidacji
 000634     input  wire                       s_axis_tvalid,    // informacja o ważności bajtu wejściowego
~000010     output wire                       s_axis_tready,    // gotowość walidatora na przyjęcie kolejnego bajtu
 000034     input  wire                       s_axis_tlast,     // flaga końca pakietu/strumienia danych
            // Wyjściowy strumień danych (do modułu subchar_matcher)
 004242     output reg  [DATA_WIDTH-1:0]      m_axis_tdata,     // poprawny bajt UTF-8 przepuszczony dalej
 000634     output reg                        m_axis_tvalid,    // ważność przekazywanego bajtu
 000034     output reg                        m_axis_tlast,     // flaga końca zwalidowanego strumienia
~006163     output reg  [POS_WIDTH-1:0]       m_current_pos,    // wyliczona pozycja aktualnie przetwarzanego znaku w strumieniu
 000046     input  wire                       m_axis_tready,    // sygnał gotowości matchera na odbiór
            // Sygnały statusowe i błędy (do modułu axi_lite_registers)
 000020     output reg                        encoding_error,   // flaga wystąpienia niezgodnej sekwencji UTF-8
~000013     output reg  [POS_WIDTH-1:0]       error_position,   // informacja pozycji wystąpienia PIERWSZEGO błędu
~000012     output reg  [POS_WIDTH-1:0]       final_char_count, // ostateczna liczba znaków zliczona w całym pliku
 000034     output reg                        char_count_valid  // znacznik zatwierdzenia i ważności końcowego licznika
        );
            // SYGNAŁY WEWNĘTRZNE - KOMBINCJAYJNE I REJESTRY
        
            // Wires (logika kombinacyjna przepływu)
~000010     wire pipe_advance = m_axis_tready || !m_axis_tvalid; // zgoda na przesunięcie potoku (obsługa backpressure)
            assign s_axis_tready = pipe_advance;                 // walidator przyjmuje dane, gdy sam może pchnąć je dalej
        
            // Rejestry stanu maszyny UTF-8
 001062     reg [1:0]           utf8_state;         // stan automatu: określa liczbę oczekiwanych bajtów kontynuacji (0, 1, 2, lub 3)
~006166     reg [POS_WIDTH-1:0] char_pos_counter;   // bieżący licznik poprawnie rozpoznanych znaków
 000038     reg                 is_new_file;        // flaga informująca, że układ oczekuje na pierwszy bajt nowej transmisji
        
            // Rejestry flag pomocniczych (do obsługi wyjątków standardu UTF-8)
 000081     reg                 expect_e0;          // oczekiwanie na konkretny zakres po bajcie E0 (zabezpieczenie overlong encoding)
%000001     reg                 expect_ed;          // oczekiwanie na konkretny zakres po bajcie ED (zabezpieczenie surrogate pairs)
 000329     reg                 expect_f0;          // oczekiwanie na konkretny zakres po bajcie F0 (zabezpieczenie overlong)
%000001     reg                 expect_f4;          // oczekiwanie na konkretny zakres po bajcie F4 (ograniczenie zakresu Unicode)
        
            // Wires (logika kombinacyjna stanu bieżącego z uwzględnieniem resetu per-plik)
 084500     wire [1:0]           active_state = is_new_file ? 2'd0 : utf8_state;
~084500     wire [POS_WIDTH-1:0] active_pos   = is_new_file ? {POS_WIDTH{1'b0}} : char_pos_counter;
        
            // Logika kombinacyjna dla zakończenia znaku
 000781     reg char_completes_this_byte;           // flaga oznaczająca, że bieżący wejściowy bajt zamyka cały znak UTF-8
        
        
             
            // BLOK KOMBINACYJNY (Asynchroniczny)
            // Ocenia na bieżąco, czy analizowany bajt
            // stanowi ostatni fragment znaku UTF-8. Jest to kluczowe do poprawnego 
            // ustalenia ostatecznego licznika znaków w takcie, w którym przychodzi TLAST.
 108620     always @(*) begin
 108620         char_completes_this_byte = 1'b1;
 099249         if (active_state == 2'd0) begin
                    // Ocena pierwszego bajtu w nowym znaku
 099249             casez (s_axis_tdata)
 092131                 8'b0???????: char_completes_this_byte = 1'b1; // 1-bajtowy znak ASCII (kompletny od razu)
 001578                 8'b110?????: char_completes_this_byte = 1'b0; // start 2-bajtowej sekwencji
 000546                 8'b1110????: char_completes_this_byte = 1'b0; // start 3-bajtowej sekwencji
 001970                 8'b11110???: char_completes_this_byte = 1'b0; // start 4-bajtowej sekwencji
 003024                 default:     char_completes_this_byte = 1'b1; // nielegalny bajt - uznajemy znak za zamknięty/błędny
                    endcase
 009371         end else begin
                    // Ocena w trakcie trwania sekwencji wielobajtowej
 007963             if (s_axis_tdata[7:6] == 2'b10)
 007963                 char_completes_this_byte = (active_state == 2'd1); // kończy znak tylko wtedy, gdy to ostatni oczekiwany bajt kontynuacji
                    else
 001408                 char_completes_this_byte = 1'b1; // nieoczekiwany znak przerywa sekwencję, więc awaryjnie ją zamyka
                end
            end
        
            // BLOK SEKWENCYJNY (Synchroniczny)
            // Główna logika potoku (pipeline), aktualizacja stanu automatu dekodującego
            // UTF-8, wykrywanie błędów na zboczach zegara oraz wpisywanie zatwierdzonych
            // danych na magistralę wyjściową.     
            
 020464     always @(posedge clk) begin
                // 1. Obsługa globalnego resetu sprzętowego
 020373         if (!rst_n) begin
 000091             m_axis_tvalid    <= 1'b0;
 000091             encoding_error   <= 1'b0;
 000091             utf8_state       <= 2'd0;
 000091             char_pos_counter <= 0;
 000091             is_new_file      <= 1'b1;
 000091             error_position   <= 0;
 000091             final_char_count <= 0;
 000091             char_count_valid <= 1'b0;
 000091             expect_e0        <= 0;
 000091             expect_ed        <= 0;
 000091             expect_f0        <= 0;
 000091             expect_f4        <= 0;
 000091             m_current_pos    <= 0;
                    
                // 2. Przesunięcie potoku i analiza nadchodzących bajtów
 020111         end else if (pipe_advance) begin
                    
 013833             if (s_axis_tvalid) begin
                        // Przepisanie danych bezpośrednio na wyjście 
 013833                 m_axis_tdata  <= s_axis_tdata;
 013833                 m_axis_tlast  <= s_axis_tlast;
 013833                 m_axis_tvalid <= 1'b1;
 013833                 m_current_pos <= active_pos; // przypisanie znaku do aktualnie wyliczonej pozycji
        
                        // Czyszczenie flag kontrolnych i błędów na początku nowego strumienia
 013796                 if (is_new_file) begin
 000037                     encoding_error   <= 1'b0;
 000037                     error_position   <= 0;
 000037                     char_count_valid <= 1'b0;
 000037                     expect_e0        <= 1'b0; 
 000037                     expect_ed        <= 1'b0; 
 000037                     expect_f0        <= 1'b0; 
 000037                     expect_f4        <= 1'b0; 
                        end
                        
 013833                 is_new_file <= s_axis_tlast; // podniesienie TLAST zwiastuje, że kolejny cykl to nowy plik
        
                        // Oczekiwanie na bajt startowy (Lider)
 012341                 if (active_state == 2'd0) begin
            
 012341                     casez (s_axis_tdata)
 011599                         8'b0???????: begin // Standardowe ASCII
 011599                             char_pos_counter <= active_pos + 1'b1;
 011599                             utf8_state       <= 2'd0;
                                end
 000297                         8'b110?????: begin // Lider 2-bajtowy
~012336                             if (s_axis_tdata == 8'hC0 || s_axis_tdata == 8'hC1) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end // zabezpieczenie overlong dla ASCII
 000297                             utf8_state       <= 2'd1;
 000297                             char_pos_counter <= active_pos; 
                                end
 000104                         8'b1110????: begin // Lider 3-bajtowy
 000104                             expect_e0        <= (s_axis_tdata == 8'hE0); // uaktywnienie zabezpieczeń brzegowych
 000104                             expect_ed        <= (s_axis_tdata == 8'hED);
 000104                             utf8_state       <= 2'd2;
 000104                             char_pos_counter <= active_pos; 
                                end
 000331                         8'b11110???: begin // Lider 4-bajtowy
~000330                             if (s_axis_tdata > 8'hF4) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end // UTF-8 kończy się na U+10FFFF (bajt startowy F4)
 000331                             expect_f0        <= (s_axis_tdata == 8'hF0);
 000331                             expect_f4        <= (s_axis_tdata == 8'hF4);
 000331                             utf8_state       <= 2'd3;
 000331                             char_pos_counter <= active_pos; 
                                end
 000010                         default: begin // Samotny bajt kontynuacji lub nielegalny kod (FE, FF)
~012222                             if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end 
 000010                             char_pos_counter <= active_pos + 1'b1; 
                                end
                            endcase
        
                        // Oczekiwanie na bajty kontynuacji
 001492                 end else begin
                            
~001491                     if (s_axis_tdata[7:6] == 2'b10) begin // poprawny prefix bajtu kontynuacji (10xxxxxx)
                                
                                // Sprawdzenie flag brzegowych, weryfikacja nielegalnych zakresów
~001490                         if (expect_e0 && (s_axis_tdata <  8'hA0)) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end 
~001490                         if (expect_ed && (s_axis_tdata >= 8'hA0)) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end 
~001490                         if (expect_f0 && (s_axis_tdata <  8'h90)) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end 
~001491                         if (expect_f4 && (s_axis_tdata >= 8'h90)) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end 
                                
 001491                         expect_e0 <= 1'b0;
 001491                         expect_ed <= 1'b0;
 001491                         expect_f0 <= 1'b0;
 001491                         expect_f4 <= 1'b0;
        
 001491                         utf8_state <= active_state - 1'b1; // zmniejszenie liczby oczekiwanych bajtów
                                
                                // Inkrementacja licznika, jeśli to ostatni bajt w zwalidowanej właśnie sekwencji
 000765                         if (active_state == 2'd1) char_pos_counter <= active_pos + 1'b1; 
 000765                         else                      char_pos_counter <= active_pos;        
        
%000001                     end else begin
                                // Przyszły niespodziewane dane zamiast bajtu kontynuacji (błąd sekwencji)
%000001                         if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end 
%000001                         utf8_state       <= 2'd0;
%000001                         char_pos_counter <= active_pos + 1'b1; 
                                
%000001                         expect_e0 <= 1'b0;
%000001                         expect_ed <= 1'b0;
%000001                         expect_f0 <= 1'b0;
%000001                         expect_f4 <= 1'b0;
                            end
                        end
        
                        // Logika wyzwalana na zakończenie całego strumienia
 013799                 if (s_axis_tlast) begin
                            // Jeśli TLAST nadszedł na ostatnim bajcie prawidłowego znaku, podbij licznik
~000034                     final_char_count <= char_completes_this_byte ? (active_pos + 1'b1) : active_pos;
 000034                     char_count_valid <= 1'b1;
                            
                            // Jeśli strumień urywa się w połowie znaku, wyrzuć błąd kodowania
~000029                     if (!char_completes_this_byte) if (!encoding_error) begin encoding_error <= 1'b1; error_position <= active_pos; end
                        end
        
 006278             end else begin
                        // Jeśli walidator sam nie ma na wejściu ważnych danych, opuszcza wyjściowy TVALID
 006278                 m_axis_tvalid <= 1'b0;
                    end
                end
            end
        endmodule
