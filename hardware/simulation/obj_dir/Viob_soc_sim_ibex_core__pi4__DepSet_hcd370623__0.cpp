// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0\n"); );
    // Body
    if (VL_UNLIKELY(((((5U == (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                       & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)) 
                      & (~ (IData)(vlSelf->__PVT__instr_fetch_err))) 
                     & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d)))) {
        VL_WRITEF("%t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",
                  64,VL_TIME_UNITED_Q(1000),-9,32,vlSelf->__PVT__pc_id,
                  32,vlSelf->__PVT__instr_rdata_id);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h315b00d7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h406e2012_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_hb3ebb333_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h6af4b5e9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he9d7b8ed_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he05fe522_0;

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2\n"); );
    // Init
    CData/*4:0*/ __PVT__if_stage_i__DOT__irq_vec;
    __PVT__if_stage_i__DOT__irq_vec = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check = 0;
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
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xfU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                             << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xfU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                             << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xfU] 
                                                            >> 2U))))))) 
                                 << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xfU] 
                                                            >> 2U))))))) 
                                 << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xfU] 
                                                            >> 2U))))))) 
                                 << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xfU] 
                                                            >> 2U))))))) 
                                 << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffU 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xfU] 
                                                             >> 2U))))))) 
                                  << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xfU] 
                                                             >> 2U))))))) 
                                  << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xfU] 
                                                             >> 2U))))))) 
                                  << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xfU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xfU] 
                                                             >> 2U))))))) 
                                  << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                   << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                   << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                   << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xfU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xfU] 
                                                              >> 2U))))))) 
                                   << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x100000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xfU] 
                                                               >> 2U))))))) 
                                    << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x200000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xfU] 
                                                               >> 2U))))))) 
                                    << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x400000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xfU] 
                                                               >> 2U))))))) 
                                    << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x800000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xfU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xfU] 
                                                               >> 2U))))))) 
                                    << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x1000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xffffffU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xfU] 
                                                                >> 2U))))))) 
                                     << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x2000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xfU] 
                                                                >> 2U))))))) 
                                     << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x4000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xfU] 
                                                                >> 2U))))))) 
                                     << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x8000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xfU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xfU] 
                                                                >> 2U))))))) 
                                     << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x10000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xfffffffU 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xfU] 
                                                                 >> 2U))))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x20000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xfU] 
                                                                 >> 2U))))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (0x40000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xfU] 
                                                                 >> 2U))))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                      [0xfU] >> 3U))) 
                        | (~ (IData)((0x7fffffffU == 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->__PVT__csr_pmp_addr
                                                  [0xfU] 
                                                  >> 2U))))))) 
                       << 0x1fU));
    vlSelf->__PVT__trigger_match = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                    & (vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                       == (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           << 1U)));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                     << 5U) | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                << 4U) | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q))))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Viob_soc_sim__ConstPool__TABLE_h315b00d7_0
        [__Vtableidx1];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Viob_soc_sim__ConstPool__TABLE_h406e2012_0
        [__Vtableidx1];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Viob_soc_sim__ConstPool__TABLE_hb3ebb333_0
        [__Vtableidx1];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Viob_soc_sim__ConstPool__TABLE_h6af4b5e9_0
        [__Vtableidx1];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Viob_soc_sim__ConstPool__TABLE_he9d7b8ed_0
        [__Vtableidx1];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Viob_soc_sim__ConstPool__TABLE_he05fe522_0
        [__Vtableidx1];
    vlSelf->__PVT__cs_registers_i__DOT__csr_wr = ((1U 
                                                   == (IData)(vlSelf->__PVT__csr_op)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->__PVT__csr_op)) 
                                                     | (3U 
                                                        == (IData)(vlSelf->__PVT__csr_op))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelf->__PVT__csr_restore_mret_id = 0U;
    vlSelf->__PVT__csr_restore_dret_id = 0U;
    vlSelf->__PVT__pc_mux_id = 0U;
    vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check 
        = (1U & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                vlSelf->__PVT__pc_mux_id = 2U;
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                               | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                        }
                    }
                }
            }
            if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->__PVT__pc_mux_id = 2U;
            } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->__PVT__pc_mux_id = 2U;
            } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelf->__PVT__pc_mux_id = 3U;
            } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelf->__PVT__pc_mux_id = 4U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__pc_mux_id = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 1U)))) {
        vlSelf->__PVT__pc_mux_id = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                            vlSelf->__PVT__csr_restore_mret_id = 1U;
                        }
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlSelf->__PVT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffffeULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | (IData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__16__Vfuncout)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 1U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffffdULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__19__Vfuncout)) 
              << 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 2U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffffbULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__22__Vfuncout)) 
              << 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 3U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffff7ULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__25__Vfuncout)) 
              << 3U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 4U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffffefULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__28__Vfuncout)) 
              << 4U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 5U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffffdfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__31__Vfuncout)) 
              << 5U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 6U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffffbfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__34__Vfuncout)) 
              << 6U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 7U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffff7fULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__37__Vfuncout)) 
              << 7U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 8U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__40__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__Vfuncout)));
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
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hb283f6c2__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0xfU]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1ddea43f__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0xeU]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9c61acf2__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0xdU]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h84863110__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0xcU]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h1f044106__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0xbU]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h7529c650__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0xaU]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8d5ec0a6__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [9U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf00baaed__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [8U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h619caa88__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [7U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h177541dd__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [6U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h6f195ae7__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [5U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_he147ab0c__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [4U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h13d4f1d7__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [3U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hed97bc98__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [2U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h9e1c4d53__0 
        = ((IData)((vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
                    >> 2U)) & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [1U]);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf506530a__0 
        = (vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0 
           & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
           [0U]);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelf->__PVT__trigger_match)));
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

extern const VlUnpacked<CData/*0:0*/, 256> Viob_soc_sim__ConstPool__TABLE_h56aa66f2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_he017713b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_he6611871_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_hde970e00_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_h14eb773e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_hf12c31da_0;

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2\n"); );
    // Init
    CData/*4:0*/ rf_raddr_a_o;
    rf_raddr_a_o = 0;
    CData/*0:0*/ __PVT__mult_sel_ex;
    __PVT__mult_sel_ex = 0;
    CData/*1:0*/ __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
    __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0;
    CData/*2:0*/ __PVT__id_stage_i__DOT__imm_b_mux_sel_dec;
    __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0;
    CData/*0:0*/ __PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    __PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
    CData/*1:0*/ __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0;
    CData/*6:0*/ __PVT__id_stage_i__DOT__decoder_i__DOT__opcode;
    __PVT__id_stage_i__DOT__decoder_i__DOT__opcode = 0;
    CData/*6:0*/ __PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
    __PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml = 0;
    CData/*5:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type = 0;
    CData/*1:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode = 0;
    CData/*0:0*/ __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check;
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    if (vlSelf->rst_ni) {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        if (vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we) {
            vlSelf->__PVT__pc_id = (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                    << 1U);
            vlSelf->__PVT__instr_fetch_err = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
                                              & (IData)(vlSelf->__PVT__if_stage_i__DOT__if_instr_err));
            vlSelf->__PVT__instr_rdata_id = vlSelf->__PVT__if_stage_i__DOT__instr_out;
        }
        if (((IData)(vlSelf->__PVT__pc_set) | (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        }
    } else {
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelf->__PVT__pc_id = 0U;
        vlSelf->__PVT__instr_fetch_err = 0U;
        vlSelf->__PVT__instr_rdata_id = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = 0U;
    }
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlSelf->rst_ni) && (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_d));
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr 
        = (((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
            >> 2U) & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q) 
                      == ((IData)(vlSelf->__VdfgTmp_h5b1acb32__0) 
                          & (3U | (0x1cU & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                            >> 1U))))));
    vlSelf->__PVT__csr_save_wb = 0U;
    vlSelf->__PVT__instr_req_int = 1U;
    vlSelf->__PVT__id_stage_i__DOT__controller_run = 0U;
    vlSelf->__PVT__exc_pc_mux_id = 1U;
    vlSelf->__PVT__debug_csr_save = 0U;
    if (vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelf->__PVT__instr_first_cycle_id = (1U & 
                                               (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)));
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
    } else {
        vlSelf->__PVT__instr_first_cycle_id = 0U;
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelf->__PVT__instr_fetch_err));
    vlSelf->id_stage_i__DOT____VdfgTmp_h97dc7a37__0 
        = ((~ (IData)(vlSelf->__PVT__instr_fetch_err)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__imm_i_type = ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__instr_rdata_id 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->__PVT__instr_rdata_id 
                                                     >> 0x14U));
    vlSelf->__PVT__rf_rd_b_wb_match = (((0x1fU & (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->__PVT__instr_rdata_id 
                                                    >> 0x14U))));
    rf_raddr_a_o = (0x1fU & (((~ (IData)(vlSelf->__PVT__instr_first_cycle_id)) 
                              & (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q))
                              ? (vlSelf->__PVT__instr_rdata_id 
                                 >> 0x1bU) : (vlSelf->__PVT__instr_rdata_id 
                                              >> 0xfU)));
    vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelf->__PVT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelf->__PVT__csr_access = 0U;
    __PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelf->__PVT__id_stage_i__DOT__lsu_we = 0U;
    vlSelf->__PVT__id_stage_i__DOT__lsu_type = 0U;
    vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelf->__PVT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec = 0U;
    __PVT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSelf->__PVT__instr_rdata_id);
    if ((0x40U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelf->__PVT__instr_rdata_id 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelf->__PVT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelf->__PVT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelf->__PVT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x302U == (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x7b2U == (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x105U == (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((IData)((0U != (0xf8f80U 
                                                & vlSelf->__PVT__instr_rdata_id)))) {
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelf->__PVT__csr_access = 1U;
                            vlSelf->__PVT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelf->__PVT__instr_rdata_id 
                                          >> 0xeU)))) {
                                vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelf->__PVT__instr_rdata_id 
                                              >> 0xcU)))) {
                                __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelf->__PVT__instr_rdata_id 
                                                >> 0xcU)))) {
                                __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelf->__PVT__instr_rdata_id 
                                                >> 0xcU)))) {
                                __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                __PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = __PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelf->__PVT__instr_first_cycle_id) {
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                                vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelf->__PVT__instr_first_cycle_id) {
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelf->__PVT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->__PVT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelf->__PVT__instr_rdata_id 
                                     >> 0xeU))) && 
                           (1U & (vlSelf->__PVT__instr_rdata_id 
                                  >> 0xdU)));
                    vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x10U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelf->__PVT__instr_rdata_id 
                                       >> 0x18U)) | 
                                (3U & (vlSelf->__PVT__instr_rdata_id 
                                       >> 0xcU))))) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    } else if ((vlSelf->__PVT__instr_rdata_id 
                                >> 0x1fU)) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelf->__PVT__instr_rdata_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((0x20000000U & vlSelf->__PVT__instr_rdata_id)
                                ? ((1U & (vlSelf->__PVT__instr_rdata_id 
                                          >> 0x1cU)) 
                                   || ((0x8000000U 
                                        & vlSelf->__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x1aU)) 
                                           || ((1U 
                                                & (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x19U)) 
                                               || ((0x4000U 
                                                    & vlSelf->__PVT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelf->__PVT__instr_rdata_id 
                                                        >> 0xdU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__instr_rdata_id 
                                                            >> 0xcU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelf->__PVT__instr_rdata_id 
                                                        >> 0xdU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__instr_rdata_id 
                                                            >> 0xcU)))))))
                                        : ((1U & (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x1aU)) 
                                           || ((1U 
                                                & (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x19U)) 
                                               || ((1U 
                                                    & (vlSelf->__PVT__instr_rdata_id 
                                                       >> 0xdU)) 
                                                   || (1U 
                                                       & (~ 
                                                          (vlSelf->__PVT__instr_rdata_id 
                                                           >> 0xcU))))))))
                                : ((1U & (vlSelf->__PVT__instr_rdata_id 
                                          >> 0x1cU)) 
                                   || ((0x8000000U 
                                        & vlSelf->__PVT__instr_rdata_id)
                                        ? ((1U & (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x1aU)) 
                                           || ((1U 
                                                & (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x19U)) 
                                               || ((0x4000U 
                                                    & vlSelf->__PVT__instr_rdata_id)
                                                    ? 
                                                   ((1U 
                                                     & (vlSelf->__PVT__instr_rdata_id 
                                                        >> 0xdU)) 
                                                    && (1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__instr_rdata_id 
                                                            >> 0xcU))))
                                                    : 
                                                   ((1U 
                                                     & (vlSelf->__PVT__instr_rdata_id 
                                                        >> 0xdU)) 
                                                    || (1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__instr_rdata_id 
                                                            >> 0xcU)))))))
                                        : ((1U & (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x1aU)) 
                                           || ((1U 
                                                & (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0x19U)) 
                                               || ((1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__instr_rdata_id 
                                                        >> 0xeU))) 
                                                   && ((1U 
                                                        & (vlSelf->__PVT__instr_rdata_id 
                                                           >> 0xdU)) 
                                                       || (1U 
                                                           & (vlSelf->__PVT__instr_rdata_id 
                                                              >> 0xcU)))))))));
                    } else if ((0x20000000U & vlSelf->__PVT__instr_rdata_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelf->__PVT__instr_rdata_id 
                                      >> 0x1cU)) || 
                               ((0x8000000U & vlSelf->__PVT__instr_rdata_id)
                                 ? ((1U & (vlSelf->__PVT__instr_rdata_id 
                                           >> 0x1aU)) 
                                    || ((1U & (vlSelf->__PVT__instr_rdata_id 
                                               >> 0x19U)) 
                                        || (1U & ((0x4000U 
                                                   & vlSelf->__PVT__instr_rdata_id)
                                                   ? 
                                                  ((1U 
                                                    & (vlSelf->__PVT__instr_rdata_id 
                                                       >> 0xdU)) 
                                                   && (1U 
                                                       & (vlSelf->__PVT__instr_rdata_id 
                                                          >> 0xcU)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->__PVT__instr_rdata_id)
                                                    ? 
                                                   (vlSelf->__PVT__instr_rdata_id 
                                                    >> 0xcU)
                                                    : 
                                                   (~ 
                                                    (vlSelf->__PVT__instr_rdata_id 
                                                     >> 0xcU)))))))
                                 : ((1U & (vlSelf->__PVT__instr_rdata_id 
                                           >> 0x1aU)) 
                                    || ((1U & (vlSelf->__PVT__instr_rdata_id 
                                               >> 0x19U)) 
                                        || (1U & ((0x4000U 
                                                   & vlSelf->__PVT__instr_rdata_id)
                                                   ? 
                                                  ((1U 
                                                    & (vlSelf->__PVT__instr_rdata_id 
                                                       >> 0xdU)) 
                                                   && (1U 
                                                       & (vlSelf->__PVT__instr_rdata_id 
                                                          >> 0xcU)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->__PVT__instr_rdata_id)
                                                    ? 
                                                   (vlSelf->__PVT__instr_rdata_id 
                                                    >> 0xcU)
                                                    : 
                                                   (~ 
                                                    (vlSelf->__PVT__instr_rdata_id 
                                                     >> 0xcU)))))))));
                    } else if ((0x10000000U & vlSelf->__PVT__instr_rdata_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelf->__PVT__instr_rdata_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelf->__PVT__instr_rdata_id 
                                      >> 0x1aU)) || 
                               ((0x2000000U & vlSelf->__PVT__instr_rdata_id)
                                 ? ((1U & (~ (vlSelf->__PVT__instr_rdata_id 
                                              >> 0xeU))) 
                                    && ((1U & (~ (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0xdU))) 
                                        && (1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0xcU)))))
                                 : ((0x4000U & vlSelf->__PVT__instr_rdata_id)
                                     ? ((1U & (vlSelf->__PVT__instr_rdata_id 
                                               >> 0xdU)) 
                                        && (1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0xcU))))
                                     : ((1U & (vlSelf->__PVT__instr_rdata_id 
                                               >> 0xdU)) 
                                        || (1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_id 
                                                   >> 0xcU)))))));
                    } else if ((0x4000000U & vlSelf->__PVT__instr_rdata_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelf->__PVT__instr_rdata_id)) {
                        if ((0x4000U & vlSelf->__PVT__instr_rdata_id)) {
                            if ((0x2000U & vlSelf->__PVT__instr_rdata_id)) {
                                if ((0x1000U & vlSelf->__PVT__instr_rdata_id)) {
                                    vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x1000U & vlSelf->__PVT__instr_rdata_id)) {
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x2000U & vlSelf->__PVT__instr_rdata_id)) {
                            if ((0x1000U & vlSelf->__PVT__instr_rdata_id)) {
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x1000U & vlSelf->__PVT__instr_rdata_id)) {
                            vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelf->__PVT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x4000U & vlSelf->__PVT__instr_rdata_id)) {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelf->__PVT__instr_rdata_id 
                                  >> 0xcU)))) {
                    vlSelf->__PVT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelf->__PVT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelf->__PVT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelf->__PVT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x4000U & vlSelf->__PVT__instr_rdata_id)
                        ? ((1U & (~ (vlSelf->__PVT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelf->__PVT__instr_rdata_id 
                                   >> 0xcU)) && ((1U 
                                                  & (~ 
                                                     (vlSelf->__PVT__instr_rdata_id 
                                                      >> 0x1aU))) 
                                                 && ((vlSelf->__PVT__instr_rdata_id 
                                                      >> 0x1fU) 
                                                     || (1U 
                                                         & ((0x40000000U 
                                                             & vlSelf->__PVT__instr_rdata_id)
                                                             ? 
                                                            ((0x20000000U 
                                                              & vlSelf->__PVT__instr_rdata_id)
                                                              ? 
                                                             (vlSelf->__PVT__instr_rdata_id 
                                                              >> 0x1cU)
                                                              : 
                                                             ((1U 
                                                               & (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (~ 
                                                                      (vlSelf->__PVT__instr_rdata_id 
                                                                       >> 0x1bU))) 
                                                                  && (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelf->__PVT__instr_rdata_id 
                                                                          >> 0x19U))))))
                                                             : 
                                                            ((0x20000000U 
                                                              & vlSelf->__PVT__instr_rdata_id)
                                                              ? 
                                                             (vlSelf->__PVT__instr_rdata_id 
                                                              >> 0x1cU)
                                                              : 
                                                             ((1U 
                                                               & (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || (1U 
                                                                  & ((0x8000000U 
                                                                      & vlSelf->__PVT__instr_rdata_id)
                                                                      ? 
                                                                     (vlSelf->__PVT__instr_rdata_id 
                                                                      >> 0x1aU)
                                                                      : 
                                                                     (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelf->__PVT__instr_rdata_id 
                                                                          >> 0x19U)))))))))))))
                        : ((1U & (~ (vlSelf->__PVT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelf->__PVT__instr_rdata_id 
                                   >> 0xcU)) && ((vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x1fU) 
                                                 || (1U 
                                                     & ((0x40000000U 
                                                         & vlSelf->__PVT__instr_rdata_id)
                                                         ? 
                                                        ((0x20000000U 
                                                          & vlSelf->__PVT__instr_rdata_id)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelf->__PVT__instr_rdata_id 
                                                              >> 0x1cU)) 
                                                          || ((1U 
                                                               & (~ 
                                                                  (vlSelf->__PVT__instr_rdata_id 
                                                                   >> 0x1bU))) 
                                                              && ((1U 
                                                                   & (vlSelf->__PVT__instr_rdata_id 
                                                                      >> 0x1aU)) 
                                                                  || ((1U 
                                                                       & (vlSelf->__PVT__instr_rdata_id 
                                                                          >> 0x19U)) 
                                                                      || ((0x1000000U 
                                                                           & vlSelf->__PVT__instr_rdata_id)
                                                                           ? 
                                                                          ((1U 
                                                                            & (vlSelf->__PVT__instr_rdata_id 
                                                                               >> 0x16U)) 
                                                                           || ((1U 
                                                                                & (vlSelf->__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                               && (1U 
                                                                                & (vlSelf->__PVT__instr_rdata_id 
                                                                                >> 0x14U))))
                                                                           : 
                                                                          ((1U 
                                                                            & (vlSelf->__PVT__instr_rdata_id 
                                                                               >> 0x17U)) 
                                                                           || (1U 
                                                                               & ((0x400000U 
                                                                                & vlSelf->__PVT__instr_rdata_id)
                                                                                 ? 
                                                                                (vlSelf->__PVT__instr_rdata_id 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                ((1U 
                                                                                & (vlSelf->__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                && (1U 
                                                                                & (vlSelf->__PVT__instr_rdata_id 
                                                                                >> 0x14U)))))))))))
                                                          : 
                                                         ((1U 
                                                           & (vlSelf->__PVT__instr_rdata_id 
                                                              >> 0x1cU)) 
                                                          || (1U 
                                                              & (~ 
                                                                 (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x1bU)))))
                                                         : 
                                                        ((0x20000000U 
                                                          & vlSelf->__PVT__instr_rdata_id)
                                                          ? 
                                                         (vlSelf->__PVT__instr_rdata_id 
                                                          >> 0x1cU)
                                                          : 
                                                         ((1U 
                                                           & (vlSelf->__PVT__instr_rdata_id 
                                                              >> 0x1cU)) 
                                                          || (1U 
                                                              & ((0x8000000U 
                                                                  & vlSelf->__PVT__instr_rdata_id)
                                                                  ? 
                                                                 (vlSelf->__PVT__instr_rdata_id 
                                                                  >> 0x1aU)
                                                                  : 
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelf->__PVT__instr_rdata_id 
                                                                      >> 0x19U)))))))))))));
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelf->__PVT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelf->__PVT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelf->__PVT__instr_first_cycle_id) {
                            vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = 1U;
                        }
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelf->__PVT__id_stage_i__DOT__lsu_type = 0U;
            if ((0U == (3U & (vlSelf->__PVT__instr_rdata_id 
                              >> 0xcU)))) {
                vlSelf->__PVT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelf->__PVT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelf->__PVT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelf->__PVT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelf->__PVT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x4000U & vlSelf->__PVT__instr_rdata_id)) {
                    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelf->__PVT__illegal_c_insn_id) {
        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelf->__PVT__id_stage_i__DOT__lsu_we = 0U;
        vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelf->__PVT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelf->__PVT__csr_access = 0U;
    }
    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x2cU;
    __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelf->__PVT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
    vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel = 0U;
    __PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlSelf->__PVT__instr_rdata_alu_id);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d = 0U;
    vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 0U;
    __PVT__mult_sel_ex = 0U;
    vlSelf->__PVT__div_sel_ex = 0U;
    if ((0x40U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                    vlSelf->__PVT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                                    __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlSelf->__PVT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                            vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel = 4U;
                            __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel = 0U;
                        __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelf->__PVT__instr_rdata_alu_id)
                                ? ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                         >> 0xdU)))) {
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                    vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel 
                        = ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 1U)) | (IData)(vlSelf->__PVT__id_stage_i__DOT__g_sec_branch_taken__DOT__branch_taken_q)))
                            ? 2U : 5U);
                    if (vlSelf->__PVT__instr_first_cycle_id) {
                        __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x10U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelf->__PVT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((0x4000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                            if ((0x4000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                if ((0x2000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((0x4000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x2dU;
                                                vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                                    = vlSelf->__PVT__instr_first_cycle_id;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x2eU;
                                            vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                                = vlSelf->__PVT__instr_first_cycle_id;
                                        }
                                    }
                                } else if ((0x4000U 
                                            & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x30U;
                                            vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                                = vlSelf->__PVT__instr_first_cycle_id;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_alu_id 
                                                   >> 0xdU)))) {
                                    if ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x2fU;
                                        vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                        vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                            = vlSelf->__PVT__instr_first_cycle_id;
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                             >> 0x1fU)))) {
                            if ((0x40000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                if ((0x20000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0x1cU)))) {
                                        if ((0x8000000U 
                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__instr_rdata_alu_id 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->__PVT__instr_rdata_alu_id 
                                                         >> 0x19U)))) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->__PVT__instr_rdata_alu_id 
                                                                 >> 0xdU)))) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xfU;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                                    >> 0xdU)))) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x33U;
                                                        }
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__instr_rdata_alu_id 
                                                        >> 0x1aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__instr_rdata_alu_id 
                                                     >> 0x19U)))) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->__PVT__instr_rdata_alu_id 
                                                             >> 0xdU)))) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xdU;
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelf->__PVT__instr_rdata_alu_id 
                                                                >> 0xdU)))) {
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xeU;
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_alu_id 
                                                   >> 0x1cU)))) {
                                    if ((0x8000000U 
                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__instr_rdata_alu_id 
                                                     >> 0x19U)))) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x2000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x37U;
                                                        }
                                                    } else {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x1000U 
                                                              & vlSelf->__PVT__instr_rdata_alu_id)
                                                              ? 0x34U
                                                              : 0x24U);
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelf->__PVT__instr_rdata_alu_id 
                                                                >> 0xdU)))) {
                                                    if (
                                                        (0x1000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x32U;
                                                    }
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x2000U 
                                                      & vlSelf->__PVT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__instr_rdata_alu_id)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__instr_rdata_alu_id)
                                                       ? 8U
                                                       : 5U));
                                            } else if (
                                                       (1U 
                                                        & (~ 
                                                           (vlSelf->__PVT__instr_rdata_alu_id 
                                                            >> 0xdU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->__PVT__instr_rdata_alu_id 
                                                         >> 0xcU)))) {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((0x20000000U 
                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                              >> 0x1cU)))) {
                                    if ((0x8000000U 
                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__instr_rdata_alu_id 
                                                     >> 0x19U)))) {
                                                if (
                                                    (0x4000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x2000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->__PVT__instr_rdata_alu_id 
                                                                 >> 0xcU)))) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x15U;
                                                        }
                                                    } else {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x1000U 
                                                              & vlSelf->__PVT__instr_rdata_alu_id)
                                                              ? 0x10U
                                                              : 0x14U);
                                                    }
                                                } else if (
                                                           (0x2000U 
                                                            & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->__PVT__instr_rdata_alu_id 
                                                             >> 0xcU)))) {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x13U;
                                                    }
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x31U;
                                                }
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1aU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x19U)))) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x2000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->__PVT__instr_rdata_alu_id 
                                                             >> 0xcU)))) {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x18U;
                                                    }
                                                } else {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__instr_rdata_alu_id)
                                                          ? 0xbU
                                                          : 0x17U);
                                                }
                                            } else if (
                                                       (0x2000U 
                                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->__PVT__instr_rdata_alu_id 
                                                         >> 0xcU)))) {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x16U;
                                                }
                                            } else if (
                                                       (0x1000U 
                                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xcU;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                 >> 0x1cU)))) {
                                if ((0x8000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0x1aU)))) {
                                        if ((0x2000000U 
                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            if ((0x4000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x2000U 
                                                      & vlSelf->__PVT__instr_rdata_alu_id)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__instr_rdata_alu_id)
                                                       ? 0x22U
                                                       : 0x21U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->__PVT__instr_rdata_alu_id)
                                                       ? 0x20U
                                                       : 0x1fU));
                                            } else if (
                                                       (0x2000U 
                                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__instr_rdata_alu_id)
                                                      ? 0x3aU
                                                      : 0x39U);
                                            } else if (
                                                       (0x1000U 
                                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x38U;
                                            }
                                        } else if (
                                                   (0x4000U 
                                                    & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            if ((0x2000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x25U;
                                                }
                                            } else {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                    = 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__instr_rdata_alu_id)
                                                      ? 0x12U
                                                      : 0x23U);
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__instr_rdata_alu_id 
                                                        >> 0xdU)))) {
                                            if ((0x1000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x11U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_alu_id 
                                                   >> 0x1aU)))) {
                                    if ((0x2000000U 
                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        if ((0x4000U 
                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            if ((0x2000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                if (
                                                    (0x1000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelf->__PVT__div_sel_ex = 1U;
                                                } else {
                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                    vlSelf->__PVT__div_sel_ex = 1U;
                                                }
                                            } else if (
                                                       (0x1000U 
                                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelf->__PVT__div_sel_ex = 1U;
                                            } else {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                vlSelf->__PVT__div_sel_ex = 1U;
                                            }
                                        } else if (
                                                   (0x2000U 
                                                    & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            if ((0x1000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                __PVT__mult_sel_ex = 1U;
                                            } else {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                                __PVT__mult_sel_ex = 1U;
                                            }
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                            __PVT__mult_sel_ex = 1U;
                                        } else {
                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                                            __PVT__mult_sel_ex = 1U;
                                        }
                                    } else {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x4000U 
                                                & vlSelf->__PVT__instr_rdata_alu_id)
                                                ? (
                                                   (0x2000U 
                                                    & vlSelf->__PVT__instr_rdata_alu_id)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)
                                                     ? 9U
                                                     : 2U))
                                                : (
                                                   (0x2000U 
                                                    & vlSelf->__PVT__instr_rdata_alu_id)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)
                                                     ? 0x2cU
                                                     : 0x2bU)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)
                                                     ? 0xaU
                                                     : 0U)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                      >> 0xeU)))) {
                            __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x4000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                        if ((0x2000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                            vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                = ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                            if ((0x4000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x30U;
                                vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d 
                                    = vlSelf->__PVT__instr_first_cycle_id;
                            } else if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                 >> 0x1fU)))) {
                                if ((0x40000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((0x20000000U 
                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1cU)))) {
                                            if ((0x8000000U 
                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xfU;
                                            } else {
                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xdU;
                                                vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                            }
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1cU)))) {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x8000000U 
                                                & vlSelf->__PVT__instr_rdata_alu_id)
                                                ? 0x34U
                                                : 8U);
                                    }
                                } else if ((0x20000000U 
                                            & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0x1cU)))) {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                            = ((0x8000000U 
                                                & vlSelf->__PVT__instr_rdata_alu_id)
                                                ? 0x10U
                                                : 0xbU);
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_alu_id 
                                                   >> 0x1cU)))) {
                                    if ((0x8000000U 
                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        if ((1U & (~ 
                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                    >> 0x1aU)))) {
                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x12U;
                                        }
                                    } else {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 9U;
                                    }
                                }
                            }
                        } else {
                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else if ((0x2000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)
                                ? 0x2cU : 0x2bU);
                    } else if ((0x1000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                        if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                      >> 0x1fU)))) {
                            if ((0x40000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                if ((0x20000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0x1cU)))) {
                                        if ((0x8000000U 
                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x33U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->__PVT__instr_rdata_alu_id 
                                                        >> 0x1aU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__instr_rdata_alu_id 
                                                     >> 0x19U)))) {
                                                if (
                                                    (0x1000000U 
                                                     & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x800000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->__PVT__instr_rdata_alu_id 
                                                                 >> 0x16U)))) {
                                                            if (
                                                                (0x200000U 
                                                                 & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                                if (
                                                                    (1U 
                                                                     & (~ 
                                                                        (vlSelf->__PVT__instr_rdata_alu_id 
                                                                         >> 0x14U)))) {
                                                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x40U;
                                                                    vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                                }
                                                            } else if (
                                                                       (0x100000U 
                                                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x3eU;
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            } else {
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x3cU;
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            }
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->__PVT__instr_rdata_alu_id 
                                                                    >> 0x16U)))) {
                                                        if (
                                                            (0x200000U 
                                                             & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelf->__PVT__instr_rdata_alu_id 
                                                                     >> 0x14U)))) {
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x3fU;
                                                                vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                            }
                                                        } else if (
                                                                   (0x100000U 
                                                                    & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x3dU;
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        } else {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x3bU;
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = 1U;
                                                        }
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ 
                                                               (vlSelf->__PVT__instr_rdata_alu_id 
                                                                >> 0x17U)))) {
                                                    if (
                                                        (0x400000U 
                                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->__PVT__instr_rdata_alu_id 
                                                                 >> 0x15U)))) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                                = 
                                                                ((0x100000U 
                                                                  & vlSelf->__PVT__instr_rdata_alu_id)
                                                                  ? 0x27U
                                                                  : 0x26U);
                                                        }
                                                    } else if (
                                                               (0x200000U 
                                                                & vlSelf->__PVT__instr_rdata_alu_id)) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->__PVT__instr_rdata_alu_id 
                                                                 >> 0x14U)))) {
                                                            vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x2aU;
                                                        }
                                                    } else {
                                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                                            = 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__instr_rdata_alu_id)
                                                              ? 0x29U
                                                              : 0x28U);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelf->__PVT__instr_rdata_alu_id 
                                                   >> 0x1cU)))) {
                                    if ((0x8000000U 
                                         & vlSelf->__PVT__instr_rdata_alu_id)) {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x32U;
                                    }
                                }
                            } else if ((0x20000000U 
                                        & vlSelf->__PVT__instr_rdata_alu_id)) {
                                if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                              >> 0x1cU)))) {
                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator 
                                        = ((0x8000000U 
                                            & vlSelf->__PVT__instr_rdata_alu_id)
                                            ? 0x31U
                                            : 0xcU);
                                }
                            } else if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                 >> 0x1cU)))) {
                                if ((0x8000000U & vlSelf->__PVT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelf->__PVT__instr_rdata_alu_id 
                                                  >> 0x1aU)))) {
                                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0x11U;
                                    }
                                } else {
                                    vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0xaU;
                                }
                            }
                        }
                    } else {
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelf->__PVT__instr_rdata_alu_id 
                                      >> 0xcU)))) {
                        vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                        __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelf->__PVT__instr_rdata_alu_id 
                                             >> 0xcU)))) {
                        vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = 2U;
                        vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel = 5U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelf->__PVT__id_stage_i__DOT__alu_operator = 0U;
                vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                __PVT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelf->__PVT__rf_rd_a_wb_match = (((IData)(rf_raddr_a_o) 
                                        == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                       & (0U != (IData)(rf_raddr_a_o)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 1U;
    }
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
        = (((QData)((IData)((((0U == ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                       ? 1U : 2U)) 
                              & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 2U)) | (((1U == 
                                              ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                ? 1U
                                                : 2U)) 
                                             & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                >> 1U)) 
                                            | ((2U 
                                                == 
                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                  ? 1U
                                                  : 2U)) 
                                               & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
            << 0x2fU) | (((QData)((IData)((((0U == 
                                             ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                               ? 1U
                                               : 2U)) 
                                            & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                               >> 2U)) 
                                           | (((1U 
                                                == 
                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                  ? 1U
                                                  : 2U)) 
                                               & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                  >> 1U)) 
                                              | ((2U 
                                                  == 
                                                  ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                    ? 1U
                                                    : 2U)) 
                                                 & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                          << 0x2eU) | (((QData)((IData)(
                                                        (((0U 
                                                           == 
                                                           ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                             ? 1U
                                                             : 2U)) 
                                                          & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                             >> 2U)) 
                                                         | (((1U 
                                                              == 
                                                              ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                ? 1U
                                                                : 2U)) 
                                                             & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                >> 1U)) 
                                                            | ((2U 
                                                                == 
                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                  ? 1U
                                                                  : 2U)) 
                                                               & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                        << 0x2dU) | 
                                       (((QData)((IData)(
                                                         (((0U 
                                                            == 
                                                            ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                              ? 1U
                                                              : 2U)) 
                                                           & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                              >> 2U)) 
                                                          | (((1U 
                                                               == 
                                                               ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                 ? 1U
                                                                 : 2U)) 
                                                              & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                 >> 1U)) 
                                                             | ((2U 
                                                                 == 
                                                                 ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                   ? 1U
                                                                   : 2U)) 
                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            (((0U 
                                                               == 
                                                               ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                 ? 1U
                                                                 : 2U)) 
                                                              & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                 >> 2U)) 
                                                             | (((1U 
                                                                  == 
                                                                  ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                    ? 1U
                                                                    : 2U)) 
                                                                 & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                    >> 1U)) 
                                                                | ((2U 
                                                                    == 
                                                                    ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                      ? 1U
                                                                      : 2U)) 
                                                                   & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                            << 0x2bU) 
                                           | (((QData)((IData)(
                                                               (((0U 
                                                                  == 
                                                                  ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                    ? 1U
                                                                    : 2U)) 
                                                                 & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                    >> 2U)) 
                                                                | (((1U 
                                                                     == 
                                                                     ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                       ? 1U
                                                                       : 2U)) 
                                                                    & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                       >> 1U)) 
                                                                   | ((2U 
                                                                       == 
                                                                       ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                         ? 1U
                                                                         : 2U)) 
                                                                      & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (((0U 
                                                                     == 
                                                                     ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                       ? 1U
                                                                       : 2U)) 
                                                                    & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                       >> 2U)) 
                                                                   | (((1U 
                                                                        == 
                                                                        ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                          ? 1U
                                                                          : 2U)) 
                                                                       & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                          >> 1U)) 
                                                                      | ((2U 
                                                                          == 
                                                                          ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                            ? 1U
                                                                            : 2U)) 
                                                                         & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     (((0U 
                                                                        == 
                                                                        ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                          ? 1U
                                                                          : 2U)) 
                                                                       & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                          >> 2U)) 
                                                                      | (((1U 
                                                                           == 
                                                                           ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                             ? 1U
                                                                             : 2U)) 
                                                                          & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                             >> 1U)) 
                                                                         | ((2U 
                                                                             == 
                                                                             ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                               ? 1U
                                                                               : 2U)) 
                                                                            & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        (((0U 
                                                                           == 
                                                                           ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                             ? 1U
                                                                             : 2U)) 
                                                                          & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                             >> 2U)) 
                                                                         | (((1U 
                                                                              == 
                                                                              ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                ? 1U
                                                                                : 2U)) 
                                                                             & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                            | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                               & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                        << 0x27U) 
                                                       | (((QData)((IData)(
                                                                           (((0U 
                                                                              == 
                                                                              ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                ? 1U
                                                                                : 2U)) 
                                                                             & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                            | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                               | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                           << 0x26U) 
                                                          | (((QData)((IData)(
                                                                              (((0U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                               | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                              << 0x25U) 
                                                             | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                                | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                                 << 0x24U) 
                                                                | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                                | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                                    << 0x23U) 
                                                                   | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                                | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                                       << 0x22U) 
                                                                      | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                                | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                                          << 0x21U) 
                                                                         | (((QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)) 
                                                                                | (((1U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | ((2U 
                                                                                == 
                                                                                ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                                                 ? 1U
                                                                                 : 2U)) 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)))))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x1dU)) 
                                                                                | ((0x40000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x1cU)) 
                                                                                | ((0x20000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x1aU)) 
                                                                                | ((0x8000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x19U)) 
                                                                                | ((0x4000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x18U)) 
                                                                                | ((0x2000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x17U)) 
                                                                                | ((0x1000000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x16U)) 
                                                                                | ((0x800000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x15U)) 
                                                                                | ((0x400000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x14U)) 
                                                                                | ((0x200000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x13U)) 
                                                                                | ((0x100000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x12U)) 
                                                                                | ((0x80000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x11U)) 
                                                                                | ((0x40000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0x10U)) 
                                                                                | ((0x20000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0xfU)) 
                                                                                | ((0x10000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0xeU)) 
                                                                                | ((0x8000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0xdU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0xcU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0xbU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 0xaU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 9U)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 8U)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 7U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 6U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 5U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 4U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 2U)) 
                                                                                | ((8U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                << 1U)) 
                                                                                | ((4U 
                                                                                & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U] = ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                                                    ? 1U
                                                    : 2U);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__csr_op = __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((IData)(((0U == (0xf8000U & vlSelf->__PVT__instr_rdata_id)) 
                 & ((2U == (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                    | (3U == (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))) {
        vlSelf->__PVT__csr_op = 0U;
    }
    vlSelf->__PVT__id_stage_i__DOT__div_en_dec = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                                  & (IData)(vlSelf->__PVT__div_sel_ex));
    vlSelf->__PVT__id_stage_i__DOT__mult_en_dec = (
                                                   (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                                   & (IData)(__PVT__mult_sel_ex));
    vlSelf->__PVT__ex_block_i__DOT__multdiv_sel = ((IData)(vlSelf->__PVT__div_sel_ex) 
                                                   | (IData)(__PVT__mult_sel_ex));
    if (vlSelf->__PVT__lsu_addr_incr_req) {
        vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel 
            = __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel 
            = __PVT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__instr_first_cycle_id) 
                      << 7U) | (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate 
        = Viob_soc_sim__ConstPool__TABLE_h56aa66f2_0
        [__Vtableidx11];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode 
        = ((0x31U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x32U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x33U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))));
    __Vtableidx9 = vlSelf->__PVT__id_stage_i__DOT__alu_operator;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Viob_soc_sim__ConstPool__TABLE_he017713b_0
        [__Vtableidx9];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly 
        = ((0x40U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x3eU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x3cU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode 
        = ((0x3bU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x3cU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode 
        = ((0x3dU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
           | (0x3eU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op 
        = ((0x40U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x3fU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
              | ((0x3eU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                 | ((0x3dU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                    | ((0x3cU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                       | (0x3bU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))))));
    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_we 
        = ((0x40U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                ? 0U : ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                         ? 0U : ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                  ? 0U : ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                                      ? 1U
                                                      : 0U)))))))
            : ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                ? ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                    ? ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                ? 1U : 0U) : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                               ? ((1U 
                                                   & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                                    ? 1U
                                                    : 0U)
                                                   : 0U)
                                               : 0U))
                        : ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? 0U : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                              ? 0U : 
                                             ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                               ? 1U
                                               : 0U)))))
                    : ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                        ? 1U : 0U) : 
                                   ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                     ? 1U : 0U)) : 
                               ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                 ? ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                     ? 1U : 0U) : 0U))
                            : 0U) : 0U)) : ((0x10U 
                                             & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                             ? 0U : 
                                            ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                              ? ((4U 
                                                  & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))
                                                  : 0U)
                                              : 0U))));
    __Vtableidx8 = vlSelf->__PVT__id_stage_i__DOT__alu_operator;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Viob_soc_sim__ConstPool__TABLE_he6611871_0
        [__Vtableidx8];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Viob_soc_sim__ConstPool__TABLE_hde970e00_0
        [__Vtableidx8];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Viob_soc_sim__ConstPool__TABLE_h14eb773e_0
        [__Vtableidx8];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Viob_soc_sim__ConstPool__TABLE_hf12c31da_0
        [__Vtableidx8];
    vlSelf->__PVT__trigger_match = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                    & (vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                       == (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           << 1U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check 
        = (1U & (IData)(vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlSelf->__PVT__csr_save_wb 
                            = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                               | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q));
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__instr_req_int = 0U;
        } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__instr_req_int = 0U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->__PVT__exc_pc_mux_id = 2U;
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->__PVT__debug_csr_save = 1U;
                    }
                } else {
                    vlSelf->__PVT__debug_csr_save = 1U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlSelf->__PVT__instr_req_int = ((1U & (~ 
                                                   ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                                                    >> 1U))) 
                                            && (1U 
                                                & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelf->__PVT__exc_pc_mux_id = 1U;
                } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelf->__PVT__exc_pc_mux_id = 
                        ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                          ? 3U : 0U);
                }
            }
        }
    }
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffffeULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | (IData)((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__179__Vfuncout)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 1U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffffdULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__182__Vfuncout)) 
              << 1U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 2U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffffbULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__185__Vfuncout)) 
              << 2U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 3U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffff7ULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__188__Vfuncout)) 
              << 3U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 4U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffffefULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__191__Vfuncout)) 
              << 4U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 5U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffffdfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__194__Vfuncout)) 
              << 5U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 6U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffffbfULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__197__Vfuncout)) 
              << 6U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 7U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffff7fULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__200__Vfuncout)) 
              << 7U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 8U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffeffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout)) 
              << 8U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 9U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffdffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__206__Vfuncout)) 
              << 9U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xaU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xaU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffffbffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__209__Vfuncout)) 
              << 0xaU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xbU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xbU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffff7ffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__212__Vfuncout)) 
              << 0xbU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xcU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xcU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffefffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__215__Vfuncout)) 
              << 0xcU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xdU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xdU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffdfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__218__Vfuncout)) 
              << 0xdU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xeU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xeU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffffbfffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__221__Vfuncout)) 
              << 0xeU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0xfU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xfU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffff7fffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__224__Vfuncout)) 
              << 0xfU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x10U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffeffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__228__Vfuncout)) 
              << 0x10U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x11U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffdffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__231__Vfuncout)) 
              << 0x11U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x12U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffffbffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__234__Vfuncout)) 
              << 0x12U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x13U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffff7ffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__237__Vfuncout)) 
              << 0x13U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x14U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffefffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__240__Vfuncout)) 
              << 0x14U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x15U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffdfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__243__Vfuncout)) 
              << 0x15U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x16U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffffbfffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__246__Vfuncout)) 
              << 0x16U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x17U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffff7fffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__249__Vfuncout)) 
              << 0x17U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x18U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffeffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__252__Vfuncout)) 
              << 0x18U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x19U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffdffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__255__Vfuncout)) 
              << 0x19U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1aU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xaU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffffbffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__258__Vfuncout)) 
              << 0x1aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1bU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xbU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffff7ffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__261__Vfuncout)) 
              << 0x1bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1cU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xcU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffefffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__264__Vfuncout)) 
              << 0x1cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1dU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xdU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffdfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__267__Vfuncout)) 
              << 0x1dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1eU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xeU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffffbfffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__270__Vfuncout)) 
              << 0x1eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x1fU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xfU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffff7fffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__273__Vfuncout)) 
              << 0x1fU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x20U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffeffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__277__Vfuncout)) 
              << 0x20U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x21U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[1U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffdffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__280__Vfuncout)) 
              << 0x21U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x22U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfffbffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__283__Vfuncout)) 
              << 0x22U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x23U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[3U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfff7ffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__286__Vfuncout)) 
              << 0x23U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x24U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[4U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffefffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__289__Vfuncout)) 
              << 0x24U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x25U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[5U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffdfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__292__Vfuncout)) 
              << 0x25U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x26U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[6U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xffbfffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__295__Vfuncout)) 
              << 0x26U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x27U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[7U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xff7fffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__298__Vfuncout)) 
              << 0x27U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x28U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[8U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfeffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__301__Vfuncout)) 
              << 0x28U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x29U)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[9U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfdffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__304__Vfuncout)) 
              << 0x29U));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2aU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xaU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xfbffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__307__Vfuncout)) 
              << 0x2aU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2bU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xbU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xf7ffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__310__Vfuncout)) 
              << 0x2bU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2cU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xcU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xefffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__313__Vfuncout)) 
              << 0x2cU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2dU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xdU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xdfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__316__Vfuncout)) 
              << 0x2dU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2eU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xeU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0xbfffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__319__Vfuncout)) 
              << 0x2eU));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check 
        = (1U & (IData)((vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check 
                         >> 0x2fU)));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode 
        = vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type 
        = vlSelf->__PVT__g_pmp__DOT__pmp_req_type[2U];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg 
        = vlSelf->__PVT__csr_pmp_cfg[0xfU];
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml 
        = (1U & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q));
    __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout 
        = ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__csr_pmp_mseccfg_mml)
            ? ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__pmp_req_type;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__result 
                    = ((IData)((2U == (3U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))))
                        ? ((0x20U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))
                            ? ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))
                                ? ((0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                   | ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode))))
                                : (0U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)))
                            : ((4U & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))
                                ? ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                   | (1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)))
                                : ((2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                   | ((1U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type)) 
                                      & (3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode))))))
                        : ((IData)((0x27U == (0x27U 
                                              & (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg))))
                            ? (2U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type))
                            : ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__permission_check) 
                               & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode))
                                   ? ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg) 
                                      >> 5U) : (~ ((IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg) 
                                                   >> 5U))))));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__Vfuncout 
                    = vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__result;
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__Vfuncout))
            : ([&]() {
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__permission_check;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__priv_mode 
                    = __Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__priv_mode;
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__pmp_cfg_lock 
                    = (1U & ((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__region_csr_pmp_cfg) 
                             >> 5U));
                vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__Vfuncout 
                    = (1U & ((3U == (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__priv_mode))
                              ? ((~ (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__pmp_cfg_lock)) 
                                 | (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check))
                              : (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check)));
            }(), (IData)(vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__Vfuncout)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check 
        = ((0x7fffffffffffULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check) 
           | ((QData)((IData)(__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__322__Vfuncout)) 
              << 0x2fU));
    __Vtableidx7 = (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                     << 5U) | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                                << 4U) | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err) 
                                            << 2U) 
                                           | (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                                               << 1U) 
                                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q))))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Viob_soc_sim__ConstPool__TABLE_h315b00d7_0
        [__Vtableidx7];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Viob_soc_sim__ConstPool__TABLE_h406e2012_0
        [__Vtableidx7];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Viob_soc_sim__ConstPool__TABLE_hb3ebb333_0
        [__Vtableidx7];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Viob_soc_sim__ConstPool__TABLE_h6af4b5e9_0
        [__Vtableidx7];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Viob_soc_sim__ConstPool__TABLE_he9d7b8ed_0
        [__Vtableidx7];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Viob_soc_sim__ConstPool__TABLE_he05fe522_0
        [__Vtableidx7];
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelf->__PVT__pc_mux_id = 0U;
    vlSelf->__PVT__csr_restore_mret_id = 0U;
    vlSelf->__PVT__csr_restore_dret_id = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__csr_wr = ((1U 
                                                   == (IData)(vlSelf->__PVT__csr_op)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->__PVT__csr_op)) 
                                                     | (3U 
                                                        == (IData)(vlSelf->__PVT__csr_op))));
    vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec));
    vlSelf->__PVT__csr_mtval = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            vlSelf->__PVT__csr_restore_mret_id = 1U;
                        }
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlSelf->__PVT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlSelf->__PVT__csr_mtval 
                                = ((IData)(vlSelf->__PVT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlSelf->__PVT__pc_id)
                                    : vlSelf->__PVT__pc_id);
                        } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                            vlSelf->__PVT__csr_mtval 
                                = ((IData)(vlSelf->__PVT__instr_is_compressed_id)
                                    ? (IData)(vlSelf->__PVT__instr_rdata_c_id)
                                    : vlSelf->__PVT__instr_rdata_id);
                        } else if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
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
                    }
                }
            }
        }
    }
    vlSelf->__PVT__csr_save_id = 0U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                vlSelf->__PVT__pc_mux_id = 2U;
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->__PVT__csr_save_id = 1U;
                    }
                }
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                               | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                              | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                        if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                        }
                    }
                }
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelf->__PVT__csr_save_id = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))));
                    if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelf->__PVT__csr_save_id = 0U;
                                        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->__PVT__pc_mux_id = 2U;
            } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->__PVT__pc_mux_id = 2U;
            } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelf->__PVT__pc_mux_id = 3U;
            } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelf->__PVT__pc_mux_id = 4U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__pc_mux_id = 1U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            vlSelf->__PVT__pc_mux_id = 0U;
        }
        if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
        }
    }
}
