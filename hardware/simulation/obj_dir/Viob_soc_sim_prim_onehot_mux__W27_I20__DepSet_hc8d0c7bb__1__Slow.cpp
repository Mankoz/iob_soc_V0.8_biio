// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim_prim_onehot_mux__W27_I20.h"

VL_ATTR_COLD void Viob_soc_sim_prim_onehot_mux__W27_I20___ctor_var_reset(Viob_soc_sim_prim_onehot_mux__W27_I20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_prim_onehot_mux__W27_I20___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->in_i[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->sel_i = VL_RAND_RESET_I(32);
    vlSelf->out_o = VL_RAND_RESET_Q(39);
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->__PVT__in_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
}
