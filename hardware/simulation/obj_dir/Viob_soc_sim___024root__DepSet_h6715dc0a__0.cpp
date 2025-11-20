// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim___024root.h"

extern const VlUnpacked<CData/*2:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h73891e84_0;

VL_INLINE_OPT void Viob_soc_sim___024root___ico_sequent__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_0;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_8;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_8 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_0;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_16;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_16 = 0;
    CData/*2:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr = 0;
    CData/*0:0*/ iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0 = 0;
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
        = Viob_soc_sim__ConstPool__TABLE_h73891e84_0
        [__Vtableidx6];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : (4U & (IData)(vlSelf->iob_addr_i)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_ren_rd 
        = ((4U <= (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
           & ((5U > (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
              & ((~ (IData)((0U != (IData)(vlSelf->iob_wstrb_i)))) 
                 & (IData)(vlSelf->iob_valid_i))));
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr 
        = (7U & ((4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                 + (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__byte_offset)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & (1U > (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr))))
                  ? vlSelf->iob_wdata_i : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__softreset_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__div_datareg__DOT__data_int 
        = (0xffffU & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                       & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                          & ((2U <= (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                             & (4U > (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                       ? (vlSelf->iob_wdata_i >> 0x10U)
                       : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & ((5U <= (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                        & (6U > (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                  ? (vlSelf->iob_wdata_i >> 8U) : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int 
        = (1U & (((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                  & ((0U != (IData)(vlSelf->iob_wstrb_i)) 
                     & ((6U <= (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
                        & (7U > (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)))))
                  ? (vlSelf->iob_wdata_i >> 0x10U) : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr)));
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0 
        = ((4U <= (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)) 
           & (5U > (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__waddr)));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txdata_wen_wr 
        = ((IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0) 
           & ((IData)(vlSelf->iob_valid_i) & (0U != (IData)(vlSelf->iob_wstrb_i))));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int 
        = ((~ (IData)((0U != (IData)(vlSelf->iob_wstrb_i)))) 
           & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0));
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int = 1U;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int = 1U;
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_0 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_0) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd));
    }
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_8 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_0_8) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffff00ffU & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt) 
               | ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd) 
                  << 8U));
    }
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_0 
        = (4U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_0) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rdata_rd));
        iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int 
            = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rvalid_rd;
        iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int = 1U;
    }
    iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_16 
        = (4U <= (4U & (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__iob_addr_i_4_16) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x810000U | (0xffffU & vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt));
    }
    if (iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0) {
        iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((~ (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready)) 
             & (IData)(vlSelf->iob_valid_i))) {
            vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(vlSelf->iob_wstrb_i))
                    ? (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rready_int));
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

void Viob_soc_sim___024root___eval_act(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_act\n"); );
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
}

VL_INLINE_OPT void Viob_soc_sim___024root___nba_comb__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__wready_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__wready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_0_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_0_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_4096_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_4096_0 = 0;
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid) 
            & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)) 
           & (~ (IData)((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb)))));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int = 1U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__wready_int = 1U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_0_0 
        = (0x1000U > (0x1ffcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_0_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_r_data;
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_rvalid_rd;
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int = 1U;
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_4096_0 
        = (0x1000U == (0x1ffcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_addr_i_4096_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x81U | (0xffff0000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid) 
             & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready)))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb))
                    ? (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb)))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = 1U;
            }
        }
    }
}

void Viob_soc_sim___024root___eval_triggers__act(Viob_soc_sim___024root* vlSelf);

bool Viob_soc_sim___024root___eval_phase__act(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
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
