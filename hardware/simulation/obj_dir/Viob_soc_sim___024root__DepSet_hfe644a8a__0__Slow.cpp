// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim___024root.h"

VL_ATTR_COLD void Viob_soc_sim___024root___eval_initial__TOP(Viob_soc_sim___024root* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___eval_initial__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core(Viob_soc_sim_ibex_core__pi4* vlSelf);

VL_ATTR_COLD void Viob_soc_sim___024root___eval_initial(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_initial\n"); );
    // Body
    Viob_soc_sim___024root___eval_initial__TOP(vlSelf);
    Viob_soc_sim_ibex_core__pi4___eval_initial__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
    Viob_soc_sim_ibex_core__pi4___eval_initial__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
    vlSelf->__Vtrigprevexpr___TOP__arst_i__0 = vlSelf->arst_i;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__rst_ni__0 
        = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rst_ni;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__stl(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Viob_soc_sim___024root___eval_triggers__stl(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Viob_soc_sim___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h73891e84_0;
extern const VlUnpacked<CData/*0:0*/, 64> Viob_soc_sim__ConstPool__TABLE_he6441854_0;

VL_ATTR_COLD void Viob_soc_sim___024root___stl_sequent__TOP__0(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid = 0;
    IData/*31:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid = 0;
    CData/*3:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_wstrb;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_wstrb = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid = 0;
    CData/*3:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_wstrb;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_wstrb = 0;
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
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid = 0;
    VlWide<4>/*127:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input;
    VL_ZERO_W(128, iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input);
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_8;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_8 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_16;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_16 = 0;
    CData/*2:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__byte_offset;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__byte_offset = 0;
    CData/*2:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__wready_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__wready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rready_int;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rready_int = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_4_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_4_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_8_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_8_0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_12_0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_12_0 = 0;
    CData/*2:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__byte_offset;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__byte_offset = 0;
    CData/*3:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 = 0;
    CData/*0:0*/ iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0 = 0;
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
    CData/*0:0*/ __VdfgTmp_h48ffa461__0;
    __VdfgTmp_h48ffa461__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core.rst_ni 
        = (1U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_rst_shadow_set_flop__q_o));
    vlSelf->iob_ready_o = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready;
    vlSelf->iob_rvalid_o = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid;
    vlSelf->iob_rdata_o = vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i 
        = (1U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                  ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                  : ((1U & (((IData)(1U) + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)) 
                            >> 1U)) | ((IData)(1U) 
                                       + (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
            | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg))
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg)
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid));
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
            | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg))
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg)
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next = 0U;
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_next = 0U;
                }
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next = 1U;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg;
    if ((1U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
        if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg))) {
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg) 
                 & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next = 0U;
                if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_reg) {
                    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_next = 0U;
                }
            }
        } else {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (0xaU != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT____Vcellout__g_clock_en_secure__DOT__u_prim_core_busy_flop__q_o));
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rdata 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata
            : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rdata_q);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h70d38a08__0 
        = (1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg)) 
                 & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h70d38a08__2 
        = (1U & ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg)) 
                 & (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg))));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[0U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[2U] 
        = (IData)((((QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rdata)) 
                    << 0x20U) | (QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rdata))));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[3U] 
        = (IData)(((((QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rdata)) 
                     << 0x20U) | (QData)((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rdata))) 
                   >> 0x20U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)
            ? 0U : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg) 
            & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg))) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_reg)
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_q));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready) 
           & (IData)(vlSelf->iob_valid_i));
    __Vtableidx6 = (0x10U | (IData)(vlSelf->iob_wstrb_i));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h73891e84_0
        [__Vtableidx6];
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid));
    __Vtableidx2 = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rvalid) 
                     << 5U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rvalid) 
                                << 4U) | (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid) 
                                           << 3U) | 
                                          (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid) 
                                            << 2U) 
                                           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg)))));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid 
        = Viob_soc_sim__ConstPool__TABLE_he6441854_0
        [__Vtableidx2];
    __VdfgTmp_h48ffa461__0 = ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg)) 
                              & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid 
        = (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg) 
            & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg))) 
           | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_reg
            : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_q);
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg) {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb = 0U;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_reg;
    } else {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg;
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next;
    }
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0U] 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__dummy_instr_id)
            ? vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_dummy_r0__DOT__rf_r0_q
            : 0x2a00000000ULL);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata = 0U;
    if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[0U];
    }
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[1U];
    }
    if ((2U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[2U];
    }
    if ((3U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))) {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata 
            = iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__mux_rdata_input[3U];
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next 
        = ((~ ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid) 
               & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_reg))) 
           & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid)
               ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid)
               : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h877464df__1 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_reg) 
           & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rvalid));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q) 
           | (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid));
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rdata 
        = ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid)
            ? iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rdata
            : vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rdata_q);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)
                ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_reg)
                : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_ren_rd 
        = ((0x1000U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
           & ((~ ((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg)) 
                  & (0U != (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg)))) 
              & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid)));
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg))) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h877464df__1) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next = 0U;
            if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next = 1U;
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rdata;
        }
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next 
        = ((~ ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid) 
               & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_reg))) 
           & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid)
               ? (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_rvalid)
               : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h877464df__0 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_reg) 
           & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rvalid));
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg_re__DOT__reg0__DOT__data_next 
        = ((IData)(vlSelf->arst_i) ? 0U : (3U & ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)
                                                  ? 
                                                 (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                                                  >> 0x1aU)
                                                  : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg))));
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
        = Viob_soc_sim__ConstPool__TABLE_he6441854_0
        [__Vtableidx3];
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0 
        = (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(__VdfgTmp_h48ffa461__0)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_wstrb 
        = ((1U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                         >> 0x1aU))) ? (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb)
            : 0U);
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid 
        = (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0 
        = (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(__VdfgTmp_h48ffa461__0)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid 
        = (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                   & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_wstrb 
        = ((0U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                         >> 0x1aU))) ? (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_wstrb)
            : 0U);
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg;
    if ((1U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg))) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h877464df__0) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_next = 0U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next = 0U;
            if ((0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next = 1U;
            }
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_next 
                = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rdata;
        }
    }
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : (((1U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                              >> 0x1aU))) ? (3U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)
                 : 0U) << 2U));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_4_0 
        = ((4U <= (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & (8U > (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_4_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt 
            = (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now);
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_8_0 
        = ((8U <= (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))) 
           & (0xcU > (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int))));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_8_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt 
            = (IData)((vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now 
                       >> 0x20U));
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_12_0 
        = (0xcU == (0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__iob_addr_i_12_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x81U | (0xffff0000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt));
    }
    __Vtableidx5 = (0x10U | (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_wstrb));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h73891e84_0
        [__Vtableidx5];
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 
        = ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid) 
           & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready));
    __Vtableidx4 = (0x10U | (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_wstrb));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__byte_offset 
        = Viob_soc_sim__ConstPool__TABLE_h73891e84_0
        [__Vtableidx4];
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state)
            ? (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_iob_addr_reg)
            : ((IData)((1U == (0xc000001U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr))) 
               << 2U));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_ren_rd 
        = ((4U <= (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
           & ((5U > (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
              & ((~ (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)) 
                 & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid))));
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int 
        = (0xffU & ((IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txdata_wen_wr)
                     ? vlSelf->iob_wdata_i : (IData)(vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_data_int)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr 
        = (0xfU & ((0xcU & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                   + (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__byte_offset)));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_int 
        = ((~ (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)) 
           & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rready_int = 1U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__wready_int = 1U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready)) 
             & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_valid))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_wstrb))
                    ? (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__timer0_cbus_iob_wstrb)))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = 1U;
            }
        }
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr 
        = (7U & ((4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)) 
                 + (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__byte_offset)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__reset_datareg__DOT__data_int 
        = (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & (1U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr))))
            ? (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg))
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__reset_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__enable_datareg__DOT__data_int 
        = (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((1U <= (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)) 
                  & (2U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 8U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__enable_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__sample_datareg__DOT__data_int 
        = (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((2U <= (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)) 
                  & (3U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0x4000000U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 0x10U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__sample_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int 
        = (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & (1U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr))))
            ? (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg))
            : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__softreset_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__div_datareg__DOT__data_int 
        = (0xffffU & (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
                       & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
                          & ((2U <= (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
                             & (4U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)))))
                       ? ((0U == (3U & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr 
                                        >> 0x1aU)))
                           ? (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                              >> 0x10U) : 0U) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int 
        = (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((5U <= (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
                  & (6U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 8U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txen_wr));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int 
        = (((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0) 
            & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0) 
               & ((6U <= (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
                  & (7U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)))))
            ? (IData)(((0U == (0xc000000U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr)) 
                       & (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg 
                          >> 0x10U))) : (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxen_wr));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0 
        = ((4U <= (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)) 
           & (5U > (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__waddr)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txdata_wen_wr 
        = ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0) 
           & ((IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid) 
              & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt = 0U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int 
        = ((~ (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_h4318a39e__0)) 
           & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0));
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int = 1U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int = 1U;
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_0 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd));
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_8 
        = (0U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_0_8) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffff00ffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt) 
               | ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd) 
                  << 8U));
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_0 
        = (4U == (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = ((0xffffff00U & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt) 
               | (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rdata_rd));
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int 
            = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rvalid_rd;
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int = 1U;
    }
    iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_16 
        = (4U <= (4U & (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int)));
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__iob_addr_i_4_16) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt 
            = (0x810000U | (0xffffU & vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt));
    }
    if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT____VdfgExtracted_h4540a5e0__0) {
        iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int = 1U;
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt = 0U;
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_nxt = 0U;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 1U;
        if (iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_int) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_nxt = 1U;
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 0U;
        }
    } else {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = 0U;
        if (((~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready)) 
             & (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_valid))) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt 
                = ((0U != (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_wstrb))
                    ? (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__wready_int)
                    : (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rready_int));
            if (((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt) 
                 & (~ (IData)((0U != (IData)(iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__uart0_cbus_iob_wstrb)))))) {
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

VL_ATTR_COLD void Viob_soc_sim___024root___stl_sequent__TOP__1(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___stl_sequent__TOP__1\n"); );
    // Body
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
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_next 
        = ((IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg) 
           & (~ (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_next 
        = vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg;
    if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg) {
            if ((1U & ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.m_axi_rready_o) 
                       | (~ (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))))) {
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_next = 1U;
                vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_next 
                    = (0U == (IData)(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg));
            }
        }
    }
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
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h877464df__1) {
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
        if (vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h877464df__0) {
            vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_next = 1U;
        }
    }
}

