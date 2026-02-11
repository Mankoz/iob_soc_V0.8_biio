// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim___024root.h"

// Parameter definitions for Viob_soc_sim___024root
constexpr VlUnpacked<QData/*33:0*/, 16> Viob_soc_sim___024root::iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Viob_soc_sim___024root::iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__PMPRstAddr;


void Viob_soc_sim___024root___ctor_var_reset(Viob_soc_sim___024root* vlSelf);

Viob_soc_sim___024root::Viob_soc_sim___024root(Viob_soc_sim__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Viob_soc_sim___024root___ctor_var_reset(this);
}

void Viob_soc_sim___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Viob_soc_sim___024root::~Viob_soc_sim___024root() {
}
