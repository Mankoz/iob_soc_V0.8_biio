TOPLEVEL_LANG ?= verilog
SIM ?= verilator

TOPLEVEL = iob_axi_ram
MODULE   = test_axi_ram

VERILOG_SOURCES = \
  $(PWD)/../mem/iob_axi_ram.sv \
  $(PWD)/../mem/iob_ram_t2p_be.sv \
  $(PWD)/../mem/iob_ram_t2p.v

# Verilator needs SystemVerilog
EXTRA_ARGS += --sv -Wno-fatal

# Use our local verilator wrapper that supports --trace / --trace-file
CPP_SOURCES += $(PWD)/verilator_trace.cpp

ifeq ($(WAVES),1)
  # Enable FST tracing in the compiled model
  EXTRA_ARGS += --trace-fst --trace-structs
  # IMPORTANT: tell the wrapper to actually write the trace
  EXTRA_ARGS += --trace
  # PLUSARGS   += --trace-file dump.fst
  # Optional: choose output filename (supported by your wrapper)
  # EXTRA_ARGS += --trace-file dump.fst
endif

include $(shell cocotb-config --makefiles)/Makefile.sim
