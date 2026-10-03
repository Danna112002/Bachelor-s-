# 1. Główny zegar systemowy
create_clock -name S_AXI_ACLK -period 10.0 [get_ports S_AXI_ACLK]

# 2. Włączenie propagacji zegara przez logikę
set_propagated_clock [all_clocks]

# 3. Ograniczenia I/O
set_input_delay 1.0 -clock S_AXI_ACLK [all_inputs]
set_output_delay 1.0 -clock S_AXI_ACLK [all_outputs]

# 4. Wyłączenie asynchronicznego resetu z analizy setup/hold
set_false_path -from [get_ports S_AXI_ARESETN]