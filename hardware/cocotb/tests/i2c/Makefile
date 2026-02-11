SIM ?= verilator
WAVES ?= 1
TOPLEVEL_LANG ?= verilog

TOPLEVEL = i2c_min_master
MODULE   = test_i2c_min

PROJ_ROOT := /home/ruiqizh/iob_soc_V0.8
INCDIR := $(PROJ_ROOT)/hardware/src

VERILOG_SOURCES = $(PROJ_ROOT)/hardware/src/custom/i2c_min_master.sv

EXTRA_ARGS += --sv
EXTRA_ARGS += -I$(INCDIR)
EXTRA_ARGS += -Wno-fatal
ifeq ($(WAVES),1)
  EXTRA_ARGS += --trace --trace-structs
endif

include $(shell cocotb-config --makefiles)/Makefile.sim

g:
	gtkwave dump.vcd
