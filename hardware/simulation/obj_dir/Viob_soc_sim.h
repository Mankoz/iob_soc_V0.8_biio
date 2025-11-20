// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VIOB_SOC_SIM_H_
#define VERILATED_VIOB_SOC_SIM_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Viob_soc_sim__Syms;
class Viob_soc_sim___024root;
class Viob_soc_sim_ibex_core__pi4;
class Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3;
class Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2;
class Viob_soc_sim_prim_onehot_mux__W27_I20;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Viob_soc_sim VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Viob_soc_sim__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&arst_i,0,0);
    VL_IN8(&cke_i,0,0);
    VL_IN8(&iob_valid_i,0,0);
    VL_IN8(&iob_addr_i,2,0);
    VL_IN8(&iob_wstrb_i,3,0);
    VL_OUT8(&iob_rvalid_o,0,0);
    VL_OUT8(&iob_ready_o,0,0);
    VL_IN(&iob_wdata_i,31,0);
    VL_OUT(&iob_rdata_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Viob_soc_sim_ibex_core__pi4* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core;
    Viob_soc_sim_prim_onehot_mux__W27_I20* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux;
    Viob_soc_sim_prim_onehot_mux__W27_I20* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux;
    Viob_soc_sim_ibex_core__pi4* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core;
    Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0;
    Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1;
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0;
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1;
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* const __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Viob_soc_sim___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Viob_soc_sim(VerilatedContext* contextp, const char* name = "TOP");
    explicit Viob_soc_sim(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Viob_soc_sim();
  private:
    VL_UNCOPYABLE(Viob_soc_sim);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    /// DPI Export functions
    static int simutil_get_scramble_key(svBitVecVal* val);
    static int simutil_get_scramble_nonce(svBitVecVal* nonce);

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
