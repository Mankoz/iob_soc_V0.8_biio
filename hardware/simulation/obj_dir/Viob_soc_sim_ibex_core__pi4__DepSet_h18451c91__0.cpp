// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

void Viob_soc_sim_ibex_core__pi4____Vdpiexp_if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core(Viob_soc_sim__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4____Vdpiexp_if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core\n"); );
    // Init
    // Body
    simutil_get_scramble_key__Vfuncrtn = 0U;
}

void Viob_soc_sim_ibex_core__pi4____Vdpiexp_if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core(Viob_soc_sim__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4____Vdpiexp_if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core\n"); );
    // Init
    // Body
    simutil_get_scramble_nonce__Vfuncrtn = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 256> Viob_soc_sim__ConstPool__TABLE_h56aa66f2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_he017713b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_he6611871_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_hde970e00_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_h14eb773e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Viob_soc_sim__ConstPool__TABLE_hf12c31da_0;

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1\n"); );
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
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*0:0*/ __Vdlyvset__id_stage_i__DOT__imd_val_q__v0;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v0 = 0;
    QData/*33:0*/ __Vdlyvval__id_stage_i__DOT__imd_val_q__v1;
    __Vdlyvval__id_stage_i__DOT__imd_val_q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__id_stage_i__DOT__imd_val_q__v1;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v1 = 0;
    CData/*0:0*/ __Vdlyvset__id_stage_i__DOT__imd_val_q__v2;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v2 = 0;
    QData/*33:0*/ __Vdlyvval__id_stage_i__DOT__imd_val_q__v3;
    __Vdlyvval__id_stage_i__DOT__imd_val_q__v3 = 0;
    CData/*0:0*/ __Vdlyvset__id_stage_i__DOT__imd_val_q__v3;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v3 = 0;
    // Body
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __Vdlyvset__id_stage_i__DOT__imd_val_q__v3 = 0U;
    if (vlSymsp->TOP.arst_i) {
        __Vdlyvset__id_stage_i__DOT__imd_val_q__v0 = 1U;
        __Vdlyvset__id_stage_i__DOT__imd_val_q__v2 = 1U;
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
        vlSelf->__PVT__instr_rdata_c_id = 0U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q = 0xac533bf4U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] = 0U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
        vlSelf->__PVT__illegal_c_insn_id = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q = 3U;
        vlSelf->__PVT__instr_fetch_err_plus2 = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q = 0U;
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q = 0U;
        vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q = 0U;
        vlSelf->__PVT__instr_rdata_alu_id = 0U;
        vlSelf->__PVT__id_stage_i__DOT__id_fsm_q = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = (6U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q));
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = (5U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q));
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
            = (3U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q));
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
        vlSelf->__PVT__instr_fetch_err = 0U;
        vlSelf->__PVT__instr_is_compressed_id = 0U;
        vlSelf->__PVT__pc_id = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__instr_rdata_id = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__dummy_instr_id = 0U;
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = 0U;
    } else {
        if ((1U & (IData)(vlSelf->__PVT__imd_val_we_ex))) {
            __Vdlyvval__id_stage_i__DOT__imd_val_q__v1 
                = vlSelf->__PVT__imd_val_d_ex[0U];
            __Vdlyvset__id_stage_i__DOT__imd_val_q__v1 = 1U;
        }
        if ((2U & (IData)(vlSelf->__PVT__imd_val_we_ex))) {
            __Vdlyvval__id_stage_i__DOT__imd_val_q__v3 
                = vlSelf->__PVT__imd_val_d_ex[1U];
            __Vdlyvset__id_stage_i__DOT__imd_val_q__v3 = 1U;
        }
        if (vlSelf->__PVT__dummy_instr_seed_en) {
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_q 
                = vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_d;
        }
        if (vlSelf->__PVT__load_store_unit_i__DOT__rdata_update) {
            vlSelf->__PVT__load_store_unit_i__DOT__rdata_q 
                = (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rdata_o 
                   >> 8U);
        }
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
            = vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_d;
        if (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rvalid_o) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U));
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U));
        } else {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = (3U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n));
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = (3U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n));
        }
        if ((1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U];
        }
        if (vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we) {
            vlSelf->__PVT__instr_rdata_c_id = (0xffffU 
                                               & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata);
            vlSelf->__PVT__illegal_c_insn_id = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
                                                & (IData)(vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn));
            vlSelf->__PVT__instr_fetch_err_plus2 = 
                ((~ vlSelf->__PVT__pmp_req_err[0U]) 
                 & ((IData)(vlSelf->if_stage_i__DOT____VdfgTmp_hc5fec331__0) 
                    | ((1U & vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q) 
                       && (1U & ((2U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                  ? (IData)((2U == 
                                             (3U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))
                                  : ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_err_local) 
                                     & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                                        & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))))))));
        }
        if ((1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                = ((6U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                   | (1U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
        }
        if ((2U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U];
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                = ((5U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                   | (2U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
        }
        if ((4U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U];
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                = ((3U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                   | (4U & (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
        }
        if (vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q 
                = vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mtval_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__mtval_d;
        }
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q 
            = vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d;
        if (((~ (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_gnt_local)) 
             & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__dscratch1_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__dscratch0_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mscratch_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mie_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = ((0x20000U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                << 0xeU)) | ((0x10000U 
                                              & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                 << 9U)) 
                                             | ((0x8000U 
                                                 & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                    << 4U)) 
                                                | (0x7fffU 
                                                   & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 0x10U)))));
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mstack_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelf->__PVT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelf->__PVT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__depc_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__depc_d;
        }
        if (((IData)(vlSelf->__PVT__pc_set) | (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_hfdd8329f__0))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mtvec_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlSelf->__PVT__csr_mtvec_init)
                    ? 0x40000001U : (1U | (0xffffff00U 
                                           & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
        }
        vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q 
            = vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_d;
        if (vlSelf->__PVT__cs_registers_i__DOT__dcsr_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__dcsr_d;
        }
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_cause_q 
            = ((IData)(vlSelf->__PVT__trigger_match)
                ? 2U : (((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                         & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                         ? 1U : ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                  ? 4U : 0U)));
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h7037298a__0) 
             & (0x7a2U == (IData)(vlSelf->__PVT__csr_addr)))) {
            vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h7037298a__0) 
             & (0x7a1U == (IData)(vlSelf->__PVT__csr_addr)))) {
            vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) 
             & ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                & (0x7a0U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q 
                = ((1U > vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int) 
                   & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int);
        }
        if (((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) 
             & (0x747U == (IData)(vlSelf->__PVT__csr_addr)))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q 
                = vlSelf->cs_registers_i__DOT____Vcellinp__g_pmp_registers__DOT__u_pmp_mseccfg__wr_data_i;
        }
        if (vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelf->__PVT__id_stage_i__DOT__lsu_sign_ext;
            vlSelf->__PVT__load_store_unit_i__DOT__data_type_q 
                = vlSelf->__PVT__id_stage_i__DOT__lsu_type;
            vlSelf->__PVT__load_store_unit_i__DOT__data_we_q 
                = vlSelf->__PVT__id_stage_i__DOT__lsu_we;
            vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
        }
        vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d;
        if (vlSelf->__PVT__en_wb) {
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q 
                = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__ebrk_insn)) 
                         & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec)) 
                            & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                               & ((~ (IData)(vlSelf->__PVT__illegal_csr_insn_id)) 
                                  & (~ (IData)(vlSelf->__PVT__instr_fetch_err)))))));
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q 
                = vlSelf->__PVT__instr_is_compressed_id;
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q 
                = vlSelf->__PVT__pc_id;
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q 
                = ((IData)(vlSelf->__PVT__id_stage_i__DOT__rf_we_raw) 
                   & ((~ (IData)(vlSelf->__PVT__illegal_csr_insn_id)) 
                      & (IData)(vlSelf->__PVT__id_stage_i__DOT__instr_executing)));
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q 
                = ((IData)(vlSelf->__PVT__id_stage_i__DOT__rf_wdata_sel)
                    ? ((IData)(vlSelf->__PVT__id_stage_i__DOT__rf_wdata_sel)
                        ? vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int
                        : vlSelf->__PVT__result_ex)
                    : vlSelf->__PVT__result_ex);
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q 
                = ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec)
                    ? ((IData)(vlSelf->__PVT__id_stage_i__DOT__lsu_we)
                        ? 1U : 0U) : 2U);
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q 
                = (0x1fU & (vlSelf->__PVT__instr_rdata_id 
                            >> 7U));
            vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q 
                = vlSelf->__PVT__dummy_instr_id;
        }
        if (vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we) {
            vlSelf->__PVT__instr_rdata_alu_id = vlSelf->__PVT__if_stage_i__DOT__instr_out;
            vlSelf->__PVT__instr_fetch_err = ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
                                              & (IData)(vlSelf->__PVT__if_stage_i__DOT__if_instr_err));
            vlSelf->__PVT__instr_is_compressed_id = 
                ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
                 & (3U != (3U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)));
            vlSelf->__PVT__pc_id = (vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                    << 1U);
            vlSelf->__PVT__instr_rdata_id = vlSelf->__PVT__if_stage_i__DOT__instr_out;
            vlSelf->__PVT__dummy_instr_id = vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr;
        }
        if (vlSelf->__PVT__load_store_unit_i__DOT__addr_update) {
            vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q 
                = ((IData)(vlSelf->__PVT__lsu_addr_incr_req)
                    ? ((IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) << 2U) : (IData)(
                                                         (vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)));
        }
        vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs 
            = vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns;
        if (vlSelf->__PVT__id_stage_i__DOT__instr_executing) {
            vlSelf->__PVT__id_stage_i__DOT__id_fsm_q 
                = vlSelf->__PVT__id_stage_i__DOT__id_fsm_d;
        }
        if ((((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
              >> 2U) & ((IData)(vlSelf->__PVT__id_in_ready) 
                        & ((IData)(vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw) 
                           | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr))))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q 
                = vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1c4f1dd2__0) 
             & (0x3bfU == (IData)(vlSelf->__PVT__csr_addr)))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h32371cea__0) 
             & ((~ (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress)) 
                & (0x3a0U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h32371cea__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b0U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hf386bd8d__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3beU 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h92487aac__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3bdU 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h73e1ef23__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3bcU 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h76221c7e__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3bbU 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h5c76801e__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3baU 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h02beeb2f__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b9U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h381602dc__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b8U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h190816ea__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b7U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h37ea9ebb__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b6U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hb2b39384__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b5U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hfc13208b__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b4U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hf8c35188__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b3U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h5de6a269__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b2U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hd8cd6cef__0) 
             & (((~ (IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0)) 
                 | (1U != (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                 >> 3U)))) & (0x3b1U 
                                              == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
        }
        vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        if (vlSelf->__PVT__cs_registers_i__DOT__mcause_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__mcause_d;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mepc_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__mepc_d;
        }
        if (vlSelf->__PVT__cs_registers_i__DOT__mstatus_en) {
            vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__mstatus_d;
        }
        vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        if (vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we) {
            vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d;
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hd8cd6cef__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 1U)) & (0x3a0U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [1U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h1c4f1dd2__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 0xfU)) & (0x3a3U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xfU];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hf386bd8d__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 0xeU)) & (0x3a3U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xeU];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h92487aac__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 0xdU)) & (0x3a3U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xdU];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h73e1ef23__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 0xcU)) & (0x3a3U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xcU];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h76221c7e__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 0xbU)) & (0x3a2U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xbU];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h5c76801e__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 0xaU)) & (0x3a2U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [0xaU];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h02beeb2f__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 9U)) & (0x3a2U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [9U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h381602dc__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 8U)) & (0x3a2U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [8U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h190816ea__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 7U)) & (0x3a1U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [7U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h37ea9ebb__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 6U)) & (0x3a1U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [6U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hb2b39384__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 5U)) & (0x3a1U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [5U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hfc13208b__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 4U)) & (0x3a1U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [4U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_hf8c35188__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 3U)) & (0x3a0U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [3U];
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h5de6a269__0) 
             & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress) 
                    >> 2U)) & (0x3a0U == (IData)(vlSelf->__PVT__csr_addr))))) {
            vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata
                [2U];
        }
        if (((IData)(vlSelf->__PVT__pc_set) | (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0))) {
            vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                = vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        }
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && ((~ (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_gnt_local)) 
               & (IData)(vlSelf->instr_req_o)));
    vlSelf->__PVT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d));
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_d));
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d));
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d));
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d));
    vlSelf->__PVT__id_stage_i__DOT__g_sec_branch_taken__DOT__branch_taken_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result));
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_d));
    if (__Vdlyvset__id_stage_i__DOT__imd_val_q__v0) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__Vdlyvset__id_stage_i__DOT__imd_val_q__v1) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q[0U] 
            = __Vdlyvval__id_stage_i__DOT__imd_val_q__v1;
    }
    if (__Vdlyvset__id_stage_i__DOT__imd_val_q__v2) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    if (__Vdlyvset__id_stage_i__DOT__imd_val_q__v3) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q[1U] 
            = __Vdlyvval__id_stage_i__DOT__imd_val_q__v3;
    }
    vlSelf->__PVT__imd_val_q_ex[0U] = vlSelf->__PVT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelf->__PVT__imd_val_q_ex[1U] = vlSelf->__PVT__id_stage_i__DOT__imd_val_q
        [1U];
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
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xcU] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0xbU] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[9U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[8U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[7U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[6U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[5U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[4U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[3U] 
        = (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[0U] = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[1U] = vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q;
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
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
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
    vlSelf->wb_stage_i__DOT____VdfgTmp_ha5c23953__0 
        = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
           & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q));
    vlSelf->__PVT__outstanding_store_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                           & (1U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelf->__PVT__outstanding_load_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                          & (0U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelf->__PVT__rf_write_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                  & ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
                                     | (0U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xfU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->cs_registers_i__DOT____VdfgTmp_h923bbe04__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? 0U : vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q);
    vlSelf->__PVT__csr_pmp_addr[0U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xeU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xdU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xcU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xbU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xaU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[9U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[8U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[7U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[6U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[5U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[4U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[3U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[2U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[1U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__csr_save_if = 0U;
    vlSelf->__PVT__csr_save_wb = 0U;
    vlSelf->__PVT__instr_req_int = 1U;
    vlSelf->__PVT__id_stage_i__DOT__controller_run = 0U;
    vlSelf->__PVT__instr_first_cycle_id = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__id_fsm_q)) 
                                           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
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
    vlSelf->__PVT__ctrl_busy = 1U;
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
    }
    vlSelf->__PVT__debug_csr_save = 0U;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
        = (1U & ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)
                  ? ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)) : (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)));
    vlSelf->__PVT__exc_pc_mux_id = 1U;
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
                        vlSelf->__PVT__debug_csr_save = 1U;
                    }
                } else {
                    vlSelf->__PVT__debug_csr_save = 1U;
                }
                vlSelf->__PVT__exc_pc_mux_id = 2U;
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
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U] = (3U 
                                                   & ((2U 
                                                       & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                       >> 2U)
                                                       : (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)));
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelf->__PVT__instr_fetch_err));
    vlSelf->id_stage_i__DOT____VdfgTmp_h97dc7a37__0 
        = ((~ (IData)(vlSelf->__PVT__instr_fetch_err)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q));
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
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr 
        = (((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
            >> 2U) & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q) 
                      == ((IData)(__VdfgTmp_h5b1acb32__0) 
                          & (3U | (0x1cU & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                            >> 1U))))));
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
    vlSelf->rf_raddr_a_o = (0x1fU & (((~ (IData)(vlSelf->__PVT__instr_first_cycle_id)) 
                                      & (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q))
                                      ? (vlSelf->__PVT__instr_rdata_id 
                                         >> 0x1bU) : 
                                     (vlSelf->__PVT__instr_rdata_id 
                                      >> 0xfU)));
    vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[1U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[0xfU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[0xeU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[0xdU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[0xcU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[0xbU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[0xaU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[9U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[8U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[8U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[7U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[6U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[5U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[4U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[4U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[3U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
        = ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                         >> 3U))) ? ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                     << 2U) : ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                               << 2U));
    vlSelf->__PVT__csr_pmp_cfg[2U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    if (vlSelf->__PVT__lsu_addr_incr_req) {
        vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
        vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel = 6U;
    } else {
        vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel 
            = __PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel 
            = __PVT__id_stage_i__DOT__imm_b_mux_sel_dec;
    }
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
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)
            ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q))));
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
    vlSelf->__PVT__id_stage_i__DOT__div_en_dec = ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                                  & (IData)(vlSelf->__PVT__div_sel_ex));
    vlSelf->__PVT__id_stage_i__DOT__mult_en_dec = (
                                                   (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                                   & (IData)(__PVT__mult_sel_ex));
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
}
