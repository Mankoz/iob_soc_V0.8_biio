// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__ico(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Viob_soc_sim___024root___eval_triggers__ico(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Viob_soc_sim___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim___024root___ico_sequent__TOP__0(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);

void Viob_soc_sim___024root___eval_ico(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Viob_soc_sim___024root___ico_sequent__TOP__0(vlSelf);
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__act(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Viob_soc_sim___024root___eval_triggers__act(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(1U, ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree 
                                      != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__1) 
                                     | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__1)));
    vlSelf->__VactTriggered.set(2U, (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(3U, (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(4U, ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree 
                                      != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__1) 
                                     | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__1)));
    vlSelf->__VactTriggered.set(5U, (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(6U, (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__1));
    vlSelf->__VactTriggered.set(7U, ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                      != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__1) 
                                     | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree 
                                        != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__1)));
    vlSelf->__VactTriggered.set(8U, (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree 
                                     != vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__1));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->arst_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__arst_i__0))) 
                                     | ((IData)(vlSelf->clk_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSelf->arst_i) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__arst_i__0))) 
                                       | ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0)))));
    vlSelf->__VactTriggered.set(0xbU, ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0))));
    vlSelf->__VactTriggered.set(0xcU, ((IData)(vlSelf->clk_i) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(0xdU, ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk)) 
                                       & (IData)(vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0)));
    vlSelf->__VactTriggered.set(0xeU, (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0))) 
                                       | ((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rst_ni)) 
                                          & (IData)(vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__rst_ni__0))));
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree__1 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree;
    vlSelf->__Vtrigprevexpr___TOP__arst_i__0 = vlSelf->arst_i;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__rst_ni__0 
        = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rst_ni;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
        vlSelf->__VactTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Viob_soc_sim___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__4(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__4\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x3dU))) 
                                                                                << 0x1eU) 
                                                                                | (0xc0000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 0xaU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x3eU)) 
                                                                                << 0x1eU))))) 
                                                                                | ((0x20000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x3bU))) 
                                                                                << 0x1dU) 
                                                                                | (0xe0000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 9U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x3cU)) 
                                                                                << 0x1dU))))) 
                                                                                | ((0x10000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x39U))) 
                                                                                << 0x1cU) 
                                                                                | (0xf0000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 8U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x3aU)) 
                                                                                << 0x1cU))))) 
                                                                                | ((0x8000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x37U))) 
                                                                                << 0x1bU) 
                                                                                | (0xf8000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 7U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x38U)) 
                                                                                << 0x1bU))))) 
                                                                                | ((0x4000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x35U))) 
                                                                                << 0x1aU) 
                                                                                | (0xfc000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 6U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x36U)) 
                                                                                << 0x1aU))))) 
                                                                                | ((0x2000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x33U))) 
                                                                                << 0x19U) 
                                                                                | (0xfe000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 5U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x34U)) 
                                                                                << 0x19U))))) 
                                                                                | ((0x1000000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x31U))) 
                                                                                << 0x18U) 
                                                                                | (0xff000000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 4U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x32U)) 
                                                                                << 0x18U))))) 
                                                                                | ((0x800000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x2fU))) 
                                                                                << 0x17U) 
                                                                                | (0xff800000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 3U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x30U)) 
                                                                                << 0x17U))))) 
                                                                                | ((0x400000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x2dU))) 
                                                                                << 0x16U) 
                                                                                | (0xffc00000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x2eU)) 
                                                                                << 0x16U))))) 
                                                                                | ((0x200000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x2bU))) 
                                                                                << 0x15U) 
                                                                                | (0xffe00000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                << 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x2cU)) 
                                                                                << 0x15U))))) 
                                                                                | ((0x100000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x29U))) 
                                                                                << 0x14U) 
                                                                                | (0xfff00000U 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x2aU)) 
                                                                                << 0x14U))))) 
                                                                                | ((0x80000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x27U))) 
                                                                                << 0x13U) 
                                                                                | (0x7ff80000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x28U)) 
                                                                                << 0x13U))))) 
                                                                                | ((0x40000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x25U))) 
                                                                                << 0x12U) 
                                                                                | (0x3ffc0000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x26U)) 
                                                                                << 0x12U))))) 
                                                                                | ((0x20000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x23U))) 
                                                                                << 0x11U) 
                                                                                | (0x1ffe0000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 3U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x24U)) 
                                                                                << 0x11U))))) 
                                                                                | ((0x10000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x21U))) 
                                                                                << 0x10U) 
                                                                                | (0xfff0000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 4U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x22U)) 
                                                                                << 0x10U))))) 
                                                                                | ((0x8000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x1fU))) 
                                                                                << 0xfU) 
                                                                                | (0x7ff8000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 5U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x20U)) 
                                                                                << 0xfU))))) 
                                                                                | ((0x4000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x1dU))) 
                                                                                << 0xeU) 
                                                                                | (0x1ffc000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 7U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x1eU)) 
                                                                                << 0xeU))))) 
                                                                                | ((0x2000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x1bU))) 
                                                                                << 0xdU) 
                                                                                | (0xffe000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 8U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x1cU)) 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x19U))) 
                                                                                << 0xcU) 
                                                                                | (0x7ff000U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 9U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU))))) 
                                                                                | ((0x800U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x17U))) 
                                                                                << 0xbU) 
                                                                                | (0x3ff800U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0xaU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x18U)) 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x15U))) 
                                                                                << 0xaU) 
                                                                                | (0x1ffc00U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0xbU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x16U)) 
                                                                                << 0xaU))))) 
                                                                                | ((0x200U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x13U))) 
                                                                                << 9U) 
                                                                                | (0xffe00U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0xcU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x14U)) 
                                                                                << 9U))))) 
                                                                                | ((0x100U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x11U))) 
                                                                                << 8U) 
                                                                                | (0x7ff00U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0xdU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x12U)) 
                                                                                << 8U))))) 
                                                                                | ((0x80U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (0x3ff80U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0xeU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0x10U)) 
                                                                                << 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x16U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0xdU))) 
                                                                                << 6U) 
                                                                                | (0xffc0U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x10U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0xeU)) 
                                                                                << 6U))))) 
                                                                                | ((0x20U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x16U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0xbU))) 
                                                                                << 5U) 
                                                                                | (0x7fe0U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x11U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0xcU)) 
                                                                                << 5U))))) 
                                                                                | ((0x10U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x16U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 9U))) 
                                                                                << 4U) 
                                                                                | (0x3ff0U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x12U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 0xaU)) 
                                                                                << 4U))))) 
                                                                                | ((8U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x16U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (0x1ff8U 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x13U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 8U)) 
                                                                                << 3U))))) 
                                                                                | ((4U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x17U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | (0x7fcU 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x15U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 6U)) 
                                                                                << 2U))))) 
                                                                                | ((2U 
                                                                                & ((((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x17U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 3U))) 
                                                                                << 1U) 
                                                                                | (0x3feU 
                                                                                & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x16U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 4U)) 
                                                                                << 1U))))) 
                                                                                | (1U 
                                                                                & (((~ 
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x18U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 1U))) 
                                                                                | ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x18U) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__and_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__6(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__6\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x3dU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x3eU)))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x3bU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x3cU)))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x39U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x3aU)))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x37U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x38U)))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x35U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x36U)))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x33U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x34U)))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x31U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x32U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x2fU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x30U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x2dU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x2eU)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x2bU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x2cU)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x29U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x2aU)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x27U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x28U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x25U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x26U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x23U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x24U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x21U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x22U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x1fU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x20U)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x1dU))) 
                                                                                << 0xeU) 
                                                                                | (0xffffc000U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 0xdU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x1eU)) 
                                                                                << 0xeU))))) 
                                                                                | ((0x2000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x1bU))) 
                                                                                << 0xdU) 
                                                                                | (0xffffe000U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 0xcU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x1cU)) 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x19U))) 
                                                                                << 0xcU) 
                                                                                | (0xfffff000U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 0xbU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU))))) 
                                                                                | ((0x800U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x17U))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 0xaU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x18U)) 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x15U))) 
                                                                                << 0xaU) 
                                                                                | (0xfffffc00U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 9U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x16U)) 
                                                                                << 0xaU))))) 
                                                                                | ((0x200U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x13U))) 
                                                                                << 9U) 
                                                                                | (0xfffffe00U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 8U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x14U)) 
                                                                                << 9U))))) 
                                                                                | ((0x100U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x11U))) 
                                                                                << 8U) 
                                                                                | (0xffffff00U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 7U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x12U)) 
                                                                                << 8U))))) 
                                                                                | ((0x80U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (0xffffff80U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 6U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0x10U)) 
                                                                                << 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0xdU))) 
                                                                                << 6U) 
                                                                                | (0xffffffc0U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 4U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0xeU)) 
                                                                                << 6U))))) 
                                                                                | ((0x20U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0xbU))) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 3U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0xcU)) 
                                                                                << 5U))))) 
                                                                                | ((0x10U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 9U))) 
                                                                                << 4U) 
                                                                                | (0xfffffff0U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 0xaU)) 
                                                                                << 4U))))) 
                                                                                | ((8U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                << 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 8U)) 
                                                                                << 3U))))) 
                                                                                | ((4U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | (0x7ffffffcU 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 6U)) 
                                                                                << 2U))))) 
                                                                                | ((2U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 3U))) 
                                                                                << 1U) 
                                                                                | (0x3ffffffeU 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 4U)) 
                                                                                << 1U))))) 
                                                                                | (1U 
                                                                                & (((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 4U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 1U))) 
                                                                                | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__and_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__8(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__8\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                   >> 0x1fU))) << 0x3eU) 
                 | (((QData)((IData)((1U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                            >> 0x1eU)))) 
                     << 0x3dU) | (((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                       >> 0x1dU)))) 
                                   << 0x3cU) | (((QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                     >> 0x1cU)))) 
                                                 << 0x3bU) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                        >> 0x1bU)))) 
                                                    << 0x3aU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                           >> 0x1aU)))) 
                                                       << 0x39U) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                              >> 0x19U)))) 
                                                          << 0x38U) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x18U)))) 
                                                             << 0x37U) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x17U)))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x16U)))) 
                                                                   << 0x35U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x15U)))) 
                                                                      << 0x34U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x14U)))) 
                                                                         << 0x33U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x13U)))) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x12U)))) 
                                                                               << 0x31U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x11U)))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0x10U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0xfU)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0xeU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0xdU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0xcU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0xbU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 0xaU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 9U)))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 8U)))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 7U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 6U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 5U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 3U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 2U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                >> 1U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3dU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3eU)))) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3bU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3cU)))) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x39U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x3aU)))) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x37U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x38U)))) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x35U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x36U)))) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x33U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x34U)))) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x31U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x32U)))) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2fU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x30U)))) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2dU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2eU)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2bU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2cU)))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x29U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x2aU)))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x27U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x28U)))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x25U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x26U)))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x23U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x24U)))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x21U))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x22U)))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1fU))) 
                                                                                | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x20U)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1dU))) 
                                                                                << 0xeU) 
                                                                                | (0xffffc000U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 0xdU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1eU)) 
                                                                                << 0xeU))))) 
                                                                                | ((0x2000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1bU))) 
                                                                                << 0xdU) 
                                                                                | (0xffffe000U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 0xcU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1cU)) 
                                                                                << 0xdU))))) 
                                                                                | ((0x1000U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x19U))) 
                                                                                << 0xcU) 
                                                                                | (0xfffff000U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 0xbU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x1aU)) 
                                                                                << 0xcU))))) 
                                                                                | ((0x800U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x17U))) 
                                                                                << 0xbU) 
                                                                                | (0xfffff800U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 0xaU) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x18U)) 
                                                                                << 0xbU))))) 
                                                                                | ((0x400U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x15U))) 
                                                                                << 0xaU) 
                                                                                | (0xfffffc00U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 9U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x16U)) 
                                                                                << 0xaU))))) 
                                                                                | ((0x200U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x13U))) 
                                                                                << 9U) 
                                                                                | (0xfffffe00U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 8U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x14U)) 
                                                                                << 9U))))) 
                                                                                | ((0x100U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x11U))) 
                                                                                << 8U) 
                                                                                | (0xffffff00U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 7U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x12U)) 
                                                                                << 8U))))) 
                                                                                | ((0x80U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xfU))) 
                                                                                << 7U) 
                                                                                | (0xffffff80U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 6U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0x10U)) 
                                                                                << 7U))))) 
                                                                                | ((0x40U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xdU))) 
                                                                                << 6U) 
                                                                                | (0xffffffc0U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 4U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xeU)) 
                                                                                << 6U))))) 
                                                                                | ((0x20U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xbU))) 
                                                                                << 5U) 
                                                                                | (0xffffffe0U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 3U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xcU)) 
                                                                                << 5U))))) 
                                                                                | ((0x10U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 9U))) 
                                                                                << 4U) 
                                                                                | (0xfffffff0U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 0xaU)) 
                                                                                << 4U))))) 
                                                                                | ((8U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 7U))) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                << 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 8U)) 
                                                                                << 3U))))) 
                                                                                | ((4U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 5U))) 
                                                                                << 2U) 
                                                                                | (0x7ffffffcU 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 1U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 6U)) 
                                                                                << 2U))))) 
                                                                                | ((2U 
                                                                                & ((((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 3U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 3U))) 
                                                                                << 1U) 
                                                                                | (0x3ffffffeU 
                                                                                & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 2U) 
                                                                                & ((IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 4U)) 
                                                                                << 1U))))) 
                                                                                | (1U 
                                                                                & (((~ 
                                                                                ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 4U)) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 1U))) 
                                                                                | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__and_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3 = 0U;
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int;
    vlSelf->__Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__i = 4U;
    if ((1U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_w_strb))) {
        vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0 
            = (0xffU & vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wdata_o);
        vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0 = 1U;
        vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0 = 0U;
        vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0 
            = (0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg) 
                          >> 2U));
    }
    if ((2U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_w_strb))) {
        vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1 
            = (0xffU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wdata_o 
                        >> 8U));
        vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1 = 1U;
        vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1 = 8U;
        vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1 
            = (0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg) 
                          >> 2U));
    }
    if ((4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_w_strb))) {
        vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2 
            = (0xffU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wdata_o 
                        >> 0x10U));
        vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2 = 1U;
        vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2 
            = (0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg) 
                          >> 2U));
    }
    if ((8U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_w_strb))) {
        vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3 
            = (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wdata_o 
               >> 0x18U);
        vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3 = 1U;
        vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3 
            = (0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg) 
                          >> 2U));
    }
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int 
        = ((2U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int) 
                  << 1U)) | (IData)(vlSelf->iob_soc_sim__DOT__rs232_cts));
    vlSelf->__Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int 
        = ((2U & ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int) 
                  << 1U)) | (IData)(vlSelf->iob_soc_sim__DOT__rs232_rts));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_ren_rd) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_r_data 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_mem__DOT__rom
            [(0x3ffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_stable) 
                        >> 2U))];
    }
}

