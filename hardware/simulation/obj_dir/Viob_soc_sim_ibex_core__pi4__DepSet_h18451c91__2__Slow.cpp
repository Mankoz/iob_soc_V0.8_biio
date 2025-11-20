// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h315b00d7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h406e2012_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_hb3ebb333_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h6af4b5e9_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he9d7b8ed_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he05fe522_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Viob_soc_sim__ConstPool__TABLE_h2c39dbff_0;

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1\n"); );
    // Init
    CData/*4:0*/ __PVT__if_stage_i__DOT__irq_vec;
    __PVT__if_stage_i__DOT__irq_vec = 0;
    QData/*32:0*/ __PVT__ex_block_i__DOT__multdiv_alu_operand_b;
    __PVT__ex_block_i__DOT__multdiv_alu_operand_b = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b;
    __PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask = 0;
    CData/*4:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt = 0;
    IData/*23:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n = 0;
    CData/*7:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b = 0;
    CData/*3:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b = 0;
    CData/*1:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h = 0;
    CData/*1:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev = 0;
    CData/*0:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 = 0;
    IData/*31:0*/ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0;
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0 = 0;
    CData/*0:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = 0;
    CData/*0:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = 0;
    CData/*0:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = 0;
    IData/*31:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = 0;
    QData/*32:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = 0;
    QData/*33:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res = 0;
    SData/*15:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a = 0;
    CData/*0:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a = 0;
    QData/*33:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1 = 0;
    QData/*33:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2 = 0;
    QData/*33:0*/ __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3 = 0;
    IData/*31:0*/ __PVT__cs_registers_i__DOT__exception_pc;
    __PVT__cs_registers_i__DOT__exception_pc = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__dbg_csr;
    __PVT__cs_registers_i__DOT__dbg_csr = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__illegal_csr;
    __PVT__cs_registers_i__DOT__illegal_csr = 0;
    QData/*47:0*/ __PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt;
    __PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt = 0;
    QData/*47:0*/ __PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt;
    __PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt = 0;
    QData/*47:0*/ __PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq;
    __PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq = 0;
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
    SData/*9:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
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
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
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
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2 
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
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = ((vlSelf->__PVT__multdiv_operand_a_ex >> 0x1fU) 
           & (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode));
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a 
        = (vlSelf->__PVT__multdiv_operand_a_ex >> 0x10U);
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode) 
           & (vlSelf->__PVT__multdiv_operand_a_ex >> 0x1fU));
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res_uns 
        = (0x3ffffffffULL & VL_MULS_QQQ(34, (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (0xffffU 
                                                              & vlSelf->__PVT__multdiv_operand_a_ex))), 
                                        (0x3ffffffffULL 
                                         & VL_EXTENDS_QI(34,17, 
                                                         (0xffffU 
                                                          & vlSelf->__PVT__multdiv_operand_b_ex)))));
    __PVT__ex_block_i__DOT__multdiv_alu_operand_b = 
        (1ULL | ((QData)((IData)((~ vlSelf->__PVT__multdiv_operand_b_ex))) 
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
    vlSelf->__PVT__csr_mtval = 0U;
    vlSelf->__PVT__csr_save_id = 0U;
    vlSelf->__PVT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
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
    vlSelf->__PVT__csr_save_cause = 0U;
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
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelf->__PVT__csr_save_cause = 1U;
                }
            } else if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelf->__PVT__pc_mux_id = 2U;
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
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b 
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
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h 
        = (3U & (~ (((IData)((0U != (vlSelf->__PVT__alu_operand_b_ex 
                                     >> 0x11U))) << 1U) 
                    | (0U != (0x7fffU & (vlSelf->__PVT__alu_operand_b_ex 
                                         >> 1U))))));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n 
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
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b 
        = ((0xc0U & (vlSelf->__PVT__alu_operand_b_ex 
                     >> 0x12U)) | ((0x30U & (vlSelf->__PVT__alu_operand_b_ex 
                                             >> 0xcU)) 
                                   | ((0xcU & (vlSelf->__PVT__alu_operand_b_ex 
                                               >> 6U)) 
                                      | (3U & vlSelf->__PVT__alu_operand_b_ex))));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h 
        = ((2U & (vlSelf->__PVT__alu_operand_b_ex >> 0xfU)) 
           | (1U & vlSelf->__PVT__alu_operand_b_ex));
    __PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b 
        = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate)
            ? (~ vlSelf->__PVT__alu_operand_b_ex) : vlSelf->__PVT__alu_operand_b_ex);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
        = (~ ((IData)(0xffffffffU) << ((0x10U & ((~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0xfU 
                                                              & (vlSelf->__PVT__alu_operand_b_ex 
                                                                 >> 0x18U))))) 
                                                 << 4U)) 
                                       | (0xfU & (vlSelf->__PVT__alu_operand_b_ex 
                                                  >> 0x18U)))));
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0 
        = ((vlSelf->__PVT__alu_operand_b_ex >> 5U) 
           & ((0x2fU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
              | (0x30U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev 
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
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a 
        = __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1 
        = (QData)((IData)((0xffffU & (IData)((vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res_uns 
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
            __PVT__ex_block_i__DOT__multdiv_alu_operand_b 
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
        __PVT__ex_block_i__DOT__multdiv_alu_operand_b 
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
                                                   ? __PVT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlSelf->__PVT__alu_operand_b_ex)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlSelf->__PVT__alu_operand_b_ex)) 
                                                    << 1U))))));
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
    vlSelf->__PVT__cs_registers_i__DOT__mstack_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
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
            = __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    } else if ((0x14U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xf0U & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld)) 
               | ((0xcU & ((- (IData)((1U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                             >> 1U)))) 
                           << 2U)) | (3U & (- (IData)(
                                                      (1U 
                                                       & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b)))))));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xfU & (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld)) 
               | ((0xc0U & ((- (IData)((1U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                              >> 3U)))) 
                            << 6U)) | (0x30U & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b) 
                                                               >> 2U)))) 
                                                << 4U))));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0 
            = (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     << 1U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffff8U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | (IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0 
            = (1U | (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xffffc7U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0) 
                  << 3U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0 
            = (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 1U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffe3fU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0) 
                  << 6U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0 
            = (1U | (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfff1ffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0) 
                  << 9U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0 
            = (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 3U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xff8fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0) 
                  << 0xcU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0 
            = (1U | (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 3U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfc7fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0) 
                  << 0xfU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0 
            = (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                     >> 5U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xe3ffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hecbdd18e__0) 
                  << 0x12U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0 
            = (1U | (6U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b) 
                           >> 5U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x1fffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h89b51b70__0) 
                  << 0x15U));
    } else if ((0x15U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld 
            = ((0xf0U & ((- (IData)((1U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h) 
                                           >> 1U)))) 
                         << 4U)) | (0xfU & (- (IData)(
                                                      (1U 
                                                       & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h))))));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_ha36308a2__0 
            = (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                     << 2U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffff8U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | (IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_ha36308a2__0));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h2754914a__0 
            = (1U | (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xffffc7U & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h2754914a__0) 
                  << 3U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h30593303__0 
            = (2U | (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfffe3fU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h30593303__0) 
                  << 6U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h19c60d8b__0 
            = (3U | (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 2U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfff1ffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h19c60d8b__0) 
                  << 9U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_ha36308a2__0 
            = (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                     << 1U));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xff8fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_ha36308a2__0) 
                  << 0xcU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h2754914a__0 
            = (1U | (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xfc7fffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h2754914a__0) 
                  << 0xfU));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h30593303__0 
            = (2U | (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0xe3ffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h30593303__0) 
                  << 0x12U));
        vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h19c60d8b__0 
            = (3U | (4U & ((IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h) 
                           << 1U)));
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = ((0x1fffffU & vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel) 
               | ((IData)(vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h19c60d8b__0) 
                  << 0x15U));
    } else {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld = 0U;
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel 
            = __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n;
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result 
        = (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
           & __PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev 
        = ((vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
            << 0x1fU) | ((0x40000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                         << 0x1dU)) 
                         | ((0x20000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                            << 0x1bU)) 
                            | ((0x10000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                               << 0x19U)) 
                               | ((0x8000000U & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt 
        = (0x1fU & ((0x37U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                     ? (vlSelf->__PVT__alu_operand_b_ex 
                        >> 0x10U) : ((IData)(vlSelf->__PVT__instr_first_cycle_id)
                                      ? ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0)
                                          ? (- vlSelf->__PVT__alu_operand_b_ex)
                                          : vlSelf->__PVT__alu_operand_b_ex)
                                      : ((IData)(ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0)
                                          ? vlSelf->__PVT__alu_operand_b_ex
                                          : (- vlSelf->__PVT__alu_operand_b_ex)))));
    if (vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op) {
        if (vlSelf->__PVT__instr_first_cycle_id) {
            __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly)
                    ? 0xdea713f1U : 0xf7011641U);
            __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode)
                    ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                       << 0x18U) : ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode)
                                     ? (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                        << 0x10U) : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a));
        } else {
            __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
                = ((IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly)
                    ? 0x1edc6f41U : 0x4c11db7U);
            __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
                = vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q
                [0U];
        }
    } else if (((0x39U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                | (0x3aU == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))) {
        __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            = __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev;
        __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
            = vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
    } else {
        __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            = vlSelf->__PVT__alu_operand_b_ex;
        __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a 
            = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
    }
    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
    __PVT__cs_registers_i__DOT__illegal_csr = 0U;
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
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x40U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        }
                    } else {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
            }
        } else {
            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                            __PVT__cs_registers_i__DOT__illegal_csr 
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
                            __PVT__cs_registers_i__DOT__illegal_csr 
                                = (1U & ((IData)(vlSelf->__PVT__csr_addr) 
                                         >> 2U));
                        }
                    } else {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                                if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else {
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                            }
                        } else {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else {
                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
            __PVT__cs_registers_i__DOT__illegal_csr 
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
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x20U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ ((IData)(vlSelf->__PVT__csr_addr) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    }
                } else {
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((0x10U & (IData)(vlSelf->__PVT__csr_addr))) {
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((8U & (IData)(vlSelf->__PVT__csr_addr))) {
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                                }
                            } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                                __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                        }
                    } else {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    } else if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                } else if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                    }
                } else {
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            } else if ((4U & (IData)(vlSelf->__PVT__csr_addr))) {
                if ((2U & (IData)(vlSelf->__PVT__csr_addr))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                        vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                    if ((1U & (IData)(vlSelf->__PVT__csr_addr))) {
                        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
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
                    __PVT__cs_registers_i__DOT__illegal_csr = 1U;
                }
            }
        } else {
            __PVT__cs_registers_i__DOT__illegal_csr = 1U;
        }
    } else {
        __PVT__cs_registers_i__DOT__illegal_csr = 1U;
    }
    __PVT__cs_registers_i__DOT__dbg_csr = 0U;
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
                                            __PVT__cs_registers_i__DOT__dbg_csr = 1U;
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
            __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2 
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
            __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a 
                = (vlSelf->__PVT__multdiv_operand_a_ex 
                   >> 0x10U);
            __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a 
                = __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        }
    }
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res 
        = (0x3ffffffffULL & VL_MULS_QQQ(34, (0x3ffffffffULL 
                                             & VL_EXTENDS_QI(34,17, 
                                                             (((IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_a) 
                                                               << 0x10U) 
                                                              | (IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_a)))), 
                                        (0x3ffffffffULL 
                                         & VL_EXTENDS_QI(34,17, 
                                                         (((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_sign_b) 
                                                           << 0x10U) 
                                                          | (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_op_b))))));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op 
        = ((0x28U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelf->__PVT__imd_val_q_ex[1U]);
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
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
        = Viob_soc_sim__ConstPool__TABLE_h2c39dbff_0
        [__Vtableidx10];
    __PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
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
    __PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
    __PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
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
               | __PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)
            : (((4U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result
                : (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                   ^ __PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b)));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
        = vlSelf->__PVT__id_stage_i__DOT__alu_operand_a;
    if ((1U & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xaaaaaaaaU & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 1U))) 
               | (0x55555555U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 1U)));
    }
    if ((2U & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xccccccccU & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 2U))) 
               | (0x33333333U & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 2U)));
    }
    if ((4U & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xf0f0f0f0U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 4U))) 
               | (0xf0f0f0fU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 4U)));
    }
    if ((8U & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xff00ff00U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 8U))) 
               | (0xff00ffU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 8U)));
    }
    if ((0x10U & (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt))) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result 
            = ((((0x10U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                  : 0U) | (0xffff0000U & VL_SHIFTL_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 0x10U))) 
               | (0xffffU & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result, 0x10U)));
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt 
        = (((IData)(ex_block_i__DOT__alu_i__DOT____VdfgTmp_h629009de__0) 
            << 5U) | (IData)(__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt));
    vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelf->__PVT__csr_op)) ? 
           ((1U & (IData)(vlSelf->__PVT__csr_op)) ? 
            ((~ vlSelf->__PVT__id_stage_i__DOT__alu_operand_a) 
             & vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int)
             : (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                | vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a);
    vlSelf->__PVT__illegal_csr_insn_id = ((IData)(vlSelf->__PVT__csr_access) 
                                          & ((IData)(__PVT__cs_registers_i__DOT__illegal_csr) 
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
                                                      & (IData)(__PVT__cs_registers_i__DOT__dbg_csr))))));
    __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3 
        = __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res;
    if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q) {
            __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1 = 0ULL;
            __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3 
                = __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult3_res;
        }
    }
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op;
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 1U));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 2U));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 4U));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 8U));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
           | VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask, 0x10U));
    __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
        = (~ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 
        = ((1U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0 
        = ((2U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 1U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 
        = ((4U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 2U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0 
        = ((8U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 3U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 
        = ((0x10U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 4U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0 
        = ((0x20U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 5U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 
        = ((0x40U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 6U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0 
        = ((0x80U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 7U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 
        = ((0x100U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 8U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0 
        = ((0x200U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 9U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 
        = ((0x400U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xaU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0 
        = ((0x800U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xbU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 
        = ((0x1000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xcU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0 
        = ((0x2000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xdU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 
        = ((0x4000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xeU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0 
        = ((0x8000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0xfU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 
        = ((0x10000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x10U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0 
        = ((0x20000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x11U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 
        = ((0x40000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x12U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0 
        = ((0x80000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x13U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 
        = ((0x100000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x14U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0 
        = ((0x200000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x15U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 
        = ((0x400000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x16U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0 
        = ((0x800000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x17U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 
        = ((0x1000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x18U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0 
        = ((0x2000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x19U)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 
        = ((0x4000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1aU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0 
        = ((0x8000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1bU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 
        = ((0x10000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1cU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0 
        = ((0x20000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1dU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 
        = ((0x40000000U & __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b)
            ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1eU)
            : 0U);
    ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0 
        = ((__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b 
            >> 0x1fU) ? VL_SHIFTL_III(32,32,32, __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a, 0x1fU)
            : 0U);
    if (__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelf->__PVT__imd_val_q_ex[0U]);
        __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
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
                                               ? (IData)(__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq)
                                               : (IData)(__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq))
                                     : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                               [0U] 
                                               >> 3U)) 
                                        && (1U & (((IData)(__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq) 
                                                   | (IData)(__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt)) 
                                                  & (IData)(__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt)))))))));
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = (0xfffffffffffdULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all 
        = ((0xfffffffffffdULL & vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all) 
           | ((QData)((IData)((1U & ((0x10U & vlSelf->__PVT__csr_pmp_cfg
                                      [1U]) ? ((8U 
                                                & vlSelf->__PVT__csr_pmp_cfg
                                                [1U])
                                                ? (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 1U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 1U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 1U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 1U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 2U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 2U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 2U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 2U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 3U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 3U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 3U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 3U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 4U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 4U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 4U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 4U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 5U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 5U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 5U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 5U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 6U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 6U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 6U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 6U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 7U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 7U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 7U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 7U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 8U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 8U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 8U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 8U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 9U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 9U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 9U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 9U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xaU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xaU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xaU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xaU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xbU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xbU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xbU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xbU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xcU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xcU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xcU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xcU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xdU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xdU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xdU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xdU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xeU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xeU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xeU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xeU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xfU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xfU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0xfU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0xfU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x10U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x10U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x10U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x10U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x11U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x11U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x11U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x11U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x12U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x12U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x12U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x12U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x13U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x13U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x13U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x13U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x14U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x14U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x14U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x14U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x15U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x15U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x15U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x15U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x16U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x16U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x16U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x16U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x17U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x17U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x17U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x17U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x18U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x18U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x18U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x18U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x19U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x19U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x19U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x19U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1aU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1aU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1aU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1aU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1bU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1bU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1bU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1bU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1cU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1cU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1cU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1cU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1dU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1dU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1dU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1dU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1eU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1eU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1eU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1eU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1fU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1fU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x1fU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x1fU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x20U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x20U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x20U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x20U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x21U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x21U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [1U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x21U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x21U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x22U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x22U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [2U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x22U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x22U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x23U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x23U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [3U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x23U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x23U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x24U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x24U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [4U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x24U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x24U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x25U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x25U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [5U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x25U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x25U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x26U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x26U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [6U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x26U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x26U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x27U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x27U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [7U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x27U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x27U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x28U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x28U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [8U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x28U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x28U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x29U))
                                                : (IData)(
                                                          (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                           >> 0x29U)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [9U] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x29U)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x29U))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2aU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2aU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xaU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2aU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2aU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2bU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2bU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xbU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2bU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2bU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2cU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2cU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xcU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2cU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2cU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2dU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2dU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xdU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2dU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2dU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2eU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2eU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xeU] 
                                                >> 3U)) 
                                         && (1U & (
                                                   ((IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2eU)) 
                                                    | (IData)(
                                                              (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
                                                               >> 0x2eU))) 
                                                   & (IData)(
                                                             (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
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
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2fU))
                                                  : (IData)(
                                                            (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                             >> 0x2fU)))
                                      : ((1U & (vlSelf->__PVT__csr_pmp_cfg
                                                [0xfU] 
                                                >> 3U)) 
                                         && (IData)(
                                                    ((__PVT__g_pmp__DOT__pmp_i__DOT__region_match_lt 
                                                      >> 0x2fU) 
                                                     & ((IData)(
                                                                (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq 
                                                                 >> 0x2fU)) 
                                                        | (IData)(
                                                                  (__PVT__g_pmp__DOT__pmp_i__DOT__region_match_gt 
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
    __PVT__cs_registers_i__DOT__exception_pc = vlSelf->__PVT__pc_id;
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
            __PVT__cs_registers_i__DOT__exception_pc 
                = (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (vlSelf->__PVT__csr_save_id) {
            __PVT__cs_registers_i__DOT__exception_pc 
                = vlSelf->__PVT__pc_id;
        } else if (vlSelf->__PVT__csr_save_wb) {
            __PVT__cs_registers_i__DOT__exception_pc 
                = vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        }
        if (vlSelf->__PVT__debug_csr_save) {
            vlSelf->__PVT__cs_registers_i__DOT__depc_d 
                = __PVT__cs_registers_i__DOT__exception_pc;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelf->__PVT__cs_registers_i__DOT__mepc_d 
                = __PVT__cs_registers_i__DOT__exception_pc;
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
    vlSelf->cs_registers_i__DOT____Vcellinp__g_pmp_registers__DOT__u_pmp_mseccfg__wr_data_i 
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
        = (0x7ffffffffULL & (VL_EXTENDS_QQ(35,34, __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand1) 
                             + (VL_EXTENDS_QQ(35,34, __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand2) 
                                + VL_EXTENDS_QQ(35,34, __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__summand3))));
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits 
        = (((0x35U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
            | (0x36U == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
            ? vlSelf->__PVT__alu_operand_b_ex : (((0x29U 
                                                   == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)) 
                                                  | (0x28U 
                                                     == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator)))
                                                  ? 
                                                 (__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bit_mask 
                                                  & (~ __PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op))
                                                  : vlSelf->__PVT__id_stage_i__DOT__alu_operand_a));
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h42232991__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h1b5ddda0__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h29d385b4__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6d16f4aa__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h3d25934d__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6607d665__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fddb79__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb20fd190__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4b1c7708__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb53aef4b__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hbedd4607__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd3200005__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h922c0c33__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h09c3cd14__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h16993fad__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd10957e6__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h8168aa33__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7aca58f9__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h74301013__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hb8b966fe__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hf5299cb9__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h756c180b__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h306f494d__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h6ec56246__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h47933474__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h83b5b136__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h78c8b26a__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h11589be7__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h94839fda__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hc088faaa__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h4d1f6a62__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h7235eb95__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h154de41b__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h701f4c38__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hef63e3fc__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_hd35dc892__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h990e90ba__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h90d0d8c2__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h71fc41c5__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h398a119a__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h564c68d1__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha93710f8__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_ha8782785__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_hee0d0c1a__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h170c849c__0);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgTmp_h248aeafc__0 
        = (ex_block_i__DOT__alu_i__DOT____VdfgTmp_h55e3786e__0 
           ^ ex_block_i__DOT__alu_i__DOT____VdfgTmp_h67fbad94__0);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
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
                    = ((IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
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
            if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
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
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
            = ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U));
        if ((1U & (~ ((IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelf->__PVT__imd_val_q_ex
                           [0U]) : ((IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlSelf->__PVT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelf->__PVT__id_stage_i__DOT__multdiv_operator))
                                               ? __PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
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
}
