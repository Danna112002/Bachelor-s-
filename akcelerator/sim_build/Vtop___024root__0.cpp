// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.top_slave_module__DOT__rst_n_meta) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_meta))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 294, vlSelfRef.top_slave_module__DOT__rst_n_meta, vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_meta);
        vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_meta 
            = vlSelfRef.top_slave_module__DOT__rst_n_meta;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__rst_n_sync) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_sync))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 296, vlSelfRef.top_slave_module__DOT__rst_n_sync, vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_sync);
        vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_sync 
            = vlSelfRef.top_slave_module__DOT__rst_n_sync;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BRESP))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 1047, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BRESP);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BRESP 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RRESP))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 1147, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RRESP);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RRESP 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1155, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 1219, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1487, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1489, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1491, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1493, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1495, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1497, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1499, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1563, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1587, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1611, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1675, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1677, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 1992, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2008, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2010, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2014, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 2078, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2086, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2088, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2092, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2187, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2203, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2205, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2207, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2273, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2275, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2339, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2403, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2407, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2411, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2475, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2477, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2479, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2481, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2483, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2847, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2911, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2913, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 2921, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2927, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2991, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3249, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3315, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__const_one 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__const_one)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3387, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__const_one, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__const_one);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__const_one 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__const_one;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3594, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 3596, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 3612, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3769, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 3771, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 3781, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 3789, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 3797, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[1U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[2U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[3U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[4U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[5U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[6U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[7U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[8U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[9U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001fU];
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [0U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [0U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2993, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [0U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [0U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[0U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [0U];
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [1U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [1U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3057, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [1U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [1U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[1U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [1U];
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [2U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [2U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3121, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [2U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [2U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[2U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [2U];
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [3U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [3U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3185, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [3U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [3U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[3U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [3U];
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN 
        = vlSelfRef.S_AXI_ARESETN;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr) 
                                                     - (IData)(0x0100U))), 2U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr) 
                                                     - (IData)(0x0200U))), 2U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg) 
                                                     - (IData)(0x0100U))), 2U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg) 
                                                     - (IData)(0x0200U))), 2U));
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out;
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte 
        = (0x000000ffU & ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx))
                           ? ([&]() {
                    ++(vlSymsp->__Vcoverage[2118]);
                }(), vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data)
                           : ([&]() {
                    ++(vlSymsp->__Vcoverage[2123]);
                }(), ((1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx))
                       ? ([&]() {
                            ++(vlSymsp->__Vcoverage[2119]);
                        }(), (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                              >> 8U)) : ([&]() {
                            ++(vlSymsp->__Vcoverage[2122]);
                        }(), ((2U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx))
                               ? ([&]() {
                                    ++(vlSymsp->__Vcoverage[2120]);
                                }(), (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                                      >> 0x10U)) : 
                              ([&]() {
                                    ++(vlSymsp->__Vcoverage[2121]);
                                }(), (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                                      >> 0x18U))))))));
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[2555]);
            }(), 0U) : ([&]() {
                ++(vlSymsp->__Vcoverage[2556]);
            }(), vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter));
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
        = (0x00000001ffffffffULL & ((QData)((IData)(
                                                    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                                                    [3U])) 
                                    - (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset))));
    vlSelfRef.top_slave_module__DOT__S_AXI_BRESP = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP;
    vlSelfRef.top_slave_module__DOT__S_AXI_RRESP = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP;
    vlSelfRef.top_slave_module__DOT__gb_tvalid = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid;
    vlSelfRef.top_slave_module__DOT__S_AXI_AWADDR = vlSelfRef.S_AXI_AWADDR;
    vlSelfRef.top_slave_module__DOT__S_AXI_WDATA = vlSelfRef.S_AXI_WDATA;
    vlSelfRef.top_slave_module__DOT__S_AXI_WSTRB = vlSelfRef.S_AXI_WSTRB;
    vlSelfRef.top_slave_module__DOT__S_AXI_BREADY = vlSelfRef.S_AXI_BREADY;
    vlSelfRef.top_slave_module__DOT__S_AXI_ARADDR = vlSelfRef.S_AXI_ARADDR;
    vlSelfRef.top_slave_module__DOT__S_AXI_ARVALID 
        = vlSelfRef.S_AXI_ARVALID;
    vlSelfRef.top_slave_module__DOT__S_AXIS_TDATA = vlSelfRef.S_AXIS_TDATA;
    vlSelfRef.top_slave_module__DOT__S_AXIS_TKEEP = vlSelfRef.S_AXIS_TKEEP;
    vlSelfRef.top_slave_module__DOT__S_AXIS_TLAST = vlSelfRef.S_AXIS_TLAST;
    vlSelfRef.top_slave_module__DOT__S_AXIS_TVALID 
        = vlSelfRef.S_AXIS_TVALID;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [2U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [1U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [2U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [1U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [3U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [5U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [4U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [5U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [4U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [6U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [8U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [7U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [8U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [7U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [9U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000aU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x0bU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0aU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0bU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x0aU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x0cU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000dU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x0eU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0dU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0eU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x0dU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x0fU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000010U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x11U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x10U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000011U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x11U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x10U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x12U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000013U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x14U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x13U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000014U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x14U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x13U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x15U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000016U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x17U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x16U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000017U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x17U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x16U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x18U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000019U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x1aU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x19U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1aU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x19U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x1bU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001cU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x1dU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1cU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1dU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x1cU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001eU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x1fU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1eU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1fU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x1eU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [2U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [1U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [2U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [1U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [3U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [5U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [4U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [5U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [4U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [6U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [8U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [7U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [8U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [7U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [9U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000aU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x0bU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0aU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0bU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x0aU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x0cU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000dU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x0eU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0dU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0eU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x0dU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x0fU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000010U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x11U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x10U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000011U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x11U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x10U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x12U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000013U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x14U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x13U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000014U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x14U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x13U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x15U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000016U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x17U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x16U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000017U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x17U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x16U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x18U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000019U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x1aU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x19U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1aU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x19U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x1bU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001cU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x1dU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1cU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1dU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x1cU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001eU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x1fU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1eU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1fU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x1eU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__sig_final_char_count 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count;
    vlSelfRef.top_slave_module__DOT__sig_char_count_valid 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid;
    vlSelfRef.top_slave_module__DOT__sig_encoding_error 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    vlSelfRef.top_slave_module__DOT__sig_error_position 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position;
    vlSelfRef.top_slave_module__DOT__sig_match_count 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    vlSelfRef.top_slave_module__DOT__sig_match_count_valid 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid;
    vlSelfRef.top_slave_module__DOT__sig_fifo_empty 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty;
    vlSelfRef.top_slave_module__DOT__gb_tlast = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[2489]);
            }(), 0U) : ([&]() {
                ++(vlSymsp->__Vcoverage[2490]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state)));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo;
    vlSelfRef.top_slave_module__DOT__val_tdata = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata;
    vlSelfRef.top_slave_module__DOT__val_tpos = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos;
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__mem
        [vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr];
    vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    vlSelfRef.top_slave_module__DOT__gb_tdata = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata;
    vlSelfRef.top_slave_module__DOT__S_AXI_RREADY = vlSelfRef.S_AXI_RREADY;
    vlSelfRef.top_slave_module__DOT__S_AXI_AWVALID 
        = vlSelfRef.S_AXI_AWVALID;
    vlSelfRef.top_slave_module__DOT__S_AXI_WVALID = vlSelfRef.S_AXI_WVALID;
    vlSelfRef.top_slave_module__DOT__sig_pattern_len_full 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len;
    vlSelfRef.top_slave_module__DOT__val_tlast = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast;
    if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) {
        if ((8U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            if ((4U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                    if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                        ++(vlSymsp->__Vcoverage[2127]);
                    } else {
                        ++(vlSymsp->__Vcoverage[2128]);
                        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[2128]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[2128]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
            }
        } else if ((4U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                    ++(vlSymsp->__Vcoverage[2126]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 2U;
                } else {
                    ++(vlSymsp->__Vcoverage[2128]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[2128]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                ++(vlSymsp->__Vcoverage[2125]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[2128]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            ++(vlSymsp->__Vcoverage[2124]);
            vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[2128]);
            vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
        }
        ++(vlSymsp->__Vcoverage[2130]);
    } else {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last)))) {
        ++(vlSymsp->__Vcoverage[2131]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) {
        ++(vlSymsp->__Vcoverage[2132]);
    }
    ++(vlSymsp->__Vcoverage[2133]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found;
    vlSelfRef.top_slave_module__DOT__val_tvalid = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid;
    vlSelfRef.top_slave_module__DOT__S_AXI_ACLK = vlSelfRef.S_AXI_ACLK;
    vlSelfRef.top_slave_module__DOT__fifo_count_wire 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out;
    vlSelfRef.top_slave_module__DOT__sys_rst_n = vlSelfRef.top_slave_module__DOT__rst_n_sync;
    vlSelfRef.top_slave_module__DOT__sig_operation_mode 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARESETN))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2, vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARESETN);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARESETN 
            = vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1681, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1705, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1729, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1753, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3592, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3317, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2102, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2491, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext)) {
        VL_COV_TOGGLE_CHG_ST_Q(33, vlSymsp->__Vcoverage + 3451, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_BRESP) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BRESP))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 108, vlSelfRef.top_slave_module__DOT__S_AXI_BRESP, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BRESP);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BRESP 
            = vlSelfRef.top_slave_module__DOT__S_AXI_BRESP;
    }
    vlSelfRef.S_AXI_BRESP = vlSelfRef.top_slave_module__DOT__S_AXI_BRESP;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_RRESP) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RRESP))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 208, vlSelfRef.top_slave_module__DOT__S_AXI_RRESP, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RRESP);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RRESP 
            = vlSelfRef.top_slave_module__DOT__S_AXI_RRESP;
    }
    vlSelfRef.S_AXI_RRESP = vlSelfRef.top_slave_module__DOT__S_AXI_RRESP;
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 671, vlSelfRef.top_slave_module__DOT__gb_tvalid, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tvalid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tvalid 
            = vlSelfRef.top_slave_module__DOT__gb_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid 
        = vlSelfRef.top_slave_module__DOT__gb_tvalid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_AWADDR) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWADDR))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 4, vlSelfRef.top_slave_module__DOT__S_AXI_AWADDR, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWADDR);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWADDR 
            = vlSelfRef.top_slave_module__DOT__S_AXI_AWADDR;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR 
        = vlSelfRef.top_slave_module__DOT__S_AXI_AWADDR;
    if ((vlSelfRef.top_slave_module__DOT__S_AXI_WDATA 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 32, vlSelfRef.top_slave_module__DOT__S_AXI_WDATA, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WDATA);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WDATA 
            = vlSelfRef.top_slave_module__DOT__S_AXI_WDATA;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA 
        = vlSelfRef.top_slave_module__DOT__S_AXI_WDATA;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_WSTRB) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WSTRB))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 96, vlSelfRef.top_slave_module__DOT__S_AXI_WSTRB, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WSTRB);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WSTRB 
            = vlSelfRef.top_slave_module__DOT__S_AXI_WSTRB;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB 
        = vlSelfRef.top_slave_module__DOT__S_AXI_WSTRB;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_BREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 114, vlSelfRef.top_slave_module__DOT__S_AXI_BREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_BREADY;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY 
        = vlSelfRef.top_slave_module__DOT__S_AXI_BREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ARADDR) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARADDR))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 116, vlSelfRef.top_slave_module__DOT__S_AXI_ARADDR, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARADDR);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARADDR 
            = vlSelfRef.top_slave_module__DOT__S_AXI_ARADDR;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ARADDR;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ARVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 140, vlSelfRef.top_slave_module__DOT__S_AXI_ARVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_ARVALID;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ARVALID;
    if ((vlSelfRef.top_slave_module__DOT__S_AXIS_TDATA 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 216, vlSelfRef.top_slave_module__DOT__S_AXIS_TDATA, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TDATA);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TDATA 
            = vlSelfRef.top_slave_module__DOT__S_AXIS_TDATA;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata 
        = vlSelfRef.top_slave_module__DOT__S_AXIS_TDATA;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXIS_TKEEP) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TKEEP))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 280, vlSelfRef.top_slave_module__DOT__S_AXIS_TKEEP, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TKEEP);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TKEEP 
            = vlSelfRef.top_slave_module__DOT__S_AXIS_TKEEP;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep 
        = vlSelfRef.top_slave_module__DOT__S_AXIS_TKEEP;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXIS_TLAST) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TLAST))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 288, vlSelfRef.top_slave_module__DOT__S_AXIS_TLAST, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TLAST);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TLAST 
            = vlSelfRef.top_slave_module__DOT__S_AXIS_TLAST;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast 
        = vlSelfRef.top_slave_module__DOT__S_AXIS_TLAST;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXIS_TVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 290, vlSelfRef.top_slave_module__DOT__S_AXIS_TVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXIS_TVALID;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid 
        = vlSelfRef.top_slave_module__DOT__S_AXIS_TVALID;
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[1U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[2U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[3U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[4U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[5U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[6U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[7U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[8U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[9U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001fU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[1U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[2U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[3U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[4U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[5U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[6U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[7U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[8U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[9U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001fU];
    if ((vlSelfRef.top_slave_module__DOT__sig_final_char_count 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_final_char_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 373, vlSelfRef.top_slave_module__DOT__sig_final_char_count, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_final_char_count);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_final_char_count 
            = vlSelfRef.top_slave_module__DOT__sig_final_char_count;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count 
        = vlSelfRef.top_slave_module__DOT__sig_final_char_count;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_char_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_char_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 437, vlSelfRef.top_slave_module__DOT__sig_char_count_valid, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_char_count_valid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_char_count_valid 
            = vlSelfRef.top_slave_module__DOT__sig_char_count_valid;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid 
        = vlSelfRef.top_slave_module__DOT__sig_char_count_valid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_encoding_error) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_encoding_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 439, vlSelfRef.top_slave_module__DOT__sig_encoding_error, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_encoding_error);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_encoding_error 
            = vlSelfRef.top_slave_module__DOT__sig_encoding_error;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error 
        = vlSelfRef.top_slave_module__DOT__sig_encoding_error;
    if ((vlSelfRef.top_slave_module__DOT__sig_error_position 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_error_position)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 441, vlSelfRef.top_slave_module__DOT__sig_error_position, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_error_position);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_error_position 
            = vlSelfRef.top_slave_module__DOT__sig_error_position;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position 
        = vlSelfRef.top_slave_module__DOT__sig_error_position;
    if ((vlSelfRef.top_slave_module__DOT__sig_match_count 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 505, vlSelfRef.top_slave_module__DOT__sig_match_count, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count 
            = vlSelfRef.top_slave_module__DOT__sig_match_count;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count 
        = vlSelfRef.top_slave_module__DOT__sig_match_count;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_match_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 569, vlSelfRef.top_slave_module__DOT__sig_match_count_valid, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count_valid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count_valid 
            = vlSelfRef.top_slave_module__DOT__sig_match_count_valid;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid 
        = vlSelfRef.top_slave_module__DOT__sig_match_count_valid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_fifo_empty) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 635, vlSelfRef.top_slave_module__DOT__sig_fifo_empty, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_empty);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_empty 
            = vlSelfRef.top_slave_module__DOT__sig_fifo_empty;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty 
        = vlSelfRef.top_slave_module__DOT__sig_fifo_empty;
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 675, vlSelfRef.top_slave_module__DOT__gb_tlast, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tlast);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tlast 
            = vlSelfRef.top_slave_module__DOT__gb_tlast;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast 
        = vlSelfRef.top_slave_module__DOT__gb_tlast;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2485, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 969, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1045, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_WREADY = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1051, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_BVALID = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1081, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY;
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1083, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_RDATA = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1151, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_RVALID = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID;
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2771, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out;
    }
    vlSelfRef.top_slave_module__DOT__hit_data_wire 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 677, vlSelfRef.top_slave_module__DOT__val_tdata, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tdata);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tdata 
            = vlSelfRef.top_slave_module__DOT__val_tdata;
    }
    if ((vlSelfRef.top_slave_module__DOT__val_tpos 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__val_tpos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 693, vlSelfRef.top_slave_module__DOT__val_tpos, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tpos);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tpos 
            = vlSelfRef.top_slave_module__DOT__val_tpos;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out 
         ^ vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3705, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out;
    }
    vlSelfRef.top_slave_module__DOT__sig_fifo_data_out 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 637, vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_rd_en);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_rd_en 
            = vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en 
        = vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en;
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 655, vlSelfRef.top_slave_module__DOT__gb_tdata, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tdata);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tdata 
            = vlSelfRef.top_slave_module__DOT__gb_tdata;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata 
        = vlSelfRef.top_slave_module__DOT__gb_tdata;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_RREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 214, vlSelfRef.top_slave_module__DOT__S_AXI_RREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_RREADY;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY 
        = vlSelfRef.top_slave_module__DOT__S_AXI_RREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_AWVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 28, vlSelfRef.top_slave_module__DOT__S_AXI_AWVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_AWVALID;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID 
        = vlSelfRef.top_slave_module__DOT__S_AXI_AWVALID;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_WVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 104, vlSelfRef.top_slave_module__DOT__S_AXI_WVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_WVALID;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID 
        = vlSelfRef.top_slave_module__DOT__S_AXI_WVALID;
    if ((vlSelfRef.top_slave_module__DOT__sig_pattern_len_full 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len_full)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 305, vlSelfRef.top_slave_module__DOT__sig_pattern_len_full, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len_full);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len_full 
            = vlSelfRef.top_slave_module__DOT__sig_pattern_len_full;
    }
    vlSelfRef.top_slave_module__DOT__sig_pattern_len 
        = (0x000000ffU & vlSelfRef.top_slave_module__DOT__sig_pattern_len_full);
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 761, vlSelfRef.top_slave_module__DOT__val_tlast, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tlast);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tlast 
            = vlSelfRef.top_slave_module__DOT__val_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2094, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx) 
           == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2835, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out;
    }
    vlSelfRef.top_slave_module__DOT__hit_valid_wire 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 757, vlSelfRef.top_slave_module__DOT__val_tvalid, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tvalid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tvalid 
            = vlSelfRef.top_slave_module__DOT__val_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ACLK) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ACLK))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.top_slave_module__DOT__S_AXI_ACLK, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ACLK);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ACLK 
            = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__clk 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__clk 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__clk 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    if (((IData)(vlSelfRef.top_slave_module__DOT__fifo_count_wire) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_count_wire))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 927, vlSelfRef.top_slave_module__DOT__fifo_count_wire, vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_count_wire);
        vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_count_wire 
            = vlSelfRef.top_slave_module__DOT__fifo_count_wire;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in 
        = vlSelfRef.top_slave_module__DOT__fifo_count_wire;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sys_rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sys_rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 303, vlSelfRef.top_slave_module__DOT__sys_rst_n, vlSelfRef.top_slave_module__DOT____Vtogcov__sys_rst_n);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sys_rst_n 
            = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_operation_mode) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_operation_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 369, vlSelfRef.top_slave_module__DOT__sig_operation_mode, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_operation_mode);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_operation_mode 
            = vlSelfRef.top_slave_module__DOT__sig_operation_mode;
    }
    vlSelfRef.top_slave_module__DOT__matcher_en = (1U 
                                                   & ((IData)(vlSelfRef.top_slave_module__DOT__sig_operation_mode) 
                                                      >> 1U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2181, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWADDR))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 943, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWADDR);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWADDR 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 971, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WDATA);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WDATA 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WSTRB))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 1035, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WSTRB);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WSTRB 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1053, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARADDR))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1055, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARADDR);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARADDR 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1079, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1914, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tkeep))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 1978, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tkeep);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tkeep 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1990, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1986, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[1U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[2U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[4U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[5U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[7U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[8U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[1U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[2U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[4U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[5U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[7U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[8U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001fU];
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1223, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1287, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1289, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1291, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1355, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1419, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1485, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2185, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 30, vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY;
    }
    vlSelfRef.S_AXI_AWREADY = vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_WREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 106, vlSelfRef.top_slave_module__DOT__S_AXI_WREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_WREADY;
    }
    vlSelfRef.S_AXI_WREADY = vlSelfRef.top_slave_module__DOT__S_AXI_WREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_BVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 112, vlSelfRef.top_slave_module__DOT__S_AXI_BVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_BVALID;
    }
    vlSelfRef.S_AXI_BVALID = vlSelfRef.top_slave_module__DOT__S_AXI_BVALID;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 142, vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY;
    }
    vlSelfRef.S_AXI_ARREADY = vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY;
    if ((vlSelfRef.top_slave_module__DOT__S_AXI_RDATA 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 144, vlSelfRef.top_slave_module__DOT__S_AXI_RDATA, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RDATA);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RDATA 
            = vlSelfRef.top_slave_module__DOT__S_AXI_RDATA;
    }
    vlSelfRef.S_AXI_RDATA = vlSelfRef.top_slave_module__DOT__S_AXI_RDATA;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_RVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 212, vlSelfRef.top_slave_module__DOT__S_AXI_RVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_RVALID;
    }
    vlSelfRef.S_AXI_RVALID = vlSelfRef.top_slave_module__DOT__S_AXI_RVALID;
    if ((vlSelfRef.top_slave_module__DOT__hit_data_wire 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__hit_data_wire)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 861, vlSelfRef.top_slave_module__DOT__hit_data_wire, vlSelfRef.top_slave_module__DOT____Vtogcov__hit_data_wire);
        vlSelfRef.top_slave_module__DOT____Vtogcov__hit_data_wire 
            = vlSelfRef.top_slave_module__DOT__hit_data_wire;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in 
        = vlSelfRef.top_slave_module__DOT__hit_data_wire;
    if ((vlSelfRef.top_slave_module__DOT__sig_fifo_data_out 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 571, vlSelfRef.top_slave_module__DOT__sig_fifo_data_out, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_data_out);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_data_out 
            = vlSelfRef.top_slave_module__DOT__sig_fifo_data_out;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out 
        = vlSelfRef.top_slave_module__DOT__sig_fifo_data_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3703, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed 
        = ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty)) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2165, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
    if ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state))) {
        if ((0U == (0x80U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
            ++(vlSymsp->__Vcoverage[2559]);
        } else if ((0xc0U == (0xe0U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            ++(vlSymsp->__Vcoverage[2560]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 0U;
        } else if ((0xe0U == (0xf0U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            ++(vlSymsp->__Vcoverage[2561]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 0U;
        } else if ((0xf0U == (0xf8U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            ++(vlSymsp->__Vcoverage[2562]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[2563]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
        }
        ++(vlSymsp->__Vcoverage[2566]);
    } else {
        if ((2U == (3U & ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata) 
                          >> 6U)))) {
            ++(vlSymsp->__Vcoverage[2564]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte 
                = (1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state));
        } else {
            ++(vlSymsp->__Vcoverage[2565]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
        }
        ++(vlSymsp->__Vcoverage[2567]);
    }
    ++(vlSymsp->__Vcoverage[2568]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1153, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data) 
           & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 967, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1043, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID) 
           & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready) 
              & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready))));
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_pattern_len) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 639, vlSelfRef.top_slave_module__DOT__sig_pattern_len, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len 
            = vlSelfRef.top_slave_module__DOT__sig_pattern_len;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_len;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2098, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__hit_valid_wire) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__hit_valid_wire))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 925, vlSelfRef.top_slave_module__DOT__hit_valid_wire, vlSelfRef.top_slave_module__DOT____Vtogcov__hit_valid_wire);
        vlSelfRef.top_slave_module__DOT____Vtogcov__hit_valid_wire 
            = vlSelfRef.top_slave_module__DOT__hit_valid_wire;
    }
    vlSelfRef.top_slave_module__DOT__fifo_wr_en = ((IData)(vlSelfRef.top_slave_module__DOT__hit_valid_wire) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.top_slave_module__DOT__sig_operation_mode)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ACLK))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 939, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ACLK);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ACLK 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__clk) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1910, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__clk, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__clk);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__clk 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__clk;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__clk) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2161, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__clk, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__clk);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__clk 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__clk;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__clk) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3633, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__clk, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__clk);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__clk 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__clk;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2663, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 2837, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept 
        = (0x0aU > (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 941, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1912, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2163, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3635, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2665, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n;
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 763, vlSelfRef.top_slave_module__DOT__matcher_en, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_en);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_en 
            = vlSelfRef.top_slave_module__DOT__matcher_en;
    }
    vlSelfRef.top_slave_module__DOT__matcher_tdata 
        = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[785]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__val_tdata))
            : ([&]() {
                ++(vlSymsp->__Vcoverage[786]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__matcher_tpos = 
        ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
          ? ([&]() {
                ++(vlSymsp->__Vcoverage[851]);
            }(), vlSelfRef.top_slave_module__DOT__val_tpos)
          : ([&]() {
                ++(vlSymsp->__Vcoverage[852]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__matcher_tlast 
        = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[855]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__val_tlast))
            : ([&]() {
                ++(vlSymsp->__Vcoverage[856]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active 
        = vlSelfRef.top_slave_module__DOT__matcher_en;
    vlSelfRef.top_slave_module__DOT__matcher_tvalid 
        = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[767]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__val_tvalid))
            : ([&]() {
                ++(vlSymsp->__Vcoverage[768]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001fU];
    if ((vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in 
         ^ vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3637, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1421, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3809, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2557, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1777, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1679, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2753, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len;
    if (((IData)(vlSelfRef.top_slave_module__DOT__fifo_wr_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 937, vlSelfRef.top_slave_module__DOT__fifo_wr_en, vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_wr_en);
        vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_wr_en 
            = vlSelfRef.top_slave_module__DOT__fifo_wr_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en 
        = vlSelfRef.top_slave_module__DOT__fifo_wr_en;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3319, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) 
           & ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state)) 
              | ((1U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state)) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept))));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3590, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 769, vlSelfRef.top_slave_module__DOT__matcher_tdata, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tdata);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tdata 
            = vlSelfRef.top_slave_module__DOT__matcher_tdata;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata 
        = vlSelfRef.top_slave_module__DOT__matcher_tdata;
    if ((vlSelfRef.top_slave_module__DOT__matcher_tpos 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tpos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 787, vlSelfRef.top_slave_module__DOT__matcher_tpos, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tpos);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tpos 
            = vlSelfRef.top_slave_module__DOT__matcher_tpos;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos 
        = vlSelfRef.top_slave_module__DOT__matcher_tpos;
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 853, vlSelfRef.top_slave_module__DOT__matcher_tlast, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tlast);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tlast 
            = vlSelfRef.top_slave_module__DOT__matcher_tlast;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast 
        = vlSelfRef.top_slave_module__DOT__matcher_tlast;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2769, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active 
        = ((2U != (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state)) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active));
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 765, vlSelfRef.top_slave_module__DOT__matcher_tvalid, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tvalid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tvalid 
            = vlSelfRef.top_slave_module__DOT__matcher_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid 
        = vlSelfRef.top_slave_module__DOT__matcher_tvalid;
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3323, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3701, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2751, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__matcher_tready 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2669, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2685, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2749, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3517, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active;
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) {
        ++(vlSymsp->__Vcoverage[3522]);
    } else {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk)))) {
        ++(vlSymsp->__Vcoverage[3523]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) {
        ++(vlSymsp->__Vcoverage[3524]);
    }
    ++(vlSymsp->__Vcoverage[3525]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2667, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3807, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 857, vlSelfRef.top_slave_module__DOT__matcher_tready, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tready);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tready 
            = vlSelfRef.top_slave_module__DOT__matcher_tready;
    }
    vlSelfRef.top_slave_module__DOT__val_tready = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
                                                    ? 
                                                   ([&]() {
                ++(vlSymsp->__Vcoverage[859]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__matcher_tready))
                                                    : 
                                                   ([&]() {
                ++(vlSymsp->__Vcoverage[860]);
            }(), 1U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3313, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3321, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state;
    if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
            if ((5U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter))) {
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 0U;
                ++(vlSymsp->__Vcoverage[3546]);
            } else {
                ++(vlSymsp->__Vcoverage[3547]);
            }
            ++(vlSymsp->__Vcoverage[3548]);
        } else {
            if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) {
                ++(vlSymsp->__Vcoverage[3543]);
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[3544]);
            }
            ++(vlSymsp->__Vcoverage[3545]);
        }
    } else if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
        if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) {
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast))) {
                ++(vlSymsp->__Vcoverage[3534]);
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 3U;
            } else {
                ++(vlSymsp->__Vcoverage[3535]);
            }
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast))) {
                ++(vlSymsp->__Vcoverage[3536]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast)))) {
                ++(vlSymsp->__Vcoverage[3537]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer)))) {
                ++(vlSymsp->__Vcoverage[3538]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[3539]);
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 2U;
        }
        ++(vlSymsp->__Vcoverage[3542]);
    } else {
        if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid) {
            ++(vlSymsp->__Vcoverage[3531]);
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[3532]);
        }
        ++(vlSymsp->__Vcoverage[3533]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept)))) {
        ++(vlSymsp->__Vcoverage[3540]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) {
        ++(vlSymsp->__Vcoverage[3541]);
    }
    ++(vlSymsp->__Vcoverage[3549]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 759, vlSelfRef.top_slave_module__DOT__val_tready, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tready);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tready 
            = vlSelfRef.top_slave_module__DOT__val_tready;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready 
        = vlSelfRef.top_slave_module__DOT__val_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3519, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2917, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2271, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance 
        = (1U & ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid)) 
                 | (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3588, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2405, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2183, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__gb_tready = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 673, vlSelfRef.top_slave_module__DOT__gb_tready, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tready);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tready 
            = vlSelfRef.top_slave_module__DOT__gb_tready;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready 
        = vlSelfRef.top_slave_module__DOT__gb_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2012, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance 
        = (1U & ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid)) 
                 | (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2100, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance) 
           & ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid)) 
              | (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1988, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY 
        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 292, vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY;
    }
    vlSelfRef.S_AXIS_TREADY = vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_hits_fifo__DOT__clk__0))) 
                                                         << 3U) 
                                                        | (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk__0))) 
                                                           << 2U)) 
                                                       | ((((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated__0))) 
                                                           << 1U) 
                                                          | ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__clk__0))))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_stream_validator__DOT__clk__0))) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_stream_gearbox__DOT__clk__0))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK__0))) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ACLK) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__S_AXI_ACLK__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__S_AXI_ACLK__0 
        = vlSelfRef.top_slave_module__DOT__S_AXI_ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK__0 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_stream_gearbox__DOT__clk__0 
        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_stream_validator__DOT__clk__0 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__clk__0 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated__0 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk__0 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_slave_module__DOT__u_hits_fifo__DOT__clk__0 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe;
    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe = 0;
    IData/*31:0*/ __VExpandSel_WordIdx_1;
    IData/*31:0*/ __VExpandSel_LoShift_1;
    CData/*0:0*/ __VExpandSel_Aligned_1;
    IData/*31:0*/ __VExpandSel_HiShift_1;
    IData/*31:0*/ __VExpandSel_HiMask_1;
    // Body
    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe;
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n) {
        __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe 
            = ((2U & ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe) 
                      << 1U)) | (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid));
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out 
            = ((0x000000ffU == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match)) 
               & ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe) 
                  >> 1U));
        if ((IData)(((0xffU == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match)) 
                     & ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe) 
                        >> 1U)))) {
            ++(vlSymsp->__Vcoverage[3616]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe) 
                      >> 1U)))) {
            ++(vlSymsp->__Vcoverage[3617]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 7U)))) {
            ++(vlSymsp->__Vcoverage[3618]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 6U)))) {
            ++(vlSymsp->__Vcoverage[3619]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 5U)))) {
            ++(vlSymsp->__Vcoverage[3620]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 4U)))) {
            ++(vlSymsp->__Vcoverage[3621]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 3U)))) {
            ++(vlSymsp->__Vcoverage[3622]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 2U)))) {
            ++(vlSymsp->__Vcoverage[3623]);
        }
        if ((1U & (~ ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
                      >> 1U)))) {
            ++(vlSymsp->__Vcoverage[3624]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match)))) {
            ++(vlSymsp->__Vcoverage[3625]);
        }
        ++(vlSymsp->__Vcoverage[3627]);
    } else {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out = 0U;
        __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[3628]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3629]);
    }
    ++(vlSymsp->__Vcoverage[3630]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe 
        = __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 3612, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3594, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i)) {
        __VExpandSel_WordIdx_1 = (0x0000001fU & (VL_MULS_III(32, (IData)(0x00000080U), vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i) 
                                                 >> 5U));
        __VExpandSel_LoShift_1 = (0x0000001fU & VL_MULS_III(32, (IData)(0x00000080U), vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i));
        __VExpandSel_Aligned_1 = (0U == __VExpandSel_LoShift_1);
        if (__VExpandSel_Aligned_1) {
            __VExpandSel_HiShift_1 = 0U;
            __VExpandSel_HiMask_1 = 0U;
        } else {
            __VExpandSel_HiShift_1 = ((IData)(0x00000020U) 
                                      - __VExpandSel_LoShift_1);
            __VExpandSel_HiMask_1 = 0xffffffffU;
        }
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match 
            = (((~ ((IData)(1U) << (7U & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i))) 
                & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match)) 
               | (0x00ffU & ((0U == ((((((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                          ((IData)(1U) 
                                           + __VExpandSel_WordIdx_1)] 
                                          << __VExpandSel_HiShift_1) 
                                         & __VExpandSel_HiMask_1) 
                                        | (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[__VExpandSel_WordIdx_1] 
                                           >> __VExpandSel_LoShift_1)) 
                                       | (((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                            ((IData)(2U) 
                                             + __VExpandSel_WordIdx_1)] 
                                            << __VExpandSel_HiShift_1) 
                                           & __VExpandSel_HiMask_1) 
                                          | (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                             ((IData)(1U) 
                                              + __VExpandSel_WordIdx_1)] 
                                             >> __VExpandSel_LoShift_1))) 
                                      | (((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                           ((IData)(3U) 
                                            + __VExpandSel_WordIdx_1)] 
                                           << __VExpandSel_HiShift_1) 
                                          & __VExpandSel_HiMask_1) 
                                         | (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                            ((IData)(2U) 
                                             + __VExpandSel_WordIdx_1)] 
                                            >> __VExpandSel_LoShift_1))) 
                                     | (((((0x0000001cU 
                                            <= __VExpandSel_WordIdx_1)
                                            ? 0U : 
                                           vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                           ((IData)(4U) 
                                            + __VExpandSel_WordIdx_1)]) 
                                          << __VExpandSel_HiShift_1) 
                                         & __VExpandSel_HiMask_1) 
                                        | (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[
                                           ((IData)(3U) 
                                            + __VExpandSel_WordIdx_1)] 
                                           >> __VExpandSel_LoShift_1)))) 
                             << (7U & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i))));
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i);
        ++(vlSymsp->__Vcoverage[3631]);
    }
    ++(vlSymsp->__Vcoverage[3632]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 3596, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[1U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[1U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[1U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[1U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[2U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[2U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[2U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[2U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[3U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[3U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[3U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[3U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[4U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[4U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[4U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[4U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[5U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[5U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[5U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[5U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[6U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[6U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[6U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[6U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[7U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[7U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[7U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[7U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[8U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[8U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[8U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[8U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[9U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[9U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[9U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[9U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000000aU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000aU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000aU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000aU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000000bU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000bU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000bU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000bU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000000cU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000cU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000cU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000cU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000000dU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000dU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000dU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000dU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000000eU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000eU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000eU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000eU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000000fU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000fU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000fU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000fU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000010U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000010U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000010U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000010U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000011U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000011U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000011U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000011U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000012U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000012U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000012U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000012U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000013U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000013U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000013U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000013U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000014U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000014U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000014U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000014U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000015U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000015U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000015U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000015U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000016U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000016U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000016U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000016U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000017U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000017U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000017U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000017U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000018U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000018U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000018U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000018U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x00000019U] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000019U] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000019U]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000019U]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000001aU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001aU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001aU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001aU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000001bU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001bU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001bU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001bU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000001cU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001cU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001cU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001cU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000001dU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001dU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001dU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001dU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000001eU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001eU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001eU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001eU]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch[0x0000001fU] 
        = ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001fU] 
            ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001fU]) 
           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001fU]);
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid = 0;
    SData/*11:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid = 0;
    CData/*7:0*/ __VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0;
    __VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0;
    CData/*4:0*/ __VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0;
    __VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0;
    __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0;
    IData/*31:0*/ __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0;
    __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0;
    IData/*31:0*/ __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0;
    __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0;
    CData/*7:0*/ __VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0;
    __VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0;
    CData/*4:0*/ __VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0;
    __VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0;
    __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0;
    IData/*31:0*/ __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0;
    __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0;
    IData/*31:0*/ __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0;
    __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0;
    CData/*4:0*/ __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v1;
    __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v1 = 0;
    CData/*4:0*/ __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v1;
    __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v1 = 0;
    // Body
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY))) {
            ++(vlSymsp->__Vcoverage[1901]);
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid = 0U;
            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data = 0U;
        } else {
            if ((((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready) 
                  & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID)) 
                 & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid)))) {
                __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid = 1U;
                vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data 
                    = ((0x0010U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))
                        ? ([&]() {
                            ++(vlSymsp->__Vcoverage[1870]);
                        }(), (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid))
                        : ([&]() {
                            ++(vlSymsp->__Vcoverage[1871]);
                        }(), 0U));
                if ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1874]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid) 
                            << 3U) | (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid) 
                                       << 2U) | (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid))))));
                } else if ((4U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1875]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count;
                } else if ((8U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1876]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count;
                } else if ((0x000cU == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1877]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len;
                } else if ((0x0010U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid)
                            ? ([&]() {
                                ++(vlSymsp->__Vcoverage[1880]);
                            }(), vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data)
                            : ([&]() {
                                ++(vlSymsp->__Vcoverage[1881]);
                            }(), 0xffffffffU));
                    ++(vlSymsp->__Vcoverage[1882]);
                } else if ((0x0014U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1883]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode;
                } else if ((0x0018U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1884]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position;
                } else {
                    if (((0x0100U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)) 
                         & (0x0180U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)))) {
                        ++(vlSymsp->__Vcoverage[1890]);
                        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                            [(0x0000001fU & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset))];
                    } else {
                        if (((0x0200U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)) 
                             & (0x0280U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)))) {
                            ++(vlSymsp->__Vcoverage[1885]);
                            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
                                = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                [(0x0000001fU & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset))];
                        } else {
                            ++(vlSymsp->__Vcoverage[1886]);
                            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata = 0U;
                        }
                        if (((0x0200U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)) 
                             & (0x0280U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)))) {
                            ++(vlSymsp->__Vcoverage[1887]);
                        }
                        if ((0x0280U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                            ++(vlSymsp->__Vcoverage[1888]);
                        }
                        if ((0x0200U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                            ++(vlSymsp->__Vcoverage[1889]);
                        }
                    }
                    ++(vlSymsp->__Vcoverage[1894]);
                }
                if ((0x0010U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1868]);
                }
                if ((0x0010U != (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1869]);
                }
                if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid)))) {
                    ++(vlSymsp->__Vcoverage[1872]);
                }
                if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid) {
                    ++(vlSymsp->__Vcoverage[1873]);
                }
                if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid) {
                    ++(vlSymsp->__Vcoverage[1878]);
                }
                if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid)))) {
                    ++(vlSymsp->__Vcoverage[1879]);
                }
                if (((0x0100U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)) 
                     & (0x0180U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg)))) {
                    ++(vlSymsp->__Vcoverage[1891]);
                }
                if ((0x0180U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1892]);
                }
                if ((0x0100U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg))) {
                    ++(vlSymsp->__Vcoverage[1893]);
                }
                ++(vlSymsp->__Vcoverage[1895]);
            } else {
                ++(vlSymsp->__Vcoverage[1896]);
            }
            if ((((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready) 
                  & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID)) 
                 & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid)))) {
                ++(vlSymsp->__Vcoverage[1897]);
            }
            if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid) {
                ++(vlSymsp->__Vcoverage[1898]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID)))) {
                ++(vlSymsp->__Vcoverage[1899]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready)))) {
                ++(vlSymsp->__Vcoverage[1900]);
            }
        }
        if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY))) {
            ++(vlSymsp->__Vcoverage[1902]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY)))) {
            ++(vlSymsp->__Vcoverage[1903]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid)))) {
            ++(vlSymsp->__Vcoverage[1904]);
        }
        ++(vlSymsp->__Vcoverage[1906]);
    } else {
        ++(vlSymsp->__Vcoverage[1905]);
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid = 0U;
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata = 0U;
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN)))) {
        ++(vlSymsp->__Vcoverage[1907]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        ++(vlSymsp->__Vcoverage[1908]);
    }
    ++(vlSymsp->__Vcoverage[1909]);
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1677, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1499, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1497, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid;
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        if (((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID))) {
            ++(vlSymsp->__Vcoverage[1858]);
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready = 1U;
            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg 
                = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR;
        } else {
            ++(vlSymsp->__Vcoverage[1859]);
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready = 0U;
        }
        if (((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID))) {
            ++(vlSymsp->__Vcoverage[1860]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID)))) {
            ++(vlSymsp->__Vcoverage[1861]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready) {
            ++(vlSymsp->__Vcoverage[1862]);
        }
        ++(vlSymsp->__Vcoverage[1864]);
    } else {
        ++(vlSymsp->__Vcoverage[1863]);
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready = 0U;
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN)))) {
        ++(vlSymsp->__Vcoverage[1865]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        ++(vlSymsp->__Vcoverage[1866]);
    }
    ++(vlSymsp->__Vcoverage[1867]);
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en = 0U;
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo) {
            ++(vlSymsp->__Vcoverage[1844]);
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[1845]);
        }
        if ((1U & ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid)) 
                     & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty))) 
                    & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en))) 
                   & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo))))) {
            ++(vlSymsp->__Vcoverage[1846]);
            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data 
                = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out;
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid = 1U;
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[1847]);
        }
        if ((1U & ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid)) 
                     & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty))) 
                    & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en))) 
                   & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo))))) {
            ++(vlSymsp->__Vcoverage[1848]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo) {
            ++(vlSymsp->__Vcoverage[1849]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en) {
            ++(vlSymsp->__Vcoverage[1850]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty) {
            ++(vlSymsp->__Vcoverage[1851]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid) {
            ++(vlSymsp->__Vcoverage[1852]);
        }
        ++(vlSymsp->__Vcoverage[1854]);
    } else {
        ++(vlSymsp->__Vcoverage[1853]);
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid = 0U;
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data = 0U;
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN)))) {
        ++(vlSymsp->__Vcoverage[1855]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        ++(vlSymsp->__Vcoverage[1856]);
    }
    ++(vlSymsp->__Vcoverage[1857]);
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready 
            = ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready)) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)) 
                & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID))
                ? ([&]() {
                    ++(vlSymsp->__Vcoverage[1784]);
                }(), 1U) : ([&]() {
                    ++(vlSymsp->__Vcoverage[1785]);
                }(), 0U));
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready 
            = ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready)) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID)) 
                & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID))
                ? ([&]() {
                    ++(vlSymsp->__Vcoverage[1790]);
                }(), 1U) : ([&]() {
                    ++(vlSymsp->__Vcoverage[1791]);
                }(), 0U));
        if ((((((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready) 
                & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)) 
               & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid))) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID))) {
            ++(vlSymsp->__Vcoverage[1797]);
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid = 1U;
        } else {
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid))) {
                ++(vlSymsp->__Vcoverage[1792]);
                __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[1793]);
            }
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid))) {
                ++(vlSymsp->__Vcoverage[1794]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid)))) {
                ++(vlSymsp->__Vcoverage[1795]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY)))) {
                ++(vlSymsp->__Vcoverage[1796]);
            }
        }
        if ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready)) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID))) {
            ++(vlSymsp->__Vcoverage[1804]);
            __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr 
                = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR;
        } else {
            ++(vlSymsp->__Vcoverage[1805]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren) {
            if ((0x000cU == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr))) {
                if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB))) {
                    ++(vlSymsp->__Vcoverage[1810]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len 
                        = ((0xffffff00U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len) 
                           | (0x000000ffU & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA));
                } else {
                    ++(vlSymsp->__Vcoverage[1811]);
                }
                if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB))) {
                    ++(vlSymsp->__Vcoverage[1812]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len 
                        = ((0xffff00ffU & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len) 
                           | (0x0000ff00U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA));
                } else {
                    ++(vlSymsp->__Vcoverage[1813]);
                }
                if ((4U & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB))) {
                    ++(vlSymsp->__Vcoverage[1814]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len 
                        = ((0xff00ffffU & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len) 
                           | (0x00ff0000U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA));
                } else {
                    ++(vlSymsp->__Vcoverage[1815]);
                }
                if ((8U & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB))) {
                    ++(vlSymsp->__Vcoverage[1816]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len 
                        = ((0x00ffffffU & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len) 
                           | (0xff000000U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA));
                } else {
                    ++(vlSymsp->__Vcoverage[1817]);
                }
                ++(vlSymsp->__Vcoverage[1836]);
            } else if ((0x0014U == (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr))) {
                if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB))) {
                    ++(vlSymsp->__Vcoverage[1818]);
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode 
                        = (3U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA);
                } else {
                    ++(vlSymsp->__Vcoverage[1819]);
                }
                ++(vlSymsp->__Vcoverage[1835]);
            } else {
                if (((0x0100U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)) 
                     & (0x0180U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)))) {
                    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index = 0U;
                    while (VL_GTES_III(32, 3U, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index)) {
                        if ((1U & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB) 
                                   >> (3U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index)))) {
                            ++(vlSymsp->__Vcoverage[1820]);
                            __VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 
                                = (0x000000ffU & (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index))));
                            __VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 
                                = (0x0000001fU & VL_MULS_III(32, (IData)(8U), vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index));
                            __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 
                                = (0x0000001fU & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset));
                            __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0U;
                            __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 
                                = (__VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 
                                   | (0x00000000ffffffffULL 
                                      & ((IData)(0xffU) 
                                         << (IData)(__VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0))));
                            __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 = 0U;
                            __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0 
                                = (((~ ((IData)(0x000000ffU) 
                                        << (IData)(__VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0))) 
                                    & __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0) 
                                   | (0x00000000ffffffffULL 
                                      & ((IData)(__VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0) 
                                         << (IData)(__VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0))));
                            vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern.enqueue(__VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0, __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0, (IData)(__VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v0));
                        } else {
                            ++(vlSymsp->__Vcoverage[1821]);
                        }
                        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index 
                            = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index);
                        ++(vlSymsp->__Vcoverage[1822]);
                    }
                    ++(vlSymsp->__Vcoverage[1831]);
                } else {
                    if (((0x0200U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)) 
                         & (0x0280U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)))) {
                        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index = 0U;
                        while (VL_GTES_III(32, 3U, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index)) {
                            if ((1U & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB) 
                                       >> (3U & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index)))) {
                                ++(vlSymsp->__Vcoverage[1823]);
                                __VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 
                                    = (0x000000ffU 
                                       & (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA 
                                          >> (0x0000001fU 
                                              & VL_MULS_III(32, (IData)(8U), vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index))));
                                __VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 
                                    = (0x0000001fU 
                                       & VL_MULS_III(32, (IData)(8U), vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index));
                                __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 
                                    = (0x0000001fU 
                                       & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset));
                                __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0U;
                                __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 
                                    = (__VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 
                                       | (0x00000000ffffffffULL 
                                          & ((IData)(0xffU) 
                                             << (IData)(__VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0))));
                                __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 = 0U;
                                __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0 
                                    = (((~ ((IData)(0x000000ffU) 
                                            << (IData)(__VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0))) 
                                        & __VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0) 
                                       | (0x00000000ffffffffULL 
                                          & ((IData)(__VdlyVal__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0) 
                                             << (IData)(__VdlyLsb__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0))));
                                vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask.enqueue(__VdlyElem__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0, __VdlyMask__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0, (IData)(__VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v0));
                            } else {
                                ++(vlSymsp->__Vcoverage[1824]);
                            }
                            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index 
                                = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index);
                            ++(vlSymsp->__Vcoverage[1825]);
                        }
                        ++(vlSymsp->__Vcoverage[1826]);
                    } else {
                        ++(vlSymsp->__Vcoverage[1827]);
                    }
                    if (((0x0200U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)) 
                         & (0x0280U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)))) {
                        ++(vlSymsp->__Vcoverage[1828]);
                    }
                    if ((0x0280U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr))) {
                        ++(vlSymsp->__Vcoverage[1829]);
                    }
                    if ((0x0200U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr))) {
                        ++(vlSymsp->__Vcoverage[1830]);
                    }
                }
                if (((0x0100U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)) 
                     & (0x0180U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr)))) {
                    ++(vlSymsp->__Vcoverage[1832]);
                }
                if ((0x0180U <= (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr))) {
                    ++(vlSymsp->__Vcoverage[1833]);
                }
                if ((0x0100U > (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr))) {
                    ++(vlSymsp->__Vcoverage[1834]);
                }
            }
            ++(vlSymsp->__Vcoverage[1837]);
        } else {
            ++(vlSymsp->__Vcoverage[1838]);
        }
        if ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready)) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID))) {
            ++(vlSymsp->__Vcoverage[1780]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID)))) {
            ++(vlSymsp->__Vcoverage[1781]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)))) {
            ++(vlSymsp->__Vcoverage[1782]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready) {
            ++(vlSymsp->__Vcoverage[1783]);
        }
        if ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready)) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID))) {
            ++(vlSymsp->__Vcoverage[1786]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)))) {
            ++(vlSymsp->__Vcoverage[1787]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID)))) {
            ++(vlSymsp->__Vcoverage[1788]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready) {
            ++(vlSymsp->__Vcoverage[1789]);
        }
        if ((((((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready) 
                & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)) 
               & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid))) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID))) {
            ++(vlSymsp->__Vcoverage[1798]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID)))) {
            ++(vlSymsp->__Vcoverage[1799]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready)))) {
            ++(vlSymsp->__Vcoverage[1800]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid) {
            ++(vlSymsp->__Vcoverage[1801]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)))) {
            ++(vlSymsp->__Vcoverage[1802]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready)))) {
            ++(vlSymsp->__Vcoverage[1803]);
        }
        if ((((~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready)) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)) 
             & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID))) {
            ++(vlSymsp->__Vcoverage[1806]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID)))) {
            ++(vlSymsp->__Vcoverage[1807]);
        }
        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID)))) {
            ++(vlSymsp->__Vcoverage[1808]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready) {
            ++(vlSymsp->__Vcoverage[1809]);
        }
        ++(vlSymsp->__Vcoverage[1840]);
    } else {
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__i = 0U;
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready = 0U;
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready = 0U;
        __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid = 0U;
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len = 0U;
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode = 0U;
        while (VL_GTS_III(32, 0x00000020U, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__i)) {
            __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v1 
                = (0x0000001fU & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__i);
            vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern__v1));
            __VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v1 
                = (0x0000001fU & vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__i);
            vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask__v1));
            vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__i 
                = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__i);
            ++(vlSymsp->__Vcoverage[1779]);
        }
        ++(vlSymsp->__Vcoverage[1839]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN)))) {
        ++(vlSymsp->__Vcoverage[1841]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) {
        ++(vlSymsp->__Vcoverage[1842]);
    }
    ++(vlSymsp->__Vcoverage[1843]);
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1083, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_RDATA = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1151, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_RVALID = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data) 
           & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY) 
              & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid)));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern.commit(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern);
    vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask.commit(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask);
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready 
        = __Vdly__top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    if ((vlSelfRef.top_slave_module__DOT__S_AXI_RDATA 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RDATA)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 144, vlSelfRef.top_slave_module__DOT__S_AXI_RDATA, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RDATA);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RDATA 
            = vlSelfRef.top_slave_module__DOT__S_AXI_RDATA;
    }
    vlSelfRef.S_AXI_RDATA = vlSelfRef.top_slave_module__DOT__S_AXI_RDATA;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_RVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 212, vlSelfRef.top_slave_module__DOT__S_AXI_RVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_RVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_RVALID;
    }
    vlSelfRef.S_AXI_RVALID = vlSelfRef.top_slave_module__DOT__S_AXI_RVALID;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1587, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg) 
                                                     - (IData)(0x0100U))), 2U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg) 
                                                     - (IData)(0x0200U))), 2U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1495, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1675, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1611, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1777, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1487, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    }
    vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [2U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [1U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [2U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [1U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [3U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [5U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [4U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [5U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [4U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [6U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [8U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [7U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [8U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [7U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [9U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000aU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x0bU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0aU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0bU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x0aU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x0cU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000dU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x0eU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0dU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x0eU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x0dU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x0fU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000010U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x11U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x10U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000011U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x11U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x10U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x12U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000013U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x14U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x13U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000014U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x14U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x13U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x15U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000016U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x17U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x16U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000017U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x17U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x16U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x18U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000019U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x1aU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x19U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1aU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x19U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
        [0x1bU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001cU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x1dU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1cU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1dU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x1cU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001eU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                    [0x1fU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1eU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                     [0x1fU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern
                                      [0x1eU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[1U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [2U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [1U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[2U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [2U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [1U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [3U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [5U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [4U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [5U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [4U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [6U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[7U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [8U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [7U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[8U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [8U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [7U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [9U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000aU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x0bU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0aU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000bU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0bU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x0aU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x0cU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000dU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x0eU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0dU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000eU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x0eU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x0dU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x0fU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000010U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x11U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x10U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000011U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x11U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x10U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x12U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000013U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x14U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x13U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000014U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x14U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x13U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x15U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000016U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x17U])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x16U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000017U] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x17U])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x16U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x18U];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000019U] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x1aU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x19U]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001aU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1aU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x19U]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
        [0x1bU];
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001cU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x1dU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1cU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001dU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1dU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x1cU]))) >> 0x00000020U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001eU] 
        = (IData)((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                    [0x1fU])) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1eU]))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001fU] 
        = (IData)(((((QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                     [0x1fU])) << 0x00000020U) 
                    | (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask
                                      [0x1eU]))) >> 0x00000020U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1563, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr) 
                                                     - (IData)(0x0100U))), 2U));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset 
        = (0x00000fffU & VL_SHIFTR_III(12,12,32, (0x00000fffU 
                                                  & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr) 
                                                     - (IData)(0x0200U))), 2U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1493, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1489, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1491, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID) 
           & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready) 
              & ((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready))));
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready;
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1155, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len;
    }
    vlSelfRef.top_slave_module__DOT__sig_pattern_len_full 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 1219, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode;
    }
    vlSelfRef.top_slave_module__DOT__sig_operation_mode 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1729, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1753, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1081, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 637, vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_rd_en);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_rd_en 
            = vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en 
        = vlSelfRef.top_slave_module__DOT__sig_fifo_rd_en;
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[1U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[2U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[3U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[4U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[5U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[6U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[7U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[8U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[9U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in[0x0000001fU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[1U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[2U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[3U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[4U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[5U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[6U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[7U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[8U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[9U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in[0x0000001fU];
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1681, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset))) {
        VL_COV_TOGGLE_CHG_ST_I(12, vlSymsp->__Vcoverage + 1705, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1051, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_BVALID = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 969, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY 
        = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1679, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1045, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY;
    }
    vlSelfRef.top_slave_module__DOT__S_AXI_WREADY = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY;
    if ((vlSelfRef.top_slave_module__DOT__sig_pattern_len_full 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len_full)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 305, vlSelfRef.top_slave_module__DOT__sig_pattern_len_full, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len_full);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len_full 
            = vlSelfRef.top_slave_module__DOT__sig_pattern_len_full;
    }
    vlSelfRef.top_slave_module__DOT__sig_pattern_len 
        = (0x000000ffU & vlSelfRef.top_slave_module__DOT__sig_pattern_len_full);
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_operation_mode) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_operation_mode))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 369, vlSelfRef.top_slave_module__DOT__sig_operation_mode, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_operation_mode);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_operation_mode 
            = vlSelfRef.top_slave_module__DOT__sig_operation_mode;
    }
    vlSelfRef.top_slave_module__DOT__matcher_en = (1U 
                                                   & ((IData)(vlSelfRef.top_slave_module__DOT__sig_operation_mode) 
                                                      >> 1U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 142, vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_ARREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY;
    }
    vlSelfRef.S_AXI_ARREADY = vlSelfRef.top_slave_module__DOT__S_AXI_ARREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3703, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[1U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[2U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[4U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[5U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[7U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[8U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_in[0x0000001fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[1U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[2U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[4U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[5U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[7U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[8U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__sig_mask_in[0x0000001fU];
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_BVALID) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BVALID))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 112, vlSelfRef.top_slave_module__DOT__S_AXI_BVALID, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BVALID);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_BVALID 
            = vlSelfRef.top_slave_module__DOT__S_AXI_BVALID;
    }
    vlSelfRef.S_AXI_BVALID = vlSelfRef.top_slave_module__DOT__S_AXI_BVALID;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 30, vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_AWREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY;
    }
    vlSelfRef.S_AXI_AWREADY = vlSelfRef.top_slave_module__DOT__S_AXI_AWREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXI_WREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 106, vlSelfRef.top_slave_module__DOT__S_AXI_WREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXI_WREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXI_WREADY;
    }
    vlSelfRef.S_AXI_WREADY = vlSelfRef.top_slave_module__DOT__S_AXI_WREADY;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_pattern_len) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 639, vlSelfRef.top_slave_module__DOT__sig_pattern_len, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_pattern_len 
            = vlSelfRef.top_slave_module__DOT__sig_pattern_len;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len 
        = vlSelfRef.top_slave_module__DOT__sig_pattern_len;
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 763, vlSelfRef.top_slave_module__DOT__matcher_en, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_en);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_en 
            = vlSelfRef.top_slave_module__DOT__matcher_en;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active 
        = vlSelfRef.top_slave_module__DOT__matcher_en;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in[0x0000001fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[1U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[2U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[3U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[4U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[5U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[6U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[7U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[8U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[9U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in[0x0000001fU];
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2753, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2769, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active;
    }
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN) {
        ++(vlSymsp->__Vcoverage[299]);
        vlSelfRef.top_slave_module__DOT__rst_n_sync 
            = vlSelfRef.top_slave_module__DOT__rst_n_meta;
        vlSelfRef.top_slave_module__DOT__rst_n_meta = 1U;
    } else {
        ++(vlSymsp->__Vcoverage[298]);
        vlSelfRef.top_slave_module__DOT__rst_n_meta = 0U;
        vlSelfRef.top_slave_module__DOT__rst_n_sync = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN)))) {
        ++(vlSymsp->__Vcoverage[300]);
    }
    if (vlSelfRef.top_slave_module__DOT__S_AXI_ARESETN) {
        ++(vlSymsp->__Vcoverage[301]);
    }
    ++(vlSymsp->__Vcoverage[302]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__rst_n_meta) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_meta))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 294, vlSelfRef.top_slave_module__DOT__rst_n_meta, vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_meta);
        vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_meta 
            = vlSelfRef.top_slave_module__DOT__rst_n_meta;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__rst_n_sync) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_sync))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 296, vlSelfRef.top_slave_module__DOT__rst_n_sync, vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_sync);
        vlSelfRef.top_slave_module__DOT____Vtogcov__rst_n_sync 
            = vlSelfRef.top_slave_module__DOT__rst_n_sync;
    }
    vlSelfRef.top_slave_module__DOT__sys_rst_n = vlSelfRef.top_slave_module__DOT__rst_n_sync;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sys_rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sys_rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 303, vlSelfRef.top_slave_module__DOT__sys_rst_n, vlSelfRef.top_slave_module__DOT____Vtogcov__sys_rst_n);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sys_rst_n 
            = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 941, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN;
    }
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr;
    __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr = 0;
    CData/*3:0*/ __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
    __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr = 0;
    CData/*4:0*/ __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count;
    __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count = 0;
    IData/*31:0*/ __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0;
    __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0;
    __VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0;
    __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1;
    __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 = 0;
    CData/*3:0*/ __VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1;
    __VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1;
    __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 = 0;
    // Body
    __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
    __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count;
    __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr;
    __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 = 0U;
    __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 = 0U;
    if (vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n) {
        if (vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed) {
            if (vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed) {
                __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr)));
                ++(vlSymsp->__Vcoverage[3813]);
                __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 
                    = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in;
                __VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 
                    = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
                __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0 = 1U;
                __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr)));
            } else {
                __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count)));
                ++(vlSymsp->__Vcoverage[3811]);
                __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 
                    = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in;
                __VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 
                    = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
                __VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1 = 1U;
                vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out 
                    = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count)));
                vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty = 0U;
                __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr)));
            }
        } else if (vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed) {
            __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count 
                = (0x0000001fU & ((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count) 
                                  - (IData)(1U)));
            ++(vlSymsp->__Vcoverage[3812]);
            __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr)));
            vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out 
                = (0x0000001fU & ((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count) 
                                  - (IData)(1U)));
            vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty 
                = (1U == (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count));
        } else {
            ++(vlSymsp->__Vcoverage[3814]);
        }
        ++(vlSymsp->__Vcoverage[3816]);
    } else {
        ++(vlSymsp->__Vcoverage[3815]);
        __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr = 0U;
        __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr = 0U;
        __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count = 0U;
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out = 0U;
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[3817]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3818]);
    }
    ++(vlSymsp->__Vcoverage[3819]);
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr 
        = __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count 
        = __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__count;
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr 
        = __Vdly__top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr;
    if (__VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0) {
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__mem[__VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0] 
            = __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v0;
    }
    if (__VdlySet__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1) {
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__mem[__VdlyDim0__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1] 
            = __VdlyVal__top_slave_module__DOT__u_hits_fifo__DOT__mem__v1;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 3781, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 3797, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 3789, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3769, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty;
    }
    vlSelfRef.top_slave_module__DOT__sig_fifo_empty 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty;
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__mem
        [vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr];
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 3771, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out;
    }
    vlSelfRef.top_slave_module__DOT__fifo_count_wire 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__count_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_fifo_empty) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 635, vlSelfRef.top_slave_module__DOT__sig_fifo_empty, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_empty);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_empty 
            = vlSelfRef.top_slave_module__DOT__sig_fifo_empty;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty 
        = vlSelfRef.top_slave_module__DOT__sig_fifo_empty;
    if ((vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out 
         ^ vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3705, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out;
    }
    vlSelfRef.top_slave_module__DOT__sig_fifo_data_out 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__fifo_count_wire) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_count_wire))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 927, vlSelfRef.top_slave_module__DOT__fifo_count_wire, vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_count_wire);
        vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_count_wire 
            = vlSelfRef.top_slave_module__DOT__fifo_count_wire;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in 
        = vlSelfRef.top_slave_module__DOT__fifo_count_wire;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1485, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty;
    }
    if ((vlSelfRef.top_slave_module__DOT__sig_fifo_data_out 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 571, vlSelfRef.top_slave_module__DOT__sig_fifo_data_out, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_data_out);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_fifo_data_out 
            = vlSelfRef.top_slave_module__DOT__sig_fifo_data_out;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out 
        = vlSelfRef.top_slave_module__DOT__sig_fifo_data_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in))) {
        VL_COV_TOGGLE_CHG_ST_I(5, vlSymsp->__Vcoverage + 2837, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept 
        = (0x0aU > (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in));
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1421, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3319, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept;
    }
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_last;
    __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_last = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid;
    __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid = 0;
    // Body
    __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid 
        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid;
    __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_last 
        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last;
    if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n) {
        if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance) {
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) 
                 & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte)))) {
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx)));
                ++(vlSymsp->__Vcoverage[2143]);
            } else {
                if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready) 
                     & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid))) {
                    ++(vlSymsp->__Vcoverage[2139]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx = 0U;
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata;
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep 
                        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep;
                    __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_last 
                        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast;
                    __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid = 1U;
                } else {
                    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) 
                         & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte))) {
                        ++(vlSymsp->__Vcoverage[2134]);
                        __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid = 0U;
                    } else {
                        ++(vlSymsp->__Vcoverage[2135]);
                    }
                    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) 
                         & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte))) {
                        ++(vlSymsp->__Vcoverage[2136]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte)))) {
                        ++(vlSymsp->__Vcoverage[2137]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid)))) {
                        ++(vlSymsp->__Vcoverage[2138]);
                    }
                }
                if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready) 
                     & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid))) {
                    ++(vlSymsp->__Vcoverage[2140]);
                }
                if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid)))) {
                    ++(vlSymsp->__Vcoverage[2141]);
                }
                if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready)))) {
                    ++(vlSymsp->__Vcoverage[2142]);
                }
            }
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) 
                 & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte)))) {
                ++(vlSymsp->__Vcoverage[2144]);
            }
            if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte) {
                ++(vlSymsp->__Vcoverage[2145]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid)))) {
                ++(vlSymsp->__Vcoverage[2146]);
            }
            ++(vlSymsp->__Vcoverage[2147]);
        } else {
            ++(vlSymsp->__Vcoverage[2148]);
        }
        if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance) {
            if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) {
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata 
                    = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte;
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid = 1U;
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast 
                    = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) 
                       & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte));
                if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) 
                     & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte))) {
                    ++(vlSymsp->__Vcoverage[2149]);
                }
                if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte)))) {
                    ++(vlSymsp->__Vcoverage[2150]);
                }
                if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last)))) {
                    ++(vlSymsp->__Vcoverage[2151]);
                }
                ++(vlSymsp->__Vcoverage[2152]);
            } else {
                ++(vlSymsp->__Vcoverage[2153]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid = 0U;
            }
            ++(vlSymsp->__Vcoverage[2154]);
        } else {
            ++(vlSymsp->__Vcoverage[2155]);
        }
        ++(vlSymsp->__Vcoverage[2157]);
    } else {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx = 0U;
        __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[2158]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[2159]);
    }
    ++(vlSymsp->__Vcoverage[2160]);
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid 
        = __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid;
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last 
        = __Vdly__top_slave_module__DOT__u_stream_gearbox__DOT__buf_last;
    if ((vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2014, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2010, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast;
    }
    vlSelfRef.top_slave_module__DOT__gb_tlast = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2092, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 1992, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata;
    }
    vlSelfRef.top_slave_module__DOT__gb_tdata = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2088, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte 
        = (0x000000ffU & ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx))
                           ? ([&]() {
                    ++(vlSymsp->__Vcoverage[2118]);
                }(), vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data)
                           : ([&]() {
                    ++(vlSymsp->__Vcoverage[2123]);
                }(), ((1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx))
                       ? ([&]() {
                            ++(vlSymsp->__Vcoverage[2119]);
                        }(), (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                              >> 8U)) : ([&]() {
                            ++(vlSymsp->__Vcoverage[2122]);
                        }(), ((2U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx))
                               ? ([&]() {
                                    ++(vlSymsp->__Vcoverage[2120]);
                                }(), (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                                      >> 0x10U)) : 
                              ([&]() {
                                    ++(vlSymsp->__Vcoverage[2121]);
                                }(), (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data 
                                      >> 0x18U))))))));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 2078, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2086, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last;
    }
    if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) {
        if ((8U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            if ((4U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                    if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                        ++(vlSymsp->__Vcoverage[2127]);
                    } else {
                        ++(vlSymsp->__Vcoverage[2128]);
                        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                    }
                } else {
                    ++(vlSymsp->__Vcoverage[2128]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[2128]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
            }
        } else if ((4U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                    ++(vlSymsp->__Vcoverage[2126]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 2U;
                } else {
                    ++(vlSymsp->__Vcoverage[2128]);
                    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
                }
            } else {
                ++(vlSymsp->__Vcoverage[2128]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
            }
        } else if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
                ++(vlSymsp->__Vcoverage[2125]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[2128]);
                vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep))) {
            ++(vlSymsp->__Vcoverage[2124]);
            vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[2128]);
            vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
        }
        ++(vlSymsp->__Vcoverage[2130]);
    } else {
        ++(vlSymsp->__Vcoverage[2129]);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = 3U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last)))) {
        ++(vlSymsp->__Vcoverage[2131]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last) {
        ++(vlSymsp->__Vcoverage[2132]);
    }
    ++(vlSymsp->__Vcoverage[2133]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2008, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__gb_tvalid = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 675, vlSelfRef.top_slave_module__DOT__gb_tlast, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tlast);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tlast 
            = vlSelfRef.top_slave_module__DOT__gb_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 655, vlSelfRef.top_slave_module__DOT__gb_tdata, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tdata);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tdata 
            = vlSelfRef.top_slave_module__DOT__gb_tdata;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2102, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2094, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx) 
           == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx));
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 671, vlSelfRef.top_slave_module__DOT__gb_tvalid, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tvalid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tvalid 
            = vlSelfRef.top_slave_module__DOT__gb_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2098, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte;
    }
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 = 0;
    CData/*0:0*/ __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 = 0;
    // Body
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4;
    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n) {
        if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance) {
            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid) {
                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata 
                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata;
                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast 
                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast;
                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid = 1U;
                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos 
                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file) {
                    ++(vlSymsp->__Vcoverage[2569]);
                    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 0U;
                    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position = 0U;
                    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid = 0U;
                    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 = 0U;
                    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed = 0U;
                    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 = 0U;
                    __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 = 0U;
                } else {
                    ++(vlSymsp->__Vcoverage[2570]);
                }
                if ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state))) {
                    if ((0U == (0x80U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                        ++(vlSymsp->__Vcoverage[2571]);
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                            = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos);
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state = 0U;
                    } else if ((0xc0U == (0xe0U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                        if (((0xc0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)) 
                             | (0xc1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2573]);
                            } else {
                                ++(vlSymsp->__Vcoverage[2572]);
                                __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                                ++(vlSymsp->__Vcoverage[2574]);
                            }
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2575]);
                            }
                            ++(vlSymsp->__Vcoverage[2576]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2577]);
                        }
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state = 1U;
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                        ++(vlSymsp->__Vcoverage[2581]);
                    } else if ((0xe0U == (0xf0U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                        ++(vlSymsp->__Vcoverage[2582]);
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 
                            = (0xe0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata));
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed 
                            = (0xedU == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata));
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state = 2U;
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                    } else if ((0xf0U == (0xf8U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                        if ((0xf4U < (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2584]);
                            } else {
                                ++(vlSymsp->__Vcoverage[2583]);
                                __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                                ++(vlSymsp->__Vcoverage[2585]);
                            }
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2586]);
                            }
                            ++(vlSymsp->__Vcoverage[2587]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2588]);
                        }
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 
                            = (0xf0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata));
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 
                            = (0xf4U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata));
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state = 3U;
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                        ++(vlSymsp->__Vcoverage[2589]);
                    } else {
                        if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                            ++(vlSymsp->__Vcoverage[2591]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2590]);
                            __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                        }
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                            = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos);
                        ++(vlSymsp->__Vcoverage[2594]);
                    }
                    if ((0xc1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                        ++(vlSymsp->__Vcoverage[2578]);
                    }
                    if ((0xc0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                        ++(vlSymsp->__Vcoverage[2579]);
                    }
                    if (((0xc0U != (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)) 
                         & (0xc1U != (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                        ++(vlSymsp->__Vcoverage[2580]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                        ++(vlSymsp->__Vcoverage[2592]);
                    }
                    if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                        ++(vlSymsp->__Vcoverage[2593]);
                    }
                    ++(vlSymsp->__Vcoverage[2639]);
                } else {
                    if ((2U == (3U & ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata) 
                                      >> 6U)))) {
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0) 
                             & (0xa0U > (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2596]);
                            } else {
                                ++(vlSymsp->__Vcoverage[2595]);
                                __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                                ++(vlSymsp->__Vcoverage[2597]);
                            }
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2598]);
                            }
                            ++(vlSymsp->__Vcoverage[2599]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2600]);
                        }
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state 
                            = (3U & ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state) 
                                     - (IData)(1U)));
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed) 
                             & (0xa0U <= (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2605]);
                            } else {
                                ++(vlSymsp->__Vcoverage[2604]);
                                __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                                ++(vlSymsp->__Vcoverage[2606]);
                            }
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2607]);
                            }
                            ++(vlSymsp->__Vcoverage[2608]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2609]);
                        }
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0) 
                             & (0x90U > (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2614]);
                            } else {
                                ++(vlSymsp->__Vcoverage[2613]);
                                __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                                ++(vlSymsp->__Vcoverage[2615]);
                            }
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2616]);
                            }
                            ++(vlSymsp->__Vcoverage[2617]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2618]);
                        }
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4) 
                             & (0x90U <= (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2623]);
                            } else {
                                ++(vlSymsp->__Vcoverage[2622]);
                                __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                            }
                            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                                ++(vlSymsp->__Vcoverage[2624]);
                            }
                            if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                                ++(vlSymsp->__Vcoverage[2625]);
                            }
                            ++(vlSymsp->__Vcoverage[2626]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2627]);
                        }
                        if ((1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state))) {
                            ++(vlSymsp->__Vcoverage[2631]);
                            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                                = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos);
                        } else {
                            ++(vlSymsp->__Vcoverage[2632]);
                            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                                = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                        }
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0) 
                             & (0xa0U > (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            ++(vlSymsp->__Vcoverage[2601]);
                        }
                        if ((0xa0U <= (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                            ++(vlSymsp->__Vcoverage[2602]);
                        }
                        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0)))) {
                            ++(vlSymsp->__Vcoverage[2603]);
                        }
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed) 
                             & (0xa0U <= (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            ++(vlSymsp->__Vcoverage[2610]);
                        }
                        if ((0xa0U > (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                            ++(vlSymsp->__Vcoverage[2611]);
                        }
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 = 0U;
                        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed)))) {
                            ++(vlSymsp->__Vcoverage[2612]);
                        }
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0) 
                             & (0x90U > (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            ++(vlSymsp->__Vcoverage[2619]);
                        }
                        if ((0x90U <= (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                            ++(vlSymsp->__Vcoverage[2620]);
                        }
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed = 0U;
                        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0)))) {
                            ++(vlSymsp->__Vcoverage[2621]);
                        }
                        if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4) 
                             & (0x90U <= (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
                            ++(vlSymsp->__Vcoverage[2628]);
                        }
                        if ((0x90U > (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata))) {
                            ++(vlSymsp->__Vcoverage[2629]);
                        }
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 = 0U;
                        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4)))) {
                            ++(vlSymsp->__Vcoverage[2630]);
                        }
                        ++(vlSymsp->__Vcoverage[2637]);
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 = 0U;
                    } else {
                        if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                            ++(vlSymsp->__Vcoverage[2634]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2633]);
                            __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                        }
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state = 0U;
                        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
                            = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos);
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 = 0U;
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed = 0U;
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 = 0U;
                        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 = 0U;
                        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                            ++(vlSymsp->__Vcoverage[2635]);
                        }
                        if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                            ++(vlSymsp->__Vcoverage[2636]);
                        }
                        ++(vlSymsp->__Vcoverage[2638]);
                    }
                    ++(vlSymsp->__Vcoverage[2640]);
                }
                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file 
                    = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast;
                if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast) {
                    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count 
                        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte)
                            ? ([&]() {
                                ++(vlSymsp->__Vcoverage[2643]);
                            }(), ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos))
                            : ([&]() {
                                ++(vlSymsp->__Vcoverage[2644]);
                            }(), vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos));
                    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid = 1U;
                    if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte) {
                        ++(vlSymsp->__Vcoverage[2650]);
                    } else {
                        if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                            ++(vlSymsp->__Vcoverage[2646]);
                        } else {
                            ++(vlSymsp->__Vcoverage[2645]);
                            __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 1U;
                            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
                                = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error)))) {
                            ++(vlSymsp->__Vcoverage[2647]);
                        }
                        if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) {
                            ++(vlSymsp->__Vcoverage[2648]);
                        }
                        ++(vlSymsp->__Vcoverage[2649]);
                    }
                    if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte) {
                        ++(vlSymsp->__Vcoverage[2641]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte)))) {
                        ++(vlSymsp->__Vcoverage[2642]);
                    }
                    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte)))) {
                        ++(vlSymsp->__Vcoverage[2651]);
                    }
                    if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte) {
                        ++(vlSymsp->__Vcoverage[2652]);
                    }
                    ++(vlSymsp->__Vcoverage[2653]);
                } else {
                    ++(vlSymsp->__Vcoverage[2654]);
                }
                ++(vlSymsp->__Vcoverage[2655]);
            } else {
                ++(vlSymsp->__Vcoverage[2656]);
                vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid = 0U;
            }
            ++(vlSymsp->__Vcoverage[2657]);
        } else {
            ++(vlSymsp->__Vcoverage[2658]);
        }
    } else {
        ++(vlSymsp->__Vcoverage[2659]);
        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0 = 0U;
        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed = 0U;
        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0 = 0U;
        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4 = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid = 0U;
        __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file = 1U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid = 0U;
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[2660]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[2661]);
    }
    ++(vlSymsp->__Vcoverage[2662]);
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0 
        = __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_e0;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed 
        = __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_ed;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0 
        = __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f0;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4 
        = __Vdly__top_slave_module__DOT__u_stream_validator__DOT__expect_f4;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error 
        = __Vdly__top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2477, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_e0;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2479, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_ed;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2481, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f0;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2483, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__expect_f4;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2411, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2273, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    }
    vlSelfRef.top_slave_module__DOT__sig_encoding_error 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__encoding_error;
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2275, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position;
    }
    vlSelfRef.top_slave_module__DOT__sig_error_position 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__error_position;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2403, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid;
    }
    vlSelfRef.top_slave_module__DOT__sig_char_count_valid 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid;
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2339, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count;
    }
    vlSelfRef.top_slave_module__DOT__sig_final_char_count 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__final_char_count;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2407, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2187, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata;
    }
    vlSelfRef.top_slave_module__DOT__val_tdata = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata;
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2207, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos;
    }
    vlSelfRef.top_slave_module__DOT__val_tpos = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2475, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[2555]);
            }(), 0U) : ([&]() {
                ++(vlSymsp->__Vcoverage[2556]);
            }(), vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter));
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__is_new_file)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[2489]);
            }(), 0U) : ([&]() {
                ++(vlSymsp->__Vcoverage[2490]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__utf8_state)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2205, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast;
    }
    vlSelfRef.top_slave_module__DOT__val_tlast = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2203, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__val_tvalid = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_encoding_error) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_encoding_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 439, vlSelfRef.top_slave_module__DOT__sig_encoding_error, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_encoding_error);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_encoding_error 
            = vlSelfRef.top_slave_module__DOT__sig_encoding_error;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error 
        = vlSelfRef.top_slave_module__DOT__sig_encoding_error;
    if ((vlSelfRef.top_slave_module__DOT__sig_error_position 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_error_position)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 441, vlSelfRef.top_slave_module__DOT__sig_error_position, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_error_position);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_error_position 
            = vlSelfRef.top_slave_module__DOT__sig_error_position;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position 
        = vlSelfRef.top_slave_module__DOT__sig_error_position;
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_char_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_char_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 437, vlSelfRef.top_slave_module__DOT__sig_char_count_valid, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_char_count_valid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_char_count_valid 
            = vlSelfRef.top_slave_module__DOT__sig_char_count_valid;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid 
        = vlSelfRef.top_slave_module__DOT__sig_char_count_valid;
    if ((vlSelfRef.top_slave_module__DOT__sig_final_char_count 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_final_char_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 373, vlSelfRef.top_slave_module__DOT__sig_final_char_count, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_final_char_count);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_final_char_count 
            = vlSelfRef.top_slave_module__DOT__sig_final_char_count;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count 
        = vlSelfRef.top_slave_module__DOT__sig_final_char_count;
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 677, vlSelfRef.top_slave_module__DOT__val_tdata, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tdata);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tdata 
            = vlSelfRef.top_slave_module__DOT__val_tdata;
    }
    if ((vlSelfRef.top_slave_module__DOT__val_tpos 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__val_tpos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 693, vlSelfRef.top_slave_module__DOT__val_tpos, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tpos);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tpos 
            = vlSelfRef.top_slave_module__DOT__val_tpos;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos 
         ^ vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2491, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_pos;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2485, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 761, vlSelfRef.top_slave_module__DOT__val_tlast, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tlast);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tlast 
            = vlSelfRef.top_slave_module__DOT__val_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 757, vlSelfRef.top_slave_module__DOT__val_tvalid, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tvalid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tvalid 
            = vlSelfRef.top_slave_module__DOT__val_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1289, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1291, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1287, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1223, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count;
    }
}

extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_ha7258237_0;
extern const VlWide<32>/*1023:0*/ Vtop__ConstPool__CONST_hd6b7ba52_0;

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter;
    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter = 0;
    IData/*31:0*/ __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count = 0;
    VlWide<32>/*1023:0*/ __Vtemp_1;
    // Body
    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter;
    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) {
        __Vtemp_1[1U] = (((Vtop__ConstPool__CONST_ha7258237_0[0U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[1U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[1U]) 
                                             << 8U));
        __Vtemp_1[2U] = (((Vtop__ConstPool__CONST_ha7258237_0[1U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[1U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[2U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[2U]) 
                                             << 8U));
        __Vtemp_1[3U] = (((Vtop__ConstPool__CONST_ha7258237_0[2U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[2U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[3U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[3U]) 
                                             << 8U));
        __Vtemp_1[4U] = (((Vtop__ConstPool__CONST_ha7258237_0[3U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[3U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[4U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[4U]) 
                                             << 8U));
        __Vtemp_1[5U] = (((Vtop__ConstPool__CONST_ha7258237_0[4U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[4U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[5U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[5U]) 
                                             << 8U));
        __Vtemp_1[6U] = (((Vtop__ConstPool__CONST_ha7258237_0[5U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[5U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[6U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[6U]) 
                                             << 8U));
        __Vtemp_1[7U] = (((Vtop__ConstPool__CONST_ha7258237_0[6U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[6U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[7U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[7U]) 
                                             << 8U));
        __Vtemp_1[8U] = (((Vtop__ConstPool__CONST_ha7258237_0[7U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[7U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[8U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[8U]) 
                                             << 8U));
        __Vtemp_1[9U] = (((Vtop__ConstPool__CONST_ha7258237_0[8U] 
                           & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[8U]) 
                          >> 0x00000018U) | ((Vtop__ConstPool__CONST_ha7258237_0[9U] 
                                              & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[9U]) 
                                             << 8U));
        __Vtemp_1[0x0000000aU] = (((Vtop__ConstPool__CONST_ha7258237_0[9U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[9U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000000aU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000aU]) 
                                     << 8U));
        __Vtemp_1[0x0000000bU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000000aU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000aU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000000bU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000bU]) 
                                     << 8U));
        __Vtemp_1[0x0000000cU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000000bU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000bU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000000cU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000cU]) 
                                     << 8U));
        __Vtemp_1[0x0000000dU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000000cU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000cU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000000dU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000dU]) 
                                     << 8U));
        __Vtemp_1[0x0000000eU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000000dU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000dU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000000eU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000eU]) 
                                     << 8U));
        __Vtemp_1[0x0000000fU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000000eU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000eU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000000fU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000fU]) 
                                     << 8U));
        __Vtemp_1[0x00000010U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000000fU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000fU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000010U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000010U]) 
                                     << 8U));
        __Vtemp_1[0x00000011U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000010U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000010U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000011U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000011U]) 
                                     << 8U));
        __Vtemp_1[0x00000012U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000011U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000011U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000012U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000012U]) 
                                     << 8U));
        __Vtemp_1[0x00000013U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000012U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000012U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000013U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000013U]) 
                                     << 8U));
        __Vtemp_1[0x00000014U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000013U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000013U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000014U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000014U]) 
                                     << 8U));
        __Vtemp_1[0x00000015U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000014U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000014U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000015U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000015U]) 
                                     << 8U));
        __Vtemp_1[0x00000016U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000015U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000015U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000016U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000016U]) 
                                     << 8U));
        __Vtemp_1[0x00000017U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000016U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000016U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000017U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000017U]) 
                                     << 8U));
        __Vtemp_1[0x00000018U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000017U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000017U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000018U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000018U]) 
                                     << 8U));
        __Vtemp_1[0x00000019U] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000018U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000018U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x00000019U] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000019U]) 
                                     << 8U));
        __Vtemp_1[0x0000001aU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x00000019U] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000019U]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000001aU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001aU]) 
                                     << 8U));
        __Vtemp_1[0x0000001bU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000001aU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001aU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000001bU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001bU]) 
                                     << 8U));
        __Vtemp_1[0x0000001cU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000001bU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001bU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000001cU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001cU]) 
                                     << 8U));
        __Vtemp_1[0x0000001dU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000001cU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001cU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000001dU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001dU]) 
                                     << 8U));
        __Vtemp_1[0x0000001eU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000001dU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001dU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000001eU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001eU]) 
                                     << 8U));
        __Vtemp_1[0x0000001fU] = (((Vtop__ConstPool__CONST_ha7258237_0[0x0000001eU] 
                                    & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001eU]) 
                                   >> 0x00000018U) 
                                  | ((Vtop__ConstPool__CONST_ha7258237_0[0x0000001fU] 
                                      & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001fU]) 
                                     << 8U));
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0U] 
            = (((Vtop__ConstPool__CONST_ha7258237_0[0U] 
                 & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0U]) 
                << 8U) | (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata));
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[1U] 
            = __Vtemp_1[1U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[2U] 
            = __Vtemp_1[2U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[3U] 
            = __Vtemp_1[3U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[4U] 
            = __Vtemp_1[4U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[5U] 
            = __Vtemp_1[5U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[6U] 
            = __Vtemp_1[6U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[7U] 
            = __Vtemp_1[7U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[8U] 
            = __Vtemp_1[8U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[9U] 
            = __Vtemp_1[9U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000aU] 
            = __Vtemp_1[0x0000000aU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000bU] 
            = __Vtemp_1[0x0000000bU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000cU] 
            = __Vtemp_1[0x0000000cU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000dU] 
            = __Vtemp_1[0x0000000dU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000eU] 
            = __Vtemp_1[0x0000000eU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000fU] 
            = __Vtemp_1[0x0000000fU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000010U] 
            = __Vtemp_1[0x00000010U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000011U] 
            = __Vtemp_1[0x00000011U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000012U] 
            = __Vtemp_1[0x00000012U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000013U] 
            = __Vtemp_1[0x00000013U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000014U] 
            = __Vtemp_1[0x00000014U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000015U] 
            = __Vtemp_1[0x00000015U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000016U] 
            = __Vtemp_1[0x00000016U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000017U] 
            = __Vtemp_1[0x00000017U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000018U] 
            = __Vtemp_1[0x00000018U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000019U] 
            = __Vtemp_1[0x00000019U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001aU] 
            = __Vtemp_1[0x0000001aU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001bU] 
            = __Vtemp_1[0x0000001bU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001cU] 
            = __Vtemp_1[0x0000001cU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001dU] 
            = __Vtemp_1[0x0000001dU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001eU] 
            = __Vtemp_1[0x0000001eU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001fU] 
            = __Vtemp_1[0x0000001fU];
        ++(vlSymsp->__Vcoverage[3554]);
    } else if ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[1U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[2U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[3U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[4U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[5U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[6U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[7U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[8U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[9U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000010U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000011U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000012U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000013U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000014U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000015U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000016U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000017U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000018U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000019U] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001aU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001bU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001cU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001dU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001eU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001fU] 
            = Vtop__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
    } else {
        ++(vlSymsp->__Vcoverage[3553]);
    }
    ++(vlSymsp->__Vcoverage[3555]);
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) {
        if ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
            ++(vlSymsp->__Vcoverage[3556]);
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset 
                = (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext 
                   - vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__const_one);
        } else {
            ++(vlSymsp->__Vcoverage[3557]);
        }
        if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
                __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter)));
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found 
                    = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out;
                if ((5U <= (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter))) {
                    ++(vlSymsp->__Vcoverage[3569]);
                    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found = 0U;
                    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid = 1U;
                } else {
                    ++(vlSymsp->__Vcoverage[3570]);
                }
                if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out) {
                    __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count 
                        = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count);
                    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo 
                        = ((1U & (IData)((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
                                          >> 0x20U)))
                            ? ([&]() {
                                ++(vlSymsp->__Vcoverage[3573]);
                            }(), 0U) : ([&]() {
                                ++(vlSymsp->__Vcoverage[3574]);
                            }(), (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext)));
                    if ((1U & (IData)((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
                                       >> 0x20U)))) {
                        ++(vlSymsp->__Vcoverage[3571]);
                    }
                    if ((1U & (~ (IData)((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
                                          >> 0x20U))))) {
                        ++(vlSymsp->__Vcoverage[3572]);
                    }
                    ++(vlSymsp->__Vcoverage[3575]);
                } else {
                    ++(vlSymsp->__Vcoverage[3576]);
                }
                ++(vlSymsp->__Vcoverage[3577]);
            } else {
                ++(vlSymsp->__Vcoverage[3568]);
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found 
                = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out;
            if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out) {
                __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count 
                    = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count);
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo 
                    = ((1U & (IData)((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
                                      >> 0x20U))) ? 
                       ([&]() {
                            ++(vlSymsp->__Vcoverage[3563]);
                        }(), 0U) : ([&]() {
                            ++(vlSymsp->__Vcoverage[3564]);
                        }(), (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext)));
                if ((1U & (IData)((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
                                   >> 0x20U)))) {
                    ++(vlSymsp->__Vcoverage[3561]);
                }
                if ((1U & (~ (IData)((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
                                      >> 0x20U))))) {
                    ++(vlSymsp->__Vcoverage[3562]);
                }
                ++(vlSymsp->__Vcoverage[3565]);
            } else {
                ++(vlSymsp->__Vcoverage[3566]);
            }
            ++(vlSymsp->__Vcoverage[3567]);
        } else {
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found = 0U;
            if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) {
                ++(vlSymsp->__Vcoverage[3558]);
                __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count = 0U;
                __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter = 0U;
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid = 0U;
            } else {
                ++(vlSymsp->__Vcoverage[3559]);
            }
            ++(vlSymsp->__Vcoverage[3560]);
        }
        ++(vlSymsp->__Vcoverage[3579]);
    } else {
        ++(vlSymsp->__Vcoverage[3578]);
        __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count = 0U;
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found = 0U;
        __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter = 0U;
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid = 0U;
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[3580]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3581]);
    }
    ++(vlSymsp->__Vcoverage[3582]);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter 
        = __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count 
        = __Vdly__top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[1U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[1U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[2U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[2U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[3U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[3U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[4U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[4U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[5U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[5U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[6U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[6U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[7U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[7U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[8U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[8U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[9U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[9U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000000fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000000fU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000010U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000010U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000011U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000011U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000012U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000012U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000013U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000013U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000014U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000014U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000015U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000015U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000016U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000016U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000017U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000017U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000018U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000018U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x00000019U] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x00000019U];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001aU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001aU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001bU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001bU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001cU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001cU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001dU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001dU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001eU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001eU];
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg[0x0000001fU] 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg[0x0000001fU];
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3249, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter))) {
        VL_COV_TOGGLE_CHG_ST_I(3, vlSymsp->__Vcoverage + 2921, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2911, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid;
    }
    vlSelfRef.top_slave_module__DOT__sig_match_count_valid 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid;
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2847, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    }
    vlSelfRef.top_slave_module__DOT__sig_match_count 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_count;
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2927, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2991, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_found;
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state;
    } else {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[3528]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3529]);
    }
    ++(vlSymsp->__Vcoverage[3530]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__sig_match_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 569, vlSelfRef.top_slave_module__DOT__sig_match_count_valid, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count_valid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count_valid 
            = vlSelfRef.top_slave_module__DOT__sig_match_count_valid;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid 
        = vlSelfRef.top_slave_module__DOT__sig_match_count_valid;
    if ((vlSelfRef.top_slave_module__DOT__sig_match_count 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 505, vlSelfRef.top_slave_module__DOT__sig_match_count, vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count);
        vlSelfRef.top_slave_module__DOT____Vtogcov__sig_match_count 
            = vlSelfRef.top_slave_module__DOT__sig_match_count;
    }
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count 
        = vlSelfRef.top_slave_module__DOT__sig_match_count;
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2771, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out;
    }
    vlSelfRef.top_slave_module__DOT__hit_data_wire 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2835, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out;
    }
    vlSelfRef.top_slave_module__DOT__hit_valid_wire 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1419, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count 
         ^ vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 1355, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count, vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count);
        vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count 
            = vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count;
    }
    if ((vlSelfRef.top_slave_module__DOT__hit_data_wire 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__hit_data_wire)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 861, vlSelfRef.top_slave_module__DOT__hit_data_wire, vlSelfRef.top_slave_module__DOT____Vtogcov__hit_data_wire);
        vlSelfRef.top_slave_module__DOT____Vtogcov__hit_data_wire 
            = vlSelfRef.top_slave_module__DOT__hit_data_wire;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in 
        = vlSelfRef.top_slave_module__DOT__hit_data_wire;
    if (((IData)(vlSelfRef.top_slave_module__DOT__hit_valid_wire) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__hit_valid_wire))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 925, vlSelfRef.top_slave_module__DOT__hit_valid_wire, vlSelfRef.top_slave_module__DOT____Vtogcov__hit_valid_wire);
        vlSelfRef.top_slave_module__DOT____Vtogcov__hit_valid_wire 
            = vlSelfRef.top_slave_module__DOT__hit_valid_wire;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2913, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in 
         ^ vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3637, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__data_in;
    }
}

void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v0;
    __VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v0 = 0;
    IData/*31:0*/ __VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1;
    __VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1 = 0;
    CData/*1:0*/ __VdlyDim0__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1;
    __VdlyDim0__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1 = 0;
    // Body
    __VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v0 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos;
    vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe.enqueue(__VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v0, 0U);
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__i = 1U;
    while (VL_GTES_III(32, 3U, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__i)) {
        __VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [(3U & (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__i 
                    - (IData)(1U)))];
        __VdlyDim0__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1 
            = (3U & vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__i);
        vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe.enqueue(__VdlyVal__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1, (IData)(__VdlyDim0__top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe__v1));
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__i 
            = ((IData)(1U) + vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__i);
        ++(vlSymsp->__Vcoverage[3550]);
    }
    ++(vlSymsp->__Vcoverage[3551]);
    vlSelfRef.__VdlyCommitQueuetop_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe.commit(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe);
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer;
    } else {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n)))) {
        ++(vlSymsp->__Vcoverage[3585]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) {
        ++(vlSymsp->__Vcoverage[3586]);
    }
    ++(vlSymsp->__Vcoverage[3587]);
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [0U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [0U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2993, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [0U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [0U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[0U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [0U];
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [1U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [1U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3057, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [1U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [1U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[1U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [1U];
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [2U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [2U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3121, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [2U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [2U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[2U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [2U];
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
         [3U] ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
         [3U])) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3185, 
                               vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                               [3U], vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe
                               [3U]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[3U] 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
            [3U];
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3315, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3592, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid;
    }
}

void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__sys_rst_n;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3635, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1912, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2163, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__rst_n;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2665, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3590, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n;
    }
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed 
        = ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__empty)) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_en));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3809, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed;
    }
}

void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid 
        = vlSelfRef.top_slave_module__DOT__gb_tvalid;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast 
        = vlSelfRef.top_slave_module__DOT__gb_tlast;
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata 
        = vlSelfRef.top_slave_module__DOT__gb_tdata;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2181, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2185, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2165, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata;
    }
}

void Vtop___024root___nba_comb__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__matcher_tdata 
        = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[785]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__val_tdata))
            : ([&]() {
                ++(vlSymsp->__Vcoverage[786]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__matcher_tpos = 
        ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
          ? ([&]() {
                ++(vlSymsp->__Vcoverage[851]);
            }(), vlSelfRef.top_slave_module__DOT__val_tpos)
          : ([&]() {
                ++(vlSymsp->__Vcoverage[852]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__matcher_tlast 
        = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[855]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__val_tlast))
            : ([&]() {
                ++(vlSymsp->__Vcoverage[856]);
            }(), 0U));
    vlSelfRef.top_slave_module__DOT__matcher_tvalid 
        = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
            ? ([&]() {
                ++(vlSymsp->__Vcoverage[767]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__val_tvalid))
            : ([&]() {
                ++(vlSymsp->__Vcoverage[768]);
            }(), 0U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 769, vlSelfRef.top_slave_module__DOT__matcher_tdata, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tdata);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tdata 
            = vlSelfRef.top_slave_module__DOT__matcher_tdata;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata 
        = vlSelfRef.top_slave_module__DOT__matcher_tdata;
    if ((vlSelfRef.top_slave_module__DOT__matcher_tpos 
         ^ vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tpos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 787, vlSelfRef.top_slave_module__DOT__matcher_tpos, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tpos);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tpos 
            = vlSelfRef.top_slave_module__DOT__matcher_tpos;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos 
        = vlSelfRef.top_slave_module__DOT__matcher_tpos;
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 853, vlSelfRef.top_slave_module__DOT__matcher_tlast, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tlast);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tlast 
            = vlSelfRef.top_slave_module__DOT__matcher_tlast;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast 
        = vlSelfRef.top_slave_module__DOT__matcher_tlast;
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 765, vlSelfRef.top_slave_module__DOT__matcher_tvalid, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tvalid);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tvalid 
            = vlSelfRef.top_slave_module__DOT__matcher_tvalid;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid 
        = vlSelfRef.top_slave_module__DOT__matcher_tvalid;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata))) {
        VL_COV_TOGGLE_CHG_ST_I(8, vlSymsp->__Vcoverage + 2669, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata;
    }
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 2685, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2749, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2667, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid;
    }
}

