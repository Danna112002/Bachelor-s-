# Pierwszy cel domyślny – zwykłe 'make' odpala symulację Cocotb
all: sim

SIM ?= verilator
TOPLEVEL_LANG ?= verilog
VERILOG_SOURCES += src/axi_stream_manager/stream_validator.v
VERILOG_SOURCES += src/axi_stream_manager/stream_gearbox.v
VERILOG_SOURCES += src/axi_stream_manager/subchar_matcher/wide_comparator.v
VERILOG_SOURCES += src/axi_stream_manager/subchar_matcher/subchar_matcher.v
VERILOG_SOURCES += src/axi_stream_manager/hits_fifo.v
VERILOG_SOURCES += src/axi_lite_manager/axi_lite_registers.v
VERILOG_SOURCES += src/top_slave_module.v
COCOTB_TOPLEVEL = top_slave_module
COCOTB_TEST_MODULES = test.top_slave_module_tb.top_slave_module_tb

VERILATOR_TRACE = 1
VERILATOR_ARGS += --trace

# Dołączenie silnika Cocotb definiuje regułę 'sim'
include $(shell cocotb-config --makefiles)/Makefile.sim

.PHONY: lint
lint:
	verilator --lint-only -Wall -Wno-EOFNEWLINE -Wno-UNUSEDSIGNAL --top-module top_slave_module $(VERILOG_SOURCES)

# Włączenie zbierania pokrycia kodu dla Verilatora w Cocotb
EXTRA_ARGS += --coverage --coverage-line --coverage-toggle

.PHONY: coverage
coverage:
	$(MAKE) VERILATOR_ARGS="--trace --coverage"
	@if [ -f coverage.dat ]; then \
		echo "Znaleziono coverage.dat"; \
	elif [ -f sim_build/coverage.dat ]; then \
		cp sim_build/coverage.dat .; \
	fi
	mkdir -p logs/annotated
	verilator_coverage --annotate logs/annotated coverage.dat