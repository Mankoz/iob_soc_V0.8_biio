// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "Viob_soc_sim.h"
#include "Viob_soc_sim__Syms.h"
#include "verilated_dpi.h"


int Viob_soc_sim::simutil_get_scramble_key(svBitVecVal* val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root::simutil_get_scramble_key\n"); );
    // Init
    VlWide<4>/*127:0*/ val__Vcvt;
    VL_ZERO_W(128, val__Vcvt);
    IData/*31:0*/ simutil_get_scramble_key__Vfuncrtn__Vcvt;
    simutil_get_scramble_key__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_key");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Viob_soc_sim__Vcb_simutil_get_scramble_key_t __Vcb = (Viob_soc_sim__Vcb_simutil_get_scramble_key_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Viob_soc_sim__Syms*)(__Vscopep->symsp()), val__Vcvt, simutil_get_scramble_key__Vfuncrtn__Vcvt);
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) VL_SET_SVBV_W(128, val + 4 * val__Vidx, val__Vcvt);
    int simutil_get_scramble_key__Vfuncrtn;
    for (size_t simutil_get_scramble_key__Vfuncrtn__Vidx = 0; simutil_get_scramble_key__Vfuncrtn__Vidx < 1; ++simutil_get_scramble_key__Vfuncrtn__Vidx) simutil_get_scramble_key__Vfuncrtn = simutil_get_scramble_key__Vfuncrtn__Vcvt;
    return simutil_get_scramble_key__Vfuncrtn;
}

int Viob_soc_sim::simutil_get_scramble_nonce(svBitVecVal* nonce) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root::simutil_get_scramble_nonce\n"); );
    // Init
    VlWide<10>/*319:0*/ nonce__Vcvt;
    VL_ZERO_W(320, nonce__Vcvt);
    IData/*31:0*/ simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
    simutil_get_scramble_nonce__Vfuncrtn__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_nonce");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    Viob_soc_sim__Vcb_simutil_get_scramble_nonce_t __Vcb = (Viob_soc_sim__Vcb_simutil_get_scramble_nonce_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((Viob_soc_sim__Syms*)(__Vscopep->symsp()), nonce__Vcvt, simutil_get_scramble_nonce__Vfuncrtn__Vcvt);
    for (size_t nonce__Vidx = 0; nonce__Vidx < 1; ++nonce__Vidx) VL_SET_SVBV_W(320, nonce + 10 * nonce__Vidx, nonce__Vcvt);
    int simutil_get_scramble_nonce__Vfuncrtn;
    for (size_t simutil_get_scramble_nonce__Vfuncrtn__Vidx = 0; simutil_get_scramble_nonce__Vfuncrtn__Vidx < 1; ++simutil_get_scramble_nonce__Vfuncrtn__Vidx) simutil_get_scramble_nonce__Vfuncrtn = simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
    return simutil_get_scramble_nonce__Vfuncrtn;
}