void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len;
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 3323, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext;
    }
}

void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3317, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__match_out;
    }
}

void Vtop___024root___nba_comb__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__fifo_wr_en = ((IData)(vlSelfRef.top_slave_module__DOT__hit_valid_wire) 
                                                   & (3U 
                                                      == (IData)(vlSelfRef.top_slave_module__DOT__sig_operation_mode)));
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active 
        = ((2U != (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state)) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active));
    if (((IData)(vlSelfRef.top_slave_module__DOT__fifo_wr_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 937, vlSelfRef.top_slave_module__DOT__fifo_wr_en, vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_wr_en);
        vlSelfRef.top_slave_module__DOT____Vtogcov__fifo_wr_en 
            = vlSelfRef.top_slave_module__DOT__fifo_wr_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en 
        = vlSelfRef.top_slave_module__DOT__fifo_wr_en;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3517, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active;
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) {
        ++(vlSymsp->__Vcoverage[3522]);
    } else {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active;
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk)))) {
        ++(vlSymsp->__Vcoverage[3523]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) {
        ++(vlSymsp->__Vcoverage[3524]);
    }
    ++(vlSymsp->__Vcoverage[3525]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3701, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en;
    }
    vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed 
        = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_en;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3313, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3807, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed, vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed);
        vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed 
            = vlSelfRef.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed;
    }
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3519, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3588, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk;
    }
}

