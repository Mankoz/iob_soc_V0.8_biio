#
# Authored by: Robert Metchev / Raumzeit Technologies (robert@raumzeit.co)
# Modified for iob_soc_V0.8 integration
#

TEST_PATH := $(realpath .)
TEST_TOP  := chip_top_ibex

# ============================================================
# RTL setup for local iob_soc_V0.8
# ============================================================

RTL_DIR := $(TEST_PATH)/../../../hardware/src

# Include directories
EXTRA_ARGS += -I$(RTL_DIR)

# ------------------------------------------------------------
# IMPORTANT: ibex_pkg must be compiled first
# ------------------------------------------------------------

# Add package first
VERILOG_SOURCES += $(RTL_DIR)/ibex_pkg.sv

# Add all other SystemVerilog files except ibex_pkg.sv
VERILOG_SOURCES += $(filter-out $(RTL_DIR)/ibex_pkg.sv,$(wildcard $(RTL_DIR)/*.sv))

# Add all Verilog files
VERILOG_SOURCES += $(wildcard $(RTL_DIR)/*.v)

# ============================================================
# Include shared cocotb infrastructure
# ============================================================

include $(realpath ../../shared/include.mk)
