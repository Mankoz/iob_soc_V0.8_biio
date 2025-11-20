# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Viob_soc_sim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Viob_soc_sim \
	Viob_soc_sim__Dpi_Export__0 \
	Viob_soc_sim___024root__DepSet_hfe644a8a__0 \
	Viob_soc_sim___024root__DepSet_h6715dc0a__0 \
	Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2__DepSet_h74199db6__0 \
	Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3__DepSet_h52faecbb__0 \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__0 \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__1 \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__2 \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__3 \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__4 \
	Viob_soc_sim_ibex_core__pi4__DepSet_hcd370623__0 \
	Viob_soc_sim_prim_onehot_mux__W27_I20__DepSet_h1cbb5ef9__0 \
	Viob_soc_sim_prim_onehot_mux__W27_I20__DepSet_h1cbb5ef9__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Viob_soc_sim__ConstPool_0 \
	Viob_soc_sim___024root__Slow \
	Viob_soc_sim___024root__DepSet_hfe644a8a__0__Slow \
	Viob_soc_sim___024root__DepSet_h6715dc0a__0__Slow \
	Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2__Slow \
	Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2__DepSet_h74199db6__0__Slow \
	Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2__DepSet_hf17286fe__0__Slow \
	Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3__Slow \
	Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3__DepSet_h52faecbb__0__Slow \
	Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3__DepSet_h128f35f9__0__Slow \
	Viob_soc_sim_ibex_core__pi4__Slow \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__0__Slow \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__1__Slow \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__2__Slow \
	Viob_soc_sim_ibex_core__pi4__DepSet_h18451c91__3__Slow \
	Viob_soc_sim_ibex_core__pi4__DepSet_hcd370623__0__Slow \
	Viob_soc_sim_ibex_core__pi4__DepSet_hcd370623__1__Slow \
	Viob_soc_sim_prim_onehot_mux__W27_I20__Slow \
	Viob_soc_sim_prim_onehot_mux__W27_I20__DepSet_h1cbb5ef9__0__Slow \
	Viob_soc_sim_prim_onehot_mux__W27_I20__DepSet_hc8d0c7bb__0__Slow \
	Viob_soc_sim_prim_onehot_mux__W27_I20__DepSet_hc8d0c7bb__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Viob_soc_sim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Viob_soc_sim__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