void Vtop___024root___nba_comb__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
        = (0x00000001ffffffffULL & ((QData)((IData)(
                                                    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe
                                                    [3U])) 
                                    - (QData)((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset))));
    if ((vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext 
         ^ vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext)) {
        VL_COV_TOGGLE_CHG_ST_Q(33, vlSymsp->__Vcoverage + 3451, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext;
    }
}

void Vtop___024root___nba_comb__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n) 
           & ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state)) 
              | ((1U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state)) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept))));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2751, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__matcher_tready 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__matcher_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 857, vlSelfRef.top_slave_module__DOT__matcher_tready, vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tready);
        vlSelfRef.top_slave_module__DOT____Vtogcov__matcher_tready 
            = vlSelfRef.top_slave_module__DOT__matcher_tready;
    }
}

void Vtop___024root___nba_comb__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
    if ((0U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state))) {
        if ((0U == (0x80U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
            ++(vlSymsp->__Vcoverage[2559]);
        } else if ((0xc0U == (0xe0U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            ++(vlSymsp->__Vcoverage[2560]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 0U;
        } else if ((0xe0U == (0xf0U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            ++(vlSymsp->__Vcoverage[2561]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 0U;
        } else if ((0xf0U == (0xf8U & (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata)))) {
            ++(vlSymsp->__Vcoverage[2562]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 0U;
        } else {
            ++(vlSymsp->__Vcoverage[2563]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
        }
        ++(vlSymsp->__Vcoverage[2566]);
    } else {
        if ((2U == (3U & ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata) 
                          >> 6U)))) {
            ++(vlSymsp->__Vcoverage[2564]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte 
                = (1U == (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__active_state));
        } else {
            ++(vlSymsp->__Vcoverage[2565]);
            vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = 1U;
        }
        ++(vlSymsp->__Vcoverage[2567]);
    }
    ++(vlSymsp->__Vcoverage[2568]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2557, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte;
    }
}

void Vtop___024root___nba_comb__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready) 
           & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 3321, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer;
    }
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state 
        = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state;
    if ((2U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
            if ((5U == (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter))) {
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 0U;
                ++(vlSymsp->__Vcoverage[3546]);
            } else {
                ++(vlSymsp->__Vcoverage[3547]);
            }
            ++(vlSymsp->__Vcoverage[3548]);
        } else {
            if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) {
                ++(vlSymsp->__Vcoverage[3543]);
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 1U;
            } else {
                ++(vlSymsp->__Vcoverage[3544]);
            }
            ++(vlSymsp->__Vcoverage[3545]);
        }
    } else if ((1U & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__state))) {
        if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) {
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast))) {
                ++(vlSymsp->__Vcoverage[3534]);
                vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 3U;
            } else {
                ++(vlSymsp->__Vcoverage[3535]);
            }
            if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer) 
                 & (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast))) {
                ++(vlSymsp->__Vcoverage[3536]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast)))) {
                ++(vlSymsp->__Vcoverage[3537]);
            }
            if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer)))) {
                ++(vlSymsp->__Vcoverage[3538]);
            }
        } else {
            ++(vlSymsp->__Vcoverage[3539]);
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 2U;
        }
        ++(vlSymsp->__Vcoverage[3542]);
    } else {
        if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid) {
            ++(vlSymsp->__Vcoverage[3531]);
            vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state = 1U;
        } else {
            ++(vlSymsp->__Vcoverage[3532]);
        }
        ++(vlSymsp->__Vcoverage[3533]);
    }
    if ((1U & (~ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept)))) {
        ++(vlSymsp->__Vcoverage[3540]);
    }
    if (vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept) {
        ++(vlSymsp->__Vcoverage[3541]);
    }
    ++(vlSymsp->__Vcoverage[3549]);
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state))) {
        VL_COV_TOGGLE_CHG_ST_I(2, vlSymsp->__Vcoverage + 2917, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state, vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state);
        vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state 
            = vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__next_state;
    }
}

