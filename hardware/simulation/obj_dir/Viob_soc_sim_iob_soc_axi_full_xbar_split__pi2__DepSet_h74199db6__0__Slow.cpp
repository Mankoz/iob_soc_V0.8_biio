// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2.h"

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0\n"); );
    // Body
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSymsp->TOP.arst_i)) & (IData)(vlSelf->__PVT__active_transaction_write_reg_o));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSymsp->TOP.arst_i)) & (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o));
    vlSelf->__PVT__write_sel = ((IData)(vlSelf->__PVT__active_transaction_write_reg_o)
                                 ? (IData)(vlSelf->__PVT__write_sel_reg)
                                 : 0U);
    vlSelf->m0_axi_awid_o = ((0U == (IData)(vlSelf->__PVT__write_sel))
                              ? (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_i_axi_awid)
                              : 0U);
    vlSelf->m1_axi_awid_o = ((1U == (IData)(vlSelf->__PVT__write_sel))
                              ? (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_i_axi_awid)
                              : 0U);
    vlSelf->m2_axi_awid_o = ((2U == (IData)(vlSelf->__PVT__write_sel))
                              ? (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_i_axi_awid)
                              : 0U);
}

extern const VlUnpacked<CData/*1:0*/, 256> Viob_soc_sim__ConstPool__TABLE_h97fbc27d_0;
extern const VlUnpacked<IData/*31:0*/, 256> Viob_soc_sim__ConstPool__TABLE_hb3a0245a_0;
extern const VlUnpacked<CData/*0:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0;
extern const VlUnpacked<IData/*31:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h2988ed14_0;

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelf->__PVT__mux_axi_rid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rid_o) 
                                   << 8U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rid_o) 
                                              << 4U) 
                                             | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rid_o)));
    vlSelf->__PVT__mux_axi_bid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_bid_o) 
                                   << 8U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_bid_o) 
                                              << 4U) 
                                             | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_bid_o)));
    __Vtableidx3 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_bresp_o) 
                     << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_bresp_o) 
                                << 4U) | (IData)(vlSelf->__PVT__write_sel_reg)));
    vlSelf->s_axi_bresp_o = Viob_soc_sim__ConstPool__TABLE_h97fbc27d_0
        [__Vtableidx3];
    vlSelf->__PVT__iob_mux_axi_bresp__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_hb3a0245a_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_bvalid_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_bvalid_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_bvalid_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__write_sel_reg))));
    vlSelf->s_axi_bvalid_o = Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0
        [__Vtableidx4];
    vlSelf->__PVT__iob_mux_axi_bvalid__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h2988ed14_0
        [__Vtableidx4];
    __Vtableidx8 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rlast_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rlast_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rlast_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rlast_o = Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0
        [__Vtableidx8];
    vlSelf->__PVT__iob_mux_axi_rlast__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h2988ed14_0
        [__Vtableidx8];
    __Vtableidx6 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rresp_o) 
                     << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rresp_o) 
                                << 4U) | (IData)(vlSelf->__PVT__read_sel_reg)));
    vlSelf->s_axi_rresp_o = Viob_soc_sim__ConstPool__TABLE_h97fbc27d_0
        [__Vtableidx6];
    vlSelf->__PVT__iob_mux_axi_rresp__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_hb3a0245a_0
        [__Vtableidx6];
    vlSelf->__PVT__mux_axi_rdata[0U] = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rdata_o;
    vlSelf->__PVT__mux_axi_rdata[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rdata_o)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rdata_o))));
    vlSelf->__PVT__mux_axi_rdata[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rdata_o)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rdata_o))) 
                                                >> 0x20U));
    __Vtableidx7 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rvalid_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rvalid_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rvalid_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rvalid_o = Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0
        [__Vtableidx7];
    vlSelf->__PVT__iob_mux_axi_rvalid__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h2988ed14_0
        [__Vtableidx7];
    vlSelf->s_axi_rid_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rid_o = (0xfU & (IData)(vlSelf->__PVT__mux_axi_rid));
    }
    if ((1U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_rid) 
                                       >> 4U));
    }
    vlSelf->s_axi_bid_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__write_sel_reg))) {
        vlSelf->s_axi_bid_o = (0xfU & (IData)(vlSelf->__PVT__mux_axi_bid));
    }
    if ((1U == (IData)(vlSelf->__PVT__write_sel_reg))) {
        vlSelf->s_axi_bid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_bid) 
                                       >> 4U));
    }
    if ((2U == (IData)(vlSelf->__PVT__write_sel_reg))) {
        vlSelf->s_axi_bid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_bid) 
                                       >> 8U));
    }
    vlSelf->s_axi_rdata_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = vlSelf->__PVT__mux_axi_rdata[0U];
    }
    if ((1U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = vlSelf->__PVT__mux_axi_rdata[1U];
    }
    if ((2U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_rid) 
                                       >> 8U));
        vlSelf->s_axi_rdata_o = vlSelf->__PVT__mux_axi_rdata[2U];
    }
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
}

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*4:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*4:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelf->__PVT__mux_axi_rid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rid_o) 
                                   << 8U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rid_o) 
                                              << 4U) 
                                             | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rid_o)));
    vlSelf->__PVT__mux_axi_bid = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bid_o) 
                                   << 8U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bid_o) 
                                              << 4U) 
                                             | (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_bid_o)));
    __Vtableidx16 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rlast_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rlast_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rlast_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rlast_o = Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0
        [__Vtableidx16];
    vlSelf->__PVT__iob_mux_axi_rlast__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h2988ed14_0
        [__Vtableidx16];
    vlSelf->__PVT__mux_axi_rdata[0U] = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rdata_o;
    vlSelf->__PVT__mux_axi_rdata[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rdata_o)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rdata_o))));
    vlSelf->__PVT__mux_axi_rdata[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rdata_o)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rdata_o))) 
                                                >> 0x20U));
    __Vtableidx14 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rresp_o) 
                      << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rresp_o) 
                                 << 4U) | (IData)(vlSelf->__PVT__read_sel_reg)));
    vlSelf->s_axi_rresp_o = Viob_soc_sim__ConstPool__TABLE_h97fbc27d_0
        [__Vtableidx14];
    vlSelf->__PVT__iob_mux_axi_rresp__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_hb3a0245a_0
        [__Vtableidx14];
    __Vtableidx11 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bresp_o) 
                      << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bresp_o) 
                                 << 4U) | (IData)(vlSelf->__PVT__write_sel_reg)));
    vlSelf->s_axi_bresp_o = Viob_soc_sim__ConstPool__TABLE_h97fbc27d_0
        [__Vtableidx11];
    vlSelf->__PVT__iob_mux_axi_bresp__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_hb3a0245a_0
        [__Vtableidx11];
    __Vtableidx15 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rvalid_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rvalid_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rvalid_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rvalid_o = Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0
        [__Vtableidx15];
    vlSelf->__PVT__iob_mux_axi_rvalid__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h2988ed14_0
        [__Vtableidx15];
    __Vtableidx12 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bvalid_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bvalid_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_bvalid_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__write_sel_reg))));
    vlSelf->s_axi_bvalid_o = Viob_soc_sim__ConstPool__TABLE_h9751e8f9_0
        [__Vtableidx12];
    vlSelf->__PVT__iob_mux_axi_bvalid__DOT__input_sel 
        = Viob_soc_sim__ConstPool__TABLE_h2988ed14_0
        [__Vtableidx12];
    vlSelf->s_axi_rid_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rid_o = (0xfU & (IData)(vlSelf->__PVT__mux_axi_rid));
    }
    if ((1U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_rid) 
                                       >> 4U));
    }
    vlSelf->s_axi_bid_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__write_sel_reg))) {
        vlSelf->s_axi_bid_o = (0xfU & (IData)(vlSelf->__PVT__mux_axi_bid));
    }
    if ((1U == (IData)(vlSelf->__PVT__write_sel_reg))) {
        vlSelf->s_axi_bid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_bid) 
                                       >> 4U));
    }
    if ((2U == (IData)(vlSelf->__PVT__write_sel_reg))) {
        vlSelf->s_axi_bid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_bid) 
                                       >> 8U));
    }
    vlSelf->s_axi_rdata_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = vlSelf->__PVT__mux_axi_rdata[0U];
    }
    if ((1U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = vlSelf->__PVT__mux_axi_rdata[1U];
    }
    if ((2U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rid_o = (0xfU & ((IData)(vlSelf->__PVT__mux_axi_rid) 
                                       >> 8U));
        vlSelf->s_axi_rdata_o = vlSelf->__PVT__mux_axi_rdata[2U];
    }
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__active_transaction_write_reg_rst 
        = ((IData)(vlSelf->s_axi_bvalid_o) | (IData)(vlSymsp->TOP.arst_i));
}

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1\n"); );
    // Body
    vlSelf->__PVT__read_sel = (3U & ((IData)(vlSelf->__PVT__active_transaction_read_reg_o)
                                      ? (IData)(vlSelf->__PVT__read_sel_reg)
                                      : (IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 0x1fU))));
    vlSelf->__PVT__write_sel = (3U & ((IData)(vlSelf->__PVT__active_transaction_write_reg_o)
                                       ? (IData)(vlSelf->__PVT__write_sel_reg)
                                       : (IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x1fU))));
    vlSelf->m0_axi_arid_o = ((0U == (IData)(vlSelf->__PVT__read_sel))
                              ? (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arid)
                              : 0U);
    vlSelf->m1_axi_arid_o = ((1U == (IData)(vlSelf->__PVT__read_sel))
                              ? (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arid)
                              : 0U);
    vlSelf->m2_axi_arid_o = ((2U == (IData)(vlSelf->__PVT__read_sel))
                              ? (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arid)
                              : 0U);
    if ((0U == (IData)(vlSelf->__PVT__write_sel))) {
        vlSelf->m0_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata;
        vlSelf->m0_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be;
        vlSelf->m0_axi_awid_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awid;
    } else {
        vlSelf->m0_axi_wdata_o = 0U;
        vlSelf->m0_axi_wstrb_o = 0U;
        vlSelf->m0_axi_awid_o = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__write_sel))) {
        vlSelf->m1_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata;
        vlSelf->m1_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be;
        vlSelf->m1_axi_awid_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awid;
    } else {
        vlSelf->m1_axi_wdata_o = 0U;
        vlSelf->m1_axi_wstrb_o = 0U;
        vlSelf->m1_axi_awid_o = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__write_sel))) {
        vlSelf->m2_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata;
        vlSelf->m2_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be;
        vlSelf->m2_axi_awid_o = vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awid;
    } else {
        vlSelf->m2_axi_wdata_o = 0U;
        vlSelf->m2_axi_wstrb_o = 0U;
        vlSelf->m2_axi_awid_o = 0U;
    }
}

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2\n"); );
    // Body
    vlSelf->__PVT__demux_axi_arvalid_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arvalid));
    vlSelf->__PVT__demux_axi_wvalid_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                         & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid));
    vlSelf->__PVT__demux_axi_awvalid_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                          & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid));
    vlSelf->m0_axi_arvalid_o = ((0U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_arvalid_i));
    vlSelf->m1_axi_arvalid_o = ((1U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_arvalid_i));
    vlSelf->m2_axi_arvalid_o = ((2U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_arvalid_i));
    vlSelf->m0_axi_wvalid_o = ((0U == (IData)(vlSelf->__PVT__write_sel)) 
                               & (IData)(vlSelf->__PVT__demux_axi_wvalid_i));
    vlSelf->m1_axi_wvalid_o = ((1U == (IData)(vlSelf->__PVT__write_sel)) 
                               & (IData)(vlSelf->__PVT__demux_axi_wvalid_i));
    vlSelf->m2_axi_wvalid_o = ((2U == (IData)(vlSelf->__PVT__write_sel)) 
                               & (IData)(vlSelf->__PVT__demux_axi_wvalid_i));
    vlSelf->m0_axi_awvalid_o = ((0U == (IData)(vlSelf->__PVT__write_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_awvalid_i));
    vlSelf->m1_axi_awvalid_o = ((1U == (IData)(vlSelf->__PVT__write_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_awvalid_i));
    vlSelf->m2_axi_awvalid_o = ((2U == (IData)(vlSelf->__PVT__write_sel)) 
                                & (IData)(vlSelf->__PVT__demux_axi_awvalid_i));
}
