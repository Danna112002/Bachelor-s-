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
    input  wire                       clk,            // zegar globalny układu
    input  wire                       rst_n,          // zsynchronizowany, aktywny stanem niskim sygnał resetu
    // Wejściowy strumień danych (z zewnątrz / z interfejsu procesora)
    input  wire [DATA_IN_WIDTH-1:0]   s_axis_tdata,   // pełne 32-bitowe słowo wejściowe
    input  wire [KEEP_WIDTH-1:0]      s_axis_tkeep,   // maska bitowa określająca ważne bajty w słowie
    input  wire                       s_axis_tvalid,  // informacja o dostępności danych wejściowych
    output wire                       s_axis_tready,  // gotowość gearboxa do przyjęcia nowego słowa
    input  wire                       s_axis_tlast,   // flaga oznaczająca ostatnie słowo w pakiecie
    // Wyjściowy strumień danych (do modułu stream_validator)
    output reg  [DATA_OUT_WIDTH-1:0]  m_axis_tdata,   // wyselekcjonowany, pojedynczy bajt danych
    output reg                        m_axis_tvalid,  // informacja o ważności wysyłanego bajtu
    output reg                        m_axis_tlast,   // flaga wybijana dla ostatniego ważnego bajtu w pakiecie
    input  wire                       m_axis_tready   // sygnał gotowości walidatora na odbiór bajtu
);
    // SYGNAŁY WEWNĘTRZNE - REJESTRY I LOGIKA KOMBINACYJNA:
    // Rejestry stanu i buforowania
    reg [DATA_IN_WIDTH-1:0] buf_data;  // zatrzaśnięte 32-bitowe dane do serializacji
    reg [KEEP_WIDTH-1:0]    buf_keep;  // zatrzaśnięta maska aktywnych bajtów (TKEEP)
    reg                     buf_last;  // zatrzaśnięta flaga końca pakietu (TLAST)
    reg [1:0]               buf_idx;   // wskaźnik/licznik wysyłanego bajtu (0 do 3)
    reg                     buf_valid; // flaga obecności ważnych, nieprzetworzonych danych w buforze
    // Wires i zmienne logiki kombinacyjnej
    reg [1:0]               max_idx;      // wyliczony maksymalny indeks dla aktualnego słowa (zależy od TKEEP)
    wire is_last_byte = (buf_idx == max_idx);            // flaga osiągnięcia końca słowa (lub aktywnych bajtów)
    wire pipe_advance = m_axis_tready || !m_axis_tvalid; // zgoda na przesunięcie potoku (backpressure wyjścia)
    
    // Multiplekser kombinacyjny wydzielający 1 bajt ze zbuforowanego słowa 32-bitowego
    wire [DATA_OUT_WIDTH-1:0] ext_byte = 
        (buf_idx == 2'd0) ? buf_data[7:0]   :
        (buf_idx == 2'd1) ? buf_data[15:8]  :
        (buf_idx == 2'd2) ? buf_data[23:16] : 
                            buf_data[31:24];

    // Gearbox jest gotowy na nowe dane, gdy potok płynie ORAZ (bufor jest pusty LUB właśnie wysyłamy ostatni bajt)
    assign s_axis_tready = pipe_advance && (!buf_valid || is_last_byte);


    // BLOK KOMBINACYJNY (Asynchroniczny)
    // Na podstawie flagi TLAST oraz maski TKEEP układ natychmiast oblicza,
    // ile bajtów w zbuforowanym słowie jest faktycznie poprawnych.
    // Pozwala to na "odcięcie" pustych bajtów przy zamykaniu strumienia.
    
    always @(*) begin
        if (!buf_last) begin
            // Transakcja w środku pliku: ignorujemy TKEEP, procesujemy pełne 4 bajty.
            max_idx = 2'd3;
        end else begin
            // Ostatnia transakcja w pliku (TLAST = 1): zliczamy bajty z maski TKEEP.
            case (buf_keep)
                4'b0001: max_idx = 2'd0; // tylko 1. bajt jest ważny
                4'b0011: max_idx = 2'd1; // 2 bajty są ważne
                4'b0111: max_idx = 2'd2; // 3 bajty są ważne
                4'b1111: max_idx = 2'd3; // wszystkie 4 bajty są ważne
                default: max_idx = 2'd3; // fallback awaryjny
            endcase
        end
    end
    
    // BLOK SEKWENCYJNY (Synchroniczny)
    // Zarządza wpisywaniem danych do bufora po otrzymaniu całego słowa (handshake),
    // inkrementacją wskaźnika bajtów (serializacja) oraz wystawianiem ich
    // na rejestry wyjściowe wraz ze sterowaniem flagą wyjściową TLAST.
    
    always @(posedge clk) begin
        // 0. Obsługa globalnego resetu sprzętowego
        if (!rst_n) begin
            buf_valid     <= 1'b0;
            buf_idx       <= 2'd0;
            m_axis_tvalid <= 1'b0;
        end else begin
            
            // 1. ZARZĄDZANIE BUFOREM WEWNĘTRZNYM (DESERIALIZACJA)
            if (pipe_advance) begin
                if (buf_valid && !is_last_byte) begin
                    // Słowo jest w trakcie serializacji - przechodzimy do kolejnego bajtu
                    buf_idx <= buf_idx + 1'b1;
                    
                end else if (s_axis_tready && s_axis_tvalid) begin
                    // Handshake wejściowy - pobranie nowych 32-bitów ze strumienia
                    buf_data  <= s_axis_tdata;
                    buf_keep  <= s_axis_tkeep;
                    buf_last  <= s_axis_tlast;
                    buf_idx   <= 2'd0;         // wyzerowanie wskaźnika dla nowego słowa
                    buf_valid <= 1'b1;         // oznaczenie obecności ważnych danych w buforze
                    
                end else if (buf_valid && is_last_byte) begin
                    // Bufor opróżniony, brak nowych danych na wejściu - przechodzimy w stan oczekiwania
                    buf_valid <= 1'b0;
                end
            end

            // 2. STEROWANIE REJESTRAMI WYJŚCIOWYMI (POTOK)
            if (pipe_advance) begin
                if (buf_valid) begin
                    // Przepisanie wyselekcjonowanego bajtu (ext_byte) bezpośrednio na wyjście 
                    m_axis_tdata  <= ext_byte;
                    m_axis_tvalid <= 1'b1;
                    
                    // Wystawienie wyjściowego TLAST tylko na ostatnim aktywnym bajcie ostatniego słowa
                    m_axis_tlast  <= (buf_last && is_last_byte);
                end else begin
                    // Jeśli bufor jest pusty, wstrzymujemy potok wyjściowy (zrzucenie TVALID)
                    m_axis_tvalid <= 1'b0;
                end
            end
        end
    end
endmodule