void Vtop___024root___nba_comb__TOP__7(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__7\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__val_tready = ((IData)(vlSelfRef.top_slave_module__DOT__matcher_en)
                                                    ? 
                                                   ([&]() {
                ++(vlSymsp->__Vcoverage[859]);
            }(), (IData)(vlSelfRef.top_slave_module__DOT__matcher_tready))
                                                    : 
                                                   ([&]() {
                ++(vlSymsp->__Vcoverage[860]);
            }(), 1U));
    if (((IData)(vlSelfRef.top_slave_module__DOT__val_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__val_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 759, vlSelfRef.top_slave_module__DOT__val_tready, vlSelfRef.top_slave_module__DOT____Vtogcov__val_tready);
        vlSelfRef.top_slave_module__DOT____Vtogcov__val_tready 
            = vlSelfRef.top_slave_module__DOT__val_tready;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready 
        = vlSelfRef.top_slave_module__DOT__val_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2271, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready;
    }
}

void Vtop___024root___nba_comb__TOP__8(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__8\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance 
        = (1U & ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid)) 
                 | (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2405, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready 
        = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2183, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__gb_tready = vlSelfRef.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__gb_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 673, vlSelfRef.top_slave_module__DOT__gb_tready, vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tready);
        vlSelfRef.top_slave_module__DOT____Vtogcov__gb_tready 
            = vlSelfRef.top_slave_module__DOT__gb_tready;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready 
        = vlSelfRef.top_slave_module__DOT__gb_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2012, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready;
    }
}

