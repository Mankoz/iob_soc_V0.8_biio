// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3.h"

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0\n"); );
    // Body
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_read_reg_o)) 
               & (IData)(vlSelf->m_axi_arvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_read_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((IData)(vlSelf->m_axi_arvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
    vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_write_reg_o)) 
               & (IData)(vlSelf->m_axi_awvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_write_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_awvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_wlast_o) & ((IData)(vlSelf->m_axi_wvalid_o) 
                                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg))) 
              || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0\n"); );
    // Body
    if (vlSymsp->TOP.arst_i) {
        vlSelf->__PVT__active_transaction_write_reg_o = 0U;
        vlSelf->__PVT__data_burst_complete_write_reg_o = 0U;
        vlSelf->__PVT__active_transaction_read_reg_o = 0U;
        vlSelf->__PVT__busy_read_reg_o = 0U;
        vlSelf->__PVT__busy_write_reg_o = 0U;
        vlSelf->__PVT__write_sel_reg = 0U;
        vlSelf->__PVT__read_sel_reg = 0U;
    } else if (vlSymsp->TOP.cke_i) {
        vlSelf->__PVT__active_transaction_write_reg_o 
            = vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__data_burst_complete_write_reg_o 
            = vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__active_transaction_read_reg_o 
            = vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__busy_read_reg_o = vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__busy_write_reg_o = vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__write_sel_reg = ((~ (IData)(vlSymsp->TOP.arst_i)) 
                                        & (IData)(vlSelf->__PVT__write_sel));
        vlSelf->__PVT__read_sel_reg = ((~ (IData)(vlSymsp->TOP.arst_i)) 
                                       & (IData)(vlSelf->__PVT__read_sel));
    }
    vlSelf->__PVT__demux_axi_awready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg));
    vlSelf->__PVT__demux_axi_wready_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg));
    vlSelf->__PVT__demux_axi_arready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg));
    vlSelf->s1_axi_bvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg) 
                               & (IData)(vlSelf->__PVT__write_sel_reg));
    vlSelf->s0_axi_rlast_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                              & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg));
    vlSelf->s1_axi_rlast_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg) 
                              & (IData)(vlSelf->__PVT__read_sel_reg));
    vlSelf->s0_axi_rvalid_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                               & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg));
    vlSelf->s1_axi_rvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg) 
                               & (IData)(vlSelf->__PVT__read_sel_reg));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_rready;
    __PVT__mux_axi_rready = 0;
    // Body
    vlSelf->m_axi_bready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel_reg)))) {
        vlSelf->m_axi_bready_o = 0U;
    }
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->m_axi_bready_o = (0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel_reg));
    }
    __PVT__mux_axi_rready = (((0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel_reg)) 
                              << 1U) | (0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel_reg)));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->m_axi_rready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel_reg)))) {
        vlSelf->m_axi_rready_o = (1U & (IData)(__PVT__mux_axi_rready));
    }
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->m_axi_rready_o = (1U & ((IData)(__PVT__mux_axi_rready) 
                                        >> 1U));
    }
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0\n"); );
    // Body
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->s1_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg;
        vlSelf->s0_axi_rdata_o = 0U;
    } else {
        vlSelf->s1_axi_rdata_o = 0U;
        vlSelf->s0_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg;
    }
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__1\n"); );
    // Body
    vlSelf->__PVT__mux_axi_awaddr = (0x200000000000000ULL 
                                     | ((QData)((IData)(
                                                        ((0U 
                                                          == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel))
                                                          ? 
                                                         (0xfffffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 3U)))
                                                          : 0U))) 
                                        << 0x1dU));
    vlSelf->__PVT__mux_axi_araddr = (0x200000000000000ULL 
                                     | (((QData)((IData)(
                                                         ((0U 
                                                           == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel))
                                                           ? 
                                                          (0xfffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                      >> 3U)))
                                                           : 0U))) 
                                         << 0x1dU) 
                                        | (QData)((IData)(
                                                          ((0U 
                                                            == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel))
                                                            ? 
                                                           (0xfffffffU 
                                                            & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                                               >> 2U))
                                                            : 0U)))));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__2(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__2\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_arvalid;
    __PVT__mux_axi_arvalid = 0;
    CData/*0:0*/ __PVT__read_sel_prio_enc_o;
    __PVT__read_sel_prio_enc_o = 0;
    CData/*0:0*/ __PVT__write_sel_prio_enc_o;
    __PVT__write_sel_prio_enc_o = 0;
    CData/*0:0*/ __PVT__mux_axi_awvalid_o;
    __PVT__mux_axi_awvalid_o = 0;
    CData/*0:0*/ __PVT__mux_axi_wvalid_o;
    __PVT__mux_axi_wvalid_o = 0;
    CData/*0:0*/ __PVT__mux_axi_arvalid_o;
    __PVT__mux_axi_arvalid_o = 0;
    // Body
    __PVT__mux_axi_arvalid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m0_axi_arvalid_o) 
                               << 1U) | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.m0_axi_arvalid_o));
    __PVT__write_sel_prio_enc_o = 0U;
    if (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m0_axi_awvalid_o) {
        __PVT__write_sel_prio_enc_o = 1U;
    }
    __PVT__read_sel_prio_enc_o = 0U;
    if ((1U & (IData)(__PVT__mux_axi_arvalid))) {
        __PVT__read_sel_prio_enc_o = 0U;
    }
    if ((2U & (IData)(__PVT__mux_axi_arvalid))) {
        __PVT__read_sel_prio_enc_o = 1U;
    }
    vlSelf->__PVT__write_sel = ((IData)(vlSelf->__PVT__busy_write_reg_o)
                                 ? (IData)(vlSelf->__PVT__write_sel_reg)
                                 : (IData)(__PVT__write_sel_prio_enc_o));
    vlSelf->__PVT__read_sel = ((IData)(vlSelf->__PVT__busy_read_reg_o)
                                ? (IData)(vlSelf->__PVT__read_sel_reg)
                                : (IData)(__PVT__read_sel_prio_enc_o));
    vlSelf->m_axi_wdata_o = 0U;
    vlSelf->m_axi_wstrb_o = 0U;
    vlSelf->m_axi_awsize_o = 0U;
    vlSelf->m_axi_awburst_o = 0U;
    vlSelf->m_axi_wlast_o = 0U;
    vlSelf->m_axi_awlen_o = 0U;
    vlSelf->m_axi_awaddr_o = 0U;
    vlSelf->s1_axi_awready_o = ((IData)(vlSelf->__PVT__demux_axi_awready_i) 
                                & (IData)(vlSelf->__PVT__write_sel));
    __PVT__mux_axi_wvalid_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel)))) {
        vlSelf->m_axi_wdata_o = 0U;
        vlSelf->m_axi_wstrb_o = 0U;
        vlSelf->m_axi_awsize_o = 0U;
        vlSelf->m_axi_awburst_o = 0U;
        vlSelf->m_axi_wlast_o = 0U;
        vlSelf->m_axi_awlen_o = 0U;
        vlSelf->m_axi_awaddr_o = (0x1fffffffU & (IData)(vlSelf->__PVT__mux_axi_awaddr));
        __PVT__mux_axi_wvalid_o = 0U;
        __PVT__mux_axi_awvalid_o = 0U;
        __PVT__mux_axi_awvalid_o = 0U;
    } else {
        __PVT__mux_axi_awvalid_o = 0U;
    }
    if (vlSelf->__PVT__write_sel) {
        vlSelf->m_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m0_axi_wdata_o;
        vlSelf->m_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m0_axi_wstrb_o;
        vlSelf->m_axi_awsize_o = 0U;
        vlSelf->m_axi_awburst_o = 0U;
        vlSelf->m_axi_wlast_o = (0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel));
        vlSelf->m_axi_awlen_o = 0U;
        vlSelf->m_axi_awaddr_o = (0x1fffffffU & (IData)(
                                                        (vlSelf->__PVT__mux_axi_awaddr 
                                                         >> 0x1dU)));
        __PVT__mux_axi_wvalid_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m0_axi_wvalid_o;
        __PVT__mux_axi_awvalid_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m0_axi_awvalid_o;
        vlSelf->s1_axi_wready_o = vlSelf->__PVT__demux_axi_wready_i;
    } else {
        vlSelf->s1_axi_wready_o = 0U;
    }
    vlSelf->m_axi_arsize_o = 0U;
    vlSelf->m_axi_arburst_o = 0U;
    vlSelf->m_axi_arlen_o = 0U;
    vlSelf->m_axi_araddr_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel)))) {
        vlSelf->m_axi_arsize_o = 0U;
        vlSelf->m_axi_arburst_o = 0U;
        vlSelf->m_axi_arlen_o = 0U;
        vlSelf->m_axi_araddr_o = (0x1fffffffU & (IData)(vlSelf->__PVT__mux_axi_araddr));
    }
    vlSelf->s0_axi_arready_o = ((~ (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_arready_i));
    __PVT__mux_axi_arvalid_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel)))) {
        __PVT__mux_axi_arvalid_o = (1U & (IData)(__PVT__mux_axi_arvalid));
    }
    if (vlSelf->__PVT__read_sel) {
        vlSelf->m_axi_arsize_o = 0U;
        vlSelf->m_axi_arburst_o = 0U;
        vlSelf->m_axi_arlen_o = 0U;
        vlSelf->m_axi_araddr_o = (0x1fffffffU & (IData)(
                                                        (vlSelf->__PVT__mux_axi_araddr 
                                                         >> 0x1dU)));
        __PVT__mux_axi_arvalid_o = (1U & ((IData)(__PVT__mux_axi_arvalid) 
                                          >> 1U));
        vlSelf->s1_axi_arready_o = vlSelf->__PVT__demux_axi_arready_i;
    } else {
        vlSelf->s1_axi_arready_o = 0U;
    }
    vlSelf->m_axi_wvalid_o = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                              & (IData)(__PVT__mux_axi_wvalid_o));
    vlSelf->m_axi_awvalid_o = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                               & (IData)(__PVT__mux_axi_awvalid_o));
    vlSelf->m_axi_arvalid_o = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                               & (IData)(__PVT__mux_axi_arvalid_o));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_wlast_o) & ((IData)(vlSelf->m_axi_wvalid_o) 
                                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg))) 
              || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
    vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_write_reg_o)) 
               & (IData)(vlSelf->m_axi_awvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_write_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_awvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_read_reg_o)) 
               & (IData)(vlSelf->m_axi_arvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_read_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((IData)(vlSelf->m_axi_arvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0\n"); );
    // Body
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_read_reg_o)) 
               & (IData)(vlSelf->m_axi_arvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_read_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((IData)(vlSelf->m_axi_arvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
    vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_write_reg_o)) 
               & (IData)(vlSelf->m_axi_awvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_write_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_awvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_wlast_o) & ((IData)(vlSelf->m_axi_wvalid_o) 
                                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg))) 
              || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0\n"); );
    // Body
    if (vlSymsp->TOP.arst_i) {
        vlSelf->__PVT__active_transaction_write_reg_o = 0U;
        vlSelf->__PVT__data_burst_complete_write_reg_o = 0U;
        vlSelf->__PVT__active_transaction_read_reg_o = 0U;
        vlSelf->__PVT__busy_read_reg_o = 0U;
        vlSelf->__PVT__busy_write_reg_o = 0U;
        vlSelf->__PVT__write_sel_reg = 0U;
        vlSelf->__PVT__read_sel_reg = 0U;
    } else if (vlSymsp->TOP.cke_i) {
        vlSelf->__PVT__active_transaction_write_reg_o 
            = vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__data_burst_complete_write_reg_o 
            = vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__active_transaction_read_reg_o 
            = vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__busy_read_reg_o = vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__busy_write_reg_o = vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__write_sel_reg = ((~ (IData)(vlSymsp->TOP.arst_i)) 
                                        & (IData)(vlSelf->__PVT__write_sel));
        vlSelf->__PVT__read_sel_reg = ((~ (IData)(vlSymsp->TOP.arst_i)) 
                                       & (IData)(vlSelf->__PVT__read_sel));
    }
    vlSelf->__PVT__demux_axi_awready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg));
    vlSelf->__PVT__demux_axi_wready_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg));
    vlSelf->__PVT__demux_axi_arready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg));
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->s1_axi_bresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg;
        vlSelf->s1_axi_bvalid_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg;
    } else {
        vlSelf->s1_axi_bresp_o = 0U;
        vlSelf->s1_axi_bvalid_o = 0U;
    }
    vlSelf->s0_axi_rlast_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                              & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg));
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->s1_axi_rlast_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg;
        vlSelf->s1_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg;
        vlSelf->s0_axi_rresp_o = 0U;
        vlSelf->s0_axi_rdata_o = 0U;
        vlSelf->s1_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg;
    } else {
        vlSelf->s1_axi_rlast_o = 0U;
        vlSelf->s1_axi_rdata_o = 0U;
        vlSelf->s0_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg;
        vlSelf->s0_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg;
        vlSelf->s1_axi_rresp_o = 0U;
    }
    vlSelf->s0_axi_rvalid_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                               & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg));
    vlSelf->s1_axi_rvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg) 
                               & (IData)(vlSelf->__PVT__read_sel_reg));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_rready;
    __PVT__mux_axi_rready = 0;
    // Body
    vlSelf->m_axi_bready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel_reg)))) {
        vlSelf->m_axi_bready_o = 0U;
    }
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->m_axi_bready_o = (1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel_reg));
    }
    __PVT__mux_axi_rready = (((1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel_reg)) 
                              << 1U) | (1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel_reg)));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->m_axi_rready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel_reg)))) {
        vlSelf->m_axi_rready_o = (1U & (IData)(__PVT__mux_axi_rready));
    }
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->m_axi_rready_o = (1U & ((IData)(__PVT__mux_axi_rready) 
                                        >> 1U));
    }
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0\n"); );
    // Body
    vlSelf->__PVT__mux_axi_awaddr = (0x200000000000000ULL 
                                     | ((QData)((IData)(
                                                        ((1U 
                                                          == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel))
                                                          ? 
                                                         (0xfffffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 3U)))
                                                          : 0U))) 
                                        << 0x1dU));
    vlSelf->__PVT__mux_axi_araddr = (0x200000000000000ULL 
                                     | (((QData)((IData)(
                                                         ((1U 
                                                           == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel))
                                                           ? 
                                                          (0xfffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                      >> 3U)))
                                                           : 0U))) 
                                         << 0x1dU) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel))
                                                            ? 
                                                           (0xfffffffU 
                                                            & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                                               >> 2U))
                                                            : 0U)))));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__1\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_arvalid;
    __PVT__mux_axi_arvalid = 0;
    CData/*0:0*/ __PVT__read_sel_prio_enc_o;
    __PVT__read_sel_prio_enc_o = 0;
    CData/*0:0*/ __PVT__write_sel_prio_enc_o;
    __PVT__write_sel_prio_enc_o = 0;
    CData/*0:0*/ __PVT__mux_axi_awvalid_o;
    __PVT__mux_axi_awvalid_o = 0;
    CData/*0:0*/ __PVT__mux_axi_wvalid_o;
    __PVT__mux_axi_wvalid_o = 0;
    CData/*0:0*/ __PVT__mux_axi_arvalid_o;
    __PVT__mux_axi_arvalid_o = 0;
    // Body
    __PVT__mux_axi_arvalid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m1_axi_arvalid_o) 
                               << 1U) | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.m1_axi_arvalid_o));
    __PVT__write_sel_prio_enc_o = 0U;
    if (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m1_axi_awvalid_o) {
        __PVT__write_sel_prio_enc_o = 1U;
    }
    __PVT__read_sel_prio_enc_o = 0U;
    if ((1U & (IData)(__PVT__mux_axi_arvalid))) {
        __PVT__read_sel_prio_enc_o = 0U;
    }
    if ((2U & (IData)(__PVT__mux_axi_arvalid))) {
        __PVT__read_sel_prio_enc_o = 1U;
    }
    vlSelf->__PVT__write_sel = ((IData)(vlSelf->__PVT__busy_write_reg_o)
                                 ? (IData)(vlSelf->__PVT__write_sel_reg)
                                 : (IData)(__PVT__write_sel_prio_enc_o));
    vlSelf->__PVT__read_sel = ((IData)(vlSelf->__PVT__busy_read_reg_o)
                                ? (IData)(vlSelf->__PVT__read_sel_reg)
                                : (IData)(__PVT__read_sel_prio_enc_o));
    vlSelf->m_axi_awsize_o = 0U;
    vlSelf->m_axi_wstrb_o = 0U;
    vlSelf->m_axi_wlast_o = 0U;
    vlSelf->m_axi_awlen_o = 0U;
    vlSelf->s1_axi_awready_o = ((IData)(vlSelf->__PVT__demux_axi_awready_i) 
                                & (IData)(vlSelf->__PVT__write_sel));
    vlSelf->m_axi_awaddr_o = 0U;
    __PVT__mux_axi_wvalid_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel)))) {
        vlSelf->m_axi_awsize_o = 0U;
        vlSelf->m_axi_wstrb_o = 0U;
        vlSelf->m_axi_wlast_o = 0U;
        vlSelf->m_axi_awlen_o = 0U;
        vlSelf->m_axi_awaddr_o = (0x1fffffffU & (IData)(vlSelf->__PVT__mux_axi_awaddr));
        __PVT__mux_axi_wvalid_o = 0U;
        __PVT__mux_axi_awvalid_o = 0U;
        __PVT__mux_axi_awvalid_o = 0U;
    } else {
        __PVT__mux_axi_awvalid_o = 0U;
    }
    if (vlSelf->__PVT__write_sel) {
        vlSelf->m_axi_awsize_o = 0U;
        vlSelf->m_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m1_axi_wstrb_o;
        vlSelf->m_axi_wlast_o = (1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel));
        vlSelf->m_axi_awlen_o = 0U;
        vlSelf->m_axi_awaddr_o = (0x1fffffffU & (IData)(
                                                        (vlSelf->__PVT__mux_axi_awaddr 
                                                         >> 0x1dU)));
        __PVT__mux_axi_wvalid_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m1_axi_wvalid_o;
        __PVT__mux_axi_awvalid_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m1_axi_awvalid_o;
        vlSelf->s1_axi_wready_o = vlSelf->__PVT__demux_axi_wready_i;
    } else {
        vlSelf->s1_axi_wready_o = 0U;
    }
    vlSelf->m_axi_arsize_o = 0U;
    vlSelf->m_axi_arlen_o = 0U;
    vlSelf->m_axi_araddr_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel)))) {
        vlSelf->m_axi_arsize_o = 0U;
        vlSelf->m_axi_arlen_o = 0U;
        vlSelf->m_axi_araddr_o = (0x1fffffffU & (IData)(vlSelf->__PVT__mux_axi_araddr));
    }
    vlSelf->s0_axi_arready_o = ((~ (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_arready_i));
    __PVT__mux_axi_arvalid_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel)))) {
        __PVT__mux_axi_arvalid_o = (1U & (IData)(__PVT__mux_axi_arvalid));
    }
    if (vlSelf->__PVT__read_sel) {
        vlSelf->m_axi_arsize_o = 0U;
        vlSelf->m_axi_arlen_o = 0U;
        vlSelf->m_axi_araddr_o = (0x1fffffffU & (IData)(
                                                        (vlSelf->__PVT__mux_axi_araddr 
                                                         >> 0x1dU)));
        __PVT__mux_axi_arvalid_o = (1U & ((IData)(__PVT__mux_axi_arvalid) 
                                          >> 1U));
        vlSelf->s1_axi_arready_o = vlSelf->__PVT__demux_axi_arready_i;
    } else {
        vlSelf->s1_axi_arready_o = 0U;
    }
    vlSelf->m_axi_wvalid_o = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                              & (IData)(__PVT__mux_axi_wvalid_o));
    vlSelf->m_axi_awvalid_o = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                               & (IData)(__PVT__mux_axi_awvalid_o));
    vlSelf->m_axi_arvalid_o = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                               & (IData)(__PVT__mux_axi_arvalid_o));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_wlast_o) & ((IData)(vlSelf->m_axi_wvalid_o) 
                                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg))) 
              || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
    vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_write_reg_o)) 
               & (IData)(vlSelf->m_axi_awvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_write_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_awvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_read_reg_o)) 
               & (IData)(vlSelf->m_axi_arvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_read_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((IData)(vlSelf->m_axi_arvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0\n"); );
    // Body
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_read_reg_o)) 
               & (IData)(vlSelf->m_axi_arvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_read_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((IData)(vlSelf->m_axi_arvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
    vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_write_reg_o)) 
               & (IData)(vlSelf->m_axi_awvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_write_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_awvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_wlast_o) & ((IData)(vlSelf->m_axi_wvalid_o) 
                                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg))) 
              || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0\n"); );
    // Body
    if (vlSymsp->TOP.arst_i) {
        vlSelf->__PVT__active_transaction_write_reg_o = 0U;
        vlSelf->__PVT__data_burst_complete_write_reg_o = 0U;
        vlSelf->__PVT__active_transaction_read_reg_o = 0U;
        vlSelf->__PVT__busy_read_reg_o = 0U;
        vlSelf->__PVT__busy_write_reg_o = 0U;
        vlSelf->__PVT__write_sel_reg = 0U;
        vlSelf->__PVT__read_sel_reg = 0U;
    } else if (vlSymsp->TOP.cke_i) {
        vlSelf->__PVT__active_transaction_write_reg_o 
            = vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__data_burst_complete_write_reg_o 
            = vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__active_transaction_read_reg_o 
            = vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__busy_read_reg_o = vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__busy_write_reg_o = vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__write_sel_reg = ((~ (IData)(vlSymsp->TOP.arst_i)) 
                                        & (IData)(vlSelf->__PVT__write_sel));
        vlSelf->__PVT__read_sel_reg = ((~ (IData)(vlSymsp->TOP.arst_i)) 
                                       & (IData)(vlSelf->__PVT__read_sel));
    }
    vlSelf->__PVT__demux_axi_awready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg));
    vlSelf->__PVT__demux_axi_wready_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg));
    vlSelf->__PVT__demux_axi_arready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg));
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->s1_axi_bresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg;
        vlSelf->s1_axi_bvalid_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg;
    } else {
        vlSelf->s1_axi_bresp_o = 0U;
        vlSelf->s1_axi_bvalid_o = 0U;
    }
    vlSelf->s0_axi_rlast_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                              & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg));
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->s1_axi_rlast_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg;
        vlSelf->s1_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg;
        vlSelf->s0_axi_rresp_o = 0U;
        vlSelf->s0_axi_rdata_o = 0U;
        vlSelf->s1_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg;
    } else {
        vlSelf->s1_axi_rlast_o = 0U;
        vlSelf->s1_axi_rdata_o = 0U;
        vlSelf->s0_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg;
        vlSelf->s0_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg;
        vlSelf->s1_axi_rresp_o = 0U;
    }
    vlSelf->s0_axi_rvalid_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                               & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg));
    vlSelf->s1_axi_rvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg) 
                               & (IData)(vlSelf->__PVT__read_sel_reg));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_rready;
    __PVT__mux_axi_rready = 0;
    // Body
    vlSelf->m_axi_bready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel_reg)))) {
        vlSelf->m_axi_bready_o = 0U;
    }
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->m_axi_bready_o = (2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel_reg));
    }
    __PVT__mux_axi_rready = (((2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel_reg)) 
                              << 1U) | (2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel_reg)));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->m_axi_rready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel_reg)))) {
        vlSelf->m_axi_rready_o = (1U & (IData)(__PVT__mux_axi_rready));
    }
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->m_axi_rready_o = (1U & ((IData)(__PVT__mux_axi_rready) 
                                        >> 1U));
    }
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0\n"); );
    // Body
    vlSelf->__PVT__mux_axi_awaddr = (0x200000000000000ULL 
                                     | ((QData)((IData)(
                                                        ((2U 
                                                          == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel))
                                                          ? 
                                                         (0xfffffffU 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                     >> 3U)))
                                                          : 0U))) 
                                        << 0x1dU));
    vlSelf->__PVT__mux_axi_araddr = (0x200000000000000ULL 
                                     | (((QData)((IData)(
                                                         ((2U 
                                                           == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel))
                                                           ? 
                                                          (0xfffffffU 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                                      >> 3U)))
                                                           : 0U))) 
                                         << 0x1dU) 
                                        | (QData)((IData)(
                                                          ((2U 
                                                            == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel))
                                                            ? 
                                                           (0xfffffffU 
                                                            & (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                                               >> 2U))
                                                            : 0U)))));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__1\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_arvalid;
    __PVT__mux_axi_arvalid = 0;
    CData/*0:0*/ __PVT__read_sel_prio_enc_o;
    __PVT__read_sel_prio_enc_o = 0;
    CData/*0:0*/ __PVT__write_sel_prio_enc_o;
    __PVT__write_sel_prio_enc_o = 0;
    CData/*0:0*/ __PVT__mux_axi_awvalid_o;
    __PVT__mux_axi_awvalid_o = 0;
    CData/*0:0*/ __PVT__mux_axi_wvalid_o;
    __PVT__mux_axi_wvalid_o = 0;
    CData/*0:0*/ __PVT__mux_axi_arvalid_o;
    __PVT__mux_axi_arvalid_o = 0;
    // Body
    __PVT__mux_axi_arvalid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m2_axi_arvalid_o) 
                               << 1U) | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.m2_axi_arvalid_o));
    __PVT__write_sel_prio_enc_o = 0U;
    if (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m2_axi_awvalid_o) {
        __PVT__write_sel_prio_enc_o = 1U;
    }
    __PVT__read_sel_prio_enc_o = 0U;
    if ((1U & (IData)(__PVT__mux_axi_arvalid))) {
        __PVT__read_sel_prio_enc_o = 0U;
    }
    if ((2U & (IData)(__PVT__mux_axi_arvalid))) {
        __PVT__read_sel_prio_enc_o = 1U;
    }
    vlSelf->__PVT__write_sel = ((IData)(vlSelf->__PVT__busy_write_reg_o)
                                 ? (IData)(vlSelf->__PVT__write_sel_reg)
                                 : (IData)(__PVT__write_sel_prio_enc_o));
    vlSelf->__PVT__read_sel = ((IData)(vlSelf->__PVT__busy_read_reg_o)
                                ? (IData)(vlSelf->__PVT__read_sel_reg)
                                : (IData)(__PVT__read_sel_prio_enc_o));
    vlSelf->m_axi_awsize_o = 0U;
    vlSelf->m_axi_wdata_o = 0U;
    vlSelf->m_axi_wstrb_o = 0U;
    vlSelf->m_axi_wlast_o = 0U;
    vlSelf->m_axi_awlen_o = 0U;
    vlSelf->s1_axi_awready_o = ((IData)(vlSelf->__PVT__demux_axi_awready_i) 
                                & (IData)(vlSelf->__PVT__write_sel));
    vlSelf->m_axi_awaddr_o = 0U;
    __PVT__mux_axi_wvalid_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel)))) {
        vlSelf->m_axi_awsize_o = 0U;
        vlSelf->m_axi_wdata_o = 0U;
        vlSelf->m_axi_wstrb_o = 0U;
        vlSelf->m_axi_wlast_o = 0U;
        vlSelf->m_axi_awlen_o = 0U;
        vlSelf->m_axi_awaddr_o = (0x1fffffffU & (IData)(vlSelf->__PVT__mux_axi_awaddr));
        __PVT__mux_axi_wvalid_o = 0U;
        __PVT__mux_axi_awvalid_o = 0U;
        __PVT__mux_axi_awvalid_o = 0U;
    } else {
        __PVT__mux_axi_awvalid_o = 0U;
    }
    if (vlSelf->__PVT__write_sel) {
        vlSelf->m_axi_awsize_o = 0U;
        vlSelf->m_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m2_axi_wdata_o;
        vlSelf->m_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m2_axi_wstrb_o;
        vlSelf->m_axi_wlast_o = (2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel));
        vlSelf->m_axi_awlen_o = 0U;
        vlSelf->m_axi_awaddr_o = (0x1fffffffU & (IData)(
                                                        (vlSelf->__PVT__mux_axi_awaddr 
                                                         >> 0x1dU)));
        __PVT__mux_axi_wvalid_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m2_axi_wvalid_o;
        __PVT__mux_axi_awvalid_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.m2_axi_awvalid_o;
        vlSelf->s1_axi_wready_o = vlSelf->__PVT__demux_axi_wready_i;
    } else {
        vlSelf->s1_axi_wready_o = 0U;
    }
    vlSelf->m_axi_arsize_o = 0U;
    vlSelf->m_axi_arlen_o = 0U;
    vlSelf->m_axi_araddr_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel)))) {
        vlSelf->m_axi_arsize_o = 0U;
        vlSelf->m_axi_arlen_o = 0U;
        vlSelf->m_axi_araddr_o = (0x1fffffffU & (IData)(vlSelf->__PVT__mux_axi_araddr));
    }
    vlSelf->s0_axi_arready_o = ((~ (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_arready_i));
    __PVT__mux_axi_arvalid_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel)))) {
        __PVT__mux_axi_arvalid_o = (1U & (IData)(__PVT__mux_axi_arvalid));
    }
    if (vlSelf->__PVT__read_sel) {
        vlSelf->m_axi_arsize_o = 0U;
        vlSelf->m_axi_arlen_o = 0U;
        vlSelf->m_axi_araddr_o = (0x1fffffffU & (IData)(
                                                        (vlSelf->__PVT__mux_axi_araddr 
                                                         >> 0x1dU)));
        __PVT__mux_axi_arvalid_o = (1U & ((IData)(__PVT__mux_axi_arvalid) 
                                          >> 1U));
        vlSelf->s1_axi_arready_o = vlSelf->__PVT__demux_axi_arready_i;
    } else {
        vlSelf->s1_axi_arready_o = 0U;
    }
    vlSelf->m_axi_wvalid_o = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                              & (IData)(__PVT__mux_axi_wvalid_o));
    vlSelf->m_axi_awvalid_o = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                               & (IData)(__PVT__mux_axi_awvalid_o));
    vlSelf->m_axi_arvalid_o = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                               & (IData)(__PVT__mux_axi_arvalid_o));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_wlast_o) & ((IData)(vlSelf->m_axi_wvalid_o) 
                                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg))) 
              || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
    vlSelf->__PVT__busy_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_write_reg_o)) 
               & (IData)(vlSelf->m_axi_awvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_write_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_write_reg_rst)) 
           & (((IData)(vlSelf->m_axi_awvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__busy_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((~ (IData)(vlSelf->__PVT__busy_read_reg_o)) 
               & (IData)(vlSelf->m_axi_arvalid_o)) 
              || (IData)(vlSelf->__PVT__busy_read_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__busy_read_reg_rst)) 
           & (((IData)(vlSelf->m_axi_arvalid_o) & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
}
