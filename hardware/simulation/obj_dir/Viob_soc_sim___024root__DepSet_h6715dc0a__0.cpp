// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h19d0ead6_0;
extern const VlUnpacked<IData/*31:0*/, 32> Viob_soc_sim__ConstPool__TABLE_hf92b5053_0;

VL_INLINE_OPT void Viob_soc_sim___024root___ico_sequent__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg_re__DOT__reg0__DOT__data_next 
        = ((IData)(vlSelf->arst_i) ? 0U : (3U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)
                                                  ? 
                                                 (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                                                  >> 0x1aU)
                                                  : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))));
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (0xaU != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT____Vcellout__g_clock_en_secure__DOT__u_prim_core_busy_flop__q_o));
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready) 
           & (IData)(vlSelf->iob_valid_i));
    __Vtableidx6 = (0x10U | (IData)(vlSelf->iob_wstrb_i));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h19d0ead6_0
        [__Vtableidx6];
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__bo_inst__DOT__prio_encoder0__DOT__pos 
        = Viob_soc_sim__ConstPool__TABLE_hf92b5053_0
        [__Vtableidx6];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : (4U & (IData)(vlSelf->iob_addr_i)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_ren_rd 
        = (((4U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
            & (5U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & ((~ (IData)((0U != (IData)(vlSelf->iob_wstrb_i)))) 
              & (IData)(vlSelf->iob_valid_i)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr 
        = (7U & ((4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                 + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__byte_offset)));
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
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & ((5U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                        & (6U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                  ? (vlSelf->iob_wdata_i >> 8U) : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & ((6U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                        & (7U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                  ? (vlSelf->iob_wdata_i >> 0x10U) : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txdata_addressed_w 
        = ((4U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
           & (5U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)));
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
}

void Viob_soc_sim___024root___eval_triggers__ico(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___eval_ico(Viob_soc_sim___024root* vlSelf);

bool Viob_soc_sim___024root___eval_phase__ico(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Viob_soc_sim___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Viob_soc_sim___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__0\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (QData)((IData)(((0x40000000U & ((IData)(
                                                         ((0ULL 
                                                           != 
                                                           (0x6000000000000000ULL 
                                                            & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                          | (0x6000000000000000ULL 
                                                             == 
                                                             (0x6000000000000000ULL 
                                                              & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((IData)(((0ULL 
                                                != 
                                                (0x1800000000000000ULL 
                                                 & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                               | (0x1800000000000000ULL 
                                                  == 
                                                  (0x1800000000000000ULL 
                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((IData)(((0ULL 
                                                 != 
                                                 (0x600000000000000ULL 
                                                  & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                | (0x600000000000000ULL 
                                                   == 
                                                   (0x600000000000000ULL 
                                                    & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((IData)(((0ULL 
                                                  != 
                                                  (0x180000000000000ULL 
                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                 | (0x180000000000000ULL 
                                                    == 
                                                    (0x180000000000000ULL 
                                                     & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((IData)(
                                                     ((0ULL 
                                                       != 
                                                       (0x60000000000000ULL 
                                                        & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                      | (0x60000000000000ULL 
                                                         == 
                                                         (0x60000000000000ULL 
                                                          & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0ULL 
                                                          != 
                                                          (0x18000000000000ULL 
                                                           & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                         | (0x18000000000000ULL 
                                                            == 
                                                            (0x18000000000000ULL 
                                                             & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x6000000000000ULL 
                                                              & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                            | (0x6000000000000ULL 
                                                               == 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((IData)(
                                                              ((0ULL 
                                                                != 
                                                                (0x1800000000000ULL 
                                                                 & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                               | (0x1800000000000ULL 
                                                                  == 
                                                                  (0x1800000000000ULL 
                                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((IData)(
                                                                 ((0ULL 
                                                                   != 
                                                                   (0x600000000000ULL 
                                                                    & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                  | (0x600000000000ULL 
                                                                     == 
                                                                     (0x600000000000ULL 
                                                                      & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((IData)(
                                                                    ((0ULL 
                                                                      != 
                                                                      (0x180000000000ULL 
                                                                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                     | (0x180000000000ULL 
                                                                        == 
                                                                        (0x180000000000ULL 
                                                                         & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((IData)(
                                                                       ((0ULL 
                                                                         != 
                                                                         (0x60000000000ULL 
                                                                          & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                        | (0x60000000000ULL 
                                                                           == 
                                                                           (0x60000000000ULL 
                                                                            & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x18000000000ULL 
                                                                             & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                           | (0x18000000000ULL 
                                                                              == 
                                                                              (0x18000000000ULL 
                                                                               & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(
                                                                             ((0ULL 
                                                                               != 
                                                                               (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                              | (0x6000000000ULL 
                                                                                == 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x1800000000ULL 
                                                                                == 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x600000000ULL 
                                                                                == 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x180000000ULL 
                                                                                == 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x60000000ULL 
                                                                                == 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x18000000ULL 
                                                                                == 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x6000000ULL 
                                                                                == 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x1800000ULL 
                                                                                == 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x600000ULL 
                                                                                == 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x180000ULL 
                                                                                == 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x60000ULL 
                                                                                == 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x18000ULL 
                                                                                == 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x6000ULL 
                                                                                == 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x1800ULL 
                                                                                == 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x600ULL 
                                                                                == 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x180ULL 
                                                                                == 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x60ULL 
                                                                                == 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree)) 
                                                                                | (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__err_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__1(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__1\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (QData)((IData)(((0x40000000U & ((IData)(
                                                         ((0ULL 
                                                           != 
                                                           (0x6000000000000000ULL 
                                                            & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                          | (0x6000000000000000ULL 
                                                             == 
                                                             (0x6000000000000000ULL 
                                                              & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((IData)(((0ULL 
                                                != 
                                                (0x1800000000000000ULL 
                                                 & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                               | (0x1800000000000000ULL 
                                                  == 
                                                  (0x1800000000000000ULL 
                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((IData)(((0ULL 
                                                 != 
                                                 (0x600000000000000ULL 
                                                  & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                | (0x600000000000000ULL 
                                                   == 
                                                   (0x600000000000000ULL 
                                                    & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((IData)(((0ULL 
                                                  != 
                                                  (0x180000000000000ULL 
                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                 | (0x180000000000000ULL 
                                                    == 
                                                    (0x180000000000000ULL 
                                                     & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((IData)(
                                                     ((0ULL 
                                                       != 
                                                       (0x60000000000000ULL 
                                                        & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                      | (0x60000000000000ULL 
                                                         == 
                                                         (0x60000000000000ULL 
                                                          & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0ULL 
                                                          != 
                                                          (0x18000000000000ULL 
                                                           & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                         | (0x18000000000000ULL 
                                                            == 
                                                            (0x18000000000000ULL 
                                                             & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x6000000000000ULL 
                                                              & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                            | (0x6000000000000ULL 
                                                               == 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((IData)(
                                                              ((0ULL 
                                                                != 
                                                                (0x1800000000000ULL 
                                                                 & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                               | (0x1800000000000ULL 
                                                                  == 
                                                                  (0x1800000000000ULL 
                                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((IData)(
                                                                 ((0ULL 
                                                                   != 
                                                                   (0x600000000000ULL 
                                                                    & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                  | (0x600000000000ULL 
                                                                     == 
                                                                     (0x600000000000ULL 
                                                                      & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((IData)(
                                                                    ((0ULL 
                                                                      != 
                                                                      (0x180000000000ULL 
                                                                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                     | (0x180000000000ULL 
                                                                        == 
                                                                        (0x180000000000ULL 
                                                                         & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((IData)(
                                                                       ((0ULL 
                                                                         != 
                                                                         (0x60000000000ULL 
                                                                          & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                        | (0x60000000000ULL 
                                                                           == 
                                                                           (0x60000000000ULL 
                                                                            & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x18000000000ULL 
                                                                             & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                           | (0x18000000000ULL 
                                                                              == 
                                                                              (0x18000000000ULL 
                                                                               & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(
                                                                             ((0ULL 
                                                                               != 
                                                                               (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                              | (0x6000000000ULL 
                                                                                == 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x1800000000ULL 
                                                                                == 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x600000000ULL 
                                                                                == 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x180000000ULL 
                                                                                == 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x60000000ULL 
                                                                                == 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x18000000ULL 
                                                                                == 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x6000000ULL 
                                                                                == 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x1800000ULL 
                                                                                == 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x600000ULL 
                                                                                == 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x180000ULL 
                                                                                == 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x60000ULL 
                                                                                == 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x18000ULL 
                                                                                == 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x6000ULL 
                                                                                == 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x1800ULL 
                                                                                == 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x600ULL 
                                                                                == 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x180ULL 
                                                                                == 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x60ULL 
                                                                                == 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree)) 
                                                                                | (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__err_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__2(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__2\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (QData)((IData)(((0x40000000U & ((IData)(
                                                         ((0ULL 
                                                           != 
                                                           (0x6000000000000000ULL 
                                                            & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                          | (0x6000000000000000ULL 
                                                             == 
                                                             (0x6000000000000000ULL 
                                                              & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                 << 0x1eU)) 
                                 | ((0x20000000U & 
                                     ((IData)(((0ULL 
                                                != 
                                                (0x1800000000000000ULL 
                                                 & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                               | (0x1800000000000000ULL 
                                                  == 
                                                  (0x1800000000000000ULL 
                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                      << 0x1dU)) | 
                                    ((0x10000000U & 
                                      ((IData)(((0ULL 
                                                 != 
                                                 (0x600000000000000ULL 
                                                  & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                | (0x600000000000000ULL 
                                                   == 
                                                   (0x600000000000000ULL 
                                                    & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       ((IData)(((0ULL 
                                                  != 
                                                  (0x180000000000000ULL 
                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                 | (0x180000000000000ULL 
                                                    == 
                                                    (0x180000000000000ULL 
                                                     & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & ((IData)(
                                                     ((0ULL 
                                                       != 
                                                       (0x60000000000000ULL 
                                                        & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                      | (0x60000000000000ULL 
                                                         == 
                                                         (0x60000000000000ULL 
                                                          & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & ((IData)(
                                                        ((0ULL 
                                                          != 
                                                          (0x18000000000000ULL 
                                                           & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                         | (0x18000000000000ULL 
                                                            == 
                                                            (0x18000000000000ULL 
                                                             & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                << 0x19U)) 
                                            | ((0x1000000U 
                                                & ((IData)(
                                                           ((0ULL 
                                                             != 
                                                             (0x6000000000000ULL 
                                                              & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                            | (0x6000000000000ULL 
                                                               == 
                                                               (0x6000000000000ULL 
                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                   << 0x18U)) 
                                               | ((0x800000U 
                                                   & ((IData)(
                                                              ((0ULL 
                                                                != 
                                                                (0x1800000000000ULL 
                                                                 & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                               | (0x1800000000000ULL 
                                                                  == 
                                                                  (0x1800000000000ULL 
                                                                   & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                      << 0x17U)) 
                                                  | ((0x400000U 
                                                      & ((IData)(
                                                                 ((0ULL 
                                                                   != 
                                                                   (0x600000000000ULL 
                                                                    & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                  | (0x600000000000ULL 
                                                                     == 
                                                                     (0x600000000000ULL 
                                                                      & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                         << 0x16U)) 
                                                     | ((0x200000U 
                                                         & ((IData)(
                                                                    ((0ULL 
                                                                      != 
                                                                      (0x180000000000ULL 
                                                                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                     | (0x180000000000ULL 
                                                                        == 
                                                                        (0x180000000000ULL 
                                                                         & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                            << 0x15U)) 
                                                        | ((0x100000U 
                                                            & ((IData)(
                                                                       ((0ULL 
                                                                         != 
                                                                         (0x60000000000ULL 
                                                                          & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                        | (0x60000000000ULL 
                                                                           == 
                                                                           (0x60000000000ULL 
                                                                            & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                               << 0x14U)) 
                                                           | ((0x80000U 
                                                               & ((IData)(
                                                                          ((0ULL 
                                                                            != 
                                                                            (0x18000000000ULL 
                                                                             & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                           | (0x18000000000ULL 
                                                                              == 
                                                                              (0x18000000000ULL 
                                                                               & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                  << 0x13U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(
                                                                             ((0ULL 
                                                                               != 
                                                                               (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                              | (0x6000000000ULL 
                                                                                == 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                     << 0x12U)) 
                                                                 | ((0x20000U 
                                                                     & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800000000ULL 
                                                                                == 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                        << 0x11U)) 
                                                                    | ((0x10000U 
                                                                        & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600000000ULL 
                                                                                == 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                           << 0x10U)) 
                                                                       | ((0x8000U 
                                                                           & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180000000ULL 
                                                                                == 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                              << 0xfU)) 
                                                                          | ((0x4000U 
                                                                              & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60000000ULL 
                                                                                == 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xeU)) 
                                                                             | ((0x2000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18000000ULL 
                                                                                == 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x6000000ULL 
                                                                                == 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800000ULL 
                                                                                == 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600000ULL 
                                                                                == 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180000ULL 
                                                                                == 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60000ULL 
                                                                                == 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18000ULL 
                                                                                == 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x6000ULL 
                                                                                == 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x1800ULL 
                                                                                == 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x600ULL 
                                                                                == 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x180ULL 
                                                                                == 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x60ULL 
                                                                                == 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (0x18ULL 
                                                                                == 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                ((0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree)) 
                                                                                | (6ULL 
                                                                                == 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__err_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__3(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__3\n"); );
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
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_b__DOT__or_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__5(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__5\n"); );
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
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_prim_onehot_check_raddr_a__DOT__or_tree 
        = __Vtemp_1;
}

VL_INLINE_OPT void Viob_soc_sim___024root___act_sequent__TOP__7(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___act_sequent__TOP__7\n"); );
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
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x19U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x18U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x17U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x16U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x15U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x14U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x13U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x12U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x11U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x6000ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x1800ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x600ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x180ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x18ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (6ULL 
                                                                                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_wren_check__DOT__u_prim_onehot_check__DOT__or_tree 
        = __Vtemp_1;
}

void Viob_soc_sim___024root___act_sequent__TOP__4(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___act_sequent__TOP__6(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___act_sequent__TOP__8(Viob_soc_sim___024root* vlSelf);

void Viob_soc_sim___024root___eval_act(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        Viob_soc_sim___024root___act_sequent__TOP__8(vlSelf);
    }
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__5(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int 
        = vlSelf->__Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem
            [(0x1fffU & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_reg) 
                         >> 2U))];
    }
    if (vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem[vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0))) 
                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem
                [vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v0))));
    }
    if (vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem[vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1))) 
                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem
                [vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v1))));
    }
    if (vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem[vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2))) 
                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem
                [vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v2))));
    }
    if (vlSelf->__Vdlyvset__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem[vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3))) 
                & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem
                [vlSelf->__Vdlyvdim0__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem__v3))));
    }
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_comb__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid) 
            & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)) 
           & (~ (IData)((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb)))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__wready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_0_0 
        = (0x1000U > (0x1ffcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_stable)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_0_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_r_data;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_rvalid_rd;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_4096_0 
        = (0x1000U == (0x1ffcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_stable)));
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_4096_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x81U | (0xffff0000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid) 
             & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb))
                    ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb)))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_sequent__TOP__6(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[1U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[2U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[3U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[6U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[7U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[8U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[9U];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU] 
        = vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[0xaU];
}

void Viob_soc_sim___024root___eval_triggers__act(Viob_soc_sim___024root* vlSelf);

bool Viob_soc_sim___024root___eval_phase__act(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<15> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Viob_soc_sim___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Viob_soc_sim___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Viob_soc_sim___024root___eval_nba(Viob_soc_sim___024root* vlSelf);

bool Viob_soc_sim___024root___eval_phase__nba(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Viob_soc_sim___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__ico(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__nba(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__act(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG

void Viob_soc_sim___024root___eval(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Viob_soc_sim___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/iob_soc_sim.v", 4, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Viob_soc_sim___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Viob_soc_sim___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/iob_soc_sim.v", 4, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Viob_soc_sim___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/iob_soc_sim.v", 4, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Viob_soc_sim___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Viob_soc_sim___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Viob_soc_sim___024root___eval_debug_assertions(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->cke_i & 0xfeU))) {
        Verilated::overWidthError("cke_i");}
    if (VL_UNLIKELY((vlSelf->arst_i & 0xfeU))) {
        Verilated::overWidthError("arst_i");}
    if (VL_UNLIKELY((vlSelf->iob_valid_i & 0xfeU))) {
        Verilated::overWidthError("iob_valid_i");}
    if (VL_UNLIKELY((vlSelf->iob_addr_i & 0xf8U))) {
        Verilated::overWidthError("iob_addr_i");}
    if (VL_UNLIKELY((vlSelf->iob_wstrb_i & 0xf0U))) {
        Verilated::overWidthError("iob_wstrb_i");}
}
#endif  // VL_DEBUG
