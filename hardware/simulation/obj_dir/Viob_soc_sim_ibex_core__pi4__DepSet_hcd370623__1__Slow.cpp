// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1\n"); );
    // Init
    CData/*4:0*/ __PVT__if_stage_i__DOT__irq_vec;
    __PVT__if_stage_i__DOT__irq_vec = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__permission_check = 0;
    // Body
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffeffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout)) 
              << 8U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 9U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffdffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__43__Vfuncout)) 
              << 9U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xaU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xaU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffbffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__46__Vfuncout)) 
              << 0xaU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xbU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xbU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffff7ffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__49__Vfuncout)) 
              << 0xbU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xcU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xcU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffefffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__52__Vfuncout)) 
              << 0xcU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xdU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xdU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffdfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__55__Vfuncout)) 
              << 0xdU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xeU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xeU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffbfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__58__Vfuncout)) 
              << 0xeU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xfU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xfU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffff7fffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__61__Vfuncout)) 
              << 0xfU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x10U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffeffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__65__Vfuncout)) 
              << 0x10U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x11U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffdffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__68__Vfuncout)) 
              << 0x11U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x12U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffbffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__71__Vfuncout)) 
              << 0x12U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x13U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffff7ffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__74__Vfuncout)) 
              << 0x13U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x14U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffefffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__77__Vfuncout)) 
              << 0x14U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x15U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffdfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__80__Vfuncout)) 
              << 0x15U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x16U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffbfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__83__Vfuncout)) 
              << 0x16U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x17U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffff7fffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__86__Vfuncout)) 
              << 0x17U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x18U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffeffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__89__Vfuncout)) 
              << 0x18U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x19U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffdffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__Vfuncout)) 
              << 0x19U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1aU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xaU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffbffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__95__Vfuncout)) 
              << 0x1aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1bU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xbU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffff7ffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__98__Vfuncout)) 
              << 0x1bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1cU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xcU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffefffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__101__Vfuncout)) 
              << 0x1cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1dU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xdU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffdfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__104__Vfuncout)) 
              << 0x1dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1eU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xeU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffbfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__107__Vfuncout)) 
              << 0x1eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1fU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xfU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffff7fffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__110__Vfuncout)) 
              << 0x1fU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x20U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffeffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__114__Vfuncout)) 
              << 0x20U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x21U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffdffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__117__Vfuncout)) 
              << 0x21U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x22U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffbffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__120__Vfuncout)) 
              << 0x22U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x23U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfff7ffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__123__Vfuncout)) 
              << 0x23U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x24U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffefffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__126__Vfuncout)) 
              << 0x24U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x25U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffdfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__129__Vfuncout)) 
              << 0x25U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x26U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffbfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__132__Vfuncout)) 
              << 0x26U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x27U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xff7fffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__135__Vfuncout)) 
              << 0x27U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x28U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfeffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__138__Vfuncout)) 
              << 0x28U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x29U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfdffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__141__Vfuncout)) 
              << 0x29U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2aU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xaU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfbffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__144__Vfuncout)) 
              << 0x2aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2bU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xbU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xf7ffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__147__Vfuncout)) 
              << 0x2bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2cU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xcU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xefffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__150__Vfuncout)) 
              << 0x2cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2dU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xdU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xdfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__153__Vfuncout)) 
              << 0x2dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2eU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xeU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xbfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__156__Vfuncout)) 
              << 0x2eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2fU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xfU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x7fffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__159__Vfuncout)) 
              << 0x2fU));
    vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec));
    vlSelf->__PVT__csr_mtval = 0U;
    vlSelf->__PVT__csr_save_id = 0U;
    vlSelf->__PVT__csr_save_cause = 0U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->__PVT__csr_save_id = 1U;
                        vlSelf->__PVT__csr_save_cause = 1U;
                    }
                } else {
                    vlSelf->__PVT__csr_save_cause = 1U;
                }
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelf->__PVT__csr_save_id = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))));
                    vlSelf->__PVT__csr_save_cause = 1U;
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelf->__PVT__csr_save_id = 0U;
                                        vlSelf->__PVT__csr_save_cause = 0U;
                                        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
    }
    vlSelf->__PVT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlSelf->__PVT__csr_mtval 
                                = ((IData)(vlSelf->__PVT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlSelf->__PVT__pc_id)
                                    : vlSelf->__PVT__pc_id);
                            vlSelf->__PVT__exc_cause = 1U;
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                            vlSelf->__PVT__csr_mtval 
                                = ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                    ? (IData)(vlSelf->__PVT__instr_rdata_c_id)
                                    : vlSelf->__PVT__instr_rdata_id);
                            vlSelf->__PVT__exc_cause = 2U;
                        } else {
                            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                    if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                        vlSelf->__PVT__csr_mtval 
                                            = vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q;
                                    } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                        vlSelf->__PVT__csr_mtval 
                                            = vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q;
                                    }
                                }
                            }
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
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
    }
    vlSelf->__PVT__cs_registers_i__DOT__mstack_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
    if (vlSelf->__PVT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelf->__PVT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelf->__PVT__cs_registers_i__DOT__mstack_en = 1U;
            }
        }
        vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d = 3U;
    } else if (vlSelf->__PVT__csr_restore_dret_id) {
        vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
    } else if (vlSelf->__PVT__csr_restore_mret_id) {
        vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
            = (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                     >> 2U));
    }
    __PVT__if_stage_i__DOT__irq_vec = (0x1fU & (IData)(vlSelf->__PVT__exc_cause));
    if ((0x40U & (IData)(vlSelf->__PVT__exc_cause))) {
        __PVT__if_stage_i__DOT__irq_vec = 0x1fU;
    }
    vlSelf->__PVT__if_stage_i__DOT__exc_pc = ((2U & (IData)(vlSelf->__PVT__exc_pc_mux_id))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->__PVT__exc_pc_mux_id))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                   | ((IData)(__PVT__if_stage_i__DOT__irq_vec) 
                                                      << 2U))
                                                   : 
                                                  (0xffffff00U 
                                                   & vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)));
}

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___ctor_var_reset(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->hart_id_i = VL_RAND_RESET_I(32);
    vlSelf->boot_addr_i = VL_RAND_RESET_I(32);
    vlSelf->instr_req_o = VL_RAND_RESET_I(1);
    vlSelf->instr_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->instr_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->instr_addr_o = VL_RAND_RESET_I(32);
    vlSelf->instr_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->instr_err_i = VL_RAND_RESET_I(1);
    vlSelf->data_req_o = VL_RAND_RESET_I(1);
    vlSelf->data_gnt_i = VL_RAND_RESET_I(1);
    vlSelf->data_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->data_we_o = VL_RAND_RESET_I(1);
    vlSelf->data_be_o = VL_RAND_RESET_I(4);
    vlSelf->data_addr_o = VL_RAND_RESET_I(32);
    vlSelf->data_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->data_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->data_err_i = VL_RAND_RESET_I(1);
    vlSelf->dummy_instr_id_o = VL_RAND_RESET_I(1);
    vlSelf->dummy_instr_wb_o = VL_RAND_RESET_I(1);
    vlSelf->rf_raddr_a_o = VL_RAND_RESET_I(5);
    vlSelf->rf_raddr_b_o = VL_RAND_RESET_I(5);
    vlSelf->rf_waddr_wb_o = VL_RAND_RESET_I(5);
    vlSelf->rf_we_wb_o = VL_RAND_RESET_I(1);
    vlSelf->rf_wdata_wb_ecc_o = VL_RAND_RESET_Q(39);
    vlSelf->rf_rdata_a_ecc_i = VL_RAND_RESET_Q(39);
    vlSelf->rf_rdata_b_ecc_i = VL_RAND_RESET_Q(39);
    vlSelf->ic_tag_req_o = VL_RAND_RESET_I(2);
    vlSelf->ic_tag_write_o = VL_RAND_RESET_I(1);
    vlSelf->ic_tag_addr_o = VL_RAND_RESET_I(8);
    vlSelf->ic_tag_wdata_o = VL_RAND_RESET_I(22);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ic_tag_rdata_i[__Vi0] = VL_RAND_RESET_I(22);
    }
    vlSelf->ic_data_req_o = VL_RAND_RESET_I(2);
    vlSelf->ic_data_write_o = VL_RAND_RESET_I(1);
    vlSelf->ic_data_addr_o = VL_RAND_RESET_I(8);
    vlSelf->ic_data_wdata_o = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ic_data_rdata_i[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->ic_scr_key_valid_i = VL_RAND_RESET_I(1);
    vlSelf->ic_scr_key_req_o = VL_RAND_RESET_I(1);
    vlSelf->irq_software_i = VL_RAND_RESET_I(1);
    vlSelf->irq_timer_i = VL_RAND_RESET_I(1);
    vlSelf->irq_external_i = VL_RAND_RESET_I(1);
    vlSelf->irq_fast_i = VL_RAND_RESET_I(15);
    vlSelf->irq_nm_i = VL_RAND_RESET_I(1);
    vlSelf->irq_pending_o = VL_RAND_RESET_I(1);
    vlSelf->debug_req_i = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(160, vlSelf->crash_dump_o);
    vlSelf->double_fault_seen_o = VL_RAND_RESET_I(1);
    vlSelf->fetch_enable_i = VL_RAND_RESET_I(4);
    vlSelf->alert_minor_o = VL_RAND_RESET_I(1);
    vlSelf->alert_major_internal_o = VL_RAND_RESET_I(1);
    vlSelf->alert_major_bus_o = VL_RAND_RESET_I(1);
    vlSelf->core_busy_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dummy_instr_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_rdata_id = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr_rdata_alu_id = VL_RAND_RESET_I(32);
    vlSelf->__PVT__instr_rdata_c_id = VL_RAND_RESET_I(16);
    vlSelf->__PVT__instr_is_compressed_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_fetch_err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_id = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__imd_val_d_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__imd_val_q_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->__PVT__imd_val_we_ex = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dummy_instr_seed_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_first_cycle_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_valid_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_mux_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exc_pc_mux_id = VL_RAND_RESET_I(2);
    vlSelf->__PVT__exc_cause = VL_RAND_RESET_I(7);
    vlSelf->__PVT__lsu_addr_incr_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_we_lsu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_rd_a_wb_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_rd_b_wb_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__div_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->__PVT__multdiv_operand_a_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__multdiv_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__multdiv_ready_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__illegal_csr_insn_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_req_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__en_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_write_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outstanding_load_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__outstanding_store_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irqs = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__pmp_req_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__csr_save_if = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_save_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_save_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_restore_dret_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_save_cause = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_mtvec_init = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__debug_csr_save = VL_RAND_RESET_I(1);
    vlSelf->__PVT__trigger_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__perf_instr_ret_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__perf_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__perf_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__perf_tbranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__perf_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__perf_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__illegal_insn_id = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_req_type[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__prefetch_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__if_instr_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__exc_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__instr_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr = VL_RAND_RESET_I(1);
    vlSelf->if_stage_i__DOT____VdfgTmp_hc5fec331__0 = 0;
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0 = 0;
    VL_RAND_RESET_W(96, vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d);
    VL_RAND_RESET_W(96, vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en = VL_RAND_RESET_I(3);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0 = 0;
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h8784150c__0 = 0;
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0 = 0;
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h18c9f4a7__0 = 0;
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0 = 0;
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d767ff5__0 = 0;
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = VL_RAND_RESET_I(7);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = VL_RAND_RESET_I(3);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__wb_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__branch_in_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__branch_set_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__jump_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__jump_set_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__instr_executing_spec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__instr_executing = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_run = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__stall_multdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_stage_i__DOT__rf_wdata_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__rf_we_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__stall_alu = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__id_stage_i__DOT__mult_en_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__div_en_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_stage_i__DOT__lsu_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__lsu_type = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_stage_i__DOT__lsu_sign_ext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__csr_pipe_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_stage_i__DOT__id_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__g_sec_branch_taken__DOT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access = VL_RAND_RESET_I(1);
    vlSelf->id_stage_i__DOT____VdfgTmp_haafd7db0__0 = 0;
    vlSelf->id_stage_i__DOT____VdfgTmp_h97dc7a37__0 = 0;
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(4);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_a = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_sel = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_we = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel = VL_RAND_RESET_I(24);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld = VL_RAND_RESET_I(8);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly = VL_RAND_RESET_I(1);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0 = VL_RAND_RESET_I(3);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0 = VL_RAND_RESET_I(3);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_ha36308a2__0 = VL_RAND_RESET_I(3);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h2754914a__0 = VL_RAND_RESET_I(3);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h30593303__0 = VL_RAND_RESET_I(3);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h19c60d8b__0 = VL_RAND_RESET_I(3);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0 = 0;
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0 = 0;
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res_uns = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_b = VL_RAND_RESET_I(16);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_store_unit_i__DOT__addr_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(24);
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__data_be = VL_RAND_RESET_I(4);
    vlSelf->__PVT__load_store_unit_i__DOT__data_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_store_unit_i__DOT__data_rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q = VL_RAND_RESET_I(1);
    vlSelf->wb_stage_i__DOT____VdfgTmp_ha5c23953__0 = 0;
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_d = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mie_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mscratch_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mepc_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__mepc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mcause_d = VL_RAND_RESET_I(7);
    vlSelf->__PVT__cs_registers_i__DOT__mcause_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mtval_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__mtval_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mtvec_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__depc_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__depc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__dscratch0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__dscratch1_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__mstack_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(13);
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->cs_registers_i__DOT____Vcellinp__g_pmp_registers__DOT__u_pmp_mseccfg__wr_data_i = VL_RAND_RESET_I(3);
    vlSelf->cs_registers_i__DOT____VdfgTmp_h7037298a__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h32371cea__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hd8cd6cef__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h5de6a269__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hf8c35188__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hfc13208b__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hb2b39384__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h37ea9ebb__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h190816ea__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h381602dc__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h02beeb2f__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h5c76801e__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h76221c7e__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h73e1ef23__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h92487aac__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hf386bd8d__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1c4f1dd2__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0 = 0;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h923bbe04__0 = 0;
    vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(18);
    vlSelf->__PVT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_RAND_RESET_I(8);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check = VL_RAND_RESET_Q(48);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hb283f6c2__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1ddea43f__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9c61acf2__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h84863110__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1f044106__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h7529c650__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8d5ec0a6__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf00baaed__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h619caa88__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h177541dd__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h6f195ae7__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_he147ab0c__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h13d4f1d7__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hed97bc98__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9e1c4d53__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf506530a__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 = 0;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 = 0;
    vlSelf->__VdfgTmp_h5b1acb32__0 = 0;
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__0__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__0__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__0__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__1__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__1__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__1__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__2__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__2__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__3__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__3__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__4__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__4__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__4__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__5__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__5__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__6__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__6__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__6__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__7__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__7__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__7__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__8__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__8__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__8__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__9__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__9__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__9__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__10__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__10__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__10__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__11__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__11__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__11__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__12__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__12__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__12__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__13__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__13__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__13__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__14__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__14__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__14__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__15__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__15__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__15__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg = VL_RAND_RESET_I(6);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__permission_check = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__result = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__pmp_cfg_lock = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__priv_mode = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check = VL_RAND_RESET_I(1);
}
