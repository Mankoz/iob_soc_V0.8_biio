// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

// Parameter definitions for Viob_soc_sim_ibex_core__pi4
constexpr VlUnpacked<QData/*33:0*/, 16> Viob_soc_sim_ibex_core__pi4::__PVT__PMPRstAddr;
constexpr VlUnpacked<IData/*31:0*/, 4> Viob_soc_sim_ibex_core__pi4::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_L;
constexpr VlUnpacked<IData/*31:0*/, 4> Viob_soc_sim_ibex_core__pi4::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_R;
constexpr VlUnpacked<IData/*31:0*/, 4> Viob_soc_sim_ibex_core__pi4::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__FLIP_MASK_L;
constexpr VlUnpacked<IData/*31:0*/, 4> Viob_soc_sim_ibex_core__pi4::__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__FLIP_MASK_R;
constexpr VlUnpacked<QData/*33:0*/, 16> Viob_soc_sim_ibex_core__pi4::__PVT__cs_registers_i__DOT__PMPRstAddr;


void Viob_soc_sim_ibex_core__pi4___ctor_var_reset(Viob_soc_sim_ibex_core__pi4* vlSelf);

Viob_soc_sim_ibex_core__pi4::Viob_soc_sim_ibex_core__pi4(Viob_soc_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Viob_soc_sim_ibex_core__pi4___ctor_var_reset(this);
}

void Viob_soc_sim_ibex_core__pi4::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Viob_soc_sim_ibex_core__pi4::~Viob_soc_sim_ibex_core__pi4() {
}