extern const VlWide<11>/*351:0*/ Viob_soc_sim__ConstPool__CONST_h567800de_0;

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__1(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v0;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v0 = 0;
    IData/*21:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4 = 0;
    IData/*21:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v5;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v5 = 0;
    IData/*21:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v6;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v6 = 0;
    IData/*21:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v7;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v7 = 0;
    CData/*0:0*/ __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v0;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v0 = 0;
    QData/*63:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4 = 0;
    CData/*0:0*/ __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4 = 0;
    QData/*63:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v5;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v5 = 0;
    QData/*63:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v6;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v6 = 0;
    QData/*63:0*/ __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v7;
    __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v7 = 0;
    // Body
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v0 = 0U;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4 = 0U;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v0 = 0U;
    __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4 = 0U;
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U];
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU];
    if ((1U & (~ (IData)(vlSelf->arst_i)))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__unnamedblk2__DOT__i = 1U;
    }
    if (vlSelf->arst_i) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__unnamedblk1__DOT__i = 2U;
        __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v0 = 1U;
        __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v0 = 1U;
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[0U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[1U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[2U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[3U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[4U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[5U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[6U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[7U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[8U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[9U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU] 
            = Viob_soc_sim__ConstPool__CONST_h567800de_0[0xaU];
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_enable_cmp_flop__q_o = 0xaU;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_dummy_r0__DOT__rf_r0_q = 0x2a00000000ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_rst_shadow_set_flop__q_o = 0xaU;
    } else {
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q
            [1U][0U];
        __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4 = 1U;
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v5 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q
            [1U][1U];
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v6 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__ic_data_rdata_local
            [0U];
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v7 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__ic_data_rdata_local
            [1U];
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q
            [1U][0U];
        __Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4 = 1U;
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v5 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q
            [1U][1U];
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v6 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__ic_tag_rdata_local
            [0U];
        __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v7 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__ic_tag_rdata_local
            [1U];
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[0U] 
            = ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U] 
                << 0x13U) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                             >> 0xdU));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[1U] 
            = ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U] 
                << 0x13U) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U] 
                             >> 0xdU));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[2U] 
            = ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U] 
                << 0x13U) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U] 
                             >> 0xdU));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[3U] 
            = ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U] 
                << 0x13U) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U] 
                             >> 0xdU));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[4U] 
            = ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU] 
                << 0x13U) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U] 
                             >> 0xdU));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[5U] 
            = (0x1fffU & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU] 
                          >> 0xdU));
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[0U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[1U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[2U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[3U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[4U];
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            = ((0xffffe000U & vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U]) 
               | vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h43052b3b__0[5U]);
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
            = ((0x1fffU & vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U]) 
               | ((IData)((0xbULL | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.out_o 
                                     << 0x19U))) << 0xdU));
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U] 
            = (((IData)((0xbULL | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.out_o 
                                   << 0x19U))) >> 0x13U) 
               | ((IData)(((0xbULL | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.out_o 
                                      << 0x19U)) >> 0x20U)) 
                  << 0xdU));
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U] 
            = (((IData)(((0xbULL | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.out_o 
                                    << 0x19U)) >> 0x20U)) 
                >> 0x13U) | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.out_o) 
                             << 0xdU));
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U] 
            = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.out_o) 
                >> 0x13U) | ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rdata_o 
                              << 0x15U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_err_local) 
                                            << 0x14U) 
                                           | ((IData)(
                                                      (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.out_o 
                                                       >> 0x20U)) 
                                              << 0xdU))));
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U] 
            = (((0x1fffU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rdata_o 
                            >> 0xbU)) | ((0x1fffU & 
                                          ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_err_local) 
                                           >> 0xcU)) 
                                         | ((IData)(
                                                    (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.out_o 
                                                     >> 0x20U)) 
                                            >> 0x13U))) 
               | ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rdata_o 
                   << 0x18U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_err_local) 
                                 << 0x17U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_gnt_local) 
                                               << 0x16U) 
                                              | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_rvalid_local) 
                                                  << 0x15U) 
                                                 | (0x1fe000U 
                                                    & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rdata_o 
                                                       >> 0xbU)))))));
        vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU] 
            = (0x3ffffffU & ((0x1fffU & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rdata_o 
                                          >> 8U) | 
                                         (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_err_local) 
                                           >> 9U) | 
                                          (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_gnt_local) 
                                            >> 0xaU) 
                                           | ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_rvalid_local) 
                                              >> 0xbU))))) 
                             | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_gnt_local) 
                                 << 0x19U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rvalid_o) 
                                               << 0x18U) 
                                              | (0xffe000U 
                                                 & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rdata_o 
                                                    >> 8U))))));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_enable_cmp_flop__q_o 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_rst_shadow_set_flop__q_o;
        if ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
             >> 0x1fU)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x40000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x20000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x10000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x8000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x4000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x2000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x1000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x800000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x400000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x200000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x100000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x80000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x40000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x20000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x10000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x8000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x4000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x2000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x1000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x800U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x400U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x200U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x100U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x80U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x40U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x20U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((0x10U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((8U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((4U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if ((2U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        if (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q) 
             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_dummy_r0__DOT__rf_r0_q 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o;
        }
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_rst_shadow_set_flop__q_o 
            = ((1U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                ? 5U : 0xaU);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q 
        = ((IData)(vlSelf->arst_i) || (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i));
    if (__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[0U][0U] = 0ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[0U][1U] = 0ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[1U][0U] = 0ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[1U][1U] = 0ULL;
    }
    if (__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[0U][0U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v4;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[0U][1U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v5;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[1U][0U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v6;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q[1U][1U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q__v7;
    }
    if (__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[0U][0U] = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[0U][1U] = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[1U][0U] = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[1U][1U] = 0U;
    }
    if (__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[0U][0U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v4;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[0U][1U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v5;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[1U][0U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v6;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q[1U][1U] 
            = __Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q__v7;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_data_rdata_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q
        [0U][0U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_data_rdata_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_data_rdata_q
        [0U][1U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_tag_rdata_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q
        [0U][0U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_tag_rdata_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_tag_rdata_q
        [0U][1U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.ic_data_rdata_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_data_rdata_i
        [0U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.ic_data_rdata_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_data_rdata_i
        [1U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.ic_tag_rdata_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_tag_rdata_i
        [0U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.ic_tag_rdata_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellinp__u_shadow_core__ic_tag_rdata_i
        [1U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__cnt_after_commit_o));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__cnt_after_commit_o 
        = (1U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                  ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                  : ((1U & (((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                            >> 1U)) | ((IData)(1U) 
                                       + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__cnt_q 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
            << 1U) | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT____Vcellinp__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__d_i 
        = (1U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)
                  ? ((~ (1U & ((VL_SHIFTR_III(2,2,32, (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__cnt_q), 1U) 
                                - (IData)(1U)) >> 1U))) 
                     & (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__cnt_q) 
                         >> 1U) - (IData)(1U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
}

extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h3ed00fe9_0;
extern const VlUnpacked<IData/*31:0*/, 64> Viob_soc_sim__ConstPool__TABLE_h80ab37b5_0;
extern const VlUnpacked<CData/*2:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h19d0ead6_0;
extern const VlUnpacked<IData/*31:0*/, 32> Viob_soc_sim__ConstPool__TABLE_hf92b5053_0;

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__2(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h48ffa461__0;
    __VdfgTmp_h48ffa461__0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*0:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg = 0;
    CData/*1:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc = 0;
    SData/*9:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern = 0;
    CData/*3:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0;
    SData/*15:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0;
    CData/*2:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 0;
    SData/*15:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 0;
    CData/*3:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0;
    CData/*7:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern = 0;
    CData/*1:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc = 0;
    SData/*9:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern = 0;
    CData/*3:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0;
    SData/*15:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0;
    CData/*2:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 0;
    SData/*15:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 0;
    CData/*3:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0;
    CData/*7:0*/ __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern = 0;
    // Body
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern;
    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc 
        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_last_segment_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_last_segment_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_last_segment_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_last_segment_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_next));
    if (vlSelf->arst_i) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_resp_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_data_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_master_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_data_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_strb_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_resp_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_data_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_master_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_data_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_strb_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT____Vcellout__g_clock_en_secure__DOT__u_prim_core_busy_flop__q_o = 0xaU;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arprot_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awprot_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arprot_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wdata_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awprot_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rid_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rid_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bid_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bid_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter = 0ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rdata_q = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rdata_q = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__enable_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__sample_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now = 0ULL;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__reset_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_rvalid_rd = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rvalid_rd = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rvalid_rd = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_iob_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_q = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_iob_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_iob_addr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_q = 0U;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd = 0U;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd = 0U;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg = 0U;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_pipe_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rdata_pipe_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_pipe_reg = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg = 0U;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = 0U;
        vlSelf->iob_soc_sim__DOT__rs232_cts = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = 0U;
        vlSelf->iob_soc_sim__DOT__rs232_rts = 0U;
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_resp_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_resp_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_data_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_data_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_master_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_master_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_data_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_data_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_strb_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_strb_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_resp_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_resp_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_data_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_data_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_master_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_master_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_data_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_data_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_strb_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_strb_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT____Vcellout__g_clock_en_secure__DOT__u_prim_core_busy_flop__q_o 
            = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.core_busy_o;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arprot_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arprot_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awprot_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awprot_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arprot_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arprot_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wdata_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wdata_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awprot_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awprot_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rid_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rid_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rid_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rid_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bid_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bid_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bid_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bid_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_next;
        if (vlSelf->cke_i) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_cnt__DOT__reg0__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rdata_q 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rdata;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rdata_q 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rdata;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__enable_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__enable_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__sample_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__sample_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_reg__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__reset_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__reset_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_rvalid_rd 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_ren_rd;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rvalid_rd 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_ren_rd;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rvalid_rd 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_ren_rd;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_stable;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_iob_addr_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_q 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg_re__DOT__reg0__DOT__data_next;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_iob_addr_reg 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_iob_addr_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_q 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next;
        }
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_next;
        if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__softreset_wr) {
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd = 0U;
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0U;
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = 0U;
            vlSelf->iob_soc_sim__DOT__rs232_cts = 0U;
        } else {
            if (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr) 
                 & ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int) 
                    >> 1U))) {
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc)));
                if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc))) {
                    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd = 1U;
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 1U;
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
                    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txdata_wen_wr) {
                        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd = 0U;
                    } else {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc 
                            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc;
                    }
                } else if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc))) {
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern 
                        = (0x200U | ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_data_int) 
                                     << 1U));
                } else if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc))) {
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc 
                        = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc;
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt) 
                         == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr))) {
                        if ((9U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt))) {
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
                        } else {
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern 
                                = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern), 1U));
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt)));
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 1U;
                        }
                    }
                }
            } else {
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
                vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd = 0U;
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0U;
            }
            if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr) {
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc)));
                if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern)))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
                    }
                    vlSelf->iob_soc_sim__DOT__rs232_cts = 1U;
                    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = 0U;
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
                } else if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt) 
                         != (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
                    } else if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern)))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    if ((1U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
                    }
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                } else if ((3U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt) 
                         != VL_SHIFTR_III(32,32,32, (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr), 1U))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
                    } else if ((1U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
                    } else {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                    }
                } else if ((4U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt) 
                         == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr))) {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt)));
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern 
                            = ((0x80U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern) 
                                         << 7U)) | 
                               (0x7fU & ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern) 
                                         >> 1U)));
                        if ((8U == (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt))) {
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern 
                                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern;
                            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rdata_rd 
                                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern;
                            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = 1U;
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 2U;
                        } else {
                            __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
                        }
                    } else {
                        __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
                    }
                }
                if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_ren_rd) {
                    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = 0U;
                }
            } else {
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
                vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = 0U;
            }
        }
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__softreset_wr) {
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd = 0U;
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0U;
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = 0U;
            vlSelf->iob_soc_sim__DOT__rs232_rts = 0U;
        } else {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txen_wr) 
                 & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int) 
                    >> 1U))) {
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc)));
                if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd = 1U;
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 1U;
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
                    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txdata_wen_wr) {
                        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd = 0U;
                    } else {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc;
                    }
                } else if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc))) {
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern 
                        = (0x200U | ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_data_int) 
                                     << 1U));
                } else if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc))) {
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc 
                        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc;
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt) 
                         == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr))) {
                        if ((9U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt))) {
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
                        } else {
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern 
                                = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern), 1U));
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
                                = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt)));
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 1U;
                        }
                    }
                }
            } else {
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd = 0U;
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern = 0x3ffU;
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt = 0U;
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = 0U;
            }
            if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxen_wr) {
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc)));
                if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern)))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
                    }
                    vlSelf->iob_soc_sim__DOT__rs232_rts = 1U;
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = 0U;
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
                } else if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt) 
                         != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
                    } else if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern)))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
                    }
                } else if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    if ((1U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
                    }
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                } else if ((3U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt) 
                         != VL_SHIFTR_III(32,32,32, (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr), 1U))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
                    } else if ((1U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
                    } else {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                    }
                } else if ((4U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc))) {
                    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
                        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt)));
                    if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt) 
                         == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr))) {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt)));
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern 
                            = ((0x80U & ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern) 
                                         << 7U)) | 
                               (0x7fU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern) 
                                         >> 1U)));
                        if ((8U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt))) {
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern 
                                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern;
                            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rdata_rd 
                                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern;
                            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = 1U;
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 2U;
                        } else {
                            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
                        }
                    } else {
                        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
                    }
                }
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_ren_rd) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = 0U;
                }
            } else {
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = 0U;
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = 1U;
                __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = 0U;
            }
        }
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_next;
        if ((1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg)) 
                   | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o)))) {
            __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_pipe_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_reg;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rdata_pipe_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_pipe_reg 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg;
        }
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_pipe_reg;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_next;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern 
            = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc 
        = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt 
        = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt 
        = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern 
        = __Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern 
        = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_resp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_resp_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_data_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_data_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_master_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_last_segment_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_last_segment_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_master_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_master_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_data_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_data_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_strb_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_strb_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_resp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_resp_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_data_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_data_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_master_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_last_segment_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_last_segment_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_master_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_master_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_data_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_data_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_strb_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_strb_reg;
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (0xaU != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT____Vcellout__g_clock_en_secure__DOT__u_prim_core_busy_flop__q_o));
    }
    vlSelf->iob_rdata_o = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata;
    vlSelf->iob_rvalid_o = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__reset_wr) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_cnt__DOT__reg0__DOT__reg0__DOT__data_next = 0ULL;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_reg__DOT__reg0__DOT__data_next = 0ULL;
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_cnt__DOT__reg0__DOT__reg0__DOT__data_next 
            = (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter 
               + (QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__enable_wr)));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_reg__DOT__reg0__DOT__data_next 
            = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__sample_wr)
                ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter
                : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[2U] 
        = (IData)((((QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rdata)) 
                    << 0x20U) | (QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rdata))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[3U] 
        = (IData)(((((QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rdata)) 
                     << 0x20U) | (QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rdata))) 
                   >> 0x20U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_reg)
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_q));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg) 
            & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg))) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)
            ? 0U : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bid_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bid_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
            | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg))
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg)
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bid_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bid_reg;
    vlSelf->iob_ready_o = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready) 
           & (IData)(vlSelf->iob_valid_i));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rdata 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata
            : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rdata_q);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid));
    __Vtableidx2 = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rvalid) 
                     << 5U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rvalid) 
                                << 4U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid) 
                                           << 3U) | 
                                          (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid) 
                                            << 2U) 
                                           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg)))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid 
        = Viob_soc_sim__ConstPool__TABLE_h3ed00fe9_0
        [__Vtableidx2];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__iob_mux_rvalid__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h80ab37b5_0
        [__Vtableidx2];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
            | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg))
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg)
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : (4U & (IData)(vlSelf->iob_addr_i)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_reg
            : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_q);
    __VdfgTmp_h48ffa461__0 = ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg)) 
                              & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_reg;
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg) 
            & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg))) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg));
    if (vlSelf->arst_i) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_data_int = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_data_int = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txen_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_reg = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__softreset_wr = 0U;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxen_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__softreset_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg_re__DOT__reg0__DOT__data_next = 0U;
    } else {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_data_int 
            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int;
        if (vlSelf->cke_i) {
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txen_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__softreset_wr 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr 
                = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__div_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxen_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__softreset_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__div_datareg__DOT__data_int;
        }
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_data_int 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_next;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg_re__DOT__reg0__DOT__data_next 
            = (3U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)
                      ? (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                         >> 0x1aU) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg)));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bid_next 
                    = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_reg;
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_next = 0U;
                }
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next = 1U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bid_next 
                    = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_reg;
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_next = 0U;
                }
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next = 1U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_hf3c12f1f__0 
        = (1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg)) 
                 & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_hf3c12f1f__2 
        = (1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg)) 
                 & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata = 0U;
    if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[0U];
    }
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[1U];
    }
    if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[2U];
    }
    if ((3U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[3U];
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_stable 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)
                ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_reg)
                : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next)));
    __Vtableidx1 = (0x10U | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h19d0ead6_0
        [__Vtableidx1];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__bo_inst__DOT__prio_encoder0__DOT__pos 
        = Viob_soc_sim__ConstPool__TABLE_hf92b5053_0
        [__Vtableidx1];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next 
        = ((~ ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid) 
               & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_reg))) 
           & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid)
               ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid)
               : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h9cfc652d__1 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_reg) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_ren_rd 
        = (((4U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
            & (5U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & ((~ (IData)((0U != (IData)(vlSelf->iob_wstrb_i)))) 
              & (IData)(vlSelf->iob_valid_i)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rdata 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata
            : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rdata_q);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_ren_rd 
        = ((0x1000U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_stable)) 
           & ((~ ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)) 
                  & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg)))) 
              & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rid_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rid_reg;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg))) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h9cfc652d__1) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next = 0U;
            if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next = 1U;
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rdata;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rid_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_reg;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next 
        = ((~ ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid) 
               & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_reg))) 
           & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid)
               ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid)
               : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h9cfc652d__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_reg) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid));
    __Vtableidx3 = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_ready) 
                     << 5U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_ready) 
                                << 4U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready) 
                                           << 3U) | 
                                          (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready) 
                                            << 2U) 
                                           | (3U & 
                                              (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                                               >> 0x1aU))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_ready 
        = Viob_soc_sim__ConstPool__TABLE_h3ed00fe9_0
        [__Vtableidx3];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__iob_mux_ready__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h80ab37b5_0
        [__Vtableidx3];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0 
        = (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(__VdfgTmp_h48ffa461__0)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1 
        = ((1U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                         >> 0x1aU))) ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb)
            : 0U);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid 
        = (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0 
        = (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(__VdfgTmp_h48ffa461__0)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid 
        = (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1 
        = ((0U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                         >> 0x1aU))) ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb)
            : 0U);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rid_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rid_reg;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg))) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h9cfc652d__0) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next = 0U;
            if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next = 1U;
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rdata;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rid_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_reg;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : (((1U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                              >> 0x1aU))) ? (3U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)
                 : 0U) << 2U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_4_0 
        = ((4U <= (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & (8U > (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_4_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt 
            = (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_8_0 
        = ((8U <= (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & (0xcU > (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_8_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt 
            = (IData)((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now 
                       >> 0x20U));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_12_0 
        = (0xcU == (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_12_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x81U | (0xffff0000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt));
    }
    __Vtableidx5 = (0x10U | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h19d0ead6_0
        [__Vtableidx5];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__bo_inst__DOT__prio_encoder0__DOT__pos 
        = Viob_soc_sim__ConstPool__TABLE_hf92b5053_0
        [__Vtableidx5];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : ((IData)((1U == (0xc000001U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr))) 
               << 2U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_ren_rd 
        = (((4U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
            & (5U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)) 
              & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid)));
    __Vtableidx4 = (0x10U | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h19d0ead6_0
        [__Vtableidx4];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__bo_inst__DOT__prio_encoder0__DOT__pos 
        = Viob_soc_sim__ConstPool__TABLE_hf92b5053_0
        [__Vtableidx4];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr 
        = (0xfU & ((0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                   + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__byte_offset)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_int 
        = ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__wready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready)) 
             & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1))
                    ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1)))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 1U;
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr 
        = (7U & ((4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                 + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__byte_offset)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__reset_datareg__DOT__data_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & (1U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr))))
            ? (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg))
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__reset_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__enable_datareg__DOT__data_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((1U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)) 
                  & (2U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 8U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__enable_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__sample_datareg__DOT__data_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((2U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)) 
                  & (3U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 0x10U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__sample_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & (1U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr))))
            ? (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg))
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__softreset_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__div_datareg__DOT__data_int 
        = (0xffffU & (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                       & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
                          & ((2U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
                             & (4U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)))))
                       ? ((0U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                                        >> 0x1aU)))
                           ? (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                              >> 0x10U) : 0U) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((5U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
                  & (6U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 8U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txen_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((6U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
                  & (7U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 0x10U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxen_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txdata_addressed_w 
        = ((4U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
           & (5U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txdata_wen_wr 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txdata_addressed_w) 
           & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid) 
              & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int 
        = ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_0 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_8 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_8) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffff00ffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt) 
               | ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd) 
                  << 8U));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_0 
        = (4U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rdata_rd));
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rvalid_rd;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_16 
        = (4U <= (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_16) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x810000U | (0xffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt));
    }
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txdata_addressed_w) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready)) 
             & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1))
                    ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__bo_inst__DOT__data_int1)))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 1U;
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int 
        = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txdata_wen_wr)
                     ? ((0U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                                      >> 0x1aU))) ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg
                         : 0U) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_data_int)));
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__3(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_err_local 
        = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rvalid_o) 
            & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rresp_o))) 
           | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_bvalid_o) 
              & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_bresp_o))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_rvalid_local 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_bvalid_o) 
           | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rvalid_o));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_err_local 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rvalid_o) 
           & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rresp_o)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_bready_o)));
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid))) {
                if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg)))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_next = 1U;
                }
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_rready_o)));
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg))) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h9cfc652d__1) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_next = 1U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_bready_o)));
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid))) {
                if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg)))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_next = 1U;
                }
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_rready_o)));
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg))) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h9cfc652d__0) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_next = 1U;
        }
    }
}

