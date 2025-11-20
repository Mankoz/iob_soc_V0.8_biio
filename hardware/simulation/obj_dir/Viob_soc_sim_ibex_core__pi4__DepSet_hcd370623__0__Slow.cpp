// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___eval_initial__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___eval_initial__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core\n"); );
    // Body
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[2U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[3U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[3U] 
        = (1U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [3U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[4U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[4U] 
        = (2U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [4U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[5U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[5U] 
        = (4U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [5U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[6U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[6U] 
        = (8U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [6U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[7U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[7U] 
        = (0x10U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [7U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[8U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[8U] 
        = (0x20U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [8U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[9U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[9U] 
        = (0x40U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [9U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xaU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xaU] 
        = (0x80U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0xaU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xbU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xbU] 
        = (0x100U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0xbU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xcU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xcU] 
        = (0x200U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0xcU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xdU] 
        = (0x400U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0xdU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xeU] 
        = (0x800U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0xeU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xfU] 
        = (0x1000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0xfU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x10U] 
        = (0x2000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x10U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x11U] 
        = (0x4000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x11U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x12U] 
        = (0x8000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x12U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x13U] 
        = (0x10000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x13U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x14U] 
        = (0x20000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x14U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x15U] 
        = (0x40000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x15U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x16U] 
        = (0x80000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x16U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x17U] 
        = (0x100000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x17U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x18U] 
        = (0x200000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x18U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x19U] 
        = (0x400000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x19U]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1aU] 
        = (0x800000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x1aU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1bU] 
        = (0x1000000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x1bU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1cU] 
        = (0x2000000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x1cU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1dU] 
        = (0x4000000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x1dU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1eU] 
        = (0x8000000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x1eU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1fU] 
        = (0x10000000U | vlSelf->__PVT__cs_registers_i__DOT__mhpmevent
           [0x1fU]);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[1U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xdU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xeU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0xfU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x10U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x11U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x12U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x13U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x14U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x15U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x16U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x17U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x18U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x19U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1aU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1bU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1cU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1dU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1eU] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[0x1fU] = 0U;
    vlSelf->__PVT__g_pmp__DOT__pmp_req_type[0U] = 0U;
    vlSelf->__PVT__g_pmp__DOT__pmp_req_type[1U] = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[1U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xdU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xeU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xfU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x10U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x11U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x12U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x13U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x14U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x15U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x16U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x17U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x18U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x19U] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x1aU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x1bU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x1cU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x1dU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x1eU] = 0ULL;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0x1fU] = 0ULL;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT[0U] = 0xff0000ffU;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT[1U] = 0xf00ff00fU;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT[2U] = 0xc3c3c3c3U;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT[3U] = 0x99999999U;
}

extern const VlUnpacked<CData/*0:0*/, 256> Viob_soc_sim__ConstPool__TABLE_h56aa66f2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_he017713b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_he6611871_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_hde970e00_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_h14eb773e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_hf12c31da_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h315b00d7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h406e2012_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_hb3ebb333_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h6af4b5e9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he9d7b8ed_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he05fe522_0;

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0\n"); );
    // Init
    CData/*0:0*/ __PVT__mult_sel_ex;
    __PVT__mult_sel_ex = 0;
    IData/*16:0*/ __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data;
    __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data = 0;
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
    CData/*4:0*/ __VdfgTmp_h5b1acb32__0;
    __VdfgTmp_h5b1acb32__0 = 0;
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
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->__PVT__ctrl_busy = 1U;
    vlSelf->wb_stage_i__DOT____VdfgTmp_ha5c23953__0 
        = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
           & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
    vlSelf->__PVT__csr_save_if = 0U;
    vlSelf->__PVT__csr_save_wb = 0U;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h923bbe04__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    __VdfgTmp_h5b1acb32__0 = ((0x10U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                        >> 6U)) | (
                                                   (8U 
                                                    & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                       >> 0xeU)) 
                                                   | ((4U 
                                                       & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                          >> 0x14U)) 
                                                      | ((2U 
                                                          & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                             >> 0x16U)) 
                                                         | (1U 
                                                            & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                               >> 0xdU))))));
    vlSelf->__PVT__trigger_match = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q) 
                                    & (vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                                       == (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           << 1U)));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelf->__PVT__instr_req_int = 1U;
    vlSelf->__PVT__exc_pc_mux_id = 1U;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[3U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[4U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[5U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[6U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[7U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[8U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[9U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[2U] 
        = (vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
           + (QData)((IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                                  >> 2U)) & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)))));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xaU] 
        = (((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                >> 0xaU)) & ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q) 
                             & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q)))
            ? (QData)((IData)(((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)))
            : (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[4U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[8U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlSelf->__PVT__id_stage_i__DOT__controller_run = 0U;
    vlSelf->__PVT__outstanding_store_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                           & (1U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelf->__PVT__outstanding_load_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                          & (0U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelf->__PVT__instr_fetch_err));
    vlSelf->id_stage_i__DOT____VdfgTmp_h97dc7a37__0 
        = ((~ (IData)(vlSelf->__PVT__instr_fetch_err)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U] = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U] = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U] = (3U 
                                                   & ((2U 
                                                       & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                       >> 2U)
                                                       : (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? 0U : vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__id_stage_i__DOT__imm_i_type = ((
                                                   (- (IData)(
                                                              (vlSelf->__PVT__instr_rdata_id 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | (vlSelf->__PVT__instr_rdata_id 
                                                     >> 0x14U));
    vlSelf->__PVT__imd_val_q_ex[0U] = vlSelf->__PVT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelf->__PVT__imd_val_q_ex[1U] = vlSelf->__PVT__id_stage_i__DOT__imd_val_q
        [1U];
    vlSelf->__PVT__rf_rd_b_wb_match = (((0x1fU & (vlSelf->__PVT__instr_rdata_id 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                       & (0U != (0x1fU 
                                                 & (vlSelf->__PVT__instr_rdata_id 
                                                    >> 0x14U))));
    vlSelf->__PVT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelf->__PVT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelf->__PVT__lsu_addr_incr_req = ((1U & (~ (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                            || (IData)(vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    vlSelf->__PVT__rf_write_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                  & ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
                                     | (0U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))));
    vlSelf->__PVT__instr_first_cycle_id = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)) 
                                           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__csr_pmp_addr[0U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[1U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[2U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[3U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[4U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[5U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[6U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[7U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[8U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[9U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_pmp_addr[0xaU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__csr_pmp_addr[0xbU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__csr_pmp_addr[0xcU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__csr_pmp_addr[0xdU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__csr_pmp_addr[0xeU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__csr_pmp_addr[0xfU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__csr_pmp_cfg[0U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[1U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[2U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[3U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[4U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[5U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[6U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[7U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[8U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[9U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[0xaU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[0xbU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[0xcU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[0xdU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[0xeU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_cfg[0xfU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data 
        = ((0x10000U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                        >> 5U)) | ((0x8000U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                               >> 1U)) 
                                   | ((0x4000U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                  << 9U)) 
                                      | ((0x2000U & 
                                          (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                           << 4U)) 
                                         | ((0x1000U 
                                             & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                   << 0xbU)) 
                                               | ((0x400U 
                                                   & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                      >> 9U)) 
                                                  | ((0x200U 
                                                      & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                         >> 0x14U)) 
                                                     | ((0x100U 
                                                         & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                            << 4U)) 
                                                        | ((0x80U 
                                                            & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q) 
                                                           | ((0x40U 
                                                               & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                  << 5U)) 
                                                              | ((0x20U 
                                                                  & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                                     >> 0x17U)) 
                                                                 | (IData)(__VdfgTmp_h5b1acb32__0)))))))))))));
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr 
        = (((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
            >> 2U) & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q) 
                      == ((IData)(__VdfgTmp_h5b1acb32__0) 
                          & (3U | (0x1cU & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                            >> 1U))))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelf->__PVT__debug_csr_save = 0U;
    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelf->__PVT__imd_val_q_ex[0U]);
    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelf->__PVT__imd_val_q_ex[1U]);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelf->__PVT__imd_val_q_ex
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelf->__PVT__imd_val_q_ex
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
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
    vlSelf->__PVT__id_stage_i__DOT__lsu_sign_ext = 0U;
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
            vlSelf->__PVT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelf->__PVT__instr_rdata_id 
                            >> 0xeU)));
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
    vlSelf->rf_raddr_a_o = (0x1fU & (((~ (IData)(vlSelf->__PVT__instr_first_cycle_id)) 
                                      & (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q))
                                      ? (vlSelf->__PVT__instr_rdata_id 
                                         >> 0x1bU) : 
                                     (vlSelf->__PVT__instr_rdata_id 
                                      >> 0xfU)));
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
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [0U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [1U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [2U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [3U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [4U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [5U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [6U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [7U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [8U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                  [9U] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0xaU] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0xbU] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0xcU] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0xdU] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0xeU] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffeU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0xfU] >> 3U))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [0U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [0U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [0U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [0U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [0U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [0U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [0U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [0U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [0U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [0U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [0U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [1U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [1U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [1U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [1U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [1U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [1U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [1U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [1U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [1U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [1U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [1U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [1U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [1U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [1U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [1U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [1U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [1U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [1U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [1U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [1U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [1U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [1U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [2U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [2U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [2U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [2U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [2U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [2U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [2U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [2U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [2U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [2U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [2U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [2U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [2U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [2U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [2U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [2U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [2U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [2U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [2U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[2U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [2U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [2U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [2U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [3U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [3U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [3U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [3U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [3U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [3U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [3U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [3U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [3U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [3U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [3U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [3U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [3U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [3U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [3U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [3U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [3U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [3U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [3U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[3U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [3U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [3U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [3U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [4U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [4U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [4U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [4U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [4U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [4U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [4U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [4U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [4U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [4U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [4U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [4U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [4U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [4U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [4U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [4U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [4U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [4U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [4U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[4U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [4U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [4U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [4U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [5U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [5U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [5U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [5U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [5U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [5U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [5U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [5U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [5U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [5U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [5U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [5U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [5U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [5U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [5U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [5U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [5U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [5U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [5U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[5U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [5U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [5U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [5U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [6U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [6U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [6U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [6U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [6U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [6U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [6U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [6U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [6U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [6U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [6U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [6U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [6U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [6U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [6U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [6U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [6U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [6U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [6U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[6U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [6U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [6U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [6U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [7U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [7U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [7U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [7U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [7U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [7U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [7U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [7U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [7U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [7U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [7U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [7U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [7U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [7U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [7U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [7U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [7U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [7U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [7U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[7U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [7U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [7U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [7U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [8U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [8U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [8U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [8U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [8U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [8U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [8U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [8U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [8U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [8U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [8U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [8U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [8U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [8U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [8U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [8U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [8U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [8U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [8U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[8U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [8U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [8U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [8U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [9U] >> 3U))) 
                            | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                          [9U] >> 2U)))) 
                           << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [9U] >> 3U))) 
                            | (~ (IData)((3U == (3U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                           << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                          [9U] >> 3U))) 
                            | (~ (IData)((7U == (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                           << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [9U] >> 3U))) 
                               | (~ (IData)((0xfU == 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelf->__PVT__csr_pmp_addr
                                                         [9U] 
                                                         >> 2U))))))) 
                              << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [9U] >> 3U))) 
                               | (~ (IData)((0x1fU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                              << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [9U] >> 3U))) 
                               | (~ (IData)((0x3fU 
                                             == (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                              << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                             [9U] >> 3U))) 
                               | (~ (IData)((0x7fU 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                              << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0xffU 
                                              == (0xffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                               << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0x1ffU 
                                              == (0x1ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                               << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0x3ffU 
                                              == (0x3ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                               << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                              [9U] 
                                              >> 3U))) 
                                | (~ (IData)((0x7ffU 
                                              == (0x7ffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                               << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfffU 
                                               == (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fffU 
                                               == (0x1fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fffU 
                                               == (0x3fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [9U] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fffU 
                                               == (0x7fffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffffU 
                                                == 
                                                (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                                 << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffffU 
                                                == 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                                 << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffffU 
                                                == 
                                                (0x3ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                                 << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffffU 
                                                == 
                                                (0x7ffffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [9U] 
                                                            >> 2U))))))) 
                                 << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x100000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffffU 
                                                 == 
                                                 (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                                  << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x200000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffffU 
                                                 == 
                                                 (0x1fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                                  << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x400000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffffU 
                                                 == 
                                                 (0x3fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                                  << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x800000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [9U] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffffU 
                                                 == 
                                                 (0x7fffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                                  << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x1000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffffU 
                                                  == 
                                                  (0xffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                   << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x2000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffffU 
                                                  == 
                                                  (0x1ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                   << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x4000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffffU 
                                                  == 
                                                  (0x3ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                   << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x8000000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [9U] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffffU 
                                                  == 
                                                  (0x7ffffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [9U] 
                                                              >> 2U))))))) 
                                   << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x10000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffffU 
                                                   == 
                                                   (0xfffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [9U] 
                                                               >> 2U))))))) 
                                    << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x20000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffffU 
                                                   == 
                                                   (0x1fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [9U] 
                                                               >> 2U))))))) 
                                    << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (0x40000000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [9U] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffffU 
                                                   == 
                                                   (0x3fffffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [9U] 
                                                               >> 2U))))))) 
                                    << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[9U] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [9U]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                    [9U] >> 3U))) | 
                      (~ (IData)((0x7fffffffU == (0x7fffffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [9U] 
                                                             >> 2U))))))) 
                     << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                            [0xaU] 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                             << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xaU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                             << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xaU] 
                                                            >> 2U))))))) 
                                 << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xaU] 
                                                            >> 2U))))))) 
                                 << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xaU] 
                                                            >> 2U))))))) 
                                 << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xaU] 
                                                            >> 2U))))))) 
                                 << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffU 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xaU] 
                                                             >> 2U))))))) 
                                  << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xaU] 
                                                             >> 2U))))))) 
                                  << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xaU] 
                                                             >> 2U))))))) 
                                  << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xaU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xaU] 
                                                             >> 2U))))))) 
                                  << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                   << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                   << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                   << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xaU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xaU] 
                                                              >> 2U))))))) 
                                   << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x100000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xaU] 
                                                               >> 2U))))))) 
                                    << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x200000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xaU] 
                                                               >> 2U))))))) 
                                    << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x400000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xaU] 
                                                               >> 2U))))))) 
                                    << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x800000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xaU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xaU] 
                                                               >> 2U))))))) 
                                    << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x1000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xffffffU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xaU] 
                                                                >> 2U))))))) 
                                     << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x2000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xaU] 
                                                                >> 2U))))))) 
                                     << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x4000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xaU] 
                                                                >> 2U))))))) 
                                     << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x8000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xaU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xaU] 
                                                                >> 2U))))))) 
                                     << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x10000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xfffffffU 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xaU] 
                                                                 >> 2U))))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x20000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xaU] 
                                                                 >> 2U))))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (0x40000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xaU] 
                                                                 >> 2U))))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xaU] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xaU]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                      [0xaU] >> 3U))) 
                        | (~ (IData)((0x7fffffffU == 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->__PVT__csr_pmp_addr
                                                  [0xaU] 
                                                  >> 2U))))))) 
                       << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                            [0xbU] 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                             << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xbU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                             << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xbU] 
                                                            >> 2U))))))) 
                                 << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xbU] 
                                                            >> 2U))))))) 
                                 << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xbU] 
                                                            >> 2U))))))) 
                                 << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xbU] 
                                                            >> 2U))))))) 
                                 << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffU 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xbU] 
                                                             >> 2U))))))) 
                                  << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xbU] 
                                                             >> 2U))))))) 
                                  << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xbU] 
                                                             >> 2U))))))) 
                                  << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xbU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xbU] 
                                                             >> 2U))))))) 
                                  << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                   << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                   << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                   << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xbU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xbU] 
                                                              >> 2U))))))) 
                                   << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x100000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xbU] 
                                                               >> 2U))))))) 
                                    << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x200000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xbU] 
                                                               >> 2U))))))) 
                                    << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x400000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xbU] 
                                                               >> 2U))))))) 
                                    << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x800000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xbU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xbU] 
                                                               >> 2U))))))) 
                                    << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x1000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xffffffU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xbU] 
                                                                >> 2U))))))) 
                                     << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x2000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xbU] 
                                                                >> 2U))))))) 
                                     << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x4000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xbU] 
                                                                >> 2U))))))) 
                                     << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x8000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xbU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xbU] 
                                                                >> 2U))))))) 
                                     << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x10000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xfffffffU 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xbU] 
                                                                 >> 2U))))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x20000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xbU] 
                                                                 >> 2U))))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (0x40000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xbU] 
                                                                 >> 2U))))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xbU] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xbU]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                      [0xbU] >> 3U))) 
                        | (~ (IData)((0x7fffffffU == 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->__PVT__csr_pmp_addr
                                                  [0xbU] 
                                                  >> 2U))))))) 
                       << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                            [0xcU] 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                             << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xcU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                             << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xcU] 
                                                            >> 2U))))))) 
                                 << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xcU] 
                                                            >> 2U))))))) 
                                 << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xcU] 
                                                            >> 2U))))))) 
                                 << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xcU] 
                                                            >> 2U))))))) 
                                 << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffU 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xcU] 
                                                             >> 2U))))))) 
                                  << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xcU] 
                                                             >> 2U))))))) 
                                  << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xcU] 
                                                             >> 2U))))))) 
                                  << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xcU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xcU] 
                                                             >> 2U))))))) 
                                  << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                   << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                   << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                   << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xcU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xcU] 
                                                              >> 2U))))))) 
                                   << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x100000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xcU] 
                                                               >> 2U))))))) 
                                    << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x200000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xcU] 
                                                               >> 2U))))))) 
                                    << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x400000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xcU] 
                                                               >> 2U))))))) 
                                    << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x800000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xcU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xcU] 
                                                               >> 2U))))))) 
                                    << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x1000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xffffffU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xcU] 
                                                                >> 2U))))))) 
                                     << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x2000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xcU] 
                                                                >> 2U))))))) 
                                     << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x4000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xcU] 
                                                                >> 2U))))))) 
                                     << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x8000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xcU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xcU] 
                                                                >> 2U))))))) 
                                     << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x10000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xfffffffU 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xcU] 
                                                                 >> 2U))))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x20000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xcU] 
                                                                 >> 2U))))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (0x40000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xcU] 
                                                                 >> 2U))))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xcU] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xcU]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                      [0xcU] >> 3U))) 
                        | (~ (IData)((0x7fffffffU == 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->__PVT__csr_pmp_addr
                                                  [0xcU] 
                                                  >> 2U))))))) 
                       << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                            [0xdU] 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                             << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xdU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                             << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xdU] 
                                                            >> 2U))))))) 
                                 << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xdU] 
                                                            >> 2U))))))) 
                                 << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xdU] 
                                                            >> 2U))))))) 
                                 << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xdU] 
                                                            >> 2U))))))) 
                                 << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffU 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xdU] 
                                                             >> 2U))))))) 
                                  << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xdU] 
                                                             >> 2U))))))) 
                                  << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xdU] 
                                                             >> 2U))))))) 
                                  << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xdU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xdU] 
                                                             >> 2U))))))) 
                                  << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                   << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                   << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                   << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xdU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xdU] 
                                                              >> 2U))))))) 
                                   << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x100000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xdU] 
                                                               >> 2U))))))) 
                                    << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x200000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xdU] 
                                                               >> 2U))))))) 
                                    << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x400000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xdU] 
                                                               >> 2U))))))) 
                                    << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x800000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xdU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xdU] 
                                                               >> 2U))))))) 
                                    << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x1000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xffffffU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xdU] 
                                                                >> 2U))))))) 
                                     << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x2000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xdU] 
                                                                >> 2U))))))) 
                                     << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x4000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xdU] 
                                                                >> 2U))))))) 
                                     << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x8000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xdU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xdU] 
                                                                >> 2U))))))) 
                                     << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x10000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xfffffffU 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xdU] 
                                                                 >> 2U))))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x20000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xdU] 
                                                                 >> 2U))))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (0x40000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xdU] 
                                                                 >> 2U))))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xdU] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xdU]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                      [0xdU] >> 3U))) 
                        | (~ (IData)((0x7fffffffU == 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->__PVT__csr_pmp_addr
                                                  [0xdU] 
                                                  >> 2U))))))) 
                       << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xeU] 
                                            >> 3U))) 
                              | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                            [0xeU] 
                                            >> 2U)))) 
                             << 1U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffffbU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (4U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xeU] 
                                            >> 3U))) 
                              | (~ (IData)((3U == (3U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                             << 2U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffff7U & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (8U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xeU] 
                                            >> 3U))) 
                              | (~ (IData)((7U == (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                             << 3U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffefU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x10U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0xfU 
                                               == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                << 4U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffdfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x20U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x1fU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                << 5U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffffbfU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x40U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x3fU 
                                               == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                << 6U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffff7fU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x80U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                 | (~ (IData)((0x7fU 
                                               == (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                << 7U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffeffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x100U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0xffU 
                                                == 
                                                (0xffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xeU] 
                                                            >> 2U))))))) 
                                 << 8U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffdffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x200U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x1ffU 
                                                == 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xeU] 
                                                            >> 2U))))))) 
                                 << 9U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffffbffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x400U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x3ffU 
                                                == 
                                                (0x3ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xeU] 
                                                            >> 2U))))))) 
                                 << 0xaU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffff7ffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x800U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                  | (~ (IData)((0x7ffU 
                                                == 
                                                (0x7ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__csr_pmp_addr
                                                            [0xeU] 
                                                            >> 2U))))))) 
                                 << 0xbU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffefffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x1000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0xfffU 
                                                 == 
                                                 (0xfffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xeU] 
                                                             >> 2U))))))) 
                                  << 0xcU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffdfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x2000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x1fffU 
                                                 == 
                                                 (0x1fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xeU] 
                                                             >> 2U))))))) 
                                  << 0xdU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffffbfffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x4000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x3fffU 
                                                 == 
                                                 (0x3fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xeU] 
                                                             >> 2U))))))) 
                                  << 0xeU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffff7fffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x8000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                 [0xeU] 
                                                 >> 3U))) 
                                   | (~ (IData)((0x7fffU 
                                                 == 
                                                 (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__csr_pmp_addr
                                                             [0xeU] 
                                                             >> 2U))))))) 
                                  << 0xfU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffeffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x10000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0xffffU 
                                                  == 
                                                  (0xffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                   << 0x10U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffdffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x20000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x1ffffU 
                                                  == 
                                                  (0x1ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                   << 0x11U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfffbffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x40000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x3ffffU 
                                                  == 
                                                  (0x3ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                   << 0x12U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfff7ffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x80000U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                                  [0xeU] 
                                                  >> 3U))) 
                                    | (~ (IData)((0x7ffffU 
                                                  == 
                                                  (0x7ffffU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__csr_pmp_addr
                                                              [0xeU] 
                                                              >> 2U))))))) 
                                   << 0x13U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffefffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x100000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0xfffffU 
                                                   == 
                                                   (0xfffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xeU] 
                                                               >> 2U))))))) 
                                    << 0x14U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffdfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x200000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x1fffffU 
                                                   == 
                                                   (0x1fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xeU] 
                                                               >> 2U))))))) 
                                    << 0x15U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xffbfffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x400000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x3fffffU 
                                                   == 
                                                   (0x3fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xeU] 
                                                               >> 2U))))))) 
                                    << 0x16U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xff7fffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x800000U & (((3U != (3U & (
                                                   vlSelf->__PVT__csr_pmp_cfg
                                                   [0xeU] 
                                                   >> 3U))) 
                                     | (~ (IData)((0x7fffffU 
                                                   == 
                                                   (0x7fffffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__csr_pmp_addr
                                                               [0xeU] 
                                                               >> 2U))))))) 
                                    << 0x17U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfeffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x1000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0xffffffU 
                                                    == 
                                                    (0xffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xeU] 
                                                                >> 2U))))))) 
                                     << 0x18U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfdffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x2000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x1ffffffU 
                                                    == 
                                                    (0x1ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xeU] 
                                                                >> 2U))))))) 
                                     << 0x19U)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xfbffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x4000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x3ffffffU 
                                                    == 
                                                    (0x3ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xeU] 
                                                                >> 2U))))))) 
                                     << 0x1aU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xf7ffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x8000000U & (((3U != (3U & 
                                              (vlSelf->__PVT__csr_pmp_cfg
                                               [0xeU] 
                                               >> 3U))) 
                                      | (~ (IData)(
                                                   (0x7ffffffU 
                                                    == 
                                                    (0x7ffffffU 
                                                     & (IData)(
                                                               (vlSelf->__PVT__csr_pmp_addr
                                                                [0xeU] 
                                                                >> 2U))))))) 
                                     << 0x1bU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xefffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x10000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0xfffffffU 
                                                     == 
                                                     (0xfffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xeU] 
                                                                 >> 2U))))))) 
                                      << 0x1cU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xdfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x20000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x1fffffffU 
                                                     == 
                                                     (0x1fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xeU] 
                                                                 >> 2U))))))) 
                                      << 0x1dU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0xbfffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (0x40000000U & (((3U != (3U & 
                                               (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U))) 
                                       | (~ (IData)(
                                                    (0x3fffffffU 
                                                     == 
                                                     (0x3fffffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__csr_pmp_addr
                                                                 [0xeU] 
                                                                 >> 2U))))))) 
                                      << 0x1eU)));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xeU] 
        = ((0x7fffffffU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xeU]) | (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                      [0xeU] >> 3U))) 
                        | (~ (IData)((0x7fffffffU == 
                                      (0x7fffffffU 
                                       & (IData)((vlSelf->__PVT__csr_pmp_addr
                                                  [0xeU] 
                                                  >> 2U))))))) 
                       << 0x1fU));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[0xfU] 
        = ((0xfffffffdU & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask
            [0xfU]) | (2U & (((3U != (3U & (vlSelf->__PVT__csr_pmp_cfg
                                            [0xfU] 
                                            >> 3U))) 
                              | (~ (IData)((vlSelf->__PVT__csr_pmp_addr
                                            [0xfU] 
                                            >> 2U)))) 
                             << 1U)));
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
    if ((0x10000U & __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data)) {
        if ((0x8000U & __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data)) {
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = 0U;
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 7U;
        } else {
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = 1U;
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 4U;
        }
    } else {
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set 
            = ((0x8000U & __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data)
                ? 1U : 0U);
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 0U;
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q))));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
           | ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
              & (IData)(vlSelf->__PVT__trigger_match)));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 0U;
    } else if ((0U != (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = 1U;
    }
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__csr_op = __PVT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((IData)(((0U == (0xf8000U & vlSelf->__PVT__instr_rdata_id)) 
                 & ((2U == (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                    | (3U == (IData)(__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))) {
        vlSelf->__PVT__csr_op = 0U;
    }
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
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
    vlSelf->__PVT__rf_rd_a_wb_match = (((IData)(vlSelf->rf_raddr_a_o) 
                                        == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                       & (0U != (IData)(vlSelf->rf_raddr_a_o)));
    if (vlSelf->__PVT__lsu_addr_incr_req) {
        vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel 
            = __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel 
            = __PVT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
    vlSelf->__PVT__id_stage_i__DOT__div_en_dec = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                                  & (IData)(vlSelf->__PVT__div_sel_ex));
    vlSelf->__PVT__id_stage_i__DOT__mult_en_dec = (
                                                   (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                                   & (IData)(__PVT__mult_sel_ex));
    vlSelf->__PVT__ex_block_i__DOT__multdiv_sel = ((IData)(vlSelf->__PVT__div_sel_ex) 
                                                   | (IData)(__PVT__mult_sel_ex));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__instr_first_cycle_id) 
                     << 7U) | (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate 
        = Viob_soc_sim__ConstPool__TABLE_h56aa66f2_0
        [__Vtableidx5];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode 
        = ((0x31U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
           | ((0x32U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x33U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))));
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
    __Vtableidx3 = vlSelf->__PVT__id_stage_i__DOT__alu_operator;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Viob_soc_sim__ConstPool__TABLE_he017713b_0
        [__Vtableidx3];
    __Vtableidx2 = vlSelf->__PVT__id_stage_i__DOT__alu_operator;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Viob_soc_sim__ConstPool__TABLE_he6611871_0
        [__Vtableidx2];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Viob_soc_sim__ConstPool__TABLE_hde970e00_0
        [__Vtableidx2];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Viob_soc_sim__ConstPool__TABLE_h14eb773e_0
        [__Vtableidx2];
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Viob_soc_sim__ConstPool__TABLE_hf12c31da_0
        [__Vtableidx2];
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
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
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
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        vlSelf->__PVT__csr_save_wb 
                            = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                               | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q));
                    }
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
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlSelf->__PVT__pc_mux_id = 0U;
    if ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelf->__PVT__csr_save_if = 1U;
                }
                vlSelf->__PVT__exc_pc_mux_id = 2U;
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelf->__PVT__debug_csr_save = 1U;
                    }
                } else {
                    vlSelf->__PVT__debug_csr_save = 1U;
                }
                vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                vlSelf->__PVT__pc_mux_id = 2U;
            }
        }
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__instr_req_int = 0U;
        } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelf->__PVT__instr_req_int = 0U;
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
                    vlSelf->__PVT__pc_mux_id = 2U;
                } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelf->__PVT__exc_pc_mux_id = 
                        ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                          ? 3U : 0U);
                    vlSelf->__PVT__pc_mux_id = 2U;
                } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                    vlSelf->__PVT__pc_mux_id = 3U;
                } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                    vlSelf->__PVT__pc_mux_id = 4U;
                }
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
            } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelf->__PVT__pc_mux_id = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U)))) {
            vlSelf->__PVT__pc_mux_id = 0U;
        }
    }
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
}
