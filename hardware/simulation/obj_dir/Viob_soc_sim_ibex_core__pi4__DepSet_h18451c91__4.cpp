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
    CData/*0:0*/ double_fault_seen_o;
    double_fault_seen_o = 0;
    CData/*0:0*/ __PVT__instr_valid_clear;
    __PVT__instr_valid_clear = 0;
    CData/*0:0*/ __PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
    __PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = 0;
    CData/*0:0*/ __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en;
    __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en = 0;
    CData/*0:0*/ if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0;
    if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0 = 0;
    CData/*0:0*/ __PVT__id_stage_i__DOT__controller_i__DOT__halt_if;
    __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 0;
    CData/*0:0*/ __PVT__id_stage_i__DOT__controller_i__DOT__retain_id;
    __PVT__id_stage_i__DOT__controller_i__DOT__retain_id = 0;
    CData/*0:0*/ __PVT__id_stage_i__DOT__controller_i__DOT__special_req;
    __PVT__id_stage_i__DOT__controller_i__DOT__special_req = 0;
    CData/*0:0*/ id_stage_i__DOT__controller_i__DOT____VdfgExtracted_hbe61a55d__0;
    id_stage_i__DOT__controller_i__DOT____VdfgExtracted_hbe61a55d__0 = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__mcountinhibit_we;
    __PVT__cs_registers_i__DOT__mcountinhibit_we = 0;
    IData/*31:0*/ __PVT__cs_registers_i__DOT__mhpmcounter_we;
    __PVT__cs_registers_i__DOT__mhpmcounter_we = 0;
    IData/*31:0*/ __PVT__cs_registers_i__DOT__mhpmcounterh_we;
    __PVT__cs_registers_i__DOT__mhpmcounterh_we = 0;
    IData/*31:0*/ __PVT__cs_registers_i__DOT__mhpmcounter_incr;
    __PVT__cs_registers_i__DOT__mhpmcounter_incr = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
    __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
    __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    QData/*63:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = 0;
    CData/*0:0*/ __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we;
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = 0;
    // Body
    __PVT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mcause_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__mepc_en = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_d = vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    vlSelf->__PVT__dummy_instr_seed_en = ((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_we_int) 
                                          & (0x7c1U 
                                             == (IData)(vlSelf->__PVT__csr_addr)));
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_d = vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    vlSelf->__PVT__cs_registers_i__DOT__mcause_d = 
        (((3U == (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                  >> 0x1eU)) << 6U) | (((2U == (vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int 
                                                >> 0x1eU)) 
                                        << 5U) | (0x1fU 
                                                  & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = 0U;
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d 
        = vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q;
    double_fault_seen_o = 0U;
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
                                                        __PVT__cs_registers_i__DOT__mcountinhibit_we = 1U;
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
                        double_fault_seen_o = 1U;
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
    __PVT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    __PVT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
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
                                        __PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((8U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((4U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((2U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounter_we 
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
                                        __PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((8U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((4U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((2U 
                                                & (IData)(vlSelf->__PVT__csr_addr))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_idx))));
                                    } else if ((1U 
                                                & (~ (IData)(vlSelf->__PVT__csr_addr)))) {
                                        __PVT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (__PVT__cs_registers_i__DOT__mhpmcounterh_we 
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
    __PVT__id_stage_i__DOT__controller_i__DOT__special_req 
        = ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
           | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
              | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                 | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu) 
                    | ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                       | ((IData)(vlSelf->__PVT__id_stage_i__DOT__csr_pipe_flush) 
                          & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)))))));
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(__PVT__cs_registers_i__DOT__mcountinhibit_we)
            ? (0x1ffdU & vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q));
    __PVT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    id_stage_i__DOT__controller_i__DOT____VdfgExtracted_hbe61a55d__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall)) 
                 & (~ ((IData)(__PVT__id_stage_i__DOT__controller_i__DOT__special_req) 
                       | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending)))));
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (__PVT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        __PVT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    __PVT__instr_valid_clear = (1U & ((~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall) 
                                          | (IData)(__PVT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else if ((1U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) 
                      | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                     & ((IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall) 
                        | (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending)))) {
                    __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (id_stage_i__DOT__controller_i__DOT____VdfgExtracted_hbe61a55d__0) {
                    if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                        __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    } else if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            } else {
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode) {
                    __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
        }
    }
    if ((5U != (0xfU & (vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
                        >> 1U)))) {
        __PVT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
    }
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((~ (IData)(__PVT__instr_valid_clear)) & 
           ((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_set_raw) 
            | ((IData)(vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q) 
               | (IData)(vlSelf->__PVT__id_stage_i__DOT__jump_set_raw))));
    vlSelf->__PVT__id_in_ready = (1U & ((~ (IData)(vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall)) 
                                        & (~ ((IData)(__PVT__id_stage_i__DOT__controller_i__DOT__halt_if) 
                                              | (IData)(__PVT__id_stage_i__DOT__controller_i__DOT__retain_id)))));
    vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw) 
           & (IData)(vlSelf->__PVT__id_in_ready));
    __PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en 
        = ((IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr) 
           & (IData)(vlSelf->__PVT__id_in_ready));
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
            if (__PVT__id_stage_i__DOT__controller_i__DOT__special_req) {
                if (((IData)(vlSelf->__PVT__multdiv_ready_id) 
                     | (IData)(vlSelf->__PVT__id_stage_i__DOT__wb_exception))) {
                    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
                }
            }
            if (id_stage_i__DOT__controller_i__DOT____VdfgExtracted_hbe61a55d__0) {
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
    vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0 
        = (((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__insert_dummy_instr)) 
            & (IData)(vlSelf->__PVT__id_in_ready)) 
           & (IData)(vlSelf->__PVT__if_stage_i__DOT__fetch_valid_raw));
    __PVT__cs_registers_i__DOT__mhpmcounter_incr = 0U;
    __PVT__cs_registers_i__DOT__mhpmcounter_incr = 
        (1U | ((0xffffffe0U & __PVT__cs_registers_i__DOT__mhpmcounter_incr) 
               | ((((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)) 
                    & (IData)(vlSelf->__PVT__id_in_ready)) 
                   << 4U) | ((((IData)(vlSelf->id_stage_i__DOT____VdfgTmp_haafd7db0__0) 
                               & ((IData)(vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access) 
                                  | (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz))) 
                              << 3U) | ((IData)(vlSelf->__PVT__perf_instr_ret_wb) 
                                        << 2U)))));
    __PVT__cs_registers_i__DOT__mhpmcounter_incr = 
        ((0xfffffe1fU & __PVT__cs_registers_i__DOT__mhpmcounter_incr) 
         | (((IData)(vlSelf->__PVT__perf_branch) << 8U) 
            | (((IData)(vlSelf->__PVT__perf_jump) << 7U) 
               | (((IData)(vlSelf->__PVT__perf_store) 
                   << 6U) | ((IData)(vlSelf->__PVT__perf_load) 
                             << 5U)))));
    __PVT__cs_registers_i__DOT__mhpmcounter_incr = 
        ((0xffffe1ffU & __PVT__cs_registers_i__DOT__mhpmcounter_incr) 
         | ((((IData)(vlSelf->__PVT__id_stage_i__DOT__div_en_dec) 
              & (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_multdiv)) 
             << 0xcU) | ((((IData)(vlSelf->__PVT__id_stage_i__DOT__mult_en_dec) 
                           & (IData)(vlSelf->__PVT__id_stage_i__DOT__stall_multdiv)) 
                          << 0xbU) | ((((IData)(vlSelf->__PVT__perf_instr_ret_wb) 
                                        & (IData)(vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q)) 
                                       << 0xaU) | ((IData)(vlSelf->__PVT__perf_tbranch) 
                                                   << 9U)))));
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_d 
        = (((~ (IData)(vlSelf->__PVT__pc_set)) & (IData)(vlSelf->__PVT__if_stage_i__DOT__if_id_pipe_reg_we)) 
           | ((~ (IData)(__PVT__instr_valid_clear)) 
              & (IData)(vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q)));
    if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0 
        = ((~ (IData)((0U != vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q))) 
           & (IData)(__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en));
    __PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_hd659e18c__0) 
           & ((~ (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (__PVT__cs_registers_i__DOT__mhpmcounter_we 
                 | __PVT__cs_registers_i__DOT__mhpmcounterh_we));
    __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? __PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & ((~ (IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q)) 
                      & __PVT__cs_registers_i__DOT__mhpmcounter_incr))
                ? (1ULL + vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? __PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 2U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 2U))) ? (1ULL 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 3U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((8U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 3U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 3U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 4U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x10U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 4U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 4U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 5U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x20U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 5U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 5U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__2__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 6U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x40U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 6U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 6U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__3__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 7U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x80U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 7U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 7U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__4__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 8U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x100U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 8U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 8U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__5__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 9U));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x200U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 9U)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 9U))) ? ((IData)(1U) 
                                                 + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__6__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xaU));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x400U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 0xaU)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 0xaU))) ? 
               ((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__7__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xbU));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x800U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 0xbU)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 0xbU))) ? 
               ((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__8__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we 
        = (1U & ((__PVT__cs_registers_i__DOT__mhpmcounter_we 
                  | __PVT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 0xcU));
    __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
        = (((QData)((IData)(((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)) 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)));
    if ((0x1000U & __PVT__cs_registers_i__DOT__mhpmcounterh_we)) {
        __PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load 
            = (((QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)));
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d 
        = ((IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we)
            ? (IData)(__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load)
            : ((1U & ((~ ((IData)(vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 0xcU)) & (__PVT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 0xcU))) ? 
               ((IData)(1U) + vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q)
                : vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__9__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q));
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_d 
        = ((IData)(vlSelf->__PVT__dummy_instr_seed_en)
            ? vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_d
            : ((IData)(if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgTmp_h993b37cb__0)
                ? 0xac533bf4U : ((IData)(__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_en)
                                  ? ((0x80200003U & 
                                      (- (IData)((1U 
                                                  & vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q)))) 
                                     ^ VL_SHIFTR_III(32,32,32, vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q, 1U))
                                  : vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q)));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d 
        = ((((~ (IData)(vlSelf->__PVT__pc_set)) & (
                                                   (~ (IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                                   & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0))) 
            << 2U) | ((((~ (IData)(vlSelf->__PVT__pc_set)) 
                        & ((IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                            ? (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0)
                            : (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0))) 
                       << 1U) | (1U & ((~ (IData)(vlSelf->__PVT__pc_set)) 
                                       & ((IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                           ? (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0)
                                           : ((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d767ff5__0) 
                                              | (IData)(vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))));
    vlSelf->__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = (((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h8784150c__0) 
            << 2U) | (((((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h46fac9ec__0) 
                         & (IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                        | ((~ (IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                           & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h18c9f4a7__0))) 
                       << 1U) | (((IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_haf22c316__0) 
                                  & (IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 | ((~ (IData)(__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                    & (IData)(vlSelf->if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgTmp_h0d767ff5__0)))));
}