extern const VlWide<14>/*447:0*/ Viob_soc_sim__ConstPool__CONST_h86270a92_0;

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__4(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__4\n"); );
    // Init
    VlWide<14>/*434:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0;
    VL_ZERO_W(435, iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0);
    IData/*31:0*/ __Vilp;
    VlWide<41>/*1304:0*/ __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q;
    VL_ZERO_W(1305, __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q);
    VlWide<13>/*415:0*/ __Vtemp_31;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x28U)) {
        __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp] 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__unnamedblk3__DOT__i = 2U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xeU] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xdU] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[1U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[1U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xfU] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xeU] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[2U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[2U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x10U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xfU] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[3U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[3U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x11U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x10U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[4U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[4U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x12U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x11U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[5U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[5U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x13U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x12U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[6U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[6U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x14U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x13U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[7U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[7U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x15U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x14U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[8U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[8U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x16U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x15U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[9U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[9U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x17U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x16U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xaU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xaU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x18U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x17U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xbU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xbU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x19U] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x18U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xcU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xcU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1aU] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x19U] 
                           >> 0x13U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xdU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xdU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1bU] 
               << 0xdU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1aU] 
                           >> 0x13U)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[1U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[1U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[2U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[2U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[3U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[3U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[4U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[4U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[5U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[5U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[6U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[6U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[7U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[7U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[8U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[8U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[9U] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[9U];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xaU] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xaU];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xbU] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xbU];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xcU] 
        = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xcU];
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xdU] 
        = ((0xfff80000U & __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xdU]) 
           | iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xdU]);
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1cU] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1bU] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[1U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[1U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1dU] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1cU] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[2U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[2U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1eU] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1dU] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[3U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[3U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1fU] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1eU] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[4U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[4U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x20U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1fU] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[5U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[5U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x21U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x20U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[6U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[6U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x22U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x21U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[7U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[7U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x23U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x22U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[8U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[8U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x24U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x23U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[9U] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[9U] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x25U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x24U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xaU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xaU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x26U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x25U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xbU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xbU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x27U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x26U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xcU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xcU] 
           & ((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x28U] 
               << 0x1aU) | (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x27U] 
                            >> 6U)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xdU] 
        = (Viob_soc_sim__ConstPool__CONST_h86270a92_0[0xdU] 
           & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x28U] 
              >> 6U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xdU] 
        = ((0x7ffffU & __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xdU]) 
           | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0U] 
              << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xeU] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[1U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0xfU] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[1U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[2U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x10U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[2U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[3U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x11U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[3U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[4U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x12U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[4U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[5U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x13U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[5U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[6U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x14U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[6U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[7U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x15U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[7U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[8U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x16U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[8U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[9U] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x17U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[9U] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xaU] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x18U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xaU] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xbU] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x19U] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xbU] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xcU] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1aU] 
        = ((iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xcU] 
            >> 0xdU) | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xdU] 
                        << 0x13U));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1bU] 
        = ((0xffffffc0U & __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1bU]) 
           | (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_hcef25b58__0[0xdU] 
              >> 0xdU));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1bU] 
        = ((0x3fU & __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1bU]) 
           | ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[0U] 
               << 0xbU) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.double_fault_seen_o) 
                            << 0xaU) | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.core_busy_o) 
                                        << 6U))));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1cU] 
        = (((0x3fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[0U] 
                      >> 0x15U)) | ((0x3fU & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.double_fault_seen_o) 
                                              >> 0x16U)) 
                                    | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.core_busy_o) 
                                       >> 0x1aU))) 
           | ((0x7c0U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[0U] 
                         >> 0x15U)) | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[1U] 
                                       << 0xbU)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1dU] 
        = ((0x3fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[1U] 
                     >> 0x15U)) | ((0x7c0U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[1U] 
                                              >> 0x15U)) 
                                   | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[2U] 
                                      << 0xbU)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1eU] 
        = ((0x3fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[2U] 
                     >> 0x15U)) | ((0x7c0U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[2U] 
                                              >> 0x15U)) 
                                   | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[3U] 
                                      << 0xbU)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x1fU] 
        = ((0x3fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[3U] 
                     >> 0x15U)) | ((0x7c0U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[3U] 
                                              >> 0x15U)) 
                                   | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[4U] 
                                      << 0xbU)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x20U] 
        = ((0x3fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[4U] 
                     >> 0x15U)) | (0x7c0U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.crash_dump_o[4U] 
                                             >> 0x15U)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x21U] = 0U;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x22U] = 0U;
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x23U] 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o) 
           << 0x19U);
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x24U] 
        = ((0x3fU & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o) 
                     >> 7U)) | ((((IData)((0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                                  << 0x1aU) << 6U) 
                                | ((0x1ffffc0U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o) 
                                                  >> 7U)) 
                                   | ((IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o 
                                               >> 0x20U)) 
                                      << 0x19U))));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x25U] 
        = (((0x3eU & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
                      << 1U)) | ((((IData)((0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                                   << 0x1aU) >> 0x1aU) 
                                 | (0x3fU & ((IData)(
                                                     (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_wdata_wb_ecc_o 
                                                      >> 0x20U)) 
                                             >> 7U)))) 
           | (((IData)((((QData)((IData)(((IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 3U)) 
                                          << 2U))) 
                         << 0x20U) | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata)))) 
               << 0x12U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__dummy_instr_id) 
                             << 0x11U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q) 
                                           << 0x10U) 
                                          | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                              << 0xbU) 
                                             | (0x7c0U 
                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                   >> 0xeU)))))));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x26U] 
        = ((0x3fU & (((IData)((((QData)((IData)(((IData)(
                                                         (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 3U)) 
                                                 << 2U))) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata)))) 
                      >> 0xeU) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__dummy_instr_id) 
                                   >> 0xfU) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q) 
                                                >> 0x10U) 
                                               | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o) 
                                                  >> 0x15U))))) 
           | ((0x3ffc0U & ((IData)((((QData)((IData)(
                                                     ((IData)(
                                                              (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 3U)) 
                                                      << 2U))) 
                                     << 0x20U) | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata)))) 
                           >> 0xeU)) | ((IData)(((((QData)((IData)(
                                                                   ((IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 3U)) 
                                                                    << 2U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata))) 
                                                 >> 0x20U)) 
                                        << 0x12U)));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x27U] 
        = ((0x3fU & ((IData)(((((QData)((IData)(((IData)(
                                                         (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 3U)) 
                                                 << 2U))) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata))) 
                              >> 0x20U)) >> 0xeU)) 
           | ((0xfc000000U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                              << 0x18U)) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.data_req_o) 
                                             << 0x17U) 
                                            | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we) 
                                                << 0x16U) 
                                               | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be) 
                                                   << 0x12U) 
                                                  | (0x3ffc0U 
                                                     & ((IData)(
                                                                ((((QData)((IData)(
                                                                                ((IData)(
                                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 3U)) 
                                                                                << 2U))) 
                                                                   << 0x20U) 
                                                                  | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata))) 
                                                                 >> 0x20U)) 
                                                        >> 0xeU)))))));
    __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[0x28U] 
        = (0x1ffffffU & ((0x3fU & ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                    >> 8U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.data_req_o) 
                                               >> 9U) 
                                              | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we) 
                                                  >> 0xaU) 
                                                 | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be) 
                                                    >> 0xeU))))) 
                         | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.instr_req_o) 
                             << 0x18U) | (0xffffc0U 
                                          & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                             >> 8U)))));
    __Vtemp_31[0xaU] = (((IData)((((QData)((IData)(
                                                   ((IData)(
                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 3U)) 
                                                    << 2U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                            >> 2U)))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)))
                                                                  ? 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 8U))
                                                                  : 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 0x10U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)))
                                                                  ? 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 0x18U))
                                                                  : vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex)))))) 
                         << 0xcU) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__dummy_instr_id) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rf_raddr_a_o) 
                                                      << 5U) 
                                                     | (0x1fU 
                                                        & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__instr_rdata_id 
                                                           >> 0x14U))))));
    __Vtemp_31[0xbU] = (((IData)((((QData)((IData)(
                                                   ((IData)(
                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 3U)) 
                                                    << 2U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                            >> 2U)))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)))
                                                                  ? 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 8U))
                                                                  : 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 0x10U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)))
                                                                  ? 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 0x18U))
                                                                  : vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex)))))) 
                         >> 0x14U) | ((IData)(((((QData)((IData)(
                                                                 ((IData)(
                                                                          (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                           >> 3U)) 
                                                                  << 2U))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                               >> 2U)))
                                                                    ? 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                     ? 
                                                                    ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                        >> 8U))
                                                                     : 
                                                                    ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                      << 0x10U) 
                                                                     | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                        >> 0x10U)))
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                                >> 1U)))
                                                                     ? 
                                                                    ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                      << 8U) 
                                                                     | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                        >> 0x18U))
                                                                     : vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex))))) 
                                               >> 0x20U)) 
                                      << 0xcU));
    __Vtemp_31[0xcU] = ((IData)(((((QData)((IData)(
                                                   ((IData)(
                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                             >> 3U)) 
                                                    << 2U))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                            >> 2U)))
                                                                 ? 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)))
                                                                  ? 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 0x18U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 8U))
                                                                  : 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 0x10U)))
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                             >> 1U)))
                                                                  ? 
                                                                 ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                   << 8U) 
                                                                  | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex 
                                                                     >> 0x18U))
                                                                  : vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__multdiv_operand_b_ex))))) 
                                 >> 0x20U)) >> 0x14U);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0U] 
        = ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
            << 5U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.double_fault_seen_o) 
                       << 4U) | ((8U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__VdfgTmp_hba890a99__0)))) 
                                        << 3U)) | (
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__VdfgTmp_hba890a99__0))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__VdfgTmp_hba890a99__0)))) 
                                                          << 1U)) 
                                                      | (0U 
                                                         != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__VdfgTmp_hba890a99__0)))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[1U] 
        = ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
            >> 0x1bU) | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                         << 5U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[2U] 
        = ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
            >> 0x1bU) | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__load_store_unit_i__DOT__addr_last_q 
                         << 5U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[3U] 
        = ((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__load_store_unit_i__DOT__addr_last_q 
            >> 0x1bU) | ((IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__pc_id)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                << 1U))))) 
                         << 5U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[4U] 
        = (((IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__pc_id)) 
                      << 0x20U) | (QData)((IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                   << 1U))))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__pc_id)) 
                                    << 0x20U) | (QData)((IData)(
                                                                (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                                 << 1U)))) 
                                  >> 0x20U)) << 5U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[5U] 
        = (((IData)((0U != vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__irqs)) 
            << 5U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__pc_id)) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                              << 1U)))) 
                               >> 0x20U)) >> 0x1bU));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[6U] = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[7U] = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[8U] 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rf_wdata_wb_ecc_o) 
           << 0x13U);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[9U] 
        = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q) 
            << 0x1bU) | ((((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__rf_we_lsu) 
                           | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.wb_stage_i__DOT____VdfgTmp_ha5c23953__0)) 
                          << 0x1aU) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rf_wdata_wb_ecc_o) 
                                        >> 0xdU) | 
                                       ((IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rf_wdata_wb_ecc_o 
                                                 >> 0x20U)) 
                                        << 0x13U))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0xaU] 
        = __Vtemp_31[0xaU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0xbU] 
        = __Vtemp_31[0xbU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0xcU] 
        = ((0xfff00000U & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                           << 0x12U)) | ((((~ vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__pmp_req_err
                                            [2U]) & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__data_req_out)) 
                                          << 0x11U) 
                                         | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__id_stage_i__DOT__lsu_we) 
                                             << 0x10U) 
                                            | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__load_store_unit_i__DOT__data_be) 
                                                << 0xcU) 
                                               | __Vtemp_31[0xcU]))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_outputs_q[0xdU] 
        = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.instr_req_o) 
            << 0x12U) | (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                         >> 0xeU));
    __Vilp = 0U;
    while ((__Vilp <= 0x28U)) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp] 
            = __Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__core_outputs_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__7(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b 
        = (((0x1fU == (0x1fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                >> 0x14U))) << 0x1fU) 
           | (((0x1eU == (0x1fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                   >> 0x14U))) << 0x1eU) 
              | (((0x1dU == (0x1fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                      >> 0x14U))) << 0x1dU) 
                 | (((0x1cU == (0x1fU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                         >> 0x14U))) 
                     << 0x1cU) | (((0x1bU == (0x1fU 
                                              & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                 >> 0x14U))) 
                                   << 0x1bU) | (((0x1aU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                      >> 0x14U))) 
                                                 << 0x1aU) 
                                                | (((0x19U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                         >> 0x14U))) 
                                                    << 0x19U) 
                                                   | (((0x18U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                            >> 0x14U))) 
                                                       << 0x18U) 
                                                      | (((0x17U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                               >> 0x14U))) 
                                                          << 0x17U) 
                                                         | (((0x16U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                  >> 0x14U))) 
                                                             << 0x16U) 
                                                            | (((0x15U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                     >> 0x14U))) 
                                                                << 0x15U) 
                                                               | (((0x14U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                        >> 0x14U))) 
                                                                   << 0x14U) 
                                                                  | (((0x13U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                           >> 0x14U))) 
                                                                      << 0x13U) 
                                                                     | (((0x12U 
                                                                          == 
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                              >> 0x14U))) 
                                                                         << 0x12U) 
                                                                        | (((0x11U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                            << 0x11U) 
                                                                           | (((0x10U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                               << 0x10U) 
                                                                              | (((0xfU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 0xfU) 
                                                                                | (((0xeU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__instr_rdata_id 
                                                                                >> 0x14U))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U] 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__dummy_instr_id)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_dummy_r0__DOT__rf_r0_q
            : 0x2a00000000ULL);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a 
        = (((0x1fU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
            << 0x1fU) | (((0x1eU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                          << 0x1eU) | (((0x1dU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                        << 0x1dU) | 
                                       (((0x1cU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                         << 0x1cU) 
                                        | (((0x1bU 
                                             == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                            << 0x1bU) 
                                           | (((0x1aU 
                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                               << 0x1aU) 
                                              | (((0x19U 
                                                   == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                  << 0x19U) 
                                                 | (((0x18U 
                                                      == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                     << 0x18U) 
                                                    | (((0x17U 
                                                         == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                        << 0x17U) 
                                                       | (((0x16U 
                                                            == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                           << 0x16U) 
                                                          | (((0x15U 
                                                               == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                              << 0x15U) 
                                                             | (((0x14U 
                                                                  == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                 << 0x14U) 
                                                                | (((0x13U 
                                                                     == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                    << 0x13U) 
                                                                   | (((0x12U 
                                                                        == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                       << 0x12U) 
                                                                      | (((0x11U 
                                                                           == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                          << 0x11U) 
                                                                         | (((0x10U 
                                                                              == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                             << 0x10U) 
                                                                            | (((0xfU 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 0xfU) 
                                                                               | (((0xeU 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 0xeU) 
                                                                                | (((0xdU 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 0xdU) 
                                                                                | (((0xcU 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 0xcU) 
                                                                                | (((0xbU 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 0xbU) 
                                                                                | (((0xaU 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 0xaU) 
                                                                                | (((9U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 9U) 
                                                                                | (((8U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 8U) 
                                                                                | (((7U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 7U) 
                                                                                | (((6U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 6U) 
                                                                                | (((5U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 5U) 
                                                                                | (((4U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 4U) 
                                                                                | (((3U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 3U) 
                                                                                | (((2U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 2U) 
                                                                                | (((1U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.rf_raddr_a_o)))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [1U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [2U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [3U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [4U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [5U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [6U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [7U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [8U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [9U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xaU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0xbU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xbU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0xcU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xcU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0xdU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xdU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0xeU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xeU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0xfU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xfU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x10U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x10U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x11U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x11U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x12U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x12U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x13U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x13U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x14U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x14U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x15U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x15U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x16U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x16U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x17U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x17U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x18U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x18U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x19U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x19U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x1aU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1aU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x1bU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1bU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x1cU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1cU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x1dU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1dU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x1eU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1eU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[0x1fU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1fU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [1U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [2U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [3U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [4U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [5U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [6U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [7U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [8U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [9U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xaU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0xbU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xbU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0xcU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xcU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0xdU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xdU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0xeU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xeU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0xfU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0xfU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x10U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x10U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x11U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x11U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x12U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x12U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x13U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x13U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x14U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x14U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x15U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x15U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x16U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x16U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x17U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x17U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x18U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x18U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x19U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x19U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x1aU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1aU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x1bU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1bU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x1cU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1cU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x1dU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1dU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x1eU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1eU];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[0x1fU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [0x1fU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [1U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [2U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [3U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [4U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [5U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [6U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [7U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [8U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [9U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0xaU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0xbU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0xbU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0xcU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0xcU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0xdU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0xdU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0xeU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0xeU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0xfU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0xfU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x10U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x10U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x11U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x11U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x12U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x12U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x13U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x13U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x14U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x14U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x15U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x15U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x16U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x16U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x17U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x17U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x18U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x18U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x19U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x19U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x1aU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x1aU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x1bU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x1bU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x1cU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x1cU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x1dU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x1dU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x1eU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x1eU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux.in_i[0x1fU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i
        [0x1fU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [1U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [2U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [3U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [4U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [5U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [6U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [7U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [8U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [9U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0xaU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0xbU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0xbU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0xcU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0xcU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0xdU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0xdU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0xeU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0xeU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0xfU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0xfU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x10U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x10U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x11U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x11U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x12U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x12U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x13U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x13U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x14U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x14U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x15U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x15U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x16U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x16U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x17U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x17U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x18U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x18U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x19U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x19U];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x1aU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x1aU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x1bU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x1bU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x1cU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x1cU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x1dU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x1dU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x1eU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x1eU];
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux.in_i[0x1fU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i
        [0x1fU];
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__8(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr 
        = (7U & ((4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                 + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__byte_offset)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & ((5U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                        & (6U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                  ? (vlSelf->iob_wdata_i >> 8U) : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txdata_addressed_w 
        = ((4U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
           & (5U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & (1U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr))))
                  ? vlSelf->iob_wdata_i : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__softreset_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__div_datareg__DOT__data_int 
        = (0xffffU & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                       & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                          & ((2U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                             & (4U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                       ? (vlSelf->iob_wdata_i >> 0x10U)
                       : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & ((6U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                        & (7U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                  ? (vlSelf->iob_wdata_i >> 0x10U) : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_reg 
        = ((IData)(vlSelf->arst_i) ? 0U : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_next));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg 
        = ((1U & (~ (IData)(vlSelf->arst_i))) && (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_next));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txdata_wen_wr 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txdata_addressed_w) 
           & ((IData)(vlSelf->iob_valid_i) & (0U != (IData)(vlSelf->iob_wstrb_i))));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int 
        = ((~ (IData)((0U != (IData)(vlSelf->iob_wstrb_i)))) 
           & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int = 1U;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int = 1U;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_0 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_0) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd));
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_8 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_8) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffff00ffU & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt) 
               | ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd) 
                  << 8U));
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_0 
        = (4U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_0) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rdata_rd));
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int 
            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rvalid_rd;
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_16 
        = (4U <= (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_16) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x810000U | (0xffffU & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt));
    }
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txdata_addressed_w) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((~ (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready)) 
             & (IData)(vlSelf->iob_valid_i))) {
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(vlSelf->iob_wstrb_i))
                    ? (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(vlSelf->iob_wstrb_i)))))) {
                vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 1U;
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int 
        = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txdata_wen_wr)
                     ? vlSelf->iob_wdata_i : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_data_int)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
            if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o) 
                       | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rid_next 
                    = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_reg;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_next 
                    = (0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg));
            }
        }
    }
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_comb__TOP__1(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffffcU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 1U) | ((0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                         & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffff3U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((3U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 3U) | (((2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                          & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 2U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffffcfU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((5U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 5U) | (((4U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                          & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 4U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffff3fU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((7U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 7U) | (((6U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                          & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 6U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffcffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((9U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 9U) | (((8U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                          & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                         << 8U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffff3ffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0xbU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0xbU) | (((0xaU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                            & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                           << 0xaU)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffcfffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0xdU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0xdU) | (((0xcU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                            & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                           << 0xcU)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffff3fffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0xfU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0xfU) | (((0xeU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                            & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                           << 0xeU)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffcffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x11U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x11U) | (((0x10U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x10U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfff3ffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x13U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x13U) | (((0x12U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x12U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffcfffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x15U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x15U) | (((0x14U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x14U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xff3fffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x17U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x17U) | (((0x16U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x16U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfcffffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x19U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x19U) | (((0x18U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x18U)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xf3ffffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x1bU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x1bU) | (((0x1aU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x1aU)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xcfffffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x1dU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x1dU) | (((0x1cU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x1cU)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | ((((0x1fU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
               << 0x1fU) | (((0x1eU == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q)) 
                             & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we))) 
                            << 0x1eU)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arvalid 
        = ((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we)) 
           & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.data_req_o));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.data_req_o) 
           & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we));
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_comb__TOP__2(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_bready_o)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__mem_wr_en = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_reg;
    if ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wvalid_o))) {
                if ((0U >= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg))) {
                    if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_bready_o) 
                               | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg))))) {
                        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_next = 1U;
                        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_next 
                            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_reg;
                    }
                }
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__mem_wr_en = 1U;
            }
        } else if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg))) {
            if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_bready_o) 
                       | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bid_next 
                    = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_reg;
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next = 1U;
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awburst_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_id_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awid_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_next 
                = ((2U > (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awsize_o))
                    ? (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awsize_o)
                    : 2U);
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awlen_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_next 
                = (0x7ffcU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_awaddr_o 
                              << 2U));
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_next = 1U;
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wvalid_o))) {
            if ((0U >= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_next = 0U;
                if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_bready_o) 
                           | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg))))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next = 1U;
                }
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next 
                = ((0U < (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg))
                    ? 1U : ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_bready_o) 
                                   | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg))))
                             ? 0U : 2U));
            if ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_next 
                    = (0x7fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg) 
                                  + ((IData)(1U) << (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_reg))));
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg))) {
        if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_bready_o) 
                   | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg))))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = 0U;
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = 2U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_reg;
    if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg)))) {
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arburst_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_id_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arid_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_next 
                = ((2U > (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arsize_o))
                    ? (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arsize_o)
                    : 2U);
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_reg;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_next 
                = ((1U & (~ ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o) 
                             | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))))) 
                   || (0U < (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg)));
            if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o) 
                       | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))))) {
                if ((0U >= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next = 1U;
                }
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg) 
                                - (IData)(1U)));
                if ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_reg))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_next 
                        = (0x7fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_reg))));
                }
            }
        }
    } else if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg) 
                & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arvalid_o))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_next = 1U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next = 1U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_next 
            = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_arlen_o;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_next 
            = (0x7ffcU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_araddr_o 
                          << 2U));
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_next = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next = 1U;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg) 
           & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wdata_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wdata_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awprot_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awprot_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg) 
           & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next = 0U;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next 
            = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg)));
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_wvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_wstrb_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wdata_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_wdata_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_hf3c12f1f__2;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_next 
                = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_reg) 
                            - (IData)(1U)));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_next 
                = (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_reg));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 2U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_next 
                = (0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_reg) 
                              + ((IData)(1U) << (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_reg))));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next = 0U;
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 1U;
        }
    } else {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_hf3c12f1f__2;
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_next = 0U;
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 1U;
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next 
                        = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg)));
                } else {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 0U;
                }
            } else {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 2U;
            }
        } else if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg) 
                    & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next 
                = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg)));
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = 0U;
        }
        if ((2U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awvalid_o))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awlen_o;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_next 
                    = (0x1ffcU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awaddr_o 
                                  << 2U));
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
        if ((2U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awvalid_o))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_id_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awid_o;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awsize_o;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awprot_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awprot_o;
            }
        }
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid))) {
                if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg)))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_next 
                        = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg)));
                }
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_next = 1U;
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_next 
                        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_reg;
                }
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_next 
                = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg)));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awvalid_o))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_next = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_next 
                    = (0x1ffcU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_awaddr_o 
                                  << 2U));
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arprot_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arprot_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg))) {
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_arvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_arsize_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_id_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_arid_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arprot_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_arprot_o;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg) 
           & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_reg;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_next 
            = (1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg)) 
                     & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg))));
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h9cfc652d__1) {
            if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_next 
                    = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)));
            } else {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next = 1U;
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_next 
                = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg) 
                            - (IData)(1U)));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_next 
                = (0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_reg) 
                              + ((IData)(1U) << (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_reg))));
            if ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_next 
                    = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_next;
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next = 1U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_next 
            = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)));
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_arvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_arlen_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_next 
                = (0x1ffcU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_araddr_o 
                              << 2U));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_next 
                = (0x1ffcU & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.m_axi_araddr_o 
                              << 2U));
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next = 0U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi_awlock 
        = ((2U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi_awlock)) 
           | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awlock_o));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg) 
           & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_ready)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awprot_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awprot_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg) 
           & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_ready)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next = 0U;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next 
            = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg)));
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_wvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_wstrb_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_wdata_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_hf3c12f1f__0;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_next 
                = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_reg) 
                            - (IData)(1U)));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_next 
                = (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_reg));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 2U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_next 
                = (0xfffffffU & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_reg 
                                 + ((IData)(1U) << (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_reg))));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next = 0U;
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 1U;
        }
    } else {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_hf3c12f1f__0;
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_next = 0U;
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 1U;
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next 
                        = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg)));
                } else {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 0U;
                }
            } else {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 2U;
            }
        } else if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg) 
                    & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next 
                = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg)));
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = 0U;
        }
        if ((2U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awvalid_o))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awlen_o;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_next 
                    = (0xfffffffU & vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awaddr_o);
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
        if ((2U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awvalid_o))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_id_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awid_o;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awsize_o;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awprot_next 
                    = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awprot_o;
            }
        }
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid))) {
                if ((1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg)))) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_next 
                        = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg)));
                }
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_next = 1U;
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_next 
                        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_reg;
                }
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_next 
                = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg)));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awvalid_o))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_next = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_next 
                    = (0xfffffffU & vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_awaddr_o);
            }
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi_arlock 
        = ((2U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi_arlock)) 
           | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arlock_o));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arprot_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arprot_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg))) {
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arsize_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_id_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arid_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arprot_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arprot_o;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_next = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg) 
           & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_ready)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_reg;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_next 
            = (1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg)) 
                     & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg))));
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h9cfc652d__0) {
            if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next = 0U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_next 
                    = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg)));
            } else {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next = 1U;
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_next 
                = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg) 
                            - (IData)(1U)));
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_next 
                = (0xfffffffU & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_reg 
                                 + ((IData)(1U) << (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_reg))));
            if ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_next 
                    = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_next;
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next = 1U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_next 
            = (1U & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg)));
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg) 
             & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arvalid_o))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_next 
                = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_arlen_o;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_next = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_next 
                = (0xfffffffU & vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_araddr_o);
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_next 
                = (0xfffffffU & vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.m_axi_araddr_o);
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next = 0U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_w_strb 
        = ((- (IData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__mem_wr_en))) 
           & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_wstrb_o));
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_comb__TOP__3(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_gnt_local 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.instr_req_o) 
           & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_arready_o));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_gnt_local 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.data_req_o) 
           & (((~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we)) 
               & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_arready_o)) 
              | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__id_stage_i__DOT__lsu_we) 
                 & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_wready_o))));
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__9(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rst_ni 
        = (1U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_rst_shadow_set_flop__q_o));
}

