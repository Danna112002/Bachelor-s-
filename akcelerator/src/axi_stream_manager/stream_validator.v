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
    input  wire                       clk,              // zegar globalny układu
    input  wire                       rst_n,            // zsynchronizowany, aktywny stanem niskim sygnał resetu
    // Wejściowy strumień danych (z modułu stream_gearbox), niezbędna resztki protokołu axi stream
    input  wire [DATA_WIDTH-1:0]      s_axis_tdata,     // pojedynczy bajt poddawany walidacji
    input  wire                       s_axis_tvalid,    // informacja o ważności bajtu wejściowego
    output wire                       s_axis_tready,    // gotowość walidatora na przyjęcie kolejnego bajtu
    input  wire                       s_axis_tlast,     // flaga końca pakietu/strumienia danych
    // Wyjściowy strumień danych (do modułu subchar_matcher)
    output reg  [DATA_WIDTH-1:0]      m_axis_tdata,     // poprawny bajt UTF-8 przepuszczony dalej
    output reg                        m_axis_tvalid,    // ważność przekazywanego bajtu
    output reg                        m_axis_tlast,     // flaga końca zwalidowanego strumienia
    output reg  [POS_WIDTH-1:0]       m_current_pos,    // wyliczona pozycja aktualnie przetwarzanego znaku w strumieniu
    input  wire                       m_axis_tready,    // sygnał gotowości matchera na odbiór
    // Sygnały statusowe i błędy (do modułu axi_lite_registers)
    output reg                        encoding_error,   // flaga wystąpienia niezgodnej sekwencji UTF-8
    output reg  [POS_WIDTH-1:0]       error_position,   // informacja pozycji wystąpienia PIERWSZEGO błędu
    output reg  [POS_WIDTH-1:0]       final_char_count, // ostateczna liczba znaków zliczona w całym pliku
    output reg                        char_count_valid  // znacznik zatwierdzenia i ważności końcowego licznika
);
    // SYGNAŁY WEWNĘTRZNE - KOMBINCJAYJNE I REJESTRY

    // Wires (logika kombinacyjna przepływu)
    wire pipe_advance = m_axis_tready || !m_axis_tvalid; // zgoda na przesunięcie potoku (obsługa backpressure)
    assign s_axis_tready = pipe_advance;                 // walidator przyjmuje dane, gdy sam może pchnąć je dalej

    // Rejestry stanu maszyny UTF-8
    reg [1:0]           utf8_state;         // stan automatu: określa liczbę oczekiwanych bajtów kontynuacji (0, 1, 2, lub 3)
    reg [POS_WIDTH-1:0] char_pos_counter;   // bieżący licznik poprawnie rozpoznanych znaków
    reg                 is_new_file;        // flaga informująca, że układ oczekuje na pierwszy bajt nowej transmisji

    // Rejestry flag pomocniczych (do obsługi wyjątków standardu UTF-8)
    reg                 expect_e0;          // oczekiwanie na konkretny zakres po bajcie E0 (zabezpieczenie overlong encoding)
    reg                 expect_ed;          // oczekiwanie na konkretny zakres po bajcie ED (zabezpieczenie surrogate pairs)
    reg                 expect_f0;          // oczekiwanie na konkretny zakres po bajcie F0 (zabezpieczenie overlong)
    reg                 expect_f4;          // oczekiwanie na konkretny zakres po bajcie F4 (ograniczenie zakresu Unicode)

    // Wires (logika kombinacyjna stanu bieżącego z uwzględnieniem resetu per-plik)
    wire [1:0]           active_state = is_new_file ? 2'd0 : utf8_state;
    wire [POS_WIDTH-1:0] active_pos   = is_new_file ? {POS_WIDTH{1'b0}} : char_pos_counter;

    // Logika kombinacyjna dla zakończenia znaku
    reg char_completes_this_byte;           // flaga oznaczająca, że bieżący wejściowy bajt zamyka cały znak UTF-8


     
    // BLOK KOMBINACYJNY (Asynchroniczny)
    // Ocenia na bieżąco, czy analizowany bajt
    // stanowi ostatni fragment znaku UTF-8. Jest to kluczowe do poprawnego 
    // ustalenia ostatecznego licznika znaków w takcie, w którym przychodzi TLAST.
    always @(*) begin
        char_completes_this_byte = 1'b1;
        if (active_state == 2'd0) begin
            // Ocena pierwszego bajtu w nowym znaku
            casez (s_axis_tdata)
                8'b0???????: char_completes_this_byte = 1'b1; // 1-bajtowy znak ASCII (kompletny od razu)
                8'b110?????: char_completes_this_byte = 1'b0; // start 2-bajtowej sekwencji
                8'b1110????: char_completes_this_byte = 1'b0; // start 3-bajtowej sekwencji
                8'b11110???: char_completes_this_byte = 1'b0; // start 4-bajtowej sekwencji
                default:     char_completes_this_byte = 1'b1; // nielegalny bajt - uznajemy znak za zamknięty/błędny
            endcase
        end else begin
            // Ocena w trakcie trwania sekwencji wielobajtowej
            if (s_axis_tdata[7:6] == 2'b10)
                char_completes_this_byte = (active_state == 2'd1); // kończy znak tylko wtedy, gdy to ostatni oczekiwany bajt kontynuacji
            else
                char_completes_this_byte = 1'b1; // nieoczekiwany znak przerywa sekwencję, więc awaryjnie ją zamyka
        end
    end

    // BLOK SEKWENCYJNY (Synchroniczny)
    // Główna logika potoku (pipeline), aktualizacja stanu automatu dekodującego
    // UTF-8, wykrywanie błędów na zboczach zegara oraz wpisywanie zatwierdzonych
    // danych na magistralę wyjściową.     
    
    always @(posedge clk) begin
        // 1. Obsługa globalnego resetu sprzętowego
        if (!rst_n) begin
            m_axis_tvalid    <= 1'b0;
            encoding_error   <= 1'b0;
            utf8_state       <= 2'd0;
            char_pos_counter <= 0;
            is_new_file      <= 1'b1;
            error_position   <= 0;
            final_char_count <= 0;
            char_count_valid <= 1'b0;
            expect_e0        <= 0;
            expect_ed        <= 0;
            expect_f0        <= 0;
            expect_f4        <= 0;
            m_current_pos    <= 0;
            
        // 2. Przesunięcie potoku i analiza nadchodzących bajtów
        end else if (pipe_advance) begin
            
            if (s_axis_tvalid) begin
                // Przepisanie danych bezpośrednio na wyjście 
                m_axis_tdata  <= s_axis_tdata;
                m_axis_tlast  <= s_axis_tlast;
                m_axis_tvalid <= 1'b1;
                m_current_pos <= active_pos; // przypisanie znaku do aktualnie wyliczonej pozycji

                // Czyszczenie flag kontrolnych i błędów na początku nowego strumienia
                if (is_new_file) begin
                    encoding_error   <= 1'b0;
                    error_position   <= 0;
                    char_count_valid <= 1'b0;
                    expect_e0        <= 1'b0; 
                    expect_ed        <= 1'b0; 
                    expect_f0        <= 1'b0; 
                    expect_f4        <= 1'b0; 
                end
                
                is_new_file <= s_axis_tlast; // podniesienie TLAST zwiastuje, że kolejny cykl to nowy plik

                // Oczekiwanie na bajt startowy (Lider)
                if (active_state == 2'd0) begin
    
                    casez (s_axis_tdata)
                        8'b0???????: begin // Standardowe ASCII
                            char_pos_counter <= active_pos + 1'b1;
                            utf8_state       <= 2'd0;
                        end
                        8'b110?????: begin // Lider 2-bajtowy
                            if (s_axis_tdata == 8'hC0 || s_axis_tdata == 8'hC1) 
                            	if (!encoding_error) begin 
                            		encoding_error <= 1'b1; 
                            		error_position <= active_pos; 
                            	end // zabezpieczenie overlong dla ASCII
                            utf8_state       <= 2'd1;
                            char_pos_counter <= active_pos; 
                        end
                        8'b1110????: begin // Lider 3-bajtowy
                            expect_e0        <= (s_axis_tdata == 8'hE0); // uaktywnienie zabezpieczeń brzegowych
                            expect_ed        <= (s_axis_tdata == 8'hED);
                            utf8_state       <= 2'd2;
                            char_pos_counter <= active_pos; 
                        end
                        8'b11110???: begin // Lider 4-bajtowy
                            if (s_axis_tdata > 8'hF4) 
                            	if (!encoding_error) begin 
                            		encoding_error <= 1'b1; 
                            		error_position <= active_pos; 
                            	end // UTF-8 kończy się na U+10FFFF (bajt startowy F4)
                            expect_f0        <= (s_axis_tdata == 8'hF0);
                            expect_f4        <= (s_axis_tdata == 8'hF4);
                            utf8_state       <= 2'd3;
                            char_pos_counter <= active_pos; 
                        end
                        default: begin // Samotny bajt kontynuacji lub nielegalny kod (FE, FF)
                            if (!encoding_error) begin 
		                    encoding_error <= 1'b1; 
		                    error_position <= active_pos; 
			    end 
                            char_pos_counter <= active_pos + 1'b1; 
                        end
                    endcase

                // Oczekiwanie na bajty kontynuacji
                end else begin
                    
                    if (s_axis_tdata[7:6] == 2'b10) begin // poprawny prefix bajtu kontynuacji (10xxxxxx)
                        
                        // Sprawdzenie flag brzegowych, weryfikacja nielegalnych zakresów
                        if (expect_e0 && (s_axis_tdata <  8'hA0)) 
                        	if (!encoding_error) begin 
                        		encoding_error <= 1'b1; 
                        		error_position <= active_pos; 
                        		end 
                        if (expect_ed && (s_axis_tdata >= 8'hA0)) 
                        	if (!encoding_error) begin 
                        		encoding_error <= 1'b1; 
                        		error_position <= active_pos; 
                        		end 
                        if (expect_f0 && (s_axis_tdata <  8'h90)) 
                        	if (!encoding_error) begin 
                        		encoding_error <= 1'b1; 
                        		error_position <= active_pos; 
                        		end 
                        if (expect_f4 && (s_axis_tdata >= 8'h90)) 
                        	if (!encoding_error) begin 
                        		encoding_error <= 1'b1; 
                        		error_position <= active_pos; 
                        		end 
                        
                        expect_e0 <= 1'b0;
                        expect_ed <= 1'b0;
                        expect_f0 <= 1'b0;
                        expect_f4 <= 1'b0;

                        utf8_state <= active_state - 1'b1; // zmniejszenie liczby oczekiwanych bajtów
                        
                        // Inkrementacja licznika, jeśli to ostatni bajt w zwalidowanej właśnie sekwencji
                        if (active_state == 2'd1) char_pos_counter <= active_pos + 1'b1; 
                        else                      char_pos_counter <= active_pos;        

                    end else begin
                        // Przyszły niespodziewane dane zamiast bajtu kontynuacji (błąd sekwencji)
                        if (!encoding_error) begin 
                        	encoding_error <= 1'b1; 
                        	error_position <= active_pos; 
                        end 
                        utf8_state       <= 2'd0;
                        char_pos_counter <= active_pos + 1'b1; 
                        
                        expect_e0 <= 1'b0;
                        expect_ed <= 1'b0;
                        expect_f0 <= 1'b0;
                        expect_f4 <= 1'b0;
                    end
                end

                // Logika wyzwalana na zakończenie całego strumienia
                if (s_axis_tlast) begin
                    // Jeśli TLAST nadszedł na ostatnim bajcie prawidłowego znaku, podbij licznik
                    final_char_count <= char_completes_this_byte ? (active_pos + 1'b1) : active_pos;
                    char_count_valid <= 1'b1;
                    
                    // Jeśli strumień urywa się w połowie znaku, wyrzuć błąd kodowania
                    if (!char_completes_this_byte) 
                    	if (!encoding_error) begin 
                    		encoding_error <= 1'b1; 
                    		error_position <= active_pos; 
                    	end
                end

            end else begin
                // Jeśli walidator sam nie ma na wejściu ważnych danych, opuszcza wyjściowy TVALID
                m_axis_tvalid <= 1'b0;
            end
        end
    end
endmodule
