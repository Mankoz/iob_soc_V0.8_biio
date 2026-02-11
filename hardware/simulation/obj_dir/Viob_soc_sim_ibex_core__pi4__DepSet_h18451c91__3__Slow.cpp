// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2\n"); );
    // Init
    CData/*0:0*/ if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0;
    if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0 = 0;
    CData/*0:0*/ if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0;
    if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0 = 0;
    CData/*0:0*/ id_stage_i__DOT____VdfgTmp_hc885d520__0;
    id_stage_i__DOT____VdfgTmp_hc885d520__0 = 0;
    CData/*0:0*/ id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0;
    id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0 = 0;
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
    // Body
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
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
            = ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))
                ? 0x3ffffffffULL : (QData)((IData)(vlSelf->__PVT__multdiv_operand_a_ex)));
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
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((0x37U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev
            : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode)
                ? 0x80000000U : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left)
                                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
                                  : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a)));
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
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mtval_d 
                    = vlSelf->__PVT__csr_mtval;
            }
        }
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
    } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
        if (vlSelf->__PVT__csr_restore_mret_id) {
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->__PVT__cs_registers_i__DOT__mepc_d 
                    = vlSelf->__PVT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
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
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = ((~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)) 
           & ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
              & (IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec)));
    vlSelf->__PVT__mult_en_ex = ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
                                 & (IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec));
    vlSelf->__PVT__lsu_req = ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
                              & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access)) 
                                 & (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result 
        = ((0x39U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev
            : ((0x3aU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                ? (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev 
                   >> 1U) : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw));
    if (vlSelf->__PVT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelf->__PVT__id_stage_i__DOT__branch_in_dec) {
                        vlSelf->__PVT__perf_branch = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__jump_in_dec) {
                            vlSelf->__PVT__id_stage_i__DOT__jump_set_raw 
                                = vlSelf->__PVT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__id_stage_i__DOT__jump_set = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                                & (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_set_raw));
    if (vlSelf->__PVT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelf->__PVT__id_stage_i__DOT__branch_in_dec) {
                        vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d 
                            = (1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
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
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q;
    vlSelf->__PVT__load_store_unit_i__DOT__addr_update = 0U;
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q;
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q;
    vlSelf->__PVT__perf_store = 0U;
    vlSelf->__PVT__perf_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__data_req_out = 1U;
            if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                            >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                    vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 1U;
                    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                               >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                >> 9U)));
            } else if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__data_req_out = 1U;
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelf->__PVT__lsu_req) {
            vlSelf->__PVT__data_req_out = 1U;
            if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = 1U;
                vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelf->__PVT__lsu_req) {
                    vlSelf->__PVT__perf_store = vlSelf->__PVT__id_stage_i__DOT__lsu_we;
                    vlSelf->__PVT__perf_load = (1U 
                                                & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
    }
    vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs;
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
        if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((0x100U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
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
                vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            }
        } else if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                           >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
            vlSelf->__PVT__load_store_unit_i__DOT__addr_update 
                = (1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                          >> 9U) & (~ ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
                                        >> 7U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))));
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns 
                = ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])
                    ? 0U : 3U);
        } else if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
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
                vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
            }
        } else if (vlSelf->__PVT__lsu_req) {
            if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
                vlSelf->__PVT__load_store_unit_i__DOT__addr_update = 1U;
                vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
            } else {
                vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
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
        vlSelf->__PVT__ex_block_i__DOT__alu_result = 0U;
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))) {
                                vlSelf->__PVT__ex_block_i__DOT__alu_result 
                                    = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_result = 0U;
        if ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
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
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
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
                            vlSelf->__PVT__ex_block_i__DOT__alu_result 
                                = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                        } else {
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                            vlSelf->__PVT__ex_block_i__DOT__alu_result 
                                = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result;
                        }
                    } else {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result;
                    }
                } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                            vlSelf->__PVT__ex_block_i__DOT__alu_result 
                                = (((~ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result) 
                                    & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a) 
                                   | (((~ ((IData)(0xffffffffU) 
                                           << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len))) 
                                       & vlSelf->__PVT__alu_operand_b_ex) 
                                      << (0x1fU & (vlSelf->__PVT__alu_operand_b_ex 
                                                   >> 0x10U))));
                        } else {
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                            vlSelf->__PVT__ex_block_i__DOT__alu_result 
                                = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                        }
                    } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                    } else {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result;
                    }
                } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_result 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result;
                } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_result 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result;
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
                    vlSelf->__PVT__ex_block_i__DOT__alu_result 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
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
                                                [0U] 
                                                | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result));
                        } else {
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                                = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result;
                            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                                = (vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                                   [0U] | vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result);
                        }
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                    } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result 
                            = ((0U == vlSelf->__PVT__alu_operand_b_ex)
                                ? vlSelf->__PVT__id_stage_i__DOT__alu_operand_a
                                : vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                               [0U]);
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                    } else {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result;
                    }
                } else {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_result 
                        = ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                               [0x1fU]) : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                           [0x1fU]);
                }
            } else {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_result 
                    = ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((0x26U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? (((- (IData)((1U 
                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))
                                : (((- (IData)((1U 
                                                & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a)))
                            : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result)
                        : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result
                                : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result)
                            : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result));
            }
        } else if ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_result 
                = ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                    ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result
                                : (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                            : (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                        : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                            : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                : (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U)))))
                    : ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                       >> 1U)) : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result)
                        : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result
                                : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result)
                            : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result
                                : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result))));
        } else if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
            if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                    if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result;
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
                        vlSelf->__PVT__ex_block_i__DOT__alu_result 
                            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
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
                    vlSelf->__PVT__ex_block_i__DOT__alu_result 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result;
                } else {
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                    vlSelf->__PVT__ex_block_i__DOT__alu_result 
                        = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
                }
            } else {
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                    = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
                vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
                vlSelf->__PVT__ex_block_i__DOT__alu_result 
                    = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result;
            }
        } else {
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[0U] 
                = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
            vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[1U] = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = 0U;
            vlSelf->__PVT__ex_block_i__DOT__alu_result 
                = ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                    : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                        : (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U))));
        }
    }
    if (vlSelf->__PVT__ex_block_i__DOT__multdiv_sel) {
        vlSelf->__PVT__imd_val_d_ex[1U] = (QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
        if (vlSelf->__PVT__div_sel_ex) {
            vlSelf->__PVT__imd_val_d_ex[0U] = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
            vlSelf->__PVT__result_ex = (IData)(vlSelf->__PVT__imd_val_q_ex
                                               [0U]);
        } else {
            vlSelf->__PVT__imd_val_d_ex[0U] = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
            vlSelf->__PVT__result_ex = (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
        }
        vlSelf->__PVT__imd_val_we_ex = (((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                                         << 1U) | ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                                   | (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
        vlSelf->__PVT__ex_valid = (1U & ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                                         | (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    } else {
        vlSelf->__PVT__imd_val_d_ex[1U] = (QData)((IData)(
                                                          vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d
                                                          [1U]));
        vlSelf->__PVT__imd_val_d_ex[0U] = (QData)((IData)(
                                                          vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d
                                                          [0U]));
        vlSelf->__PVT__imd_val_we_ex = vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_we;
        vlSelf->__PVT__ex_valid = (1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_we)))));
        vlSelf->__PVT__result_ex = vlSelf->__PVT__ex_block_i__DOT__alu_result;
    }
    vlSelf->__PVT__id_stage_i__DOT__branch_set = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                                  & (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set_raw));
    vlSelf->__PVT__lsu_req_done = (((IData)(vlSelf->__PVT__lsu_req) 
                                    | (0U != (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                   & (0U == (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns)));
    vlSelf->__PVT__pc_set = 0U;
    vlSelf->__PVT__perf_jump = 0U;
    vlSelf->__PVT__perf_tbranch = 0U;
    vlSelf->__PVT__id_stage_i__DOT__rf_we_raw = vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    vlSelf->__PVT__id_stage_i__DOT__stall_mem = ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q) 
                                                 & ((IData)(vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                                    | ((~ (IData)(vlSelf->__PVT__lsu_req_done)) 
                                                       & (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec))));
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->__PVT__pc_set = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->__PVT__pc_set = 1U;
                }
            } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->__PVT__pc_set = 1U;
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                    vlSelf->__PVT__pc_set = 0U;
                                }
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelf->__PVT__pc_set = 1U;
            } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelf->__PVT__pc_set = 1U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set) 
                 | (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_set))) {
                vlSelf->__PVT__pc_set = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 1U)))) {
        vlSelf->__PVT__pc_set = 1U;
    }
    vlSelf->__PVT__csr_mtvec_init = ((0U == (IData)(vlSelf->__PVT__pc_mux_id)) 
                                     & (IData)(vlSelf->__PVT__pc_set));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlSelf->__PVT__pc_set) | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q)));
    if (vlSelf->__PVT__pc_set) {
        vlSelf->__PVT__if_stage_i__DOT__prefetch_addr 
            = (0xfffffffeU & vlSelf->__PVT__if_stage_i__DOT__fetch_addr_n);
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
            = (0x7fffffffU & (vlSelf->__PVT__if_stage_i__DOT__prefetch_addr 
                              >> 1U));
    } else {
        vlSelf->__PVT__if_stage_i__DOT__prefetch_addr = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
            = (0x7fffffffU & (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                              + ((2U & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                        << 1U)) | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))));
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = (((IData)(vlSelf->__PVT__instr_req_int) & 
            (0xaU == (0x1eU & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U]))) 
           & ((~ ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                  >> 1U)) & ((~ (IData)((3U == (3U 
                                                & (((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                    >> 1U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                            >> 1U)))))))) 
                             | (IData)(vlSelf->__PVT__pc_set))));
    vlSelf->__PVT__id_stage_i__DOT__multicycle_done 
        = (1U & ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)
                  ? (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_mem))
                  : (IData)(vlSelf->__PVT__ex_valid)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelf->__PVT__pc_set) ? vlSelf->__PVT__if_stage_i__DOT__prefetch_addr
                : vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0 
        = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelf->instr_req_o = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
                           | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = vlSelf->__PVT__id_stage_i__DOT__id_fsm_q;
    vlSelf->__PVT__id_stage_i__DOT__stall_branch = 0U;
    vlSelf->__PVT__id_stage_i__DOT__stall_jump = 0U;
    vlSelf->__PVT__id_stage_i__DOT__stall_multdiv = 0U;
    if (vlSelf->__PVT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_in_dec)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_in_dec)))) {
                            if (vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec) {
                                vlSelf->__PVT__id_stage_i__DOT__stall_alu = 1U;
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->__PVT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelf->__PVT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec) {
                    vlSelf->__PVT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlSelf->__PVT__ex_valid));
                }
                if (((IData)(vlSelf->__PVT__id_stage_i__DOT__multicycle_done) 
                     & (IData)(vlSelf->__PVT__multdiv_ready_id))) {
                    vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = 0U;
                }
                if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__multicycle_done) 
                              & (IData)(vlSelf->__PVT__multdiv_ready_id))))) {
                    vlSelf->__PVT__id_stage_i__DOT__stall_branch 
                        = vlSelf->__PVT__id_stage_i__DOT__branch_in_dec;
                    vlSelf->__PVT__id_stage_i__DOT__stall_jump 
                        = vlSelf->__PVT__id_stage_i__DOT__jump_in_dec;
                    vlSelf->__PVT__id_stage_i__DOT__stall_multdiv 
                        = vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)))) {
                if (vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__ex_valid)))) {
                        vlSelf->__PVT__id_stage_i__DOT__rf_we_raw = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__stall_multdiv = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_in_dec)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_in_dec)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec) {
                            vlSelf->__PVT__id_stage_i__DOT__rf_we_raw = 0U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelf->__PVT__id_stage_i__DOT__branch_in_dec) {
                        vlSelf->__PVT__id_stage_i__DOT__stall_branch 
                            = (1U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                     >> 1U));
                    }
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__jump_in_dec) {
                            vlSelf->__PVT__id_stage_i__DOT__stall_jump = 0U;
                        }
                    }
                }
            }
            if (vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec) {
                if ((1U & (~ (IData)(vlSelf->__PVT__lsu_req_done)))) {
                    vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = 1U;
                }
            } else if (vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelf->__PVT__ex_valid)))) {
                    vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__id_fsm_d 
                    = (1U & ((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_in_dec)
                              ? ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                 >> 1U) : ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_in_dec))) 
                                           && (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec))));
            }
        }
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelf->__PVT__pc_set) ? vlSelf->__PVT__if_stage_i__DOT__prefetch_addr
             : (0xfffffffcU & vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + ((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0) 
              << 2U));
    vlSelf->__VdfgTmp_hba890a99__0 = (((IData)(vlSelf->__PVT__ctrl_busy) 
                                       << 2U) | (((
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                                   | (IData)(vlSelf->instr_req_o)) 
                                                  << 1U) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))));
    if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0 
        = ((IData)(vlSelf->instr_req_o) & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                           >> 0xcU));
    vlSelf->__PVT__id_stage_i__DOT__stall_id = ((IData)(vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz) 
                                                | ((IData)(vlSelf->__PVT__id_stage_i__DOT__stall_mem) 
                                                   | ((IData)(vlSelf->__PVT__id_stage_i__DOT__stall_multdiv) 
                                                      | ((IData)(vlSelf->__PVT__id_stage_i__DOT__stall_jump) 
                                                         | ((IData)(vlSelf->__PVT__id_stage_i__DOT__stall_alu) 
                                                            | (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_branch))))));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & ((((IData)(if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0) 
                    & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
           | (1U & ((IData)(if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0) 
                    | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0 
        = ((IData)(if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelf->__PVT__en_wb = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_id)) 
                            & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
                               & (IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & ((((IData)(if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0) 
                    & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSelf->__PVT__pc_set) 
                                              << 1U) 
                                             & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                            | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q))))) 
           | (1U & ((IData)(if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0) 
                    | (((IData)(vlSelf->__PVT__pc_set) 
                        & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                       | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__stall_id) 
           | ((~ (IData)(vlSelf->__PVT__multdiv_ready_id)) 
              & (IData)(vlSelf->__PVT__en_wb)));
    vlSelf->__PVT__instr_id_done = ((IData)(vlSelf->__PVT__en_wb) 
                                    & (IData)(vlSelf->__PVT__multdiv_ready_id));
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d 
        = ((IData)(vlSelf->__PVT__instr_id_done) | 
           ((~ (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done)) 
            & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q)));
    vlSelf->__PVT__csr_op_en = ((IData)(vlSelf->__PVT__csr_access) 
                                & ((IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing) 
                                   & (IData)(vlSelf->__PVT__instr_id_done)));
    vlSelf->__PVT__fcov_csr_write = (((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wr) 
                                      & (IData)(vlSelf->__PVT__csr_access)) 
                                     & ((IData)(vlSelf->__PVT__csr_op_en) 
                                        | (IData)(vlSelf->__PVT__illegal_insn_id)));
    vlSelf->__PVT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wr) 
           & ((~ (IData)(vlSelf->__PVT__illegal_csr_insn_id)) 
              & (IData)(vlSelf->__PVT__csr_op_en)));
    vlSelf->__PVT__id_stage_i__DOT__csr_pipe_flush = 0U;
    if (((IData)(vlSelf->__PVT__csr_op_en) & ((1U == (IData)(vlSelf->__PVT__csr_op)) 
                                              | (2U 
                                                 == (IData)(vlSelf->__PVT__csr_op))))) {
        if (((((0x300U == (vlSelf->__PVT__instr_rdata_id 
                           >> 0x14U)) | (0x304U == 
                                         (vlSelf->__PVT__instr_rdata_id 
                                          >> 0x14U))) 
              | (0x747U == (vlSelf->__PVT__instr_rdata_id 
                            >> 0x14U))) | (0x1dU == 
                                           (vlSelf->__PVT__instr_rdata_id 
                                            >> 0x19U)))) {
            vlSelf->__PVT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    } else if (((IData)(vlSelf->__PVT__csr_op_en) & 
                (0U != (IData)(vlSelf->__PVT__csr_op)))) {
        if (((((0x7b0U == (vlSelf->__PVT__instr_rdata_id 
                           >> 0x14U)) | (0x7b1U == 
                                         (vlSelf->__PVT__instr_rdata_id 
                                          >> 0x14U))) 
              | (0x7b2U == (vlSelf->__PVT__instr_rdata_id 
                            >> 0x14U))) | (0x7b3U == 
                                           (vlSelf->__PVT__instr_rdata_id 
                                            >> 0x14U)))) {
            vlSelf->__PVT__id_stage_i__DOT__csr_pipe_flush = 1U;
        }
    }
    vlSelf->__PVT__cs_registers_i__DOT__mie_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mscratch_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__dscratch1_en = 0U;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h32371cea__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h923bbe04__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hd8cd6cef__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h5de6a269__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hf8c35188__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hfc13208b__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hb2b39384__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h37ea9ebb__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h190816ea__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h381602dc__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h02beeb2f__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h5c76801e__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h76221c7e__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h73e1ef23__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h92487aac__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hf386bd8d__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1c4f1dd2__0 
        = ((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0)) 
           & (IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int));
    vlSelf->__PVT__cs_registers_i__DOT__mtvec_en = vlSelf->__PVT__csr_mtvec_init;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h7037298a__0 
        = ((~ (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q)) 
           & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) 
              & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__depc_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mtval_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mcause_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mepc_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_d = vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_d = vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    vlSelf->__PVT__dummy_instr_seed_en = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) 
                                          & (0x7c1U 
                                             == (IData)(vlSelf->__PVT__csr_addr)));
    vlSelf->__PVT__cs_registers_i__DOT__mcause_d = 
        (((3U == (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x1eU)) << 6U) | (((2U == (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                >> 0x1eU)) 
                                        << 5U) | (0x1fU 
                                                  & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d 
        = vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q;
    vlSelf->double_fault_seen_o = 0U;
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->__PVT__csr_addr))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__csr_addr))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mscratch_en = 1U;
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
            }
            if ((0x400U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->__PVT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__csr_addr))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_en = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if (vlSelf->__PVT__debug_csr_save) {
            vlSelf->__PVT__cs_registers_i__DOT__dcsr_en = 1U;
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__csr_addr))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__depc_en = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if (vlSelf->__PVT__debug_csr_save) {
            vlSelf->__PVT__cs_registers_i__DOT__depc_en = 1U;
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->__PVT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__csr_addr))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mtval_en = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mtval_en = 1U;
            }
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mstatus_en = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
        if (vlSelf->__PVT__csr_restore_mret_id) {
            vlSelf->__PVT__cs_registers_i__DOT__mstatus_en = 1U;
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->__PVT__csr_addr))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mcause_en = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
        if (vlSelf->__PVT__csr_restore_mret_id) {
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->__PVT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__csr_addr))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mepc_en = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
        if (vlSelf->__PVT__csr_restore_mret_id) {
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->__PVT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
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
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffe7U 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff9ffU 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d);
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if (vlSelf->__PVT__debug_csr_save) {
            vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q));
            vlSelf->__PVT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlSelf->__PVT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_cause_q) 
                      << 6U));
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            ((0x20U 
                                                              & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                                 << 2U)) 
                                                             | ((0x10U 
                                                                 & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U)) 
                                                                | ((0xcU 
                                                                    & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                                       >> 9U)) 
                                                                   | ((2U 
                                                                       & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                                          >> 0x10U)) 
                                                                      | (1U 
                                                                         & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                                            >> 0x15U))))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlSelf->__PVT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0x33U 
                                                                 & (IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d));
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
                }
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mstatus_d 
                    = ((3U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d)) 
                       | ((0x10U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 1U)) | ((IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q) 
                                               << 2U)));
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
        if (vlSelf->__PVT__csr_restore_mret_id) {
            vlSelf->__PVT__cs_registers_i__DOT__mstatus_d 
                = ((0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d)) 
                   | (0x20U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                               << 1U)));
            if ((3U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                              >> 2U)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mstatus_d 
                    = (0x3dU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d));
            }
            vlSelf->__PVT__cs_registers_i__DOT__mstatus_d 
                = ((0x23U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__mstatus_d)) 
                   | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)
                        ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q)
                        : 4U) << 2U));
        }
    }
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                      >> 0xbU)))) {
            if ((0x400U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__csr_addr) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->__PVT__csr_addr) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__csr_addr) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                                        vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d 
                                                            = 
                                                            (0xfeU 
                                                             & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int);
                                                        vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
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
            }
        }
    }
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mcause_d 
                    = vlSelf->__PVT__exc_cause;
                if ((1U & (~ (IData)((0U != (0x60U 
                                             & (IData)(vlSelf->__PVT__cs_registers_i__DOT__mcause_d))))))) {
                    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d 
                        = (0x40U | (IData)(vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    if ((0x40U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))) {
                        vlSelf->double_fault_seen_o = 1U;
                        vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d 
                            = (0x80U | (IData)(vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->__PVT__csr_restore_dret_id)))) {
        if (vlSelf->__PVT__csr_restore_mret_id) {
            vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
            vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d 
                = (0xbfU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d));
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelf->__PVT__cs_registers_i__DOT__mcause_d 
                    = vlSelf->__PVT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
            }
        }
    }
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    if (vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) {
        if ((0x800U & (IData)(vlSelf->__PVT__csr_addr))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((0x100U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((8U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((4U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((2U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    }
                                }
                            }
                        }
                        if ((0x80U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 5U)))) {
                                    if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((8U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((4U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((2U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
            | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
               | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu)))) 
           | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | ((IData)(vlSelf->__PVT__id_stage_i__DOT__csr_pipe_flush) 
                 & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q))));
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x1ffdU & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q));
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__perturbed_d 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__perturbed_q) 
           | (IData)(vlSelf->__PVT__dummy_instr_seed_en));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall)) 
                 & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__special_req) 
                       | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending)))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_set))) {
                        vlSelf->__PVT__perf_jump = vlSelf->__PVT__id_stage_i__DOT__jump_set;
                        vlSelf->__PVT__perf_tbranch 
                            = vlSelf->__PVT__id_stage_i__DOT__branch_set;
                    }
                    if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlSelf->__PVT__instr_valid_clear = (1U & ((~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall) 
                                                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) 
                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                     & ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending)))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0) {
                    if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            } else {
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
        }
    }
    if ((5U != (0xfU & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                        >> 1U)))) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
    }
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((~ (IData)(vlSelf->__PVT__instr_valid_clear)) 
           & ((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set_raw) 
              | ((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q) 
                 | (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_set_raw))));
    vlSelf->__PVT__id_in_ready = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall)) 
                                        & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if) 
                                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__retain_id)))));
    vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw) 
           & (IData)(vlSelf->__PVT__id_in_ready));
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0 
        = (((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
            & (IData)(vlSelf->__PVT__id_in_ready)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                        }
                    }
                }
                if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                     & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                           & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__special_req) {
                if (((IData)(vlSelf->__PVT__multdiv_ready_id) 
                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__wb_exception))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                }
            }
            if (id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0) {
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                }
            }
        } else {
            if (vlSelf->__PVT__id_in_ready) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
            }
            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (((IData)(((0U != (0x60U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U])) 
                                 | (0U != vlSelf->__PVT__irqs))) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       | (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                          >> 2U)))) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
            }
        } else {
            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 4U : 1U);
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr) 
           & (IData)(vlSelf->__PVT__id_in_ready));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | ((0xffffffe0U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr) 
                 | ((((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)) 
                      & (IData)(vlSelf->__PVT__id_in_ready)) 
                     << 4U) | ((((IData)(vlSelf->id_stage_i__DOT____VdfgTmp_haafd7db0__0) 
                                 & ((IData)(vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                    | (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz))) 
                                << 3U) | ((IData)(vlSelf->__PVT__perf_instr_ret_wb) 
                                          << 2U)))));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffe1fU & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((IData)(vlSelf->__PVT__perf_branch) 
               << 8U) | (((IData)(vlSelf->__PVT__perf_jump) 
                          << 7U) | (((IData)(vlSelf->__PVT__perf_store) 
                                     << 6U) | ((IData)(vlSelf->__PVT__perf_load) 
                                               << 5U)))));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffe1ffU & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec) 
                & (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_multdiv)) 
               << 0xcU) | ((((IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec) 
                             & (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_multdiv)) 
                            << 0xbU) | ((((IData)(vlSelf->__PVT__perf_instr_ret_wb) 
                                          & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q)) 
                                         << 0xaU) | 
                                        ((IData)(vlSelf->__PVT__perf_tbranch) 
                                         << 9U)))));
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_d 
        = (((~ (IData)(vlSelf->__PVT__pc_set)) & (IData)(vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we)) 
           | ((~ (IData)(vlSelf->__PVT__instr_valid_clear)) 
              & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelf->__PVT__if_stage_i__DOT__g_secure_pc__DOT__prev_instr_seq_d 
        = (((IData)(vlSelf->__PVT__if_stage_i__DOT__g_secure_pc__DOT__prev_instr_seq_q) 
            | (IData)(vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we)) 
           & ((~ (IData)(vlSelf->__PVT__pc_set)) & 
              ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__if_instr_err)) 
               & (~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)))));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0) 
           & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelf->if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0 
        = ((~ (IData)((0U != vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q))) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en));
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we));
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & ((~ (IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q)) 
                      & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr))
                ? (1ULL + vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 2U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 2U))) ? (1ULL 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 3U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((8U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 3U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 3U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 4U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x10U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 4U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 4U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 5U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x20U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 5U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 5U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 6U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x40U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 6U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 6U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 7U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x80U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 7U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 7U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 8U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x100U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 8U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 8U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 9U));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x200U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 9U)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 9U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xaU));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x400U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 0xaU)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 0xaU))) ? 
               ((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xbU));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x800U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 0xbU)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 0xbU))) ? 
               ((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xcU));
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x1000U & vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 0xcU)) & (vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 0xcU))) ? 
               ((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = (((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h8784150c__0) 
            << 2U) | (((((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0) 
                         & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                        | ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                           & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h18c9f4a7__0))) 
                       << 1U) | (((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0) 
                                  & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 | ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                    & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d767ff5__0)))));
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_d 
        = ((IData)(vlSelf->if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0)
            ? 0U : (((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en) 
                     & (0xfffffffeU == vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_q))
                     ? 0U : (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_q 
                             + (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en))));
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_d 
        = ((IData)(vlSelf->__PVT__dummy_instr_seed_en)
            ? vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_d
            : ((IData)(vlSelf->if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0)
                ? 0xac533bf4U : ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en)
                                  ? ((0x80200003U & 
                                      (- (IData)((1U 
                                                  & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q)))) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q, 1U))
                                  : vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q)));
}