void Vtop___024root___nba_comb__TOP__9(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__9\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance 
        = (1U & ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid)) 
                 | (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 2100, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance;
    }
    vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready 
        = ((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance) 
           & ((~ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid)) 
              | (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte)));
    if (((IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 1988, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready, vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready);
        vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready 
            = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready;
    }
    vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY 
        = vlSelfRef.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready;
    if (((IData)(vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY) 
         ^ (IData)(vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TREADY))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 292, vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY, vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TREADY);
        vlSelfRef.top_slave_module__DOT____Vtogcov__S_AXIS_TREADY 
            = vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY;
    }
    vlSelfRef.S_AXIS_TREADY = vlSelfRef.top_slave_module__DOT__S_AXIS_TREADY;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x0000000000000082ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x000000000000000aULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000012ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000091ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x000000000000009bULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000000093ULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x000000000000009bULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x000000000000009fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtop___024root___nba_comb__TOP__9(vlSelf);
    }
}

void Vtop___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("src/top_slave_module.v", 14, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtop___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/top_slave_module.v", 14, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/top_slave_module.v", 14, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtop___024root___eval_phase__act(vlSelf));
    } while (Vtop___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ACLK & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ACLK");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARESETN & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ARESETN");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWADDR & 0xf000U)))) {
        Verilated::overWidthError("S_AXI_AWADDR");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_AWVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_AWVALID");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_WSTRB & 0xf0U)))) {
        Verilated::overWidthError("S_AXI_WSTRB");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_WVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_WVALID");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_BREADY & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_BREADY");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARADDR & 0xf000U)))) {
        Verilated::overWidthError("S_AXI_ARADDR");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_ARVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_ARVALID");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXI_RREADY & 0xfeU)))) {
        Verilated::overWidthError("S_AXI_RREADY");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXIS_TKEEP & 0xf0U)))) {
        Verilated::overWidthError("S_AXIS_TKEEP");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXIS_TLAST & 0xfeU)))) {
        Verilated::overWidthError("S_AXIS_TLAST");
    }
    if (VL_UNLIKELY(((vlSelfRef.S_AXIS_TVALID & 0xfeU)))) {
        Verilated::overWidthError("S_AXIS_TVALID");
    }
}
#endif  // VL_DEBUG