VL_ATTR_COLD void Viob_soc_sim___024root___stl_sequent__TOP__2(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_err_local 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rvalid_o) 
           & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.s_axi_rresp_o)));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_err_local 
        = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rvalid_o) 
            & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rresp_o))) 
           | ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_bvalid_o) 
              & (0U != (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_bresp_o))));
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_rvalid_local 
        = ((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_bvalid_o) 
           | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.s_axi_rvalid_o));
}

VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0(Viob_soc_sim_ibex_core__pi4* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1(Viob_soc_sim_ibex_core__pi4* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_prim_onehot_mux__W27_I20___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux__0(Viob_soc_sim_prim_onehot_mux__W27_I20* vlSelf);
void Viob_soc_sim_prim_onehot_mux__W27_I20___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux__0(Viob_soc_sim_prim_onehot_mux__W27_I20* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2(Viob_soc_sim_ibex_core__pi4* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_prim_onehot_mux__W27_I20___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux__1(Viob_soc_sim_prim_onehot_mux__W27_I20* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__3(Viob_soc_sim_ibex_core__pi4* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim___024root___nba_comb__TOP__1(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__2(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf);
void Viob_soc_sim___024root___nba_comb__TOP__2(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__3(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf);
void Viob_soc_sim___024root___nba_comb__TOP__3(Viob_soc_sim___024root* vlSelf);
VL_ATTR_COLD void Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__4(Viob_soc_sim_ibex_core__pi4* vlSelf);

VL_ATTR_COLD void Viob_soc_sim___024root___eval_stl(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Viob_soc_sim___024root___stl_sequent__TOP__0(vlSelf);
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core));
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
        Viob_soc_sim_prim_onehot_mux__W27_I20___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux));
        Viob_soc_sim_prim_onehot_mux__W27_I20___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux));
        Viob_soc_sim___024root___stl_sequent__TOP__1(vlSelf);
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        Viob_soc_sim_prim_onehot_mux__W27_I20___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux));
        Viob_soc_sim___024root___stl_sequent__TOP__2(vlSelf);
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__3((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim___024root___nba_comb__TOP__1(vlSelf);
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2));
        Viob_soc_sim___024root___nba_comb__TOP__2(vlSelf);
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__3((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1));
        Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__2((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0));
        Viob_soc_sim___024root___nba_comb__TOP__3(vlSelf);
        Viob_soc_sim_ibex_core__pi4___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core__4((&vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core));
    }
}
