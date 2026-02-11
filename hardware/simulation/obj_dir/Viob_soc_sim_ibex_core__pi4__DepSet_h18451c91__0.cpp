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

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0\n"); );
    // Init
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
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_q = 0U;
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
        vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = 0U;
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
        vlSelf->__PVT__instr_is_compressed_id = 0U;
        vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = 0U;
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
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_q 
            = vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_d;
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
             & (0x7a1U == (IData)(vlSelf->__PVT__csr_addr)))) {
            vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q 
                = (1U & (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (((IData)(vlSelf->cs_registers_i__DOT____VdfgTmp_h7037298a__0) 
             & (0x7a2U == (IData)(vlSelf->__PVT__csr_addr)))) {
            vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q 
                = vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int;
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
                = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_mseccfg_d;
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
        }
        if (vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we) {
            vlSelf->__PVT__instr_rdata_alu_id = vlSelf->__PVT__if_stage_i__DOT__instr_out;
            vlSelf->__PVT__instr_is_compressed_id = 
                ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
                 & (3U != (3U & vlSelf->__PVT__if_stage_i__DOT__fetch_rdata)));
        }
        if (vlSelf->__PVT__en_wb) {
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
            = ((((~ (IData)(vlSelf->__PVT__pc_set)) 
                 & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                    & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0))) 
                << 2U) | ((((~ (IData)(vlSelf->__PVT__pc_set)) 
                            & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                ? (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0)
                                : (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0))) 
                           << 1U) | ((~ (IData)(vlSelf->__PVT__pc_set)) 
                                     & ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                         ? (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0)
                                         : (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h91d85a72__0)))));
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
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__perturbed_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__perturbed_d));
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d));
    vlSelf->__PVT__if_stage_i__DOT__g_secure_pc__DOT__prev_instr_seq_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__if_stage_i__DOT__g_secure_pc__DOT__prev_instr_seq_d));
    vlSelf->__PVT__if_stage_i__DOT__instr_new_id_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.arst_i))) 
           && (IData)(vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_d));
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
    vlSelf->__VdfgTmp_h5b1acb32__0 = ((0x10U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                >> 6U)) 
                                      | ((8U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
                                                >> 0xeU)) 
                                         | ((4U & (vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q 
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
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q;
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
    vlSelf->__PVT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
    vlSelf->__PVT__outstanding_store_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                           & (1U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelf->__PVT__outstanding_load_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                          & (0U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q)));
    vlSelf->__PVT__rf_write_wb = ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q) 
                                  & ((IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q) 
                                     | (0U == (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q))));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xfU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xfU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xfU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->cs_registers_i__DOT____VdfgTmp_h923bbe04__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0U] = 0ULL;
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0 = 0U;
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h0587c3f4__0 
            = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    }
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xeU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xeU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xeU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xdU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xdU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xdU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xcU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xcU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xcU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xbU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xbU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xbU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[0xaU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[0xaU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[0xaU] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                         << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[9U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[9U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[9U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[8U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[8U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[8U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[7U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[7U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[7U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[6U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[6U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[6U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[5U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[5U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[5U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[4U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[4U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[4U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[3U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[3U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[3U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[2U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[2U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[2U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[1U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[1U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q;
    vlSelf->__PVT__csr_pmp_addr[1U] = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
                                       << 2U);
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
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data 
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
                                                                 | (IData)(vlSelf->__VdfgTmp_h5b1acb32__0)))))))))))));
    if ((0x10000U & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data)) {
        if ((0x8000U & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data)) {
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = 0U;
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 7U;
        } else {
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = 1U;
            vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 4U;
        }
    } else {
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set 
            = ((0x8000U & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_data)
                ? 1U : 0U);
        vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = 0U;
    }
    vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[2U] = (3U 
                                                   & ((2U 
                                                       & (IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                       >> 2U)
                                                       : (IData)(vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q)));
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[1U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[1U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[1U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h4537cfc8__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h6d75dff3__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[1U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[1U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xfU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xfU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xfU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5eb30288__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h2c881da4__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xfU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0xfU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xeU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xeU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xeU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5bf54dbe__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h3f375bee__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xeU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0xeU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xdU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xdU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xdU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h288f9b34__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1e2023fa__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xdU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0xdU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xcU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xcU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xcU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h45e24426__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_hc5da99f6__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xcU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0xcU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xbU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xbU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xbU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5b20fa71__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h7b87c247__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xbU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0xbU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[0xaU] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xaU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[0xaU] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h68022a1e__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_he1355192__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[0xaU] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[0xaU] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[9U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[9U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[9U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h5e5d0fca__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h1c28f9e6__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[9U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[9U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[8U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[8U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[8U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h2daa4ff7__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h38bbc09f__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[8U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[8U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[7U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[7U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[7U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf935869f__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h54bfd2e2__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[7U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[7U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[6U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[6U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[6U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf9f402b9__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_hd9d69516__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[6U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[6U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[5U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[5U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[5U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8e58994f__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h074a5d6c__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[5U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[5U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[4U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[4U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[4U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h8f8a9bb1__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h14c16661__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[4U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[4U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[3U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[3U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[3U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_hf4999181__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_h33baae5d__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[3U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[3U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[2U] 
        = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
    if ((1U == (3U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                      >> 3U)))) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[2U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    } else {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[2U] 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
        vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgTmp_h310dd124__0 
            = ((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q)) 
               << 2U);
    }
    vlSelf->cs_registers_i__DOT____VdfgTmp_hb694eddb__0 
        = (IData)(((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q) 
                       >> 2U)) & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                                  >> 5U)));
    vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[2U] 
        = ((0x80U & ((IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q) 
                     << 2U)) | (0x1fU & (IData)(vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q)));
    vlSelf->__PVT__csr_pmp_cfg[2U] = vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q;
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
}
