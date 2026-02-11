// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIOB_SOC_SIM__SYMS_H_
#define VERILATED_VIOB_SOC_SIM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Viob_soc_sim.h"

// INCLUDE MODULE CLASSES
#include "Viob_soc_sim___024root.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3.h"
#include "Viob_soc_sim_ibex_core__pi4.h"
#include "Viob_soc_sim_prim_onehot_mux__W27_I20.h"
#include "Viob_soc_sim_ibex_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Viob_soc_sim__Vcb_simutil_get_scramble_key_t = void (*) (Viob_soc_sim__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
using Viob_soc_sim__Vcb_simutil_get_scramble_nonce_t = void (*) (Viob_soc_sim__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Viob_soc_sim__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Viob_soc_sim* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Viob_soc_sim___024root         TOP;
    Viob_soc_sim_ibex_pkg          TOP__ibex_pkg;
    Viob_soc_sim_ibex_core__pi4    TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core;
    Viob_soc_sim_prim_onehot_mux__W27_I20 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux;
    Viob_soc_sim_prim_onehot_mux__W27_I20 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux;
    Viob_soc_sim_ibex_core__pi4    TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core;
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0;
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1;
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2;
    Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0;
    Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2 TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1;

    // SCOPE NAMES
    VerilatedScope __Vscope_iob_soc_sim__iob_soc_memwrapper__iob_core_inst__cpu__u_top__gen_lockstep__u_ibex_lockstep__u_shadow_core__if_stage_i;
    VerilatedScope __Vscope_iob_soc_sim__iob_soc_memwrapper__iob_core_inst__cpu__u_top__u_ibex_core__if_stage_i;

    // CONSTRUCTORS
    Viob_soc_sim__Syms(VerilatedContext* contextp, const char* namep, Viob_soc_sim* modelp);
    ~Viob_soc_sim__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