void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim___024root___nba_sequent__TOP__5(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___nba_comb__TOP__0(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim___024root___nba_sequent__TOP__6(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__3(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_prim_onehot_mux__W27_I20___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux__0(Viob_soc_sim_prim_onehot_mux__W27_I20* vlSelf);
void Viob_soc_sim_prim_onehot_mux__W27_I20___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux__0(Viob_soc_sim_prim_onehot_mux__W27_I20* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__3(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__4(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__3(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim___024root___act_sequent__TOP__3(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___act_sequent__TOP__5(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___act_sequent__TOP__7(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__4(Viob_soc_sim_ibex_core__pi4* vlSelf);

void Viob_soc_sim___024root___eval_nba(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_nba\n"); );
    // Body
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x2000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
    }
    if ((0x800ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x1000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x1200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
    }
    if ((0x600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__3((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        Viob_soc_sim___024root___nba_sequent__TOP__7(vlSelf);
        Viob_soc_sim_prim_onehot_mux__W27_I20___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux));
        Viob_soc_sim_prim_onehot_mux__W27_I20___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux));
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__3((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
    }
    if ((0x4000ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__4((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x1600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x4400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
    }
    if ((0x600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
        Viob_soc_sim___024root___nba_comb__TOP__1(vlSelf);
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
        Viob_soc_sim___024root___nba_comb__TOP__2(vlSelf);
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim___024root___nba_comb__TOP__3(vlSelf);
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__3((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
    }
    if ((0x420ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x408ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x404ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x401ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x700ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x640ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x1600ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Viob_soc_sim_ibex_core__pi4___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__4((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
}
