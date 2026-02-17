#
# Authored by: Robert Metchev / Raumzeit Technologies (robert@raumzeit.co)
# Copyright (C) 2026 Biio
#
# Minimal modifications for local iob_soc_V0.8 layout + correct SV package order
#

SHELL=/bin/bash
# defaults
SIM ?= verilator
#SIM ?= modelsim
export SIM := $(SIM)
TOPLEVEL_LANG ?= verilog

# ============================================================
# Paths relative to individual test's directory
# NOTE: use abspath (realpath returns empty for non-existing paths)
# ============================================================

COCOTB_SHARED_DIR := $(abspath $(TEST_PATH)/../../shared)

# Local iob_soc_V0.8 RTL is under hardware/src
RTL_DIR      := $(abspath $(TEST_PATH)/../../../hardware/src)
IBEX_RTL_DIR := $(RTL_DIR)

# Xilinx tools
# Env variable: XILINX_VIVADO=/tools/Xilinx/Vivado/2023.2
XILINX_UNISIMS = $(XILINX_VIVADO)/data/verilog/src/unisims

# Algo python code (optional; harmless if path doesn't exist)
ALGO_DIR := $(abspath $(TEST_PATH)/../../../../../algo/python)
export ALGO_DATA_DIR := $(abspath $(TEST_PATH)/../../../../../algo/matlab/database)

# ============================================================
# Verilog/SystemVerilog sources
# IMPORTANT: packages must be compiled before modules that import them
# ============================================================

# !!! CRITICAL !!!
# Avoid duplicated file lists from previous includes / make recursion
VERILOG_FILES   :=
VERILOG_SOURCES :=

# 1) Collect package SVs first (ibex_pkg.sv, prim_*_pkg.sv, etc.)
PKG_SV := $(sort \
        $(wildcard $(IBEX_RTL_DIR)/*_pkg.sv) \
        $(wildcard $(IBEX_RTL_DIR)/*pkg.sv))

# 2) Other SVs (excluding packages)
SV_NONPKG := $(filter-out $(PKG_SV),$(wildcard $(IBEX_RTL_DIR)/*.sv))

# 3) Verilog files
V_FILES := $(wildcard $(IBEX_RTL_DIR)/*.v)

# Build ordered file list
VERILOG_FILES += $(PKG_SV)
VERILOG_FILES += $(COCOTB_SHARED_DIR)/tb_top.sv
VERILOG_FILES += $(SV_NONPKG)
VERILOG_FILES += $(V_FILES)

# Define all verilog sources for compilation (ONE ordered list)
VERILOG_SOURCES := $(VERILOG_FILES)

# Include dirs (for `include "xxx.vh/svh"`)
VERILOG_INCLUDE_DIRS += \
        . \
        $(IBEX_RTL_DIR) \
        $(COCOTB_SHARED_DIR)

# ============================================================
# Defines / simulator-specific args
# ============================================================

COMMON_DEFINES += \
        GLBL_INSTANCE \
        $(C_FILE_DEFS) \
        RZ_LIB_ASYNC_RESETN \
        COCOTB_SIM=1 \
        XILINX_SIMULATOR

ifeq ($(SIM),icarus)
        COMPILE_ARGS += $(COMMON_DEFINES:%=-D%)
        COMPILE_ARGS += -Wall
        COMPILE_ARGS += -v
        #COMPILE_ARGS += -g2005-sv
        COMPILE_ARGS += -g2012
endif

ifeq ($(SIM),verilator)
        EXTRA_ARGS += $(COMMON_DEFINES:%=+define+%)
        # IMPORTANT: enable SystemVerilog + keep timing
        EXTRA_ARGS += --sv --timing
        ifneq ($(WAVES),0)
                EXTRA_ARGS += --trace --trace-structs --trace-fst
        endif
        WNO = fatal WIDTHTRUNC WIDTHEXPAND ASCRANGE EOFNEWLINE PINCONNECTEMPTY DECLFILENAME GENUNNAMED VARHIDDEN UNUSEDPARAM
        EXTRA_ARGS += -Wall $(WNO:%=-Wno-%)
endif

# ============================================================
# Cocotb top/module
# ============================================================

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL ?= tb_top

# MODULE is the basename of the Python test file
# To be defined in the test's Makefile which must include this include makefile
MODULE = $(TEST_TOP)

export COCOTB_RESOLVE_X=ZEROS
export PYTHONPATH := $(abspath .):$(COCOTB_SHARED_DIR):$(ALGO_DIR)

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim

# ============================================================
# Waveform helpers
# ============================================================

ifeq ($(SIM),icarus)
        DUMP := sim_build/$(TOPLEVEL).fst
else
ifeq ($(SIM),verilator)
        DUMP := dump.fst
else #modelsim
        DUMP := dump.vcd
endif
endif

.PHONY: g gtkwave
g gtkwave:
	gtkwave $(DUMP) -o -a 1.gtkw

clean::
	rm -rf __pycache__ results.xml obj_dir
	rm -rf dump.vcd dump.vcd.fst dump.vcd.fst.hier
	rm -rf dump.fst dump.fst.hier
	rm -rf transcript modelsim.ini vsim.wlf vsim_stacktrace.vstf vish_stacktrace.vstf
	rm -rf f wlft*
