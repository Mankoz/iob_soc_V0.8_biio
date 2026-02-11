SIM ?= verilator
WAVES ?= 1
TOPLEVEL_LANG ?= verilog

TOPLEVEL = iob_soc
MODULE   = test_soc_smoke

PROJ_ROOT := /home/ruiqizh/iob_soc_V0.8
INCDIR := $(PROJ_ROOT)/hardware/src

FILELIST := $(PROJ_ROOT)/hardware/cocotb/tests/soc_smoke/filelist.abs.f
VERILOG_SOURCES := $(shell cat $(FILELIST))

# IMPORTANT: cocotb's verilator backend reliably consumes EXTRA_ARGS
EXTRA_ARGS += --sv
EXTRA_ARGS += -I$(INCDIR)

ifeq ($(WAVES),1)
  EXTRA_ARGS += --trace --trace-structs
endif

include $(shell cocotb-config --makefiles)/Makefile.sim

g:
	gtkwave dump.vcd
EXTRA_ARGS += -Wno-fatal
