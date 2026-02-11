// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__3(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__3\n"); );
    // Body
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                    << 1U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                    << 2U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                    << 3U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                       << 4U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                       << 5U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))))) 
                       << 6U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfffffffcU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                      << 1U) ^ (0xfffffffeU & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (1U & ((0x19U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                       ^ vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfffffff3U & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                      << 3U) ^ (0xfffffff8U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (4U & (((0x61U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                        << 2U) ^ (0xfffffffcU & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xffffffcfU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                         << 5U) ^ (0xffffffe0U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           << 4U) ^ (0xfffffff0U & 
                                     vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xffffff3fU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                         << 7U) ^ (0xffffff80U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x40U & (((0x2aU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           << 6U) ^ (0xffffffc0U & 
                                     vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfffffcffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                          << 9U) ^ (0xfffffe00U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            << 8U) ^ (0xffffff00U & 
                                      vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                          << 0xbU) ^ (0xfffff800U & 
                                      vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x400U & (((0x49U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            << 0xaU) ^ (0xfffffc00U 
                                        & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xffffcfffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xffff3fffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfffcffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xffcfffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xff3fffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xfcffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0xcfffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o 
        = ((0x3fffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o) 
           | (((0x80000000U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]) 
               ^ ((0x52U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                  << 0x1fU)) | (0x40000000U & (((0x16U 
                                                 == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)) 
                                                << 0x1eU) 
                                               ^ (0xc0000000U 
                                                  & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U])))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_a 
        = ((2U & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_a)) 
           | (1U & VL_REDXOR_8(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_a 
        = ((1U & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_a)) 
           | (((~ (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_a)) 
               & (0U != (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o))) 
              << 1U));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x7eU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (1U & VL_REDXOR_64((0x12606bd25ULL & (0x2a00000000ULL 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                     << 0x27U) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                                        << 7U) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                          >> 0x19U))))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x7dU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (2U & (VL_REDXOR_64((0x2deba8050ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                       << 0x27U) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                  >> 0x19U)))))) 
                    << 1U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x7bU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (4U & (VL_REDXOR_64((0x4413d89aaULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                       << 0x27U) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                  >> 0x19U)))))) 
                    << 2U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x77U & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (8U & (VL_REDXOR_64((0x831234ed1ULL & 
                                  (0x2a00000000ULL 
                                   ^ (((QData)((IData)(
                                                       vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                       << 0x27U) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                  >> 0x19U)))))) 
                    << 3U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x6fU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (0x10U & (VL_REDXOR_64((0x10c2c1323bULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                            << 0x27U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                               << 7U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                 >> 0x19U)))))) 
                       << 4U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x5fU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (0x20U & (VL_REDXOR_64((0x202dcc624cULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                            << 0x27U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                               << 7U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                 >> 0x19U)))))) 
                       << 5U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o 
        = ((0x3fU & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
           | (0x40U & (VL_REDXOR_64((0x4098505586ULL 
                                     & (0x2a00000000ULL 
                                        ^ (((QData)((IData)(
                                                            vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                            << 0x27U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U])) 
                                               << 7U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                                 >> 0x19U)))))) 
                       << 6U)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfffffffcU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((2U & (((0x54U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                      << 1U) ^ (0x7eU & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                         >> 0x19U)))) 
              | (1U & ((0x19U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                       ^ (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                          >> 0x19U)))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfffffff3U & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((8U & (((0x34U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                      << 3U) ^ (0x78U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                         >> 0x19U)))) 
              | (4U & (((0x61U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                        << 2U) ^ (0x7cU & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                           >> 0x19U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xffffffcfU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x20U & (((0x15U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                         << 5U) ^ (0x60U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                            >> 0x19U)))) 
              | (0x10U & (((0x1aU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                           << 4U) ^ (0x70U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                              >> 0x19U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xffffff3fU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x80U & (((0x4cU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                         ^ vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U]) 
                        << 7U)) | ((0x40U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                             >> 0x19U)) 
                                   ^ ((0x2aU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                      << 6U))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfffffcffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x200U & (((0x38U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                          << 9U) ^ (0xfffffe00U & (
                                                   vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                   << 7U)))) 
              | (0x100U & (((0x45U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                            << 8U) ^ (0xffffff00U & 
                                      (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                       << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfffff3ffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x800U & (((0xdU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                          << 0xbU) ^ (0xfffff800U & 
                                      (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                       << 7U)))) | 
              (0x400U & (((0x49U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                          << 0xaU) ^ (0xfffffc00U & 
                                      (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                       << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xffffcfffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x2000U & (((0x31U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                           << 0xdU) ^ (0xffffe000U 
                                       & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                          << 7U)))) 
              | (0x1000U & (((0x51U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                             << 0xcU) ^ (0xfffff000U 
                                         & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                            << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xffff3fffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x8000U & (((7U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                           << 0xfU) ^ (0xffff8000U 
                                       & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                          << 7U)))) 
              | (0x4000U & (((0x68U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                            << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfffcffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x20000U & (((0xbU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                            << 0x11U) ^ (0xfffe0000U 
                                         & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                            << 7U)))) 
              | (0x10000U & (((0x1cU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                              << 0x10U) ^ (0xffff0000U 
                                           & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                              << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfff3ffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x80000U & (((0x26U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                            << 0x13U) ^ (0xfff80000U 
                                         & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                            << 7U)))) 
              | (0x40000U & (((0x25U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                              << 0x12U) ^ (0xfffc0000U 
                                           & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                              << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xffcfffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x200000U & (((0xeU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                             << 0x15U) ^ (0xffe00000U 
                                          & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                             << 7U)))) 
              | (0x100000U & (((0x46U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                               << 0x14U) ^ (0xfff00000U 
                                            & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                               << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xff3fffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x800000U & (((0x32U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                             << 0x17U) ^ (0xff800000U 
                                          & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                             << 7U)))) 
              | (0x400000U & (((0x70U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                               << 0x16U) ^ (0xffc00000U 
                                            & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                               << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xfcffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x2000000U & (((0x13U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                              << 0x19U) ^ (0xfe000000U 
                                           & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                              << 7U)))) 
              | (0x1000000U & (((0x2cU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                << 0x18U) ^ (0xff000000U 
                                             & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xf3ffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x8000000U & (((0x62U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                              << 0x1bU) ^ (0xf8000000U 
                                           & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                              << 7U)))) 
              | (0x4000000U & (((0x23U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                << 0x1aU) ^ (0xfc000000U 
                                             & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0xcfffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x20000000U & (((0x29U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                               << 0x1dU) ^ (0xe0000000U 
                                            & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                               << 7U)))) 
              | (0x10000000U & (((0x4aU == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                 << 0x1cU) ^ (0xf0000000U 
                                              & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                 << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o 
        = ((0x3fffffffU & vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o) 
           | ((0x80000000U & (((0x52U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                               << 0x1fU) ^ (0x80000000U 
                                            & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                               << 7U)))) 
              | (0x40000000U & (((0x16U == (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)) 
                                 << 0x1eU) ^ (0xc0000000U 
                                              & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                 << 7U))))));
    vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_b 
        = ((2U & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_b)) 
           | (1U & VL_REDXOR_8(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o)));
    vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_b 
        = ((1U & (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_b)) 
           | (((~ (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__rf_ecc_err_b)) 
               & (0U != (IData)(vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o))) 
              << 1U));
}

extern const VlUnpacked<CData/*3:0*/, 32> Viob_soc_sim__ConstPool__TABLE_hee875898_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Viob_soc_sim__ConstPool__TABLE_h9d63e220_0;

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0\n"); );
    // Init
    CData/*0:0*/ id_stage_i__DOT____VdfgTmp_hc885d520__0;
    id_stage_i__DOT____VdfgTmp_hc885d520__0 = 0;
    CData/*0:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h22a1ef58__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h22a1ef58__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6eb24a6f__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6eb24a6f__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hcf675d73__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hcf675d73__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h628470d0__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h628470d0__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7c6aa705__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7c6aa705__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf053873f__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf053873f__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h685a1d6f__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h685a1d6f__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6375b8a7__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6375b8a7__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hfa452640__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hfa452640__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hea5e29ed__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hea5e29ed__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h23b3dcca__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h23b3dcca__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hebb71bc7__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hebb71bc7__0 = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type = 0;
    SData/*15:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode = 0;
    SData/*15:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type = 0;
    SData/*15:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode = 0;
    SData/*15:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type = 0;
    SData/*15:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode = 0;
    SData/*15:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 0;
    SData/*9:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*4:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_update = 0U;
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
              >> 8U));
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = ((0U == (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
               >> 8U) & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelf->__PVT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((1U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                              >> 7U)))) 
                            << 8U) | (0xffU & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U]))
                        : (0xffU & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U]))
                    : ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                        ? (((- (IData)((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                        >> 0x1fU))) 
                            << 8U) | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                      >> 0x18U)) : 
                       (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                        >> 0x18U))) : ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                                        ? ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                               >> 0x17U)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                     >> 0x10U)))
                                            : (0xffU 
                                               & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                  >> 0x10U)))
                                        : ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                               >> 0xfU)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                     >> 8U)))
                                            : (0xffU 
                                               & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                  >> 8U)))))
            : ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                  >> 0xfU)))) 
                                << 0x10U) | ((0xff00U 
                                              & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U]) 
                                             | (0xffU 
                                                & (vlSelf->__PVT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U))))
                            : ((0xff00U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U]) 
                               | (0xffU & (vlSelf->__PVT__load_store_unit_i__DOT__rdata_q 
                                           >> 0x10U))))
                        : ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((1U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                  >> 7U)))) 
                                << 0x10U) | (0xffffU 
                                             & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                 << 8U) 
                                                | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                   >> 0x18U))))
                            : (0xffffU & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                           << 8U) | 
                                          (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                           >> 0x18U)))))
                    : ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                            ? (((- (IData)((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                            >> 0x1fU))) 
                                << 0x10U) | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                             >> 0x10U))
                            : (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                               >> 0x10U)) : ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q)
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                                 >> 0x17U)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                       >> 8U)))
                                              : (0xffffU 
                                                 & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                                    >> 8U)))))
                : ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xffffff00U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U]) 
                           | (0xffU & (vlSelf->__PVT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x10U))) : 
                       ((0xffff0000U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                        << 8U)) | (0xffffU 
                                                   & (vlSelf->__PVT__load_store_unit_i__DOT__rdata_q 
                                                      >> 8U))))
                    : ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((0xff000000U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                           << 0x10U)) 
                           | vlSelf->__PVT__load_store_unit_i__DOT__rdata_q)
                        : ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                            << 0x18U) | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                         >> 8U))))));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = (1U & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
                 & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                    >> 0xbU)));
    vlSelf->__PVT__irqs = (((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                             << 0x19U) | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                          >> 7U)) & vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelf->__PVT__load_store_unit_i__DOT__data_or_pmp_err 
        = (1U & ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q) 
                 | ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                     >> 7U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q))));
    vlSelf->__PVT__lsu_resp_valid = (((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                       >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)) 
                                     & (0U == (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = ((2U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
            : ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                << 0x15U) | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                             >> 0xbU)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = (IData)((((QData)((IData)(((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                      << 0x15U) | (
                                                   vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                   >> 0xbU)))) 
                    << 0x20U) | (QData)((IData)(((4U 
                                                  & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                  ? 
                                                 vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                                  : 
                                                 ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                   << 0x15U) 
                                                  | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                     >> 0xbU)))))));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = (IData)(((((QData)((IData)(((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                       << 0x15U) | 
                                      (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                       >> 0xbU)))) 
                     << 0x20U) | (QData)((IData)(((4U 
                                                   & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                   ? 
                                                  vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                                   : 
                                                  ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x15U) 
                                                   | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0xbU)))))) 
                   >> 0x20U));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = ((4U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                  >> 8U)) | ((2U & (((4U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                         >> 2U) : (
                                                   vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                   >> 0xaU)) 
                                    << 1U)) | (1U & 
                                               ((2U 
                                                 & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U)
                                                 : 
                                                (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                 >> 0xaU)))));
    if ((1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = (1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q));
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U];
    } else {
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
            = (1U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                     >> 0xaU));
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
            = ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                << 0x15U) | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                             >> 0xbU));
    }
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                 & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                     >> 5U) | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    vlSelf->__PVT__multdiv_operand_b_ex = (((IData)(vlSelf->__PVT__rf_rd_b_wb_match) 
                                            & (IData)(vlSelf->__PVT__rf_write_wb))
                                            ? vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
                                            : ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
                                                << 7U) 
                                               | (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                  >> 0x19U)));
    vlSelf->__PVT__multdiv_operand_a_ex = (((IData)(vlSelf->__PVT__rf_rd_a_wb_match) 
                                            & (IData)(vlSelf->__PVT__rf_write_wb))
                                            ? vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q
                                            : vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U]);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                  >> 7U)) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlSelf->__PVT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelf->__PVT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d767ff5__0 
        = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h8784150c__0 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)((2U == (6U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h18c9f4a7__0 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)((1U == (3U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x4000U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xeU;
    }
    if ((0x2000U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xdU;
    }
    if ((0x1000U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xcU;
    }
    if ((0x800U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xbU;
    }
    if ((0x400U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xaU;
    }
    if ((0x200U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x100U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x80U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x40U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x20U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x10U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelf->__PVT__irqs)) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    vlSelf->__PVT__ctrl_busy = 1U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                 & ((~ (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                                   & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                       >> 6U) | ((0U 
                                                  != vlSelf->__PVT__irqs) 
                                                 & (((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                     >> 5U) 
                                                    | (0U 
                                                       == (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)))))))));
    vlSelf->__PVT__rf_we_lsu = (((0U == (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                 & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                     >> 8U) & ((~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_or_pmp_err)) 
                                               & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_we_q))))) 
                                & (IData)(vlSelf->__PVT__outstanding_load_wb));
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done 
        = ((2U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)) 
           | (IData)(vlSelf->__PVT__lsu_resp_valid));
    vlSelf->__PVT__lsu_load_err_raw = ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_or_pmp_err) 
                                       & ((~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_we_q)) 
                                          & (IData)(vlSelf->__PVT__lsu_resp_valid)));
    vlSelf->__PVT__lsu_store_err_raw = ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_or_pmp_err) 
                                        & ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_we_q) 
                                           & (IData)(vlSelf->__PVT__lsu_resp_valid)));
    vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access 
        = ((~ (IData)(vlSelf->__PVT__lsu_resp_valid)) 
           & ((IData)(vlSelf->__PVT__outstanding_load_wb) 
              | (IData)(vlSelf->__PVT__outstanding_store_wb)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)) 
           & (3U != (3U & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    if ((1U & vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        if ((2U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
            vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                = ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U));
            vlSelf->__PVT__if_stage_i__DOT__fetch_err 
                = (1U & (((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                          & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                             >> 1U)) | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
        } else {
            vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                = ((0xffff0000U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                   << 5U)) | (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                              >> 0x10U));
            vlSelf->__PVT__if_stage_i__DOT__fetch_err 
                = (1U & (((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                         | ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                             >> 0xaU) & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                                         | (~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))))));
        }
        if (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw 
                = (1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        } else {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw 
                = (1U & (((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))));
        }
    } else {
        vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
            = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelf->__PVT__if_stage_i__DOT__fetch_err = 
            (1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelf->__PVT__trigger_match)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_b 
        = (0xffffU & vlSelf->__PVT__multdiv_operand_b_ex);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = ((vlSelf->__PVT__multdiv_operand_b_ex >> 0x1fU) 
           & ((IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode) 
              >> 1U));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
        = (IData)((((IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode) 
                    >> 1U) & (vlSelf->__PVT__multdiv_operand_b_ex 
                              >> 0x1fU)));
    vlSelf->__PVT__alu_operand_b_ex = (((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                                        | (IData)(vlSelf->__PVT__lsu_addr_incr_req))
                                        ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel))
                                            ? ((2U 
                                                & (IData)(vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel))
                                                ? 4U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                                     ? 2U
                                                     : 4U)
                                                    : 4U))
                                            : ((2U 
                                                & (IData)(vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->__PVT__instr_rdata_id)
                                                    : 4U)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->__PVT__instr_rdata_id 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->__PVT__instr_rdata_id 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->__PVT__instr_rdata_id 
                                                             >> 7U))))
                                                    : vlSelf->__PVT__id_stage_i__DOT__imm_i_type)))
                                        : vlSelf->__PVT__multdiv_operand_b_ex);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = ((vlSelf->__PVT__multdiv_operand_a_ex >> 0x1fU) 
           & (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a 
        = (vlSelf->__PVT__multdiv_operand_a_ex >> 0x10U);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode) 
           & (vlSelf->__PVT__multdiv_operand_a_ex >> 0x1fU));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res 
        = (0x3ffffffffULL & VL_MULS_QQQ(34, (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSelf->__PVT__multdiv_operand_a_ex))), 
                                        (0x3ffffffffULL 
                                         & VL_EXTENDS_QI(34,17, 
                                                         (0xffffU 
                                                          & vlSelf->__PVT__multdiv_operand_b_ex)))));
    vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelf->__PVT__multdiv_operand_b_ex))) 
                   << 1U));
    vlSelf->__PVT__id_stage_i__DOT__alu_operand_a = 
        ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel))
          ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel))
              ? ((IData)(vlSelf->__PVT__id_stage_i__DOT__imm_a_mux_sel)
                  ? 0U : (0x1fU & (vlSelf->__PVT__instr_rdata_id 
                                   >> 0xfU))) : vlSelf->__PVT__pc_id)
          : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel))
              ? vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q
              : vlSelf->__PVT__multdiv_operand_a_ex));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h91d85a72__0 
        = (1U & ((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d767ff5__0) 
                 | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0 
        = (IData)((((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h8784150c__0)));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0 
        = (1U & ((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h18c9f4a7__0) 
                 | ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelf->__PVT__csr_save_if = 0U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelf->__PVT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (((IData)(((0U != 
                                             (0x60U 
                                              & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                            | (0U != vlSelf->__PVT__irqs))) 
                                   | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlSelf->__PVT__ctrl_busy = 0U;
                    }
                } else {
                    vlSelf->__PVT__ctrl_busy = 0U;
                }
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                    >> 6U) & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q))))) {
                            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 1U;
                            vlSelf->__PVT__exc_cause 
                                = ((0x40U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])
                                    ? 0x3fU : 0x40U);
                        } else {
                            vlSelf->__PVT__exc_cause 
                                = ((0U != (0x7fffU 
                                           & vlSelf->__PVT__irqs))
                                    ? (0x30U | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id))
                                    : ((0x8000U & vlSelf->__PVT__irqs)
                                        ? 0x2bU : (
                                                   (0x20000U 
                                                    & vlSelf->__PVT__irqs)
                                                    ? 0x23U
                                                    : 0x27U)));
                        }
                    }
                } else {
                    if ((1U & (~ (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                        }
                    }
                    if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlSelf->__PVT__exc_cause = 1U;
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                            vlSelf->__PVT__exc_cause = 2U;
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                            vlSelf->__PVT__exc_cause 
                                = ((3U == (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q))
                                    ? 0xbU : 8U);
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                          | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                                vlSelf->__PVT__exc_cause = 3U;
                            }
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                            vlSelf->__PVT__exc_cause = 7U;
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                            vlSelf->__PVT__exc_cause = 5U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__csr_save_cause = 0U;
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelf->__PVT__csr_save_if = 1U;
                }
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->__PVT__csr_save_cause = 1U;
                    }
                } else {
                    vlSelf->__PVT__csr_save_cause = 1U;
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->__PVT__csr_save_if = 1U;
                    vlSelf->__PVT__csr_save_cause = 1U;
                }
            } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->__PVT__csr_save_cause = 1U;
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                    vlSelf->__PVT__csr_save_cause = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->rf_wdata_wb_ecc_o = (QData)((IData)((((- (IData)((IData)(vlSelf->wb_stage_i__DOT____VdfgTmp_ha5c23953__0))) 
                                                  & vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q) 
                                                 | ((- (IData)((IData)(vlSelf->__PVT__rf_we_lsu))) 
                                                    & vlSelf->__PVT__load_store_unit_i__DOT__data_rdata_ext))));
    vlSelf->rf_wdata_wb_ecc_o = ((0x7effffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x2606bd25ULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x20U));
    vlSelf->rf_wdata_wb_ecc_o = ((0x7dffffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0xdeba8050ULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x21U));
    vlSelf->rf_wdata_wb_ecc_o = ((0x7bffffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x413d89aaULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x22U));
    vlSelf->rf_wdata_wb_ecc_o = ((0x77ffffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x31234ed1ULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x23U));
    vlSelf->rf_wdata_wb_ecc_o = ((0x6fffffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0xc2c1323bULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x24U));
    vlSelf->rf_wdata_wb_ecc_o = ((0x5fffffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x2dcc624cULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x25U));
    vlSelf->rf_wdata_wb_ecc_o = ((0x3fffffffffULL & vlSelf->rf_wdata_wb_ecc_o) 
                                 | ((QData)((IData)(
                                                    (1U 
                                                     & VL_REDXOR_64(
                                                                    (0x98505586ULL 
                                                                     & vlSelf->rf_wdata_wb_ecc_o))))) 
                                    << 0x26U));
    vlSelf->rf_wdata_wb_ecc_o = (0x2a00000000ULL ^ vlSelf->rf_wdata_wb_ecc_o);
    vlSelf->__PVT__multdiv_ready_id = (1U & ((~ (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)) 
                                             | (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_d 
        = ((IData)(vlSelf->__PVT__lsu_load_err_raw) 
           & (IData)(vlSelf->__PVT__outstanding_load_wb));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_d 
        = ((IData)(vlSelf->__PVT__lsu_store_err_raw) 
           & (IData)(vlSelf->__PVT__outstanding_store_wb));
    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->__PVT__if_stage_i__DOT__fetch_rdata;
    if ((2U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                    if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | ((0xc000000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xe00U 
                                                    & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))));
                    }
                } else {
                    if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                }
            } else if ((0x4000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))));
                }
            } else {
                if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x1000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x1013U | ((0x1f00000U & 
                                       (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))));
                }
            }
        }
    } else if ((1U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x4000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | ((0x1000U 
                                                           & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                              >> 1U)) 
                                                          | ((0xc00U 
                                                              & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata) 
                                                             | ((0x300U 
                                                                 & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                                    << 5U)) 
                                                                | (0x80U 
                                                                   & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                                      >> 5U))))))))));
            } else if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | ((0x80000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))));
            } else if ((0x800U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1aU) | 
                                       ((0x2000000U 
                                         & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU)) 
                                        | ((0x1f00000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))))));
                }
            } else {
                vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | ((0x1f00000U & 
                                       (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0x38000U 
                                          & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0x380U 
                                            & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else if ((0x4000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                if ((0U == ((0x20U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       ((0x18000000U 
                                         & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 0x18U)) 
                                        | ((0x4000000U 
                                            & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  << 0x17U)) 
                                              | (0x1000000U 
                                                 & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)))))));
                }
            } else {
                vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | ((0x80000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                | ((0x40000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x16U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                          << 0x13U)) 
                                      | ((0x8000000U 
                                          & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                             << 0x15U)) 
                                         | ((0x4000000U 
                                             & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                               | ((0x1000000U 
                                                   & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                      << 0xdU)) 
                                                  | ((0xe00000U 
                                                      & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                         << 0x12U)) 
                                                     | ((0x1ff000U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                                           >> 0xcU)))) 
                                                            << 0xcU)) 
                                                        | (0x80U 
                                                           & ((~ 
                                                               (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xfU)) 
                                                              << 7U))))))))))))
                    : (0x13U | (((- (IData)((1U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | ((0xf8000U 
                                                     & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                        << 8U)) 
                                                    | (0xf80U 
                                                       & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)))))));
        }
    } else if ((0x8000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
                vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((0x4000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x15U)) 
                                    | ((0x2000000U 
                                        & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | ((0x700000U 
                                           & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | ((0xc00U 
                                                 & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata) 
                                                | (0x200U 
                                                   & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                      << 3U))))))));
            }
        } else {
            vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
            vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
    } else {
        if ((0x2000U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) {
            vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0xffU & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                    >> 5U)))) {
            vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelf->__PVT__if_stage_i__DOT__instr_decompressed 
                = (0x10413U | ((0x3c000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSelf->__PVT__if_stage_i__DOT__fetch_rdata 
                                            << 5U)))))));
        }
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2 
        = (0x3ffffffffULL & VL_MULS_QQQ(34, (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSelf->__PVT__multdiv_operand_a_ex))), 
                                        (0x3ffffffffULL 
                                         & VL_EXTENDS_QI(34,17, 
                                                         (((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                           << 0x10U) 
                                                          | (vlSelf->__PVT__multdiv_operand_b_ex 
                                                             >> 0x10U))))));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_b = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b 
        = ((8U & ((~ (IData)((0U != (vlSelf->__PVT__alu_operand_b_ex 
                                     >> 0x1aU)))) << 3U)) 
           | (7U & (~ (((IData)((0U != (0x3fU & (vlSelf->__PVT__alu_operand_b_ex 
                                                 >> 0x12U)))) 
                        << 2U) | (((IData)((0U != (0x3fU 
                                                   & (vlSelf->__PVT__alu_operand_b_ex 
                                                      >> 0xaU)))) 
                                   << 1U) | (0U != 
                                             (0x3fU 
                                              & (vlSelf->__PVT__alu_operand_b_ex 
                                                 >> 2U))))))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h 
        = (3U & (~ (((IData)((0U != (vlSelf->__PVT__alu_operand_b_ex 
                                     >> 0x11U))) << 1U) 
                    | (0U != (0x7fffU & (vlSelf->__PVT__alu_operand_b_ex 
                                         >> 1U))))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n 
        = ((0xe00000U & (vlSelf->__PVT__alu_operand_b_ex 
                         >> 7U)) | ((0x1c0000U & (vlSelf->__PVT__alu_operand_b_ex 
                                                  >> 6U)) 
                                    | ((0x38000U & 
                                        (vlSelf->__PVT__alu_operand_b_ex 
                                         >> 5U)) | 
                                       ((0x7000U & 
                                         (vlSelf->__PVT__alu_operand_b_ex 
                                          >> 4U)) | 
                                        ((0xe00U & 
                                          (vlSelf->__PVT__alu_operand_b_ex 
                                           >> 3U)) 
                                         | ((0x1c0U 
                                             & (vlSelf->__PVT__alu_operand_b_ex 
                                                >> 2U)) 
                                            | ((0x38U 
                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                   >> 1U)) 
                                               | (7U 
                                                  & vlSelf->__PVT__alu_operand_b_ex))))))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b 
        = ((0xc0U & (vlSelf->__PVT__alu_operand_b_ex 
                     >> 0x12U)) | ((0x30U & (vlSelf->__PVT__alu_operand_b_ex 
                                             >> 0xcU)) 
                                   | ((0xcU & (vlSelf->__PVT__alu_operand_b_ex 
                                               >> 6U)) 
                                      | (3U & vlSelf->__PVT__alu_operand_b_ex))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h 
        = ((2U & (vlSelf->__PVT__alu_operand_b_ex >> 0xfU)) 
           | (1U & vlSelf->__PVT__alu_operand_b_ex));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
        = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate)
            ? (~ vlSelf->__PVT__alu_operand_b_ex) : vlSelf->__PVT__alu_operand_b_ex);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len 
        = ((0x10U & ((~ (IData)((0U != (0xfU & (vlSelf->__PVT__alu_operand_b_ex 
                                                >> 0x18U))))) 
                     << 4U)) | (0xfU & (vlSelf->__PVT__alu_operand_b_ex 
                                        >> 0x18U)));
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0 
        = ((vlSelf->__PVT__alu_operand_b_ex >> 5U) 
           & ((0x2fU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x30U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev 
        = ((vlSelf->__PVT__alu_operand_b_ex << 0x1fU) 
           | ((0x40000000U & (vlSelf->__PVT__alu_operand_b_ex 
                              << 0x1dU)) | ((0x20000000U 
                                             & (vlSelf->__PVT__alu_operand_b_ex 
                                                << 0x1bU)) 
                                            | ((0x10000000U 
                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                   << 0x19U)) 
                                               | ((0x8000000U 
                                                   & (vlSelf->__PVT__alu_operand_b_ex 
                                                      << 0x17U)) 
                                                  | ((0x4000000U 
                                                      & (vlSelf->__PVT__alu_operand_b_ex 
                                                         << 0x15U)) 
                                                     | ((0x2000000U 
                                                         & (vlSelf->__PVT__alu_operand_b_ex 
                                                            << 0x13U)) 
                                                        | ((0x1000000U 
                                                            & (vlSelf->__PVT__alu_operand_b_ex 
                                                               << 0x11U)) 
                                                           | ((0x800000U 
                                                               & (vlSelf->__PVT__alu_operand_b_ex 
                                                                  << 0xfU)) 
                                                              | ((0x400000U 
                                                                  & (vlSelf->__PVT__alu_operand_b_ex 
                                                                     << 0xdU)) 
                                                                 | ((0x200000U 
                                                                     & (vlSelf->__PVT__alu_operand_b_ex 
                                                                        << 0xbU)) 
                                                                    | ((0x100000U 
                                                                        & (vlSelf->__PVT__alu_operand_b_ex 
                                                                           << 9U)) 
                                                                       | ((0x80000U 
                                                                           & (vlSelf->__PVT__alu_operand_b_ex 
                                                                              << 7U)) 
                                                                          | ((0x40000U 
                                                                              & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                << 5U)) 
                                                                             | ((0x20000U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__PVT__alu_operand_b_ex 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    if (vlSelf->__PVT__csr_access) {
        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx 
            = (0x1fU & vlSelf->__PVT__alu_operand_b_ex);
        vlSelf->__PVT__csr_addr = (0xfffU & vlSelf->__PVT__alu_operand_b_ex);
    } else {
        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx = 0U;
        vlSelf->__PVT__csr_addr = 0U;
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1 
        = (QData)((IData)((0xffffU & (IData)((vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res 
                                              >> 0x10U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result 
        = ((0x24U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? ((0xffff0000U & vlSelf->__PVT__alu_operand_b_ex) 
               | (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                  >> 0x10U)) : ((0x25U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                 ? ((0xff00U & (vlSelf->__PVT__alu_operand_b_ex 
                                                << 8U)) 
                                    | (0xffU & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))
                                 : ((vlSelf->__PVT__alu_operand_b_ex 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
            << 0x1fU) | ((0x40000000U & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    if ((4U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelf->__PVT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelf->__PVT__imd_val_q_ex
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelf->__PVT__imd_val_q_ex
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelf->__PVT__multdiv_operand_b_ex))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelf->__PVT__multdiv_operand_a_ex))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelf->__PVT__multdiv_operand_b_ex))) 
                                                  << 1U))));
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlSelf->__PVT__ex_block_i__DOT__multdiv_sel)
                               ? vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_a
                               : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                   ? (1ULL | ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))) 
                                              << 2U))
                                   : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                       ? (1ULL | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 3U))
                                       : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                           ? (1ULL 
                                              | ((QData)((IData)(
                                                                 (0x1fffffffU 
                                                                  & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))) 
                                                 << 4U))
                                           : (1ULL 
                                              | ((QData)((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))))) 
                             + (0x1ffffffffULL & ((IData)(vlSelf->__PVT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlSelf->__PVT__alu_operand_b_ex)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlSelf->__PVT__alu_operand_b_ex)) 
                                                    << 1U))))));
    vlSelf->__PVT__if_stage_i__DOT__irq_vec = (0x1fU 
                                               & (IData)(vlSelf->__PVT__exc_cause));
    if ((0x40U & (IData)(vlSelf->__PVT__exc_cause))) {
        vlSelf->__PVT__if_stage_i__DOT__irq_vec = 0x1fU;
    }
    vlSelf->__PVT__if_stage_i__DOT__exc_pc = ((2U & (IData)(vlSelf->__PVT__exc_pc_mux_id))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__exc_pc_mux_id))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | ((IData)(vlSelf->__PVT__if_stage_i__DOT__irq_vec) 
                                                      << 2U))
                                                   : 
                                                  (0xffffff00U 
                                                   & vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__mstack_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending 
        = (1U & ((~ (IData)(vlSelf->__PVT__multdiv_ready_id)) 
                 | (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_d) 
           | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    vlSelf->__PVT__if_stage_i__DOT__instr_out = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)
                                                  ? 
                                                 (0x33U 
                                                  | (((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set) 
                                                      << 0x19U) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                            << 0x13U)) 
                                                        | ((0x800000U 
                                                            & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                               << 0xeU)) 
                                                           | ((0x400000U 
                                                               & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                  << 0xaU)) 
                                                              | ((0x200000U 
                                                                  & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                        << 1U)) 
                                                                    | ((0x80000U 
                                                                        & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                           >> 0xaU)) 
                                                                       | ((0x40000U 
                                                                           & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                              << 0xeU)) 
                                                                          | ((0x20000U 
                                                                              & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                                << 0xaU)) 
                                                                             | ((0x10000U 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                                << 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                                >> 0xdU)) 
                                                                                | ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode) 
                                                                                << 0xcU)))))))))))))
                                                  : vlSelf->__PVT__if_stage_i__DOT__instr_decompressed);
    if ((0x13U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0x80U & ((~ (vlSelf->__PVT__alu_operand_b_ex 
                             >> 0x1fU)) << 7U)) | (
                                                   (0x40U 
                                                    & ((~ 
                                                        (vlSelf->__PVT__alu_operand_b_ex 
                                                         >> 0x1bU)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           (vlSelf->__PVT__alu_operand_b_ex 
                                                            >> 0x17U)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((~ 
                                                              (vlSelf->__PVT__alu_operand_b_ex 
                                                               >> 0x13U)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((~ 
                                                                 (vlSelf->__PVT__alu_operand_b_ex 
                                                                  >> 0xfU)) 
                                                                << 3U)) 
                                                            | (7U 
                                                               & (~ 
                                                                  ((4U 
                                                                    & (vlSelf->__PVT__alu_operand_b_ex 
                                                                       >> 9U)) 
                                                                   | ((2U 
                                                                       & (vlSelf->__PVT__alu_operand_b_ex 
                                                                          >> 6U)) 
                                                                      | (1U 
                                                                         & (vlSelf->__PVT__alu_operand_b_ex 
                                                                            >> 3U)))))))))));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    } else if ((0x14U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xf0U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld)) 
               | ((0xcU & ((- (IData)((1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                             >> 1U)))) 
                           << 2U)) | (3U & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b)))))));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xfU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld)) 
               | ((0xc0U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                              >> 3U)))) 
                            << 6U)) | (0x30U & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                                               >> 2U)))) 
                                                << 4U))));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0 
            = (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     << 1U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffff8U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | (IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0 
            = (1U | (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xffffc7U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0) 
                  << 3U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0 
            = (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 1U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffe3fU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0) 
                  << 6U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0 
            = (1U | (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfff1ffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0) 
                  << 9U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0 
            = (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 3U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xff8fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0) 
                  << 0xcU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0 
            = (1U | (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 3U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfc7fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0) 
                  << 0xfU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0 
            = (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 5U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xe3ffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h5d6f7a76__0) 
                  << 0x12U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0 
            = (1U | (6U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 5U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x1fffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hd6c13662__0) 
                  << 0x15U));
    } else if ((0x15U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xf0U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h) 
                                           >> 1U)))) 
                         << 4U)) | (0xfU & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h))))));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h3eca370a__0 
            = (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                     << 2U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffff8U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | (IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h3eca370a__0));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h0cbe1a76__0 
            = (1U | (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xffffc7U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h0cbe1a76__0) 
                  << 3U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hbe6a5bcf__0 
            = (2U | (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffe3fU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hbe6a5bcf__0) 
                  << 6U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_he3b1b9d9__0 
            = (3U | (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfff1ffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_he3b1b9d9__0) 
                  << 9U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h3eca370a__0 
            = (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                     << 1U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xff8fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h3eca370a__0) 
                  << 0xcU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h0cbe1a76__0 
            = (1U | (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfc7fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h0cbe1a76__0) 
                  << 0xfU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hbe6a5bcf__0 
            = (2U | (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xe3ffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hbe6a5bcf__0) 
                  << 0x12U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_he3b1b9d9__0 
            = (3U | (4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x1fffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_he3b1b9d9__0) 
                  << 0x15U));
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld = 0U;
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result 
        = (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
           & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = (((~ ((IData)(0xffffffffU) << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len))) 
            << 0x1fU) | ((0x40000000U & ((~ (((IData)(0xffffffffU) 
                                              << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                             >> 1U)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (((IData)(0xffffffffU) 
                                                 << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (
                                                   ((IData)(0xffffffffU) 
                                                    << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ 
                                                  (((IData)(0xffffffffU) 
                                                    << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                   >> 4U)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (((IData)(0xffffffffU) 
                                            << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                           >> 5U)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (((IData)(0xffffffffU) 
                                             << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                            >> 6U)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (((IData)(0xffffffffU) 
                                                  << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ 
                                                 (((IData)(0xffffffffU) 
                                                   << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                  >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ 
                                                    (((IData)(0xffffffffU) 
                                                      << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                     >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ 
                                                       (((IData)(0xffffffffU) 
                                                         << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                        >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ 
                                                          (((IData)(0xffffffffU) 
                                                            << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                           >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ 
                                                             (((IData)(0xffffffffU) 
                                                               << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                              >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ 
                                                                (((IData)(0xffffffffU) 
                                                                  << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                 >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ 
                                                                   (((IData)(0xffffffffU) 
                                                                     << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                    >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ 
                                                                      (((IData)(0xffffffffU) 
                                                                        << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                       >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ 
                                                                         (((IData)(0xffffffffU) 
                                                                           << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                          >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ 
                                                                            (((IData)(0xffffffffU) 
                                                                              << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                             >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ 
                                                                               (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (((IData)(0xffffffffU) 
                                                                                << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len)) 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    if (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op) {
        if (vlSelf->__PVT__instr_first_cycle_id) {
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly)
                    ? 0xdea713f1U : 0xf7011641U);
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                    ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                       << 0x18U) : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                                     ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                        << 0x10U) : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a));
        } else {
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly)
                    ? 0x1edc6f41U : 0x4c11db7U);
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
                = vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                [0U];
        }
    } else if (((0x39U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                | (0x3aU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev;
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            = vlSelf->__PVT__alu_operand_b_ex;
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
    }
    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 0U;
    if ((0x800U & (IData)(vlSelf->__PVT__csr_addr))) {
        if ((0x400U & (IData)(vlSelf->__PVT__csr_addr))) {
            if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 1U)))) {
                                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__csr_addr))) {
                                            vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__csr_addr))
                                                    ? 0U
                                                    : 0x16U);
                                        } else if (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__csr_addr))) {
                                            vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
            if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                               [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx] 
                                               >> 0x20U));
                            }
                        }
                    }
                    if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                              [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx]);
                            } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                              [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx]);
                            } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                              [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx]);
                            } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                              [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx]);
                            } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter
                                              [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx]);
                            }
                        }
                    }
                    if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else if ((0x400U & (IData)(vlSelf->__PVT__csr_addr))) {
        if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
            if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 5U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 3U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 1U)))) {
                                            vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__csr_addr))
                                                    ? 0U
                                                    : (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 3U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 2U)))) {
                                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelf->__PVT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                            if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((1U & ((IData)(vlSelf->__PVT__csr_addr) 
                                                >> 2U)) 
                                         || (1U & (IData)(vlSelf->__PVT__csr_addr))));
                        } else {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                        ? ((1U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? 0U : vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q)
                                        : ((1U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? (0x28001048U 
                                               | ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                                  << 2U))
                                            : (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)));
                            }
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((IData)(vlSelf->__PVT__csr_addr) 
                                         >> 2U));
                        }
                    } else {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                            vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                             >> 3U)))) {
                            if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff8U 
                                                & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
                                    }
                                }
                            }
                        }
                    }
                    if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 4U)))) {
                                if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr 
                = ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                             >> 8U))) || ((1U & (~ 
                                                 ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 7U))) 
                                          || ((1U & 
                                               ((IData)(vlSelf->__PVT__csr_addr) 
                                                >> 6U)) 
                                              || ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__csr_addr) 
                                                       >> 5U))) 
                                                  || ((1U 
                                                       & ((IData)(vlSelf->__PVT__csr_addr) 
                                                          >> 4U)) 
                                                      || ((1U 
                                                           & (~ 
                                                              ((IData)(vlSelf->__PVT__csr_addr) 
                                                               >> 3U))) 
                                                          || ((1U 
                                                               & ((IData)(vlSelf->__PVT__csr_addr) 
                                                                  >> 2U)) 
                                                              || ((1U 
                                                                   & ((IData)(vlSelf->__PVT__csr_addr) 
                                                                      >> 1U)) 
                                                                  || (1U 
                                                                      & (IData)(vlSelf->__PVT__csr_addr))))))))));
        }
    } else if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
        if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
            if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                = ((8U & (IData)(vlSelf->__PVT__csr_addr))
                                    ? ((4U & (IData)(vlSelf->__PVT__csr_addr))
                                        ? ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((4U & (IData)(vlSelf->__PVT__csr_addr))
                                        ? ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((1U 
                                                & (IData)(vlSelf->__PVT__csr_addr))
                                                ? vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                             >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                        ? ((1U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [0xfU] 
                                                << 0x18U) 
                                               | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U) 
                                                  | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [0xdU] 
                                                      << 8U) 
                                                     | vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [0xcU])))
                                            : ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [0xbU] 
                                                << 0x18U) 
                                               | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U) 
                                                  | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [9U] 
                                                      << 8U) 
                                                     | vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [8U]))))
                                        : ((1U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [7U] 
                                                << 0x18U) 
                                               | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [5U] 
                                                      << 8U) 
                                                     | vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [4U])))
                                            : ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                [3U] 
                                                << 0x18U) 
                                               | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata
                                                     [0U])))));
                            }
                        }
                    }
                }
                if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffffff7U 
                                                & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (8U 
                                                  & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     >> 0x15U)));
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x80U 
                                                  & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     >> 0x10U)));
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xfffff7ffU 
                                                & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x800U 
                                                  & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     >> 0xbU)));
                                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0x8000ffffU 
                                                & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                                               | (0x7fff0000U 
                                                  & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                                                     << 9U)));
                                    }
                                }
                            } else {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((2U & (IData)(vlSelf->__PVT__csr_addr))
                                        ? ((1U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? vlSelf->__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))) 
                                                << 0x1fU) 
                                               | ((((0x40U 
                                                     & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))
                                                     ? 0x3ffffffU
                                                     : 0U) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))))
                                        : ((1U & (IData)(vlSelf->__PVT__csr_addr))
                                            ? vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelf->__PVT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
                if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
                        [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
                        [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
                        [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx];
                } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
                            [vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx];
                    }
                } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q;
                }
                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                    if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                            vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
                if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xeU)));
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 9U)));
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 4U)));
                    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x10U)));
                }
            } else {
                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0x40901104U;
                    } else {
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffffff7U & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (8U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U)));
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffff7fU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           << 3U)));
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffffe7ffU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x1800U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             << 9U)));
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xfffdffffU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x20000U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                              << 0x10U)));
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int 
                            = ((0xffdfffffU & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int) 
                               | (0x200000U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               << 0x15U)));
                    }
                }
                if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            }
        } else {
            vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    vlSelf->__PVT__cs_registers_i__DOT__dbg_csr = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlSelf->__PVT__csr_addr))) {
            if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 2U)))) {
                                            vlSelf->__PVT__cs_registers_i__DOT__dbg_csr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_b 
                = (vlSelf->__PVT__multdiv_operand_b_ex 
                   >> 0x10U);
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a 
                = (vlSelf->__PVT__multdiv_operand_a_ex 
                   >> 0x10U);
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2 
                = (((QData)((IData)((0xffffU & (- (IData)(
                                                          ((0U 
                                                            != (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__imd_val_q_ex
                                                                      [0U] 
                                                                      >> 0x21U)))))))) 
                    << 0x12U) | (QData)((IData)((0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__imd_val_q_ex
                                                            [0U] 
                                                            >> 0x10U))))));
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_b 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        }
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res 
        = (0x3ffffffffULL & VL_MULS_QQQ(34, (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a)))), 
                                        (0x3ffffffffULL 
                                         & VL_EXTENDS_QI(34,17, 
                                                         (((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_b) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_b))))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op 
        = ((0x28U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a);
    vlSelf->__PVT__g_pmp__DOT__pmp_req_addr[2U] = (QData)((IData)(
                                                                  ((IData)(
                                                                           (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                            >> 3U)) 
                                                                   << 2U)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    __Vtableidx12 = (((IData)(vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q) 
                      << 4U) | ((0xcU & ((IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)) 
                                         << 2U)) | (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_type)));
    vlSelf->__PVT__load_store_unit_i__DOT__data_be 
        = Viob_soc_sim__ConstPool__TABLE_hee875898_0
        [__Vtableidx12];
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelf->__PVT__imd_val_q_ex[1U]);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelf->__PVT__imd_val_q_ex
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelf->__PVT__imd_val_q_ex
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlSelf->__PVT__imd_val_q_ex
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))));
    __Vtableidx10 = (((0U != (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                      >> 1U))) << 9U) 
                     | ((0x100U & ((((vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                      ^ vlSelf->__PVT__alu_operand_b_ex) 
                                     >> 0x1fU) ? ((vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                   >> 0x1fU) 
                                                  ^ (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                     : (~ (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 0x20U)))) 
                                   << 8U)) | (((0U 
                                                == (IData)(
                                                           (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U))) 
                                               << 7U) 
                                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Viob_soc_sim__ConstPool__TABLE_h9d63e220_0
        [__Vtableidx10];
    vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext)))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
        = (((QData)((IData)((VL_SHIFTR_III(32,32,32, (IData)(
                                                             (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)), 2U) 
                             > (IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
                                        >> 2U))))) 
            << 0x2fU) | (((QData)((IData)((VL_SHIFTR_III(32,32,32, (IData)(
                                                                           (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                            >> 1U)), 2U) 
                                           > (IData)(
                                                     (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
                                                      >> 2U))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                         > (IData)(
                                                                   (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
                                                                    >> 2U))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                          > (IData)(
                                                                    (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
                                                                     >> 2U))))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                             > (IData)(
                                                                       (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
                                                                        >> 2U))))) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                > (IData)(
                                                                          (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
                                                                           >> 2U))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                   > (IData)(
                                                                             (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
                                                                              >> 2U))))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                      > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
                                                                                >> 2U))))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                         > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
                                                                                >> 2U))))) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(
                                                                           (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                            > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
                                                                                >> 2U))))) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                               > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
                                                                                >> 2U))))) 
                                                              << 0x25U) 
                                                             | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
                                                                                >> 2U))))) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
                                                                                >> 2U))))) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
                                                                                >> 2U))))) 
                                                                       << 0x22U) 
                                                                      | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
                                                                                >> 2U))))) 
                                                                          << 0x21U) 
                                                                         | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                > vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
                                                                                >> 2U))) 
                                                                                << 0x1fU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
                                                                                >> 2U))) 
                                                                                << 0x1eU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
                                                                                >> 2U))) 
                                                                                << 0x1dU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
                                                                                >> 2U))) 
                                                                                << 0x1cU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
                                                                                >> 2U))) 
                                                                                << 0x1bU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
                                                                                >> 2U))) 
                                                                                << 0x1aU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
                                                                                >> 2U))) 
                                                                                << 0x19U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
                                                                                >> 2U))) 
                                                                                << 0x18U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
                                                                                >> 2U))) 
                                                                                << 0x17U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
                                                                                >> 2U))) 
                                                                                << 0x16U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
                                                                                >> 2U))) 
                                                                                << 0x15U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
                                                                                >> 2U))) 
                                                                                << 0x14U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
                                                                                >> 2U))) 
                                                                                << 0x13U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
                                                                                >> 2U))) 
                                                                                << 0x12U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
                                                                                >> 2U))) 
                                                                                << 0x11U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                > vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0) 
                                                                                << 0x10U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
                                                                                >> 2U))) 
                                                                                << 0xfU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
                                                                                >> 2U))) 
                                                                                << 0xeU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
                                                                                >> 2U))) 
                                                                                << 0xdU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
                                                                                >> 2U))) 
                                                                                << 0xcU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
                                                                                >> 2U))) 
                                                                                << 0xbU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
                                                                                >> 2U))) 
                                                                                << 0xaU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
                                                                                >> 2U))) 
                                                                                << 9U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
                                                                                >> 2U))) 
                                                                                << 8U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
                                                                                >> 2U))) 
                                                                                << 7U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
                                                                                >> 2U))) 
                                                                                << 6U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
                                                                                >> 2U))) 
                                                                                << 5U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
                                                                                >> 2U))) 
                                                                                << 4U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
                                                                                >> 2U))) 
                                                                                << 3U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
                                                                                >> 2U))) 
                                                                                << 2U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > (IData)(
                                                                                (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
                                                                                >> 2U))) 
                                                                                << 1U) 
                                                                                | ((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                > vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
        = (((QData)((IData)((VL_SHIFTR_III(32,32,32, (IData)(
                                                             (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U)), 2U) 
                             < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
            << 0x2fU) | (((QData)((IData)((VL_SHIFTR_III(32,32,32, (IData)(
                                                                           (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                            >> 1U)), 2U) 
                                           < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                         < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                          < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                             < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                   < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                      < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                         < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(
                                                                           (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                            < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                               < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                              << 0x25U) 
                                                             | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                                       << 0x22U) 
                                                                      | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                                          << 0x21U) 
                                                                         | (((QData)((IData)(
                                                                                (VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x1fU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x1eU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x1dU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x1cU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x1bU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x1aU) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x19U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x18U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x17U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x16U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x15U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x14U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x13U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x12U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x11U) 
                                                                                | (((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0x10U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0xfU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0xeU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0xdU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0xcU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0xbU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 0xaU) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 9U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 8U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 7U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 6U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 5U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 4U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 3U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 2U) 
                                                                                | ((((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q) 
                                                                                << 1U) 
                                                                                | ((0x3fffffffU 
                                                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U)) 
                                                                                < vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
        = (((QData)((IData)(((VL_SHIFTR_III(32,32,32, (IData)(
                                                              (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)), 2U) 
                              & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                              [0xfU]) == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hb283f6c2__0))) 
            << 0x2fU) | (((QData)((IData)(((VL_SHIFTR_III(32,32,32, (IData)(
                                                                            (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)), 2U) 
                                            & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                            [0xeU]) 
                                           == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1ddea43f__0))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                          & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                          [0xdU]) 
                                                         == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9c61acf2__0))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                           & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                           [0xcU]) 
                                                          == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h84863110__0))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                              & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                              [0xbU]) 
                                                             == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1f044106__0))) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                 & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                 [0xaU]) 
                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h7529c650__0))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                    & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                    [9U]) 
                                                                   == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8d5ec0a6__0))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                       & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                       [8U]) 
                                                                      == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf00baaed__0))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                          & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                          [7U]) 
                                                                         == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h619caa88__0))) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(
                                                                           ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                             & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                             [6U]) 
                                                                            == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h177541dd__0))) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [5U]) 
                                                                               == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h6f195ae7__0))) 
                                                              << 0x25U) 
                                                             | (((QData)((IData)(
                                                                                ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [4U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_he147ab0c__0))) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(
                                                                                ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [3U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h13d4f1d7__0))) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(
                                                                                ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [2U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hed97bc98__0))) 
                                                                       << 0x22U) 
                                                                      | (((QData)((IData)(
                                                                                ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [1U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9e1c4d53__0))) 
                                                                          << 0x21U) 
                                                                         | (((QData)((IData)(
                                                                                ((VL_SHIFTR_III(32,32,32, (IData)(
                                                                                (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf506530a__0))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xfU]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hb283f6c2__0) 
                                                                                << 0x1fU) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xeU]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1ddea43f__0) 
                                                                                << 0x1eU) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xdU]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9c61acf2__0) 
                                                                                << 0x1dU) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xcU]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h84863110__0) 
                                                                                << 0x1cU) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xbU]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1f044106__0) 
                                                                                << 0x1bU) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xaU]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h7529c650__0) 
                                                                                << 0x1aU) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [9U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8d5ec0a6__0) 
                                                                                << 0x19U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [8U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf00baaed__0) 
                                                                                << 0x18U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [7U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h619caa88__0) 
                                                                                << 0x17U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [6U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h177541dd__0) 
                                                                                << 0x16U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [5U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h6f195ae7__0) 
                                                                                << 0x15U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [4U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_he147ab0c__0) 
                                                                                << 0x14U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [3U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h13d4f1d7__0) 
                                                                                << 0x13U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [2U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hed97bc98__0) 
                                                                                << 0x12U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [1U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9e1c4d53__0) 
                                                                                << 0x11U) 
                                                                                | ((((VL_SHIFTR_III(32,32,32, 
                                                                                ((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                << 1U)), 2U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0U]) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf506530a__0) 
                                                                                << 0x10U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xfU])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hb283f6c2__0) 
                                                                                << 0xfU) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xeU])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1ddea43f__0) 
                                                                                << 0xeU) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xdU])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9c61acf2__0) 
                                                                                << 0xdU) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xcU])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h84863110__0) 
                                                                                << 0xcU) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xbU])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1f044106__0) 
                                                                                << 0xbU) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0xaU])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h7529c650__0) 
                                                                                << 0xaU) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [9U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8d5ec0a6__0) 
                                                                                << 9U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [8U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf00baaed__0) 
                                                                                << 8U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [7U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h619caa88__0) 
                                                                                << 7U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [6U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h177541dd__0) 
                                                                                << 6U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [5U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h6f195ae7__0) 
                                                                                << 5U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [4U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_he147ab0c__0) 
                                                                                << 4U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [3U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h13d4f1d7__0) 
                                                                                << 3U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [2U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hed97bc98__0) 
                                                                                << 2U) 
                                                                                | ((((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [1U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9e1c4d53__0) 
                                                                                << 1U) 
                                                                                | ((0x3fffffffU 
                                                                                & ((vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                                >> 1U) 
                                                                                & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
                                                                                [0U])) 
                                                                                == vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf506530a__0))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__if_stage_i__DOT__fetch_addr_n = 
        ((4U & (IData)(vlSelf->__PVT__pc_mux_id)) ? 
         ((2U & (IData)(vlSelf->__PVT__pc_mux_id)) ? 0x40000080U
           : ((1U & (IData)(vlSelf->__PVT__pc_mux_id))
               ? 0x40000080U : vlSelf->__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
          : ((2U & (IData)(vlSelf->__PVT__pc_mux_id))
              ? ((1U & (IData)(vlSelf->__PVT__pc_mux_id))
                  ? vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                  : vlSelf->__PVT__if_stage_i__DOT__exc_pc)
              : ((1U & (IData)(vlSelf->__PVT__pc_mux_id))
                  ? (((0U == (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel))
                       ? vlSelf->__PVT__multdiv_operand_a_ex
                       : vlSelf->__PVT__pc_id) + ((4U 
                                                   & (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                                     ? 2U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & vlSelf->__PVT__instr_rdata_id) 
                                                        | ((0x800U 
                                                            & (vlSelf->__PVT__instr_rdata_id 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->__PVT__instr_rdata_id 
                                                                 >> 0x14U)))))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                                      ? 2U
                                                      : 4U)
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->__PVT__instr_rdata_id 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->__PVT__instr_rdata_id 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->__PVT__instr_rdata_id 
                                                                    >> 7U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                                      ? 2U
                                                      : 4U)
                                                     : vlSelf->__PVT__id_stage_i__DOT__imm_i_type))))
                  : 0x40000080U)));
    vlSelf->__PVT__perf_instr_ret_wb = (((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                         & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)) 
                                        & ((~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                                               & (IData)(vlSelf->__PVT__lsu_resp_valid))) 
                                           & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)));
    vlSelf->__PVT__id_stage_i__DOT__wb_exception = 
        ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
         | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
            | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result 
        = ((((0x80U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
              ? (0xfU & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                         >> (0x1fU & VL_SHIFTL_III(5,5,32, 
                                                   (7U 
                                                    & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                       >> 0x15U)), 2U))))
              : 0U) << 0x1cU) | ((((0x40U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                    ? (0xfU & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                       >> 0x12U)), 2U))))
                                    : 0U) << 0x18U) 
                                 | ((((0x20U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                       ? (0xfU & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (7U 
                                                                    & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                       >> 0xfU)), 2U))))
                                       : 0U) << 0x14U) 
                                    | ((((0x10U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                          ? (0xfU & 
                                             (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                              >> (0x1fU 
                                                  & VL_SHIFTL_III(5,5,32, 
                                                                  (7U 
                                                                   & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                      >> 0xcU)), 2U))))
                                          : 0U) << 0x10U) 
                                       | ((((8U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                             ? (0xfU 
                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,5,32, 
                                                                    (7U 
                                                                     & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                        >> 9U)), 2U))))
                                             : 0U) 
                                           << 0xcU) 
                                          | ((((4U 
                                                & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                                ? (0xfU 
                                                   & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, 
                                                                       (7U 
                                                                        & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                           >> 6U)), 2U))))
                                                : 0U) 
                                              << 8U) 
                                             | ((((2U 
                                                   & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                                   ? 
                                                  (0xfU 
                                                   & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(5,5,32, 
                                                                       (7U 
                                                                        & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
                                                                           >> 3U)), 2U))))
                                                   : 0U) 
                                                 << 4U) 
                                                | ((1U 
                                                    & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld))
                                                    ? 
                                                   (0xfU 
                                                    & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,5,32, 
                                                                        (7U 
                                                                         & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel), 2U))))
                                                    : 0U))))))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
            ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
               | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)
            : (((4U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result
                : (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                   ^ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt 
        = (0x1fU & ((0x37U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                     ? (vlSelf->__PVT__alu_operand_b_ex 
                        >> 0x10U) : ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                      ? ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0)
                                          ? (- vlSelf->__PVT__alu_operand_b_ex)
                                          : vlSelf->__PVT__alu_operand_b_ex)
                                      : ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0)
                                          ? vlSelf->__PVT__alu_operand_b_ex
                                          : (- vlSelf->__PVT__alu_operand_b_ex)))));
    if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xaaaaaaaaU & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 1U))) 
               | (0x55555555U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 1U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xccccccccU & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 2U))) 
               | (0x33333333U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 2U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xf0f0f0f0U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 4U))) 
               | (0xf0f0f0fU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 4U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xff00ff00U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 8U))) 
               | (0xff00ffU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 8U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 0x10U))) 
               | (0xffffU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 0x10U)));
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (((IData)(ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0) 
            << 5U) | (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt));
    vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelf->__PVT__csr_op)) ? 
           ((1U & (IData)(vlSelf->__PVT__csr_op)) ? 
            ((~ vlSelf->__PVT__id_stage_i__DOT__alu_operand_a) 
             & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int)
             : (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                | vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a);
    vlSelf->__PVT__illegal_csr_insn_id = ((IData)(vlSelf->__PVT__csr_access) 
                                          & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__illegal_csr) 
                                             | (((3U 
                                                  == 
                                                  ((IData)(vlSelf->__PVT__csr_access)
                                                    ? 
                                                   (3U 
                                                    & (vlSelf->__PVT__alu_operand_b_ex 
                                                       >> 0xaU))
                                                    : 0U)) 
                                                 & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wr)) 
                                                | ((((IData)(vlSelf->__PVT__csr_access)
                                                      ? 
                                                     (3U 
                                                      & (vlSelf->__PVT__alu_operand_b_ex 
                                                         >> 8U))
                                                      : 0U) 
                                                    > (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                                                   | ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                                      & (IData)(vlSelf->__PVT__cs_registers_i__DOT__dbg_csr))))));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 1U));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 2U));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 4U));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 8U));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 0x10U));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (~ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask);
    if ((1U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0U] 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a;
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 = 0U;
    }
    if ((2U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[1U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 1U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 1U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[1U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0 = 0U;
    }
    if ((4U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[2U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 2U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 2U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[2U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 = 0U;
    }
    if ((8U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[3U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 3U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 3U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[3U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0 = 0U;
    }
    if ((0x10U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[4U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 4U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 4U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[4U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 = 0U;
    }
    if ((0x20U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[5U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 5U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 5U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[5U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0 = 0U;
    }
    if ((0x40U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[6U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 6U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 6U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[6U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 = 0U;
    }
    if ((0x80U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[7U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 7U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 7U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[7U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0 = 0U;
    }
    if ((0x100U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[8U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 8U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 8U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[8U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 = 0U;
    }
    if ((0x200U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[9U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 9U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 9U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[9U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0 = 0U;
    }
    if ((0x400U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xaU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xaU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xaU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xaU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 = 0U;
    }
    if ((0x800U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xbU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xbU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xbU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xbU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0 = 0U;
    }
    if ((0x1000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xcU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xcU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xcU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xcU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 = 0U;
    }
    if ((0x2000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xdU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xdU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xdU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xdU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0 = 0U;
    }
    if ((0x4000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xeU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xeU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xeU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xeU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 = 0U;
    }
    if ((0x8000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xfU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xfU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xfU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0xfU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0 = 0U;
    }
    if ((0x10000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x10U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x10U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x10U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x10U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 = 0U;
    }
    if ((0x20000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x11U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x11U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x11U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x11U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0 = 0U;
    }
    if ((0x40000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x12U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x12U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x12U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x12U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 = 0U;
    }
    if ((0x80000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x13U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x13U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x13U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x13U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0 = 0U;
    }
    if ((0x100000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x14U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x14U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x14U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x14U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 = 0U;
    }
    if ((0x200000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x15U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x15U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x15U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x15U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0 = 0U;
    }
    if ((0x400000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x16U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x16U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x16U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x16U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 = 0U;
    }
    if ((0x800000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x17U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x17U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x17U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x17U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0 = 0U;
    }
    if ((0x1000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x18U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x18U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x18U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x18U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 = 0U;
    }
    if ((0x2000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x19U] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x19U);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x19U);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x19U] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0 = 0U;
    }
    if ((0x4000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1aU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1aU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1aU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1aU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 = 0U;
    }
    if ((0x8000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1bU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1bU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1bU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1bU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0 = 0U;
    }
    if ((0x10000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1cU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1cU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1cU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1cU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 = 0U;
    }
    if ((0x20000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1dU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1dU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1dU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1dU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0 = 0U;
    }
    if ((0x40000000U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1eU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1eU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1eU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1eU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 = 0U;
    }
    if ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
         >> 0x1fU)) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1fU] 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1fU);
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0 
            = VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1fU);
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[0x1fU] = 0U;
        vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0 = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelf->__PVT__multdiv_operand_a_ex);
            }
        }
        if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelf->__PVT__multdiv_operand_b_ex);
            }
        }
    }
    vlSelf->__PVT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = (QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelf->__PVT__imd_val_q_ex[0U]);
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result 
        = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
            ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
            : vlSelf->__PVT__alu_operand_b_ex);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffffeULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffffeULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | (IData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                     [0U]) ? ((8U & 
                                               vlSelf->__PVT__csr_pmp_cfg
                                               [0U])
                                               ? (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq)
                                               : (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq))
                                     : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0U] 
                                               >> 3U)) 
                                        && (1U & (((IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
                                                   | (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt)) 
                                                  & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt)))))))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffffdULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffffdULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [1U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [1U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 1U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 1U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 1U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 1U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 1U))))))))) 
              << 1U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffffbULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffffbULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [2U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [2U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 2U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 2U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 2U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 2U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 2U))))))))) 
              << 2U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffff7ULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffff7ULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [3U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [3U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 3U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 3U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 3U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 3U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 3U))))))))) 
              << 3U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffffefULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffffefULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [4U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [4U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 4U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 4U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 4U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 4U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 4U))))))))) 
              << 4U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffffdfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffffdfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [5U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [5U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 5U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 5U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 5U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 5U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 5U))))))))) 
              << 5U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffffbfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffffbfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [6U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [6U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 6U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 6U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 6U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 6U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 6U))))))))) 
              << 6U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffff7fULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffff7fULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [7U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [7U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 7U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 7U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 7U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 7U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 7U))))))))) 
              << 7U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffeffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffeffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [8U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [8U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 8U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 8U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 8U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 8U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 8U))))))))) 
              << 8U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffdffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffdffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [9U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [9U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 9U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 9U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 9U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 9U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 9U))))))))) 
              << 9U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffbffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffbffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xaU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xaU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xaU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xaU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xaU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0xaU))))))))) 
              << 0xaU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffff7ffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffff7ffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xbU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xbU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xbU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xbU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xbU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0xbU))))))))) 
              << 0xbU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffefffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffefffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xcU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xcU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xcU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xcU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xcU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0xcU))))))))) 
              << 0xcU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffdfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffdfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xdU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xdU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xdU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xdU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xdU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0xdU))))))))) 
              << 0xdU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffffbfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffffbfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xeU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xeU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xeU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xeU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xeU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0xeU))))))))) 
              << 0xeU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffff7fffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffff7fffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xfU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xfU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xfU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xfU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xfU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0xfU))))))))) 
              << 0xfU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffeffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffeffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [0U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x10U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x10U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x10U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x10U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x10U))))))))) 
              << 0x10U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffdffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffdffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [1U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [1U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x11U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x11U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x11U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x11U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x11U))))))))) 
              << 0x11U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffbffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffbffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [2U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [2U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x12U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x12U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x12U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x12U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x12U))))))))) 
              << 0x12U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffff7ffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffff7ffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [3U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [3U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x13U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x13U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x13U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x13U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x13U))))))))) 
              << 0x13U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffefffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffefffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [4U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [4U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x14U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x14U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x14U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x14U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x14U))))))))) 
              << 0x14U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffdfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffdfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [5U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [5U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x15U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x15U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x15U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x15U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x15U))))))))) 
              << 0x15U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffffbfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffffbfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [6U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [6U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x16U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x16U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x16U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x16U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x16U))))))))) 
              << 0x16U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffff7fffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffff7fffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [7U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [7U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x17U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x17U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x17U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x17U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x17U))))))))) 
              << 0x17U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffeffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffeffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [8U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [8U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x18U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x18U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x18U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x18U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x18U))))))))) 
              << 0x18U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffdffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffdffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [9U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [9U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x19U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x19U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x19U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x19U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x19U))))))))) 
              << 0x19U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffbffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffbffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xaU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1aU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1aU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1aU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1aU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x1aU))))))))) 
              << 0x1aU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffff7ffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffff7ffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xbU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1bU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1bU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1bU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1bU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x1bU))))))))) 
              << 0x1bU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffefffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffefffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xcU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1cU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1cU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1cU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1cU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x1cU))))))))) 
              << 0x1cU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffdfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffdfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xdU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1dU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1dU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1dU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1dU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x1dU))))))))) 
              << 0x1dU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffffbfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffffbfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xeU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1eU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1eU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1eU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1eU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x1eU))))))))) 
              << 0x1eU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffff7fffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffff7fffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xfU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1fU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1fU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1fU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1fU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x1fU))))))))) 
              << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffeffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffeffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [0U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x20U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x20U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x20U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x20U))))))))) 
              << 0x20U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffdffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffdffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [1U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [1U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x21U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x21U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x21U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x21U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x21U))))))))) 
              << 0x21U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffbffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffbffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [2U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [2U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x22U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x22U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x22U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x22U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x22U))))))))) 
              << 0x22U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfff7ffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfff7ffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [3U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [3U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x23U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x23U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x23U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x23U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x23U))))))))) 
              << 0x23U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffefffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffefffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [4U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [4U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x24U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x24U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x24U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x24U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x24U))))))))) 
              << 0x24U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffdfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffdfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [5U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [5U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x25U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x25U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x25U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x25U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x25U))))))))) 
              << 0x25U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xffbfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xffbfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [6U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [6U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x26U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x26U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x26U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x26U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x26U))))))))) 
              << 0x26U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xff7fffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xff7fffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [7U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [7U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x27U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x27U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x27U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x27U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x27U))))))))) 
              << 0x27U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfeffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfeffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [8U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [8U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x28U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x28U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x28U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x28U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x28U))))))))) 
              << 0x28U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfdffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfdffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [9U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [9U])
                                                ? (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x29U))
                                                : (IData)(
                                                          (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x29U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x29U)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x29U))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x29U))))))))) 
              << 0x29U));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfbffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfbffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xaU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2aU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2aU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2aU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2aU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x2aU))))))))) 
              << 0x2aU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xf7ffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xf7ffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xbU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2bU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2bU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2bU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2bU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x2bU))))))))) 
              << 0x2bU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xefffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xefffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xcU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2cU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2cU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2cU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2cU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x2cU))))))))) 
              << 0x2cU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xdfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xdfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xdU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2dU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2dU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2dU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2dU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x2dU))))))))) 
              << 0x2dU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xbfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xbfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xeU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2eU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2eU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2eU)) 
                                                    | (IData)(
                                                              (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2eU))) 
                                                   & (IData)(
                                                             (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                              >> 0x2eU))))))))) 
              << 0x2eU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0x7fffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0x7fffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [0xfU]) ? ((8U 
                                                  & vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU])
                                                  ? (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2fU))
                                                  : (IData)(
                                                            (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2fU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U)) 
                                         && (IData)(
                                                    ((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                      >> 0x2fU) 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                                 >> 0x2fU)) 
                                                        | (IData)(
                                                                  (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                                   >> 0x2fU)))))))))) 
              << 0x2fU));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
    if ((0x12U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode 
            = ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode)) 
               | ((8U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                         << 3U)) | ((4U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                                           << 1U)) 
                                    | (2U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                                             >> 1U)))));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode 
            = ((0xeU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode)) 
               | (1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt) 
                        >> 3U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = (((((((((0x88224411U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result) 
                      | (0x22001100U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                     | (0x880044U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                    | (0x440000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                   | (0x2200U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                  | (0x44110000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0xfU))) 
                 | (0x8822U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0xfU))) 
                | (0x11000000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x15U))) 
               | (0x88U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x15U)));
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode 
            = (0xfU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt));
    }
    if ((8U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [0U]) | ((0xff0000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 8U)) 
                         | (0xff00U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 8U))));
    }
    if ((4U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [1U]) | ((0xf000f00U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 4U)) 
                         | (0xf000f0U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 4U))));
    }
    if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [2U]) | ((0x30303030U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 2U)) 
                         | (0xc0c0c0cU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 2U))));
    }
    if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
                & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT
                [3U]) | ((0x44444444U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 1U)) 
                         | (0x22222222U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 1U))));
    }
    if ((0x12U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result 
            = (((((((((0x88224411U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result) 
                      | (0x22001100U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                     | (0x880044U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 6U))) 
                    | (0x440000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                   | (0x2200U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 9U))) 
                  | (0x44110000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0xfU))) 
                 | (0x8822U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0xfU))) 
                | (0x11000000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x15U))) 
               | (0x88U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result, 0x15U)));
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                     >> 6U))) && ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                       ? ((1U & (~ 
                                                 ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                  >> 3U))) 
                                          && ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                               ? ((1U 
                                                   & ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
                                               : ((1U 
                                                   & (~ 
                                                      ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                       >> 1U))) 
                                                  && ((1U 
                                                       & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) 
                                                      && (1U 
                                                          & ((0x20U 
                                                              & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                                                              ? (IData)(vlSelf->__PVT__instr_first_cycle_id)
                                                              : 
                                                             (~ (IData)(vlSelf->__PVT__instr_first_cycle_id))))))))
                                       : ((1U & ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                 >> 3U)) 
                                          && ((1U & 
                                               ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                >> 2U)) 
                                              && ((1U 
                                                   & ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                      >> 1U)) 
                                                  && ((1U 
                                                       & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                                                      && (1U 
                                                          & ((0x20U 
                                                              & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                                                              ? 
                                                             (~ (IData)(vlSelf->__PVT__instr_first_cycle_id))
                                                              : (IData)(vlSelf->__PVT__instr_first_cycle_id))))))))
                                   : ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                >> 4U))) 
                                      && ((1U & ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                 >> 3U)) 
                                          && ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((1U 
                                                    & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) 
                                                   && (IData)(vlSelf->__PVT__instr_first_cycle_id))
                                                   : 
                                                  ((1U 
                                                    & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) 
                                                   || (1U 
                                                       & (~ (IData)(vlSelf->__PVT__instr_first_cycle_id)))))
                                               : ((1U 
                                                   & ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                                      >> 1U)) 
                                                  && (1U 
                                                      & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))))))));
    if (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left = 1U;
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((0x37U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev
            : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode)
                ? 0x80000000U : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left)
                                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
                                  : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a)));
    vlSelf->__PVT__cs_registers_i__DOT__mtval_d = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_d 
        = (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
           ^ vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_q);
    vlSelf->__PVT__cs_registers_i__DOT__exception_pc 
        = vlSelf->__PVT__pc_id;
    vlSelf->__PVT__cs_registers_i__DOT__mepc_d = (0xfffffffeU 
                                                  & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int);
    vlSelf->__PVT__cs_registers_i__DOT__depc_d = (0xfffffffeU 
                                                  & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int);
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mstack_en = 1U;
                vlSelf->__PVT__cs_registers_i__DOT__mtval_d 
                    = vlSelf->__PVT__csr_mtval;
            }
        }
        vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d = 3U;
        if (vlSelf->__PVT__csr_save_if) {
            vlSelf->__PVT__cs_registers_i__DOT__exception_pc 
                = (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (vlSelf->__PVT__csr_save_id) {
            vlSelf->__PVT__cs_registers_i__DOT__exception_pc 
                = vlSelf->__PVT__pc_id;
        } else if (vlSelf->__PVT__csr_save_wb) {
            vlSelf->__PVT__cs_registers_i__DOT__exception_pc 
                = vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        }
        if (vlSelf->__PVT__debug_csr_save) {
            vlSelf->__PVT__cs_registers_i__DOT__depc_d 
                = vlSelf->__PVT__cs_registers_i__DOT__exception_pc;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelf->__PVT__cs_registers_i__DOT__mepc_d 
                = vlSelf->__PVT__cs_registers_i__DOT__exception_pc;
        }
    } else {
        if (vlSelf->__PVT__csr_restore_dret_id) {
            vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
        } else if (vlSelf->__PVT__csr_restore_mret_id) {
            vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
            if (vlSelf->__PVT__csr_restore_mret_id) {
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlSelf->__PVT__cs_registers_i__DOT__mepc_d 
                        = vlSelf->__PVT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
                }
            }
        }
    }
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_mseccfg_d 
        = ((4U & (((~ ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0) 
                       | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0) 
                          | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0) 
                             | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0) 
                                | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0) 
                                   | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0) 
                                      | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0) 
                                         | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0) 
                                            | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0) 
                                               | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0) 
                                                  | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0) 
                                                     | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0) 
                                                        | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0) 
                                                           | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0) 
                                                              | ((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0) 
                                                                 | (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h923bbe04__0))))))))))))))))) 
                   << 2U) & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
           | (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                    | vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 2U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (((0x10U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (4U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (1U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0xaU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (((0x1000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x12U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (((0x100000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x80000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x80000U 
                                          & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x1aU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (((0x10000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x8000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x8000000U 
                                          & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 2U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (((0x10U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (4U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (1U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0xaU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (((0x1000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x12U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (((0x100000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x80000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x80000U 
                                          & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0x1aU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (((0x10000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x8000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x8000000U 
                                          & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 2U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (((0x10U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (4U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (1U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                              >> 0xaU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (((0x1000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                       ? ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                           ? 3U : 2U) : ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                          ? 1U : 0U)) 
                     << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                           >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x12U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (((0x100000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x80000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x80000U 
                                            & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x1aU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (((0x10000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x8000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x8000000U 
                                            & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 2U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (((0x10U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((8U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (4U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (1U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0xaU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (((0x1000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x800U 
                                            & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 8U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x12U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (((0x100000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x80000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x80000U 
                                            & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x10U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x1fU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (0x20U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x1aU)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x27U & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (((0x10000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                         ? ((0x8000000U & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                             ? 3U : 2U) : ((0x8000000U 
                                            & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
                                            ? 1U : 0U)) 
                       << 3U));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x3bU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (4U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x3eU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                             >> 0x18U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 1U) : (3U == (3U 
                                                 & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[1U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [1U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 9U) : (3U == (3U 
                                                 & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 8U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[2U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [2U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x11U) : (3U == 
                                             (3U & 
                                              (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x10U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[3U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [3U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x19U) : (3U == 
                                             (3U & 
                                              (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x18U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[4U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [4U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 1U) : (3U == (3U 
                                                 & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[5U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [5U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 9U) : (3U == (3U 
                                                 & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 8U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[6U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [6U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x11U) : (3U == 
                                             (3U & 
                                              (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x10U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[7U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [7U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 0x19U) : (3U == 
                                             (3U & 
                                              (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x18U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[8U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [8U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 1U) : (3U == (3U 
                                                 & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[9U] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [9U]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                             ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                >> 9U) : (3U == (3U 
                                                 & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 8U)))) 
                           << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xaU] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xaU]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                               ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 0x11U) : (3U == 
                                               (3U 
                                                & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0x10U)))) 
                             << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xbU] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xbU]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                               ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 0x19U) : (3U == 
                                               (3U 
                                                & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0x18U)))) 
                             << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xcU] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xcU]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                               ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 1U) : (3U == (3U 
                                                   & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int))) 
                             << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xdU] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xdU]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                               ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 9U) : (3U == (3U 
                                                   & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 8U)))) 
                             << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xeU] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xeU]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                               ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 0x11U) : (3U == 
                                               (3U 
                                                & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0x10U)))) 
                             << 1U)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[0xfU] 
        = ((0x3dU & vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
            [0xfU]) | (2U & (((1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q))
                               ? (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                  >> 0x19U) : (3U == 
                                               (3U 
                                                & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                   >> 0x18U)))) 
                             << 1U)));
    vlSelf->__PVT__illegal_insn_id = ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q) 
                                      & ((IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                                         | ((IData)(vlSelf->__PVT__illegal_csr_insn_id) 
                                            | (((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                                & (IData)(vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec)) 
                                               | ((3U 
                                                   != (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                                                  & ((IData)(vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec) 
                                                     | ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                        & (IData)(vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec))))))));
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1 = 0ULL;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
                = (1U & (~ (IData)(vlSelf->__PVT__multdiv_ready_id)));
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res;
        }
    } else if ((0U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold 
            = (1U & (~ (IData)(vlSelf->__PVT__multdiv_ready_id)));
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed 
        = (0x7ffffffffULL & (VL_EXTENDS_QQ(35,34, vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1) 
                             + (VL_EXTENDS_QQ(35,34, vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2) 
                                + VL_EXTENDS_QQ(35,34, vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
        = (((0x35U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
            | (0x36U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
            ? vlSelf->__PVT__alu_operand_b_ex : (((0x29U 
                                                   == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                                                  | (0x28U 
                                                     == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
                                                  ? 
                                                 (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
                                                  & (~ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op))
                                                  : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[1U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[2U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[3U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[4U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[5U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[6U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[7U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[8U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[9U] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0xaU] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0xbU] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0xcU] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0xdU] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0xeU] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[0xfU] 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0 
        = (vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 
           ^ vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelf->__PVT__imd_val_q_ex[0U];
    if ((4U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold 
                    = (1U & (~ (IData)(vlSelf->__PVT__multdiv_ready_id)));
            }
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 0U;
        } else {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 6U : 5U);
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelf->__PVT__imd_val_q_ex
                           [0U]) : ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlSelf->__PVT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))
                                               ? vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 3U;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 2U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        if ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0x3ffffffffULL;
        } else {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)(vlSelf->__PVT__multdiv_operand_a_ex));
        }
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfffeU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (1U & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfffeU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                            >> 0x10U))));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfffeU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                            >> 0x20U))));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfffdU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | ((IData)((2ULL == (3ULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))) 
              << 1U));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfffdU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | ((IData)((0x20000ULL == (0x30000ULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))) 
              << 1U));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfffdU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | ((IData)((0x200000000ULL == (0x300000000ULL 
                                          & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all))) 
              << 1U));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfffbU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (4U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 2U)) & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                    << 2U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfffbU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (4U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 0x12U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x10U))))))) 
                    << 2U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfffbU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (4U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 0x22U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x20U))))))) 
                    << 2U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfff7U & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (8U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 3U)) & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                    << 3U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfff7U & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (8U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 0x13U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x10U))))))) 
                    << 3U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfff7U & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (8U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 0x23U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                   >> 0x20U))))))) 
                    << 3U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xffefU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x10U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 4U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0xfU 
                                                        & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                       << 4U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xffefU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x10U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x14U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x10U))))))) 
                       << 4U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xffefU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x10U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x24U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0xfU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x20U))))))) 
                       << 4U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xffdfU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x20U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 5U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                       << 5U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xffdfU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x20U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x15U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x10U))))))) 
                       << 5U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xffdfU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x20U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x25U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x20U))))))) 
                       << 5U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xffbfU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x40U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 6U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                       << 6U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xffbfU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x40U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x16U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x10U))))))) 
                       << 6U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xffbfU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x40U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x26U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x20U))))))) 
                       << 6U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xff7fU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x80U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 7U)) & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                       << 7U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xff7fU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x80U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x17U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x10U))))))) 
                       << 7U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xff7fU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x80U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                 >> 0x27U)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                      >> 0x20U))))))) 
                       << 7U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfeffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x100U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 8U)) & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xffU 
                                                         & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                        << 8U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfeffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x100U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x18U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x10U))))))) 
                        << 8U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfeffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x100U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x28U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x20U))))))) 
                        << 8U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfdffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x200U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 9U)) & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1ffU 
                                                         & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                        << 9U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfdffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x200U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x19U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x10U))))))) 
                        << 9U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfdffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x200U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x29U)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x20U))))))) 
                        << 9U)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xfbffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x400U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0xaU)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                        << 0xaU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xfbffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x400U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x1aU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x10U))))))) 
                        << 0xaU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xfbffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x400U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x2aU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x20U))))))) 
                        << 0xaU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x800U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0xbU)) & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7ffU 
                                                           & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                        << 0xbU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x800U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x1bU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x10U))))))) 
                        << 0xbU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xf7ffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x800U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                  >> 0x2bU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7ffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                       >> 0x20U))))))) 
                        << 0xbU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xefffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x1000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0xcU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0xfffU 
                                                            & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                         << 0xcU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xefffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x1000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x1cU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x10U))))))) 
                         << 0xcU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xefffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x1000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x2cU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0xfffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x20U))))))) 
                         << 0xcU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xdfffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x2000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0xdU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x1fffU 
                                                            & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                         << 0xdU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xdfffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x2000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x1dU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x10U))))))) 
                         << 0xdU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xdfffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x2000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x2dU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x20U))))))) 
                         << 0xdU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0xbfffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x4000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0xeU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x3fffU 
                                                            & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                         << 0xeU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0xbfffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x4000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x1eU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3fffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x10U))))))) 
                         << 0xeU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0xbfffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | (0x4000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x2eU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x3fffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x20U))))))) 
                         << 0xeU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority 
        = ((0x7fffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority)) 
           | (0x8000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0xfU)) & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffU 
                                                            & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all)))))) 
                         << 0xfU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority 
        = ((0x7fffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority)) 
           | (0x8000U & (((IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                   >> 0x1fU)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x7fffU 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                                        >> 0x10U))))))) 
                         << 0xfU)));
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority 
        = ((0x7fffU & (IData)(vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority)) 
           | ((IData)(((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                        >> 0x2fU) & (~ (IData)((0U 
                                                != 
                                                (0x7fffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                                                            >> 0x20U)))))))) 
              << 0xfU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check 
        = (0xffffU & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all 
        = (0xffffU & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp 
        = (1U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                 >> 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
        = (((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp) 
            | (3U != (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode))) 
           | ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml) 
              & (0U == (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type))));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 0U;
    if ((1U & (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 1U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 1U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 2U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 2U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 3U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 3U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 4U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 4U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 5U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 5U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 6U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 6U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 7U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 7U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 8U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 8U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 9U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 9U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 0xaU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 0xaU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 0xbU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 0xbU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 0xcU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 0xcU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 0xdU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 0xdU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
                  >> 0xeU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 0xeU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    if (((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched)) 
         & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all) 
            >> 0xfU))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check) 
                        >> 0xfU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = 1U;
    }
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout 
        = __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail;
    vlSelf->__PVT__pmp_req_err[0U] = __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check 
        = (0xffffU & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                              >> 0x10U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all 
        = (0xffffU & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 0x10U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp 
        = (1U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                 >> 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
        = (((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp) 
            | (3U != (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode))) 
           | ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml) 
              & (0U == (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type))));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 0U;
    if ((1U & (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 1U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 1U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 2U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 2U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 3U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 3U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 4U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 4U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 5U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 5U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 6U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 6U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 7U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 7U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 8U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 8U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 9U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 9U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 0xaU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 0xaU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 0xbU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 0xbU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 0xcU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 0xcU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 0xdU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 0xdU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
                  >> 0xeU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 0xeU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    if (((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched)) 
         & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all) 
            >> 0xfU))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check) 
                        >> 0xfU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = 1U;
    }
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout 
        = __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail;
    vlSelf->__PVT__pmp_req_err[1U] = __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check 
        = (0xffffU & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
                              >> 0x20U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all 
        = (0xffffU & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
                              >> 0x20U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp 
        = (1U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                 >> 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
        = (((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp) 
            | (3U != (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode))) 
           | ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml) 
              & (0U == (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type))));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 0U;
    if ((1U & (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 1U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 1U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 2U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 2U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 3U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 3U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 4U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 4U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 5U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 5U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 6U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 6U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 7U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 7U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 8U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 8U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 9U)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 9U)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 0xaU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 0xaU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 0xbU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 0xbU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 0xcU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 0xcU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 0xdU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 0xdU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if ((1U & ((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
               & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
                  >> 0xeU)))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 0xeU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    if (((~ (IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched)) 
         & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all) 
            >> 0xfU))) {
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail 
            = (1U & (~ ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check) 
                        >> 0xfU)));
        __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = 1U;
    }
    __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout 
        = __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail;
    vlSelf->__PVT__pmp_req_err[2U] = __Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             (((0xcU 
                                                                == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                                                               | (0xbU 
                                                                  == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) 
                                                              | ((8U 
                                                                  == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                                                                 & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                    >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff8U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((4U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x1fU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffc7U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x19U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffe3fU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x13U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff1ffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 9U)) | ((0x400U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0xdU)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff8fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          >> 3U)) | ((0x2000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   >> 7U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffc7fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 3U)) | ((0x10000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 1U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffe3ffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 5U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff1fffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0xbU)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf8ffffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x11U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xc7ffffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  << 0x17U)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x3fffffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
               << 0x1fU) | (0x40000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                           << 0x1dU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result);
    if ((4U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((0x100U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                    vlSelf->__PVT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    VL_ASSIGNBIT_II(0U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__Vfuncout))));
    VL_ASSIGNBIT_II(1U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [1U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__Vfuncout))));
    VL_ASSIGNBIT_II(2U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [2U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__Vfuncout))));
    VL_ASSIGNBIT_II(3U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [3U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__Vfuncout))));
    VL_ASSIGNBIT_II(4U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [4U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__Vfuncout))));
    VL_ASSIGNBIT_II(5U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [5U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__Vfuncout))));
    VL_ASSIGNBIT_II(6U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [6U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__Vfuncout))));
    VL_ASSIGNBIT_II(7U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [7U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__Vfuncout))));
    VL_ASSIGNBIT_II(8U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [8U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__Vfuncout))));
    VL_ASSIGNBIT_II(9U, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [9U];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__Vfuncout))));
    VL_ASSIGNBIT_II(0xaU, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0xaU];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__Vfuncout))));
    VL_ASSIGNBIT_II(0xbU, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0xbU];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__Vfuncout))));
    VL_ASSIGNBIT_II(0xcU, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0xcU];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__Vfuncout))));
    VL_ASSIGNBIT_II(0xdU, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0xdU];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__Vfuncout))));
    VL_ASSIGNBIT_II(0xeU, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0xeU];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__Vfuncout))));
    VL_ASSIGNBIT_II(0xfU, vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress, 
                    ((IData)((1U == (5U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q)))) 
                     & ([&]() {
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg 
                        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                        [0xfU];
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value = 0U;
                    if ((0x20U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg))) {
                        vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value 
                            = ((1U & (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg))
                                ? ((1U & (~ ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                             >> 1U))) 
                                   && (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                             >> 2U)))
                                : ((1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                          >> 1U)) || 
                                   (1U & ((IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg) 
                                          >> 2U))));
                    }
                    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__Vfuncout 
                        = vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value;
                }(), (IData)(vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__Vfuncout))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelf->__PVT__illegal_insn_id) 
           & (6U != (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    id_stage_i__DOT____VdfgTmp_hc885d520__0 = ((~ (IData)(vlSelf->__PVT__illegal_insn_id)) 
                                               & (IData)(vlSelf->id_stage_i__DOT____VdfgTmp_h97dc7a37__0));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
        = (QData)((IData)((((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed) 
                            << 0x10U) | (0xffffU & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res)))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[1U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[2U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[3U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[4U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[5U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[6U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[8U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[9U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xaU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xbU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xcU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xdU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xeU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xfU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x10U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x11U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x12U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x14U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x15U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x16U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x18U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x19U] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1aU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1cU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1dU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1eU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[1U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 1U)) + (1U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[3U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 3U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                            >> 2U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[5U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 5U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                            >> 4U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 7U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                            >> 6U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[9U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 9U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                            >> 8U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xbU] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0xbU)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                              >> 0xaU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xdU] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0xdU)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                              >> 0xcU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xfU] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0xfU)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                              >> 0xeU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x11U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x11U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x10U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x13U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x12U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x15U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x15U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x14U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x17U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x16U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x19U] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x19U)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x18U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x1bU)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x1aU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1dU] 
        = (0x3fU & ((1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                           >> 0x1dU)) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                               >> 0x1cU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x3fU & ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                     >> 0x1fU) + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                        >> 0x1eU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[3U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [1U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [3U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [5U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [7U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xbU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [9U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xbU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xfU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xdU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x11U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x13U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x15U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x19U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1bU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1dU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1fU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[7U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [3U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [7U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xfU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xbU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x13U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1bU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1fU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xfU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [7U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1fU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1fU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1fU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x17U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xbU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [7U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xbU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x13U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x13U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1bU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1bU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[5U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [3U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [5U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[9U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [7U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [9U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xdU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xbU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xdU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x11U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x11U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x15U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x13U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x15U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x19U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x19U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1dU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1bU] + vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1dU]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0U] 
        = (1U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[2U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [1U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                  >> 2U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[4U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [3U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                  >> 4U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[6U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [5U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                  >> 6U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[8U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [7U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                  >> 8U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xaU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [9U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                  >> 0xaU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xcU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xbU] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                    >> 0xcU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0xeU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xdU] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                    >> 0xeU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x10U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0xfU] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                    >> 0x10U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x12U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x11U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x12U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x14U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x13U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x14U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x16U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x15U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x16U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x18U] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x17U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x18U))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1aU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x19U] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x1aU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1cU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1bU] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x1cU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[0x1eU] 
        = (0x3fU & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                    [0x1dU] + (1U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
                                     >> 0x1eU))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[0U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h22a1ef58__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[1U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6eb24a6f__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[2U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hcf675d73__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[3U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h628470d0__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[4U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7c6aa705__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[5U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf053873f__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[6U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h685a1d6f__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[7U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6375b8a7__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0);
    vlSelf->if_stage_i__DOT____VdfgTmp_hc5fec331__0 
        = (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
           & ((3U == (3U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)) 
              & vlSelf->__PVT__pmp_req_err[1U]));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result 
        = ((0x31U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
               | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result)
            : ((0x32U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                   & (~ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result))
                : ((0x33U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                    ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                       ^ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result)
                    : (1U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelf->__PVT__rf_ren_a = ((IData)(id_stage_i__DOT____VdfgTmp_hc885d520__0) 
                               & (IData)(vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec));
    vlSelf->__PVT__rf_ren_b = ((IData)(id_stage_i__DOT____VdfgTmp_hc885d520__0) 
                               & (IData)(vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec));
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                = (0x3ffffffffULL & vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed);
        }
    } else if ((0U != (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
            = (0x3ffffffffULL & vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed);
    }
    vlSelf->__PVT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = ((IData)(vlSelf->__PVT__div_sel_ex) ? vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
            : vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[0U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h22a1ef58__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6eb24a6f__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hfa452640__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h22a1ef58__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6eb24a6f__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[1U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hcf675d73__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h628470d0__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hea5e29ed__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hcf675d73__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h628470d0__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[2U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7c6aa705__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf053873f__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h23b3dcca__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7c6aa705__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf053873f__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[3U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h685a1d6f__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6375b8a7__0);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hebb71bc7__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h685a1d6f__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6375b8a7__0);
    vlSelf->__PVT__if_stage_i__DOT__if_instr_err = 
        ((IData)(vlSelf->__PVT__if_stage_i__DOT__fetch_err) 
         | (vlSelf->__PVT__pmp_req_err[0U] | (IData)(vlSelf->if_stage_i__DOT____VdfgTmp_hc5fec331__0)));
    vlSelf->id_stage_i__DOT____VdfgTmp_haafd7db0__0 
        = ((~ ((IData)(vlSelf->__PVT__instr_fetch_err) 
               | ((IData)(vlSelf->__PVT__id_stage_i__DOT__wb_exception) 
                  | ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_run)) 
                     | ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__wb_exception)) 
                        & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d)))))) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz = ((IData)(vlSelf->__PVT__outstanding_load_wb) 
                                                   & (((IData)(vlSelf->__PVT__rf_rd_a_wb_match) 
                                                       & (IData)(vlSelf->__PVT__rf_ren_a)) 
                                                      | ((IData)(vlSelf->__PVT__rf_rd_b_wb_match) 
                                                         & (IData)(vlSelf->__PVT__rf_ren_b))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage4[0U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hfa452640__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hea5e29ed__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage4[1U] 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h23b3dcca__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hebb71bc7__0);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
        = ((ex_block_i__DOT__alu_i__DOT____VdfgTmp_hfa452640__0 
            ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hea5e29ed__0) 
           ^ (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h23b3dcca__0 
              ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hebb71bc7__0));
    vlSelf->__PVT__id_stage_i__DOT__instr_executing_spec 
        = ((IData)(vlSelf->id_stage_i__DOT____VdfgTmp_h97dc7a37__0) 
           & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz)) 
              & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_run)));
    vlSelf->__PVT__id_stage_i__DOT__instr_executing 
        = ((IData)(vlSelf->id_stage_i__DOT____VdfgTmp_haafd7db0__0) 
           & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz)) 
              & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
        = ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
            << 0x1fU) | ((0x40000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelf->__PVT__perf_branch = 0U;
    vlSelf->__PVT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d = 0U;
    vlSelf->__PVT__id_stage_i__DOT__stall_alu = 0U;
    if (vlSelf->__PVT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelf->__PVT__id_stage_i__DOT__branch_in_dec) {
                        vlSelf->__PVT__perf_branch = 1U;
                        vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d 
                            = (1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__jump_in_dec) {
                            vlSelf->__PVT__id_stage_i__DOT__jump_set_raw 
                                = vlSelf->__PVT__id_stage_i__DOT__jump_set_dec;
                        }
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_in_dec)))) {
                            if (vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec) {
                                vlSelf->__PVT__id_stage_i__DOT__stall_alu = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = ((~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)) 
           & ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
              & (IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec)));
    vlSelf->__PVT__mult_en_ex = ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
                                 & (IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec));
    vlSelf->__PVT__lsu_req = ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
                              & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)) 
                                 & (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)));
    if ((0x40U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        if ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        } else if ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        } else if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        } else {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                    ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                       ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_stage_i__DOT__alu_operand_a, 8U))
                    : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                        ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                           ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_stage_i__DOT__alu_operand_a, 0x10U))
                        : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev));
        }
    } else if ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        if ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                        = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                            ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                               ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_stage_i__DOT__alu_operand_a, 8U))
                            : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                                ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                                   ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_stage_i__DOT__alu_operand_a, 0x10U))
                                : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev));
                } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                                ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                                   ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_stage_i__DOT__alu_operand_a, 8U))
                                : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                                    ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                                       ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__id_stage_i__DOT__alu_operand_a, 0x10U))
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev));
                    } else {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    }
                } else {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                }
            } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    } else {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                } else {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                }
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            } else {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                    = ((0U == (0x1fU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                        ? ((0x20U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                            ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
                            : vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                           [0U]) : (vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                                    [0U] | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
            }
        } else if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = ((0U == (0x1fU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                                ? ((0x20U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                                    ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                                   [0U]) : (vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                                            [0U] | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                    } else {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = (vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                               [0U] | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result);
                    }
                } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                        = ((0U == vlSelf->__PVT__alu_operand_b_ex)
                            ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
                            : vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                           [0U]);
                } else {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                }
            } else {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            }
        } else {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        }
    } else if ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
    } else if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                } else {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                        = ((0U == (0x1fU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                            ? ((0x20U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                                ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
                                : vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                               [0U]) : (vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                                        [0U] | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                    = ((0U == (0x1fU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt)))
                        ? ((0x20U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt))
                            ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
                            : vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                           [0U]) : (vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                                    [0U] | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
            } else {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            }
        } else {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
        }
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result 
        = ((0x39U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev
            : ((0x3aU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                   >> 1U) : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw));
    vlSelf->__PVT__id_stage_i__DOT__jump_set = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                                & (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_set_raw));
    vlSelf->__PVT__id_stage_i__DOT__branch_set_raw 
        = ((2U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))
            ? (IData)(vlSelf->__PVT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q)
            : (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = ((~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)) 
           & (IData)(vlSelf->__PVT__mult_en_ex));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid 
        = vlSelf->__PVT__mult_en_ex;
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
        }
    } else if ((0U != (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    }
    vlSelf->__PVT__data_req_out = 0U;
    vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__data_req_out = 1U;
            if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                            >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__data_req_out = 1U;
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 1U;
            }
        } else if (vlSelf->__PVT__lsu_req) {
            vlSelf->__PVT__data_req_out = 1U;
            if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 1U;
            }
        }
    }
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q;
    vlSelf->__PVT__load_store_unit_i__DOT__addr_update = 0U;
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q;
    if ((4U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if ((0x100U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d 
                        = vlSelf->__PVT__pmp_req_err
                        [2U];
                    vlSelf->__PVT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                    >> 7U)));
                    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d 
                        = (1U & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                 >> 7U));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d 
                    = vlSelf->__PVT__pmp_req_err[2U];
                vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d 
                    = (1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                              >> 7U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)));
            }
        }
        if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q)));
            }
        } else if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                           >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
            vlSelf->__PVT__load_store_unit_i__DOT__addr_update 
                = (1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                          >> 9U) & (~ ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                        >> 7U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))));
        }
    } else {
        if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (vlSelf->__PVT__lsu_req) {
                vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d 
                    = vlSelf->__PVT__pmp_req_err[2U];
                vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__addr_update = 1U;
            }
        } else if (vlSelf->__PVT__lsu_req) {
            if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                vlSelf->__PVT__load_store_unit_i__DOT__addr_update = 1U;
            }
        }
    }
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q;
}
