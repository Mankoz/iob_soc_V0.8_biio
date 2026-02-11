// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_ibex_core__pi4.h"

VL_INLINE_OPT void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1\n"); );
    // Init
    CData/*0:0*/ if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0;
    if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_h59a6081d__0 = 0;
    CData/*0:0*/ if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0;
    if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgTmp_he6d6a5e6__0 = 0;
    CData/*0:0*/ id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0;
    id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h1929ae58__0 = 0;
    // Body
    vlSelf->__PVT__perf_store = 0U;
    vlSelf->__PVT__perf_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                            >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
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
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelf->__PVT__lsu_req) {
            if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
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
        if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((0x100U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                        >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
                vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
            }
        } else if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                           >> 8U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns 
                = ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])
                    ? 0U : 3U);
        } else if ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & ((vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                    >> 9U) | (IData)(vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q)))) {
            vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
        }
    } else if (vlSelf->__PVT__lsu_req) {
        vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns 
            = ((0x200U & vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U])
                ? ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access)
                    ? 2U : 0U) : ((IData)(vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access)
                                   ? 1U : 3U));
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))) {
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
        vlSelf->__PVT__ex_block_i__DOT__alu_result 
            = ((0x20U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                ? ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                    ? ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                            : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result)
                                : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result))
                        : ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? (((~ vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result) 
                                        & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a) 
                                       | (((~ ((IData)(0xffffffffU) 
                                               << (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len))) 
                                           & vlSelf->__PVT__alu_operand_b_ex) 
                                          << (0x1fU 
                                              & (vlSelf->__PVT__alu_operand_b_ex 
                                                 >> 0x10U))))
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result)
                                : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result))
                            : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result
                                : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result))))
                    : ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                            : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? (IData)(vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                                   [0x1fU]) : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial
                               [0x1fU])) : ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                 ? 
                                                ((0x26U 
                                                  == (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a))
                                                  : 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__id_stage_i__DOT__alu_operand_a 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->__PVT__id_stage_i__DOT__alu_operand_a)))
                                                 : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result)
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                                  ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result
                                                  : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result)
                                                 : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result))))
                : ((0x10U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                    ? ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
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
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result))))
                    : ((8U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                        ? ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result)
                                : ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                    ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result
                                    : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result))
                            : vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result)
                        : ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                            ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                            : ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__alu_operator))
                                ? vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                : (IData)((vlSelf->__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 1U)))))));
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
