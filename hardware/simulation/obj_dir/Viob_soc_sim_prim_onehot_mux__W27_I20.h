// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Viob_soc_sim.h for the primary calling header

#ifndef VERILATED_VIOB_SOC_SIM_PRIM_ONEHOT_MUX__W27_I20_H_
#define VERILATED_VIOB_SOC_SIM_PRIM_ONEHOT_MUX__W27_I20_H_  // guard

#include "verilated.h"


class Viob_soc_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Viob_soc_sim_prim_onehot_mux__W27_I20 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN(sel_i,31,0);
    VL_OUT64(out_o,38,0);
    VL_IN64(in_i[32],38,0);
    VlUnpacked<IData/*31:0*/, 39> __PVT__in_mux;

    // INTERNAL VARIABLES
    Viob_soc_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Viob_soc_sim_prim_onehot_mux__W27_I20(Viob_soc_sim__Syms* symsp, const char* v__name);
    ~Viob_soc_sim_prim_onehot_mux__W27_I20();
    VL_UNCOPYABLE(Viob_soc_sim_prim_onehot_mux__W27_I20);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
