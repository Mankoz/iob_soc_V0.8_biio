// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3.h"

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0__0\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_rready;
    __PVT__mux_axi_rready = 0;
    // Body
    vlSelf->__PVT__demux_axi_awready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg));
    vlSelf->s0_axi_rlast_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                              & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg));
    vlSelf->s1_axi_rlast_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg) 
                              & (IData)(vlSelf->__PVT__read_sel_reg));
    vlSelf->m_axi_bready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel_reg)))) {
        vlSelf->m_axi_bready_o = 0U;
    }
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->m_axi_bready_o = (0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel_reg));
    }
    __PVT__mux_axi_rready = (((0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel_reg)) 
                              << 1U) | (0U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel_reg)));
    vlSelf->s0_axi_rvalid_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                               & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg));
    vlSelf->__PVT__demux_axi_wready_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg));
    vlSelf->__PVT__demux_axi_arready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg));
    vlSelf->s1_axi_rvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg) 
                               & (IData)(vlSelf->__PVT__read_sel_reg));
    vlSelf->s1_axi_bvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg) 
                               & (IData)(vlSelf->__PVT__write_sel_reg));
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->m_axi_rready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel_reg)))) {
        vlSelf->m_axi_rready_o = (1U & (IData)(__PVT__mux_axi_rready));
    }
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->s1_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg;
        vlSelf->s0_axi_rdata_o = 0U;
        vlSelf->m_axi_rready_o = (1U & ((IData)(__PVT__mux_axi_rready) 
                                        >> 1U));
    } else {
        vlSelf->s1_axi_rdata_o = 0U;
        vlSelf->s0_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg;
    }
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
}

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1__0\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_rready;
    __PVT__mux_axi_rready = 0;
    // Body
    vlSelf->__PVT__demux_axi_awready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg));
    vlSelf->s0_axi_rlast_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                              & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg));
    vlSelf->s1_axi_rlast_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg) 
                              & (IData)(vlSelf->__PVT__read_sel_reg));
    __PVT__mux_axi_rready = (((1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel_reg)) 
                              << 1U) | (1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel_reg)));
    vlSelf->m_axi_bready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel_reg)))) {
        vlSelf->m_axi_bready_o = 0U;
    }
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->m_axi_bready_o = (1U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel_reg));
        vlSelf->s1_axi_bresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg;
    } else {
        vlSelf->s1_axi_bresp_o = 0U;
    }
    vlSelf->s0_axi_rvalid_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                               & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__demux_axi_wready_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg));
    vlSelf->__PVT__demux_axi_arready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg));
    vlSelf->s1_axi_rvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg) 
                               & (IData)(vlSelf->__PVT__read_sel_reg));
    vlSelf->s1_axi_bvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg) 
                               & (IData)(vlSelf->__PVT__write_sel_reg));
    vlSelf->m_axi_rready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel_reg)))) {
        vlSelf->m_axi_rready_o = (1U & (IData)(__PVT__mux_axi_rready));
    }
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->s1_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg;
        vlSelf->s0_axi_rresp_o = 0U;
        vlSelf->s0_axi_rdata_o = 0U;
        vlSelf->s1_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg;
        vlSelf->m_axi_rready_o = (1U & ((IData)(__PVT__mux_axi_rready) 
                                        >> 1U));
    } else {
        vlSelf->s1_axi_rdata_o = 0U;
        vlSelf->s0_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg;
        vlSelf->s0_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg;
        vlSelf->s1_axi_rresp_o = 0U;
    }
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
}

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2__0\n"); );
    // Init
    CData/*1:0*/ __PVT__mux_axi_rready;
    __PVT__mux_axi_rready = 0;
    // Body
    vlSelf->__PVT__demux_axi_awready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg));
    vlSelf->s0_axi_rlast_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                              & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg));
    vlSelf->s1_axi_rlast_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg) 
                              & (IData)(vlSelf->__PVT__read_sel_reg));
    __PVT__mux_axi_rready = (((2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__read_sel_reg)) 
                              << 1U) | (2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0.__PVT__read_sel_reg)));
    vlSelf->m_axi_bready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__write_sel_reg)))) {
        vlSelf->m_axi_bready_o = 0U;
    }
    if (vlSelf->__PVT__write_sel_reg) {
        vlSelf->m_axi_bready_o = (2U == (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1.__PVT__write_sel_reg));
        vlSelf->s1_axi_bresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg;
    } else {
        vlSelf->s1_axi_bresp_o = 0U;
    }
    vlSelf->s0_axi_rvalid_o = ((~ (IData)(vlSelf->__PVT__read_sel_reg)) 
                               & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg));
    vlSelf->__PVT__demux_axi_wready_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg));
    vlSelf->__PVT__demux_axi_arready_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg));
    vlSelf->s1_axi_rvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg) 
                               & (IData)(vlSelf->__PVT__read_sel_reg));
    vlSelf->s1_axi_bvalid_o = ((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg) 
                               & (IData)(vlSelf->__PVT__write_sel_reg));
    vlSelf->m_axi_rready_o = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__read_sel_reg)))) {
        vlSelf->m_axi_rready_o = (1U & (IData)(__PVT__mux_axi_rready));
    }
    if (vlSelf->__PVT__read_sel_reg) {
        vlSelf->s1_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg;
        vlSelf->s0_axi_rresp_o = 0U;
        vlSelf->s0_axi_rdata_o = 0U;
        vlSelf->s1_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg;
        vlSelf->m_axi_rready_o = (1U & ((IData)(__PVT__mux_axi_rready) 
                                        >> 1U));
    } else {
        vlSelf->s1_axi_rdata_o = 0U;
        vlSelf->s0_axi_rresp_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg;
        vlSelf->s0_axi_rdata_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg;
        vlSelf->s1_axi_rresp_o = 0U;
    }
    vlSelf->__PVT__busy_write_reg_rst = (((IData)(vlSelf->m_axi_bready_o) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg)) 
                                         | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__busy_read_reg_rst = (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg) 
                                         & ((IData)(vlSelf->m_axi_rready_o) 
                                            & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg))) 
                                        | (IData)(vlSymsp->TOP.arst_i));
}
