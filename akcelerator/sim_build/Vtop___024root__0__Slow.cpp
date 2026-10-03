// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP = 0U;
    vlSelfRef.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP = 0U;
    vlSelfRef.top_slave_module__DOT__u_subchar_matcher__DOT__const_one = 1U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/top_slave_module.v", 14, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtop___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge top_slave_module.S_AXI_ACLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top_slave_module.u_axi_lite_regs.S_AXI_ACLK)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge top_slave_module.u_stream_gearbox.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge top_slave_module.u_stream_validator.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge top_slave_module.u_subchar_matcher.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge top_slave_module.u_subchar_matcher.clk_gated)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge top_slave_module.u_subchar_matcher.wide_comparator_inst.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge top_slave_module.u_hits_fifo.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->S_AXI_ACLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7115108760444335392ull);
    vlSelf->S_AXI_ARESETN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16564108875314912749ull);
    vlSelf->S_AXI_AWADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7249820531679878416ull);
    vlSelf->S_AXI_AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3343162114659797566ull);
    vlSelf->S_AXI_AWREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366131358349623502ull);
    vlSelf->S_AXI_WDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2828392700461750675ull);
    vlSelf->S_AXI_WSTRB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4962793874572111910ull);
    vlSelf->S_AXI_WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17481471765831387533ull);
    vlSelf->S_AXI_WREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9558255355627871445ull);
    vlSelf->S_AXI_BRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16379209716785644104ull);
    vlSelf->S_AXI_BVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8491200269863940811ull);
    vlSelf->S_AXI_BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10746966134613252980ull);
    vlSelf->S_AXI_ARADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5427398231156821096ull);
    vlSelf->S_AXI_ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3472573809630049122ull);
    vlSelf->S_AXI_ARREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4075110215027545435ull);
    vlSelf->S_AXI_RDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17991519142625388808ull);
    vlSelf->S_AXI_RRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1302565909793201625ull);
    vlSelf->S_AXI_RVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13807069984261668675ull);
    vlSelf->S_AXI_RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17202970332904958417ull);
    vlSelf->S_AXIS_TDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5473647762108982692ull);
    vlSelf->S_AXIS_TKEEP = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1827632054773088131ull);
    vlSelf->S_AXIS_TLAST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7948815275337729175ull);
    vlSelf->S_AXIS_TVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1585088477391758063ull);
    vlSelf->S_AXIS_TREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 401224786503413841ull);
    vlSelf->top_slave_module__DOT__S_AXI_ACLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4192707681749342824ull);
    vlSelf->top_slave_module__DOT__S_AXI_ARESETN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12157416433920589659ull);
    vlSelf->top_slave_module__DOT__S_AXI_AWADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15172885207830560823ull);
    vlSelf->top_slave_module__DOT__S_AXI_AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13990810441300310632ull);
    vlSelf->top_slave_module__DOT__S_AXI_AWREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12657169734093101050ull);
    vlSelf->top_slave_module__DOT__S_AXI_WDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8007367570549513334ull);
    vlSelf->top_slave_module__DOT__S_AXI_WSTRB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12031408306302925269ull);
    vlSelf->top_slave_module__DOT__S_AXI_WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6722176862698174069ull);
    vlSelf->top_slave_module__DOT__S_AXI_WREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8329711573281289861ull);
    vlSelf->top_slave_module__DOT__S_AXI_BRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6899808922134358861ull);
    vlSelf->top_slave_module__DOT__S_AXI_BVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2888796411607706253ull);
    vlSelf->top_slave_module__DOT__S_AXI_BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5036292667101743903ull);
    vlSelf->top_slave_module__DOT__S_AXI_ARADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1651507265392647858ull);
    vlSelf->top_slave_module__DOT__S_AXI_ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137333454873143606ull);
    vlSelf->top_slave_module__DOT__S_AXI_ARREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9391436191190555607ull);
    vlSelf->top_slave_module__DOT__S_AXI_RDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14507676478983683864ull);
    vlSelf->top_slave_module__DOT__S_AXI_RRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2792727165410551750ull);
    vlSelf->top_slave_module__DOT__S_AXI_RVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13166770304199218305ull);
    vlSelf->top_slave_module__DOT__S_AXI_RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2785480153263256690ull);
    vlSelf->top_slave_module__DOT__S_AXIS_TDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9699731768345103829ull);
    vlSelf->top_slave_module__DOT__S_AXIS_TKEEP = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12679792918144718247ull);
    vlSelf->top_slave_module__DOT__S_AXIS_TLAST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2729194559632490091ull);
    vlSelf->top_slave_module__DOT__S_AXIS_TVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4785559506083067472ull);
    vlSelf->top_slave_module__DOT__S_AXIS_TREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13823682107132968571ull);
    vlSelf->top_slave_module__DOT__rst_n_meta = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10223244633662303373ull);
    vlSelf->top_slave_module__DOT__rst_n_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2808062480793807328ull);
    vlSelf->top_slave_module__DOT__sys_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7061633381663375268ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__sig_pattern_in, __VscopeHash, 59439009823151892ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__sig_mask_in, __VscopeHash, 1038036661993508694ull);
    vlSelf->top_slave_module__DOT__sig_pattern_len_full = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16960802077831609970ull);
    vlSelf->top_slave_module__DOT__sig_operation_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9716057882981085106ull);
    vlSelf->top_slave_module__DOT__sig_final_char_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9750009461788964823ull);
    vlSelf->top_slave_module__DOT__sig_char_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13235398927733829594ull);
    vlSelf->top_slave_module__DOT__sig_encoding_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3973233730320684459ull);
    vlSelf->top_slave_module__DOT__sig_error_position = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15897675827341509948ull);
    vlSelf->top_slave_module__DOT__sig_match_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15587630173007961342ull);
    vlSelf->top_slave_module__DOT__sig_match_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14537277353351121232ull);
    vlSelf->top_slave_module__DOT__sig_fifo_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11521170965647003111ull);
    vlSelf->top_slave_module__DOT__sig_fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14299128526685854878ull);
    vlSelf->top_slave_module__DOT__sig_fifo_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2655625123413569213ull);
    vlSelf->top_slave_module__DOT__sig_pattern_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4984745909093659711ull);
    vlSelf->top_slave_module__DOT__gb_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12241810258013465662ull);
    vlSelf->top_slave_module__DOT__gb_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5217533956085935380ull);
    vlSelf->top_slave_module__DOT__gb_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12388829503928060280ull);
    vlSelf->top_slave_module__DOT__gb_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8234401580396512951ull);
    vlSelf->top_slave_module__DOT__val_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14173478866667906495ull);
    vlSelf->top_slave_module__DOT__val_tpos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8489713617580512490ull);
    vlSelf->top_slave_module__DOT__val_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12648418567910929178ull);
    vlSelf->top_slave_module__DOT__val_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3991096633663284640ull);
    vlSelf->top_slave_module__DOT__val_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2152641300101264790ull);
    vlSelf->top_slave_module__DOT__matcher_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7459992820608578420ull);
    vlSelf->top_slave_module__DOT__matcher_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4434389003710449380ull);
    vlSelf->top_slave_module__DOT__matcher_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11481202938259228598ull);
    vlSelf->top_slave_module__DOT__matcher_tpos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7478395470631894481ull);
    vlSelf->top_slave_module__DOT__matcher_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15110928528503368174ull);
    vlSelf->top_slave_module__DOT__matcher_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14367808842168720567ull);
    vlSelf->top_slave_module__DOT__hit_data_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17729984165987336436ull);
    vlSelf->top_slave_module__DOT__hit_valid_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10467974958501823032ull);
    vlSelf->top_slave_module__DOT__fifo_count_wire = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14589227468675557262ull);
    vlSelf->top_slave_module__DOT__fifo_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3066940418466103905ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_ACLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14968719099187800165ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_ARESETN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11182600153484684703ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_AWADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7609333520872841066ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9884874052268449563ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_AWREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9229323537440402332ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_WDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17961306627506445582ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_WSTRB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2441959114579439235ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16598379614917920309ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_WREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1982367761759010333ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_BRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2516209702338518604ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_BVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15215670544162655820ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1665907689172388495ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_ARADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1283672911791924113ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12317504076427716660ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_ARREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10516666919703104623ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_RDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2104173420620726995ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_RRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7349941862493985811ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_RVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2819466773565639485ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXI_RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2592190248156197537ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXIS_TDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10158155444955044311ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXIS_TKEEP = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5346110504476369684ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXIS_TLAST = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5455759243218464212ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXIS_TVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18360118668207846072ull);
    vlSelf->top_slave_module__DOT____Vtogcov__S_AXIS_TREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14515152745077183057ull);
    vlSelf->top_slave_module__DOT____Vtogcov__rst_n_meta = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15599806096248430530ull);
    vlSelf->top_slave_module__DOT____Vtogcov__rst_n_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17086727834343028789ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sys_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9146514367125039583ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_pattern_len_full = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4054539215730016484ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_operation_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 829279717342493572ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_final_char_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9368880787692233404ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_char_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18406467481940540513ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_encoding_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7495566459363485313ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_error_position = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6342931858387128553ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_match_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5511026053913955458ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_match_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15609310446314532297ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_fifo_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8621426223654101019ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12733848824914809638ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_fifo_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4099831363640701004ull);
    vlSelf->top_slave_module__DOT____Vtogcov__sig_pattern_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11650420407873608266ull);
    vlSelf->top_slave_module__DOT____Vtogcov__gb_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15479986929964345890ull);
    vlSelf->top_slave_module__DOT____Vtogcov__gb_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16759904926852567568ull);
    vlSelf->top_slave_module__DOT____Vtogcov__gb_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18352365488276977204ull);
    vlSelf->top_slave_module__DOT____Vtogcov__gb_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12871735654835198143ull);
    vlSelf->top_slave_module__DOT____Vtogcov__val_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13806552258746417920ull);
    vlSelf->top_slave_module__DOT____Vtogcov__val_tpos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7653908605943456428ull);
    vlSelf->top_slave_module__DOT____Vtogcov__val_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5640281991652873862ull);
    vlSelf->top_slave_module__DOT____Vtogcov__val_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14937815844605324632ull);
    vlSelf->top_slave_module__DOT____Vtogcov__val_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11199064065601657971ull);
    vlSelf->top_slave_module__DOT____Vtogcov__matcher_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3686460253471692664ull);
    vlSelf->top_slave_module__DOT____Vtogcov__matcher_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14602595682383911928ull);
    vlSelf->top_slave_module__DOT____Vtogcov__matcher_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11563371013069576690ull);
    vlSelf->top_slave_module__DOT____Vtogcov__matcher_tpos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16855697589309518062ull);
    vlSelf->top_slave_module__DOT____Vtogcov__matcher_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14256673349180344948ull);
    vlSelf->top_slave_module__DOT____Vtogcov__matcher_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3733949347255634874ull);
    vlSelf->top_slave_module__DOT____Vtogcov__hit_data_wire = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10184460853541441050ull);
    vlSelf->top_slave_module__DOT____Vtogcov__hit_valid_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13545037518119723240ull);
    vlSelf->top_slave_module__DOT____Vtogcov__fifo_count_wire = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6665692000908270351ull);
    vlSelf->top_slave_module__DOT____Vtogcov__fifo_wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14337242431387023010ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2039815720953422569ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18186666504462414061ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11249666430394409728ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6817162704472068949ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14309615697359062676ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7048367509113699125ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12766213208957705948ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9588333475242123506ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10706581117921751690ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15152529078977382064ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5297126987941862339ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10036889574197179261ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14702540037569323449ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15421980047644575753ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13606422875448440569ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12760085099703407796ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8122104291687545153ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11508435490278380047ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8799794690857407492ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in, __VscopeHash, 10921896681328193942ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in, __VscopeHash, 9367188469323444158ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2114631295157990415ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7757342106478921317ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2555617222461409487ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12942268923879514845ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5246448060962474818ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__error_position = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8610437975614608209ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__match_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4781613058454050974ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3527250640449691388ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10253258629519141913ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9100398950108050302ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14740043109500201002ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1922465558835890428ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9391276302350574827ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10591088592187393280ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9602401970344931365ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16885735137622166197ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6475492998014219267ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13261542439736637282ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 396588778290227013ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4280326170024861111ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1891034432613317921ull);
    }
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18270219474686909491ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6009977869620712306ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13333372240125158993ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11504302479073596061ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7230333257945714152ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370056713310907628ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16716136757723417489ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10715624577726359367ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 18278695228196809199ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 402964950744125584ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9315429905320933814ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ACLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18412328511871198620ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARESETN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9368561343316181967ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5383061421444490042ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10286131479385320715ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_AWREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5304963550730759175ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10241157818857265216ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WSTRB = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15779742876964755277ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2189336004163005021ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_WREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7275482461026548939ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 745253062311017571ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7483375314307511485ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_BREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13776391138817980064ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARADDR = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2282199462878783217ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4718637646225626266ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_ARREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924280685680056139ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RDATA = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9474196301953256119ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RRESP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11607344827255041966ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RVALID = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17807210795499211360ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__S_AXI_RREADY = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13351387465208773066ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__pattern_len = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 698008963270179939ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__operation_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7702055722518994680ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__final_char_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1102922112704596919ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__char_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1777434683981223966ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__encoding_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4026885150792375511ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__error_position = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1554161113122977288ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10710612786675598363ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__match_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14001170198549656334ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 208501173531052934ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6953570687525934449ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__fifo_rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3539709341341149059ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10713884002307857250ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17439768201019861820ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 729501218191144475ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216161924519174749ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16775064458774218289ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4206247920054842748ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__awaddr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5656905175294523222ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__axi_araddr_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16701625864245009244ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_fifo_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17719964261563632159ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__latched_data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2206862414824184378ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__sending_valid_fifo_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17821146332398498921ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__slv_reg_wren = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2983537679200798831ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_pat_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13565236359062849795ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__write_mask_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 823000797126891965ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_pat_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5393491122858243278ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__read_mask_offset = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15584664646371465561ull);
    vlSelf->top_slave_module__DOT__u_axi_lite_regs__DOT____Vtogcov__cpu_reads_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15999958885993716919ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15583666322119162572ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5789381316641239265ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1200985220216604870ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13185292179795307433ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1787551993826531755ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13610860818532130901ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12076362954426441326ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13070014365680427635ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12514113188146495363ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17007017968561675621ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467739281745392985ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__buf_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3688710076714115191ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14018692719794831622ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__buf_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2631090773201351359ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 191393857547828770ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16683704348319261055ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__max_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2143101902276941182ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17788459611079349629ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11760047013433022942ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14624119209926112062ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15864715982519830404ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11004422976191420980ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14915884352341873936ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tkeep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14366143364659713734ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16062758509552847550ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7433850983009891576ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2001213431949048987ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12166730443217271547ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17149683042619192020ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2059808158674233515ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1283102607012646350ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9257986617820128414ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_keep = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14822480762883945319ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4417243968111036872ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15740771734902811787ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__buf_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2174563923711217895ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__max_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17953017029624858625ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__is_last_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1987318536469254742ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__pipe_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14638544105143074638ull);
    vlSelf->top_slave_module__DOT__u_stream_gearbox__DOT____Vtogcov__ext_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5007281250262480839ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4293776062001480369ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3278293314462800388ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4537306846137702554ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11504010723119890150ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18119487993769471359ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12783256092021586257ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3255084696370877065ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6636771699463588102ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16302301109750892771ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__m_current_pos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8805456798689519469ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4921893781986507763ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__encoding_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255596319131586441ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__error_position = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6312455704744741522ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__final_char_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 811047176574017985ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__char_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8854561059826434786ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__pipe_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3943117618340182283ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__utf8_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8781456632593585769ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4021303916955954796ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__is_new_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4141849087534238204ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__expect_e0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9835467773667509759ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__expect_ed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12302449645858795515ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__expect_f0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4851375030410815518ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__expect_f4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2953027998177806556ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__active_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12978217898314915437ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__active_pos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10062509624616188178ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7808686133976183533ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1675830395178869412ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5303077437508041339ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7535685321043951983ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7158029249487244529ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5479137261238853982ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5733490112066362901ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1134828837296124025ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18379221918922944015ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12125578683653313199ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_current_pos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13519681840341208687ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__m_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16055013890397521186ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__encoding_error = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2344146295800462839ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__error_position = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14345599700999607874ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__final_char_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4561478387463894554ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1958277881876245361ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__pipe_advance = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2044055862019728360ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__utf8_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8880200227600456043ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_pos_counter = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12036580466033996517ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__is_new_file = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6211141694285490399ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_e0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14047394126142700124ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_ed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6275225100271109525ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11812640139011709399ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__expect_f4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14657559355943353153ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12491375221429049299ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__active_pos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12881373039766636932ull);
    vlSelf->top_slave_module__DOT__u_stream_validator__DOT____Vtogcov__char_completes_this_byte = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17543002055884093553ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14093924955311121658ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6306415216875664273ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11779622102683297914ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8337893024836159396ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10611723372180685043ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12937768046056867854ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12864836015187796863ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in, __VscopeHash, 9885024170039716765ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__mask_in, __VscopeHash, 5464672427365413761ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11830453377635128750ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 27595497622888354ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6762257217416140501ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3291423898631440637ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3497282571790080521ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__match_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11667578030896350163ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2992251888571551623ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11830350525909733583ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13462000707862136463ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12921256803283472520ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg, __VscopeHash, 10700934224215289904ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16387159801452113831ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__match_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7476376116977134125ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2792230980729786161ull);
    }
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16676915110731876201ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 529182678137254274ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11736214669291765671ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11780685574139990334ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__match_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1152010653917406503ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6459918974783348043ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7389115041256623259ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7339767672464205721ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__const_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18105094211537854283ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17797604068964316437ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8729249546897764680ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3955729758500396249ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14040826938377008470ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 344102000414921739ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9477814607331849958ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13092229357687484506ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tpos = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2423707995930863189ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15492284988835192380ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_tready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10219753434403778310ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 113900567702904652ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__matcher_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16526360188705157449ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3774647889108610947ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__hit_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17231810912197792211ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__fifo_count_in = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9223956742051318252ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12651221529040023614ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_count_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17898560217073243798ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7215234330290191700ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__next_state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9399597329594306017ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__flush_counter = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2377249971956685124ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__data_in_fifo = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12562569249792296051ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_found = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16736049113825216730ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10966043132935593730ull);
    }
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_start_offset = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8589330020343743213ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_en_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6699984526949434756ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__shift_reg_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4612640489148300102ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__match_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 274654527122708340ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__ready_to_accept = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3331786985968682571ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__s_axis_txfer = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10339554073553294077ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pattern_len_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11649933806431838314ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__const_one = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8996424799779145175ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__pos_diff_ext = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 6595206320697772037ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__datapath_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6450283775412537167ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT____Vtogcov__clk_gated = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11245092774910702626ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16903392560791807804ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1816085038537405220ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg, __VscopeHash, 11502768651404444313ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in, __VscopeHash, 2042742364691329913ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in, __VscopeHash, 12442258427312366239ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3933151280595314169ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3619564028799584026ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch, __VscopeHash, 16401736909611523874ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1351692187529600409ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3421975517385721933ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9746720347379764591ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 855163317444660715ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9963063867539021883ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 815854662578058736ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__match_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3241311559175152589ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__chunk_match = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12909281810069498300ull);
    vlSelf->top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT____Vtogcov__valid_pipe = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17981768244166943664ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3026765498821299571ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11180835417313450788ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9706833336295881528ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15340366960527940581ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13458110240619840671ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9633940076401542133ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8414601164662145698ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__count_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4420790514484943721ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3631386401170435436ull);
    }
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12143457650114372759ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17772934828047987877ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1225237104685270761ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1015289129063995393ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218283044760114609ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17215977511994263488ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4264339848734313027ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2031061438006076541ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6931998377134497203ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9244108202770225923ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__data_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1267170227563114488ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13676074888113544456ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count_out = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5404277679406111125ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11683632928629882267ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_ptr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4640620342612976493ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__count = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9299726783273303417ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__wr_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9909116438311811024ull);
    vlSelf->top_slave_module__DOT__u_hits_fifo__DOT____Vtogcov__rd_allowed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11590503553377084235ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__S_AXI_ACLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13302807378440083617ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6259459545961600709ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_stream_gearbox__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16801159722018901057ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_stream_validator__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8395833616346380435ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13525819922073800570ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2486755913213597609ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5176513779904612353ull);
    vlSelf->__Vtrigprevexpr___TOP__top_slave_module__DOT__u_hits_fifo__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11331672456542121790ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___configure_coverage\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "src/top_slave_module.v", 25, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_ACLK");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2]), first, "src/top_slave_module.v", 26, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_ARESETN");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[4]), first, "src/top_slave_module.v", 28, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_AWADDR");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[28]), first, "src/top_slave_module.v", 29, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_AWVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[30]), first, "src/top_slave_module.v", 30, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_AWREADY");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[32]), first, "src/top_slave_module.v", 32, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_WDATA");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[96]), first, "src/top_slave_module.v", 33, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_WSTRB");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[104]), first, "src/top_slave_module.v", 34, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_WVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[106]), first, "src/top_slave_module.v", 35, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_WREADY");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[108]), first, "src/top_slave_module.v", 37, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_BRESP");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[112]), first, "src/top_slave_module.v", 38, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_BVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[114]), first, "src/top_slave_module.v", 39, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_BREADY");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[116]), first, "src/top_slave_module.v", 41, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_ARADDR");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[140]), first, "src/top_slave_module.v", 42, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_ARVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[142]), first, "src/top_slave_module.v", 43, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_ARREADY");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[144]), first, "src/top_slave_module.v", 45, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_RDATA");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[208]), first, "src/top_slave_module.v", 46, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_RRESP");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[212]), first, "src/top_slave_module.v", 47, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_RVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[214]), first, "src/top_slave_module.v", 48, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXI_RREADY");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[216]), first, "src/top_slave_module.v", 51, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXIS_TDATA");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[280]), first, "src/top_slave_module.v", 52, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXIS_TKEEP");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[288]), first, "src/top_slave_module.v", 53, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXIS_TLAST");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[290]), first, "src/top_slave_module.v", 54, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXIS_TVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[292]), first, "src/top_slave_module.v", 55, 49, ".top_slave_module", "v_toggle/top_slave_module", "S_AXIS_TREADY");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[294]), first, "src/top_slave_module.v", 60, 9, ".top_slave_module", "v_toggle/top_slave_module", "rst_n_meta");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[296]), first, "src/top_slave_module.v", 61, 9, ".top_slave_module", "v_toggle/top_slave_module", "rst_n_sync");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[298]), first, "src/top_slave_module.v", 64, 9, ".top_slave_module", "v_branch/top_slave_module", "if", "64-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[299]), first, "src/top_slave_module.v", 64, 10, ".top_slave_module", "v_branch/top_slave_module", "else", "67-69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[300]), first, "src/top_slave_module.v", 64, 13, ".top_slave_module", "v_expr/top_slave_module", "(S_AXI_ARESETN==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "src/top_slave_module.v", 64, 13, ".top_slave_module", "v_expr/top_slave_module", "(S_AXI_ARESETN==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "src/top_slave_module.v", 63, 5, ".top_slave_module", "v_line/top_slave_module", "block", "63");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[303]), first, "src/top_slave_module.v", 73, 10, ".top_slave_module", "v_toggle/top_slave_module", "sys_rst_n");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[305]), first, "src/top_slave_module.v", 79, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_pattern_len_full");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[369]), first, "src/top_slave_module.v", 80, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_operation_mode");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[373]), first, "src/top_slave_module.v", 81, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_final_char_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[437]), first, "src/top_slave_module.v", 82, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_char_count_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[439]), first, "src/top_slave_module.v", 83, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_encoding_error");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[441]), first, "src/top_slave_module.v", 84, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_error_position");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[505]), first, "src/top_slave_module.v", 85, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_match_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[569]), first, "src/top_slave_module.v", 86, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_match_count_valid");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[571]), first, "src/top_slave_module.v", 88, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_fifo_data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[635]), first, "src/top_slave_module.v", 89, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_fifo_empty");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[637]), first, "src/top_slave_module.v", 90, 35, ".top_slave_module", "v_toggle/top_slave_module", "sig_fifo_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[639]), first, "src/top_slave_module.v", 94, 53, ".top_slave_module", "v_toggle/top_slave_module", "sig_pattern_len");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[655]), first, "src/top_slave_module.v", 98, 35, ".top_slave_module", "v_toggle/top_slave_module", "gb_tdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[671]), first, "src/top_slave_module.v", 99, 35, ".top_slave_module", "v_toggle/top_slave_module", "gb_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[673]), first, "src/top_slave_module.v", 100, 35, ".top_slave_module", "v_toggle/top_slave_module", "gb_tready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[675]), first, "src/top_slave_module.v", 101, 35, ".top_slave_module", "v_toggle/top_slave_module", "gb_tlast");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[677]), first, "src/top_slave_module.v", 105, 35, ".top_slave_module", "v_toggle/top_slave_module", "val_tdata");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[693]), first, "src/top_slave_module.v", 106, 35, ".top_slave_module", "v_toggle/top_slave_module", "val_tpos");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[757]), first, "src/top_slave_module.v", 107, 35, ".top_slave_module", "v_toggle/top_slave_module", "val_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[759]), first, "src/top_slave_module.v", 108, 35, ".top_slave_module", "v_toggle/top_slave_module", "val_tready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[761]), first, "src/top_slave_module.v", 109, 35, ".top_slave_module", "v_toggle/top_slave_module", "val_tlast");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[763]), first, "src/top_slave_module.v", 113, 32, ".top_slave_module", "v_toggle/top_slave_module", "matcher_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[765]), first, "src/top_slave_module.v", 115, 32, ".top_slave_module", "v_toggle/top_slave_module", "matcher_tvalid");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[767]), first, "src/top_slave_module.v", 115, 62, ".top_slave_module", "v_branch/top_slave_module", "cond_then", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[768]), first, "src/top_slave_module.v", 115, 63, ".top_slave_module", "v_branch/top_slave_module", "cond_else", "115");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[769]), first, "src/top_slave_module.v", 116, 32, ".top_slave_module", "v_toggle/top_slave_module", "matcher_tdata");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[785]), first, "src/top_slave_module.v", 116, 61, ".top_slave_module", "v_branch/top_slave_module", "cond_then", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[786]), first, "src/top_slave_module.v", 116, 62, ".top_slave_module", "v_branch/top_slave_module", "cond_else", "116");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[787]), first, "src/top_slave_module.v", 117, 32, ".top_slave_module", "v_toggle/top_slave_module", "matcher_tpos");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[851]), first, "src/top_slave_module.v", 117, 60, ".top_slave_module", "v_branch/top_slave_module", "cond_then", "117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[852]), first, "src/top_slave_module.v", 117, 61, ".top_slave_module", "v_branch/top_slave_module", "cond_else", "117");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[853]), first, "src/top_slave_module.v", 118, 32, ".top_slave_module", "v_toggle/top_slave_module", "matcher_tlast");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[855]), first, "src/top_slave_module.v", 118, 61, ".top_slave_module", "v_branch/top_slave_module", "cond_then", "118");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[856]), first, "src/top_slave_module.v", 118, 62, ".top_slave_module", "v_branch/top_slave_module", "cond_else", "118");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[857]), first, "src/top_slave_module.v", 122, 32, ".top_slave_module", "v_toggle/top_slave_module", "matcher_tready");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[859]), first, "src/top_slave_module.v", 123, 58, ".top_slave_module", "v_branch/top_slave_module", "cond_then", "123");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[860]), first, "src/top_slave_module.v", 123, 59, ".top_slave_module", "v_branch/top_slave_module", "cond_else", "123");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[861]), first, "src/top_slave_module.v", 126, 33, ".top_slave_module", "v_toggle/top_slave_module", "hit_data_wire");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[925]), first, "src/top_slave_module.v", 127, 33, ".top_slave_module", "v_toggle/top_slave_module", "hit_valid_wire");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[927]), first, "src/top_slave_module.v", 128, 33, ".top_slave_module", "v_toggle/top_slave_module", "fifo_count_wire");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[937]), first, "src/top_slave_module.v", 131, 10, ".top_slave_module", "v_toggle/top_slave_module", "fifo_wr_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[939]), first, "src/axi_lite_manager/axi_lite_registers.v", 15, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_ACLK");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[941]), first, "src/axi_lite_manager/axi_lite_registers.v", 16, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_ARESETN");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[943]), first, "src/axi_lite_manager/axi_lite_registers.v", 19, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_AWADDR");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[967]), first, "src/axi_lite_manager/axi_lite_registers.v", 20, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_AWVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[969]), first, "src/axi_lite_manager/axi_lite_registers.v", 21, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_AWREADY");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[971]), first, "src/axi_lite_manager/axi_lite_registers.v", 22, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_WDATA");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[1035]), first, "src/axi_lite_manager/axi_lite_registers.v", 23, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_WSTRB");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1043]), first, "src/axi_lite_manager/axi_lite_registers.v", 24, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_WVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1045]), first, "src/axi_lite_manager/axi_lite_registers.v", 25, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_WREADY");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[1047]), first, "src/axi_lite_manager/axi_lite_registers.v", 26, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_BRESP");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1051]), first, "src/axi_lite_manager/axi_lite_registers.v", 27, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_BVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1053]), first, "src/axi_lite_manager/axi_lite_registers.v", 28, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_BREADY");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1055]), first, "src/axi_lite_manager/axi_lite_registers.v", 31, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_ARADDR");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1079]), first, "src/axi_lite_manager/axi_lite_registers.v", 32, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_ARVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1081]), first, "src/axi_lite_manager/axi_lite_registers.v", 33, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_ARREADY");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1083]), first, "src/axi_lite_manager/axi_lite_registers.v", 34, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_RDATA");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[1147]), first, "src/axi_lite_manager/axi_lite_registers.v", 35, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_RRESP");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1151]), first, "src/axi_lite_manager/axi_lite_registers.v", 36, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_RVALID");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1153]), first, "src/axi_lite_manager/axi_lite_registers.v", 37, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "S_AXI_RREADY");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1155]), first, "src/axi_lite_manager/axi_lite_registers.v", 42, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "pattern_len");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[1219]), first, "src/axi_lite_manager/axi_lite_registers.v", 43, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "operation_mode");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1223]), first, "src/axi_lite_manager/axi_lite_registers.v", 46, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "final_char_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1287]), first, "src/axi_lite_manager/axi_lite_registers.v", 47, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "char_count_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1289]), first, "src/axi_lite_manager/axi_lite_registers.v", 48, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "encoding_error");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1291]), first, "src/axi_lite_manager/axi_lite_registers.v", 49, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "error_position");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1355]), first, "src/axi_lite_manager/axi_lite_registers.v", 52, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "match_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1419]), first, "src/axi_lite_manager/axi_lite_registers.v", 53, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "match_count_valid");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1421]), first, "src/axi_lite_manager/axi_lite_registers.v", 56, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "fifo_data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1485]), first, "src/axi_lite_manager/axi_lite_registers.v", 57, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "fifo_empty");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1487]), first, "src/axi_lite_manager/axi_lite_registers.v", 58, 49, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "fifo_rd_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1489]), first, "src/axi_lite_manager/axi_lite_registers.v", 73, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_awready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1491]), first, "src/axi_lite_manager/axi_lite_registers.v", 74, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_wready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1493]), first, "src/axi_lite_manager/axi_lite_registers.v", 75, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_bvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1495]), first, "src/axi_lite_manager/axi_lite_registers.v", 76, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_arready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1497]), first, "src/axi_lite_manager/axi_lite_registers.v", 77, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_rvalid");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1499]), first, "src/axi_lite_manager/axi_lite_registers.v", 78, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_rdata");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1563]), first, "src/axi_lite_manager/axi_lite_registers.v", 79, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "awaddr");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1587]), first, "src/axi_lite_manager/axi_lite_registers.v", 80, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "axi_araddr_reg");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1611]), first, "src/axi_lite_manager/axi_lite_registers.v", 85, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "latched_fifo_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1675]), first, "src/axi_lite_manager/axi_lite_registers.v", 86, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "latched_data_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1677]), first, "src/axi_lite_manager/axi_lite_registers.v", 87, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "sending_valid_fifo_data");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1679]), first, "src/axi_lite_manager/axi_lite_registers.v", 93, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "slv_reg_wren");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1681]), first, "src/axi_lite_manager/axi_lite_registers.v", 94, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "write_pat_offset");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1705]), first, "src/axi_lite_manager/axi_lite_registers.v", 95, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "write_mask_offset");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1729]), first, "src/axi_lite_manager/axi_lite_registers.v", 96, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "read_pat_offset");
    vlSelf->__vlCoverToggleInsert(0, 11, 1, &(vlSymsp->__Vcoverage[1753]), first, "src/axi_lite_manager/axi_lite_registers.v", 97, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "read_mask_offset");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1777]), first, "src/axi_lite_manager/axi_lite_registers.v", 98, 39, ".top_slave_module.u_axi_lite_regs", "v_toggle/axi_lite_registers__CBc", "cpu_reads_fifo");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1779]), first, "src/axi_lite_manager/axi_lite_registers.v", 140, 13, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "140-142");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1780]), first, "src/axi_lite_manager/axi_lite_registers.v", 146, 59, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_awready==0 && S_AXI_AWVALID==1 && S_AXI_WVALID==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1781]), first, "src/axi_lite_manager/axi_lite_registers.v", 146, 59, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_WVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1782]), first, "src/axi_lite_manager/axi_lite_registers.v", 146, 59, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_AWVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1783]), first, "src/axi_lite_manager/axi_lite_registers.v", 146, 59, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_awready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1784]), first, "src/axi_lite_manager/axi_lite_registers.v", 146, 78, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_then", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1785]), first, "src/axi_lite_manager/axi_lite_registers.v", 146, 79, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_else", "146");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1786]), first, "src/axi_lite_manager/axi_lite_registers.v", 147, 57, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_wready==0 && S_AXI_WVALID==1 && S_AXI_AWVALID==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1787]), first, "src/axi_lite_manager/axi_lite_registers.v", 147, 57, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_AWVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1788]), first, "src/axi_lite_manager/axi_lite_registers.v", 147, 57, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_WVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1789]), first, "src/axi_lite_manager/axi_lite_registers.v", 147, 57, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_wready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1790]), first, "src/axi_lite_manager/axi_lite_registers.v", 147, 77, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_then", "147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1791]), first, "src/axi_lite_manager/axi_lite_registers.v", 147, 78, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_else", "147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1792]), first, "src/axi_lite_manager/axi_lite_registers.v", 152, 18, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "152-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1793]), first, "src/axi_lite_manager/axi_lite_registers.v", 152, 19, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1794]), first, "src/axi_lite_manager/axi_lite_registers.v", 152, 35, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_BREADY==1 && axi_bvalid==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1795]), first, "src/axi_lite_manager/axi_lite_registers.v", 152, 35, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_bvalid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1796]), first, "src/axi_lite_manager/axi_lite_registers.v", 152, 35, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_BREADY==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1797]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 13, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "elsif", "150-151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1798]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 75, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_awready==1 && S_AXI_AWVALID==1 && axi_bvalid==0 && axi_wready==1 && S_AXI_WVALID==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1799]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 75, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_WVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1800]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 75, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_wready==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1801]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 75, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_bvalid==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1802]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 75, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_AWVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1803]), first, "src/axi_lite_manager/axi_lite_registers.v", 150, 75, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_awready==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1804]), first, "src/axi_lite_manager/axi_lite_registers.v", 156, 13, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1805]), first, "src/axi_lite_manager/axi_lite_registers.v", 156, 14, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1806]), first, "src/axi_lite_manager/axi_lite_registers.v", 156, 47, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_awready==0 && S_AXI_AWVALID==1 && S_AXI_WVALID==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1807]), first, "src/axi_lite_manager/axi_lite_registers.v", 156, 47, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_WVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1808]), first, "src/axi_lite_manager/axi_lite_registers.v", 156, 47, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_AWVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1809]), first, "src/axi_lite_manager/axi_lite_registers.v", 156, 47, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_awready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1810]), first, "src/axi_lite_manager/axi_lite_registers.v", 161, 21, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "161");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1811]), first, "src/axi_lite_manager/axi_lite_registers.v", 161, 22, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1812]), first, "src/axi_lite_manager/axi_lite_registers.v", 162, 21, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1813]), first, "src/axi_lite_manager/axi_lite_registers.v", 162, 22, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1814]), first, "src/axi_lite_manager/axi_lite_registers.v", 163, 21, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1815]), first, "src/axi_lite_manager/axi_lite_registers.v", 163, 22, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1816]), first, "src/axi_lite_manager/axi_lite_registers.v", 164, 21, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "164");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1817]), first, "src/axi_lite_manager/axi_lite_registers.v", 164, 22, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1818]), first, "src/axi_lite_manager/axi_lite_registers.v", 167, 21, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "167");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1819]), first, "src/axi_lite_manager/axi_lite_registers.v", 167, 22, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1820]), first, "src/axi_lite_manager/axi_lite_registers.v", 171, 25, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "171-172");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1821]), first, "src/axi_lite_manager/axi_lite_registers.v", 171, 26, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1822]), first, "src/axi_lite_manager/axi_lite_registers.v", 170, 21, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1823]), first, "src/axi_lite_manager/axi_lite_registers.v", 178, 25, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1824]), first, "src/axi_lite_manager/axi_lite_registers.v", 178, 26, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1825]), first, "src/axi_lite_manager/axi_lite_registers.v", 177, 21, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1826]), first, "src/axi_lite_manager/axi_lite_registers.v", 176, 22, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "176-177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1827]), first, "src/axi_lite_manager/axi_lite_registers.v", 176, 23, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1828]), first, "src/axi_lite_manager/axi_lite_registers.v", 176, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((awaddr >= ADDR_MASK_BASE)==1 && (awaddr < ADDR_MASK_HIGH)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1829]), first, "src/axi_lite_manager/axi_lite_registers.v", 176, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((awaddr < ADDR_MASK_HIGH)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1830]), first, "src/axi_lite_manager/axi_lite_registers.v", 176, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((awaddr >= ADDR_MASK_BASE)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1831]), first, "src/axi_lite_manager/axi_lite_registers.v", 169, 22, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "elsif", "169-170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1832]), first, "src/axi_lite_manager/axi_lite_registers.v", 169, 54, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((awaddr >= ADDR_PATTERN_BASE)==1 && (awaddr < ADDR_PATTERN_HIGH)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1833]), first, "src/axi_lite_manager/axi_lite_registers.v", 169, 54, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((awaddr < ADDR_PATTERN_HIGH)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1834]), first, "src/axi_lite_manager/axi_lite_registers.v", 169, 54, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((awaddr >= ADDR_PATTERN_BASE)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1835]), first, "src/axi_lite_manager/axi_lite_registers.v", 166, 22, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "elsif", "166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1836]), first, "src/axi_lite_manager/axi_lite_registers.v", 160, 17, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "elsif", "160");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1837]), first, "src/axi_lite_manager/axi_lite_registers.v", 159, 13, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1838]), first, "src/axi_lite_manager/axi_lite_registers.v", 159, 14, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1839]), first, "src/axi_lite_manager/axi_lite_registers.v", 134, 9, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "134-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1840]), first, "src/axi_lite_manager/axi_lite_registers.v", 134, 10, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "144,146-147");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1841]), first, "src/axi_lite_manager/axi_lite_registers.v", 134, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1842]), first, "src/axi_lite_manager/axi_lite_registers.v", 134, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1843]), first, "src/axi_lite_manager/axi_lite_registers.v", 133, 5, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "133");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1844]), first, "src/axi_lite_manager/axi_lite_registers.v", 200, 13, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "200");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1845]), first, "src/axi_lite_manager/axi_lite_registers.v", 200, 14, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1846]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 13, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "204-207");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1847]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 14, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1848]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(latched_data_valid==0 && fifo_empty==0 && fifo_rd_en==0 && cpu_reads_fifo==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1849]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(cpu_reads_fifo==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1850]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(fifo_rd_en==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1851]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(fifo_empty==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1852]), first, "src/axi_lite_manager/axi_lite_registers.v", 204, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(latched_data_valid==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1853]), first, "src/axi_lite_manager/axi_lite_registers.v", 192, 9, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "192-195");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1854]), first, "src/axi_lite_manager/axi_lite_registers.v", 192, 10, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "196-197");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1855]), first, "src/axi_lite_manager/axi_lite_registers.v", 192, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1856]), first, "src/axi_lite_manager/axi_lite_registers.v", 192, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1857]), first, "src/axi_lite_manager/axi_lite_registers.v", 191, 5, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "191");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1858]), first, "src/axi_lite_manager/axi_lite_registers.v", 219, 13, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "219-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1859]), first, "src/axi_lite_manager/axi_lite_registers.v", 219, 14, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "222-223");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1860]), first, "src/axi_lite_manager/axi_lite_registers.v", 219, 30, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_arready==0 && S_AXI_ARVALID==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1861]), first, "src/axi_lite_manager/axi_lite_registers.v", 219, 30, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1862]), first, "src/axi_lite_manager/axi_lite_registers.v", 219, 30, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_arready==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1863]), first, "src/axi_lite_manager/axi_lite_registers.v", 215, 9, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "215-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1864]), first, "src/axi_lite_manager/axi_lite_registers.v", 215, 10, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "218");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1865]), first, "src/axi_lite_manager/axi_lite_registers.v", 215, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1866]), first, "src/axi_lite_manager/axi_lite_registers.v", 215, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1867]), first, "src/axi_lite_manager/axi_lite_registers.v", 214, 5, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1868]), first, "src/axi_lite_manager/axi_lite_registers.v", 245, 60, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg == 12'h10)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1869]), first, "src/axi_lite_manager/axi_lite_registers.v", 245, 60, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg == 12'h10)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1870]), first, "src/axi_lite_manager/axi_lite_registers.v", 245, 74, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_then", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1871]), first, "src/axi_lite_manager/axi_lite_registers.v", 245, 75, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_else", "245");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1872]), first, "src/axi_lite_manager/axi_lite_registers.v", 254, 25, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(latched_data_valid==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1873]), first, "src/axi_lite_manager/axi_lite_registers.v", 254, 25, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(latched_data_valid==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1874]), first, "src/axi_lite_manager/axi_lite_registers.v", 249, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "249-254");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1875]), first, "src/axi_lite_manager/axi_lite_registers.v", 256, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "256");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1876]), first, "src/axi_lite_manager/axi_lite_registers.v", 257, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "257");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1877]), first, "src/axi_lite_manager/axi_lite_registers.v", 258, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "258");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1878]), first, "src/axi_lite_manager/axi_lite_registers.v", 259, 43, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(latched_data_valid==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1879]), first, "src/axi_lite_manager/axi_lite_registers.v", 259, 43, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(latched_data_valid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1880]), first, "src/axi_lite_manager/axi_lite_registers.v", 259, 64, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_then", "259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1881]), first, "src/axi_lite_manager/axi_lite_registers.v", 259, 65, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "cond_else", "259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1882]), first, "src/axi_lite_manager/axi_lite_registers.v", 259, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "259");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1883]), first, "src/axi_lite_manager/axi_lite_registers.v", 260, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "260");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1884]), first, "src/axi_lite_manager/axi_lite_registers.v", 261, 28, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "261");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1885]), first, "src/axi_lite_manager/axi_lite_registers.v", 266, 30, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "if", "266-267");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1886]), first, "src/axi_lite_manager/axi_lite_registers.v", 266, 31, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "else", "269");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1887]), first, "src/axi_lite_manager/axi_lite_registers.v", 266, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg >= ADDR_MASK_BASE)==1 && (axi_araddr_reg < ADDR_MASK_HIGH)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1888]), first, "src/axi_lite_manager/axi_lite_registers.v", 266, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg < ADDR_MASK_HIGH)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1889]), first, "src/axi_lite_manager/axi_lite_registers.v", 266, 67, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg >= ADDR_MASK_BASE)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1890]), first, "src/axi_lite_manager/axi_lite_registers.v", 264, 25, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "elsif", "264-265");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1891]), first, "src/axi_lite_manager/axi_lite_registers.v", 264, 65, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg >= ADDR_PATTERN_BASE)==1 && (axi_araddr_reg < ADDR_PATTERN_HIGH)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1892]), first, "src/axi_lite_manager/axi_lite_registers.v", 264, 65, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg < ADDR_PATTERN_HIGH)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1893]), first, "src/axi_lite_manager/axi_lite_registers.v", 264, 65, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "((axi_araddr_reg >= ADDR_PATTERN_BASE)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1894]), first, "src/axi_lite_manager/axi_lite_registers.v", 263, 21, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "case", "263");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1895]), first, "src/axi_lite_manager/axi_lite_registers.v", 241, 18, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "241-242,245,248");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1896]), first, "src/axi_lite_manager/axi_lite_registers.v", 241, 19, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1897]), first, "src/axi_lite_manager/axi_lite_registers.v", 241, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_arready==1 && S_AXI_ARVALID==1 && axi_rvalid==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1898]), first, "src/axi_lite_manager/axi_lite_registers.v", 241, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_rvalid==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1899]), first, "src/axi_lite_manager/axi_lite_registers.v", 241, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARVALID==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1900]), first, "src/axi_lite_manager/axi_lite_registers.v", 241, 51, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_arready==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1901]), first, "src/axi_lite_manager/axi_lite_registers.v", 237, 13, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "elsif", "237-239");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1902]), first, "src/axi_lite_manager/axi_lite_registers.v", 237, 28, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_rvalid==1 && S_AXI_RREADY==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1903]), first, "src/axi_lite_manager/axi_lite_registers.v", 237, 28, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_RREADY==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1904]), first, "src/axi_lite_manager/axi_lite_registers.v", 237, 28, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(axi_rvalid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1905]), first, "src/axi_lite_manager/axi_lite_registers.v", 232, 9, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "if", "232-235");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1906]), first, "src/axi_lite_manager/axi_lite_registers.v", 232, 10, ".top_slave_module.u_axi_lite_regs", "v_branch/axi_lite_registers__CBc", "else", "236");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1907]), first, "src/axi_lite_manager/axi_lite_registers.v", 232, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1908]), first, "src/axi_lite_manager/axi_lite_registers.v", 232, 13, ".top_slave_module.u_axi_lite_regs", "v_expr/axi_lite_registers__CBc", "(S_AXI_ARESETN==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1909]), first, "src/axi_lite_manager/axi_lite_registers.v", 231, 5, ".top_slave_module.u_axi_lite_regs", "v_line/axi_lite_registers__CBc", "block", "231");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1910]), first, "src/axi_stream_manager/stream_gearbox.v", 18, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1912]), first, "src/axi_stream_manager/stream_gearbox.v", 19, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[1914]), first, "src/axi_stream_manager/stream_gearbox.v", 21, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "s_axis_tdata");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[1978]), first, "src/axi_stream_manager/stream_gearbox.v", 22, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "s_axis_tkeep");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1986]), first, "src/axi_stream_manager/stream_gearbox.v", 23, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "s_axis_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1988]), first, "src/axi_stream_manager/stream_gearbox.v", 24, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "s_axis_tready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[1990]), first, "src/axi_stream_manager/stream_gearbox.v", 25, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "s_axis_tlast");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[1992]), first, "src/axi_stream_manager/stream_gearbox.v", 27, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "m_axis_tdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2008]), first, "src/axi_stream_manager/stream_gearbox.v", 28, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "m_axis_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2010]), first, "src/axi_stream_manager/stream_gearbox.v", 29, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "m_axis_tlast");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2012]), first, "src/axi_stream_manager/stream_gearbox.v", 30, 39, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "m_axis_tready");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2014]), first, "src/axi_stream_manager/stream_gearbox.v", 34, 29, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "buf_data");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[2078]), first, "src/axi_stream_manager/stream_gearbox.v", 35, 29, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "buf_keep");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2086]), first, "src/axi_stream_manager/stream_gearbox.v", 36, 29, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "buf_last");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[2088]), first, "src/axi_stream_manager/stream_gearbox.v", 37, 29, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "buf_idx");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2092]), first, "src/axi_stream_manager/stream_gearbox.v", 38, 29, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "buf_valid");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[2094]), first, "src/axi_stream_manager/stream_gearbox.v", 40, 29, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "max_idx");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2098]), first, "src/axi_stream_manager/stream_gearbox.v", 41, 10, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "is_last_byte");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2100]), first, "src/axi_stream_manager/stream_gearbox.v", 42, 10, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "pipe_advance");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[2102]), first, "src/axi_stream_manager/stream_gearbox.v", 45, 31, ".top_slave_module.u_stream_gearbox", "v_toggle/stream_gearbox", "ext_byte");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2118]), first, "src/axi_stream_manager/stream_gearbox.v", 46, 37, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "cond_then", "46");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2119]), first, "src/axi_stream_manager/stream_gearbox.v", 47, 37, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "cond_then", "47");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2120]), first, "src/axi_stream_manager/stream_gearbox.v", 48, 37, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "cond_then", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2121]), first, "src/axi_stream_manager/stream_gearbox.v", 48, 38, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "cond_else", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2122]), first, "src/axi_stream_manager/stream_gearbox.v", 47, 38, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "cond_else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2123]), first, "src/axi_stream_manager/stream_gearbox.v", 46, 38, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "cond_else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2124]), first, "src/axi_stream_manager/stream_gearbox.v", 67, 24, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "case", "67");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2125]), first, "src/axi_stream_manager/stream_gearbox.v", 68, 24, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "case", "68");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2126]), first, "src/axi_stream_manager/stream_gearbox.v", 69, 24, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "case", "69");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2127]), first, "src/axi_stream_manager/stream_gearbox.v", 70, 24, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "case", "70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2128]), first, "src/axi_stream_manager/stream_gearbox.v", 71, 17, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "case", "71");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2129]), first, "src/axi_stream_manager/stream_gearbox.v", 61, 9, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "if", "61,63");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2130]), first, "src/axi_stream_manager/stream_gearbox.v", 61, 10, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "else", "64,66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2131]), first, "src/axi_stream_manager/stream_gearbox.v", 61, 13, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_last==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2132]), first, "src/axi_stream_manager/stream_gearbox.v", 61, 13, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_last==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2133]), first, "src/axi_stream_manager/stream_gearbox.v", 60, 5, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "block", "60");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2134]), first, "src/axi_stream_manager/stream_gearbox.v", 103, 26, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "if", "103,105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2135]), first, "src/axi_stream_manager/stream_gearbox.v", 103, 27, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2136]), first, "src/axi_stream_manager/stream_gearbox.v", 103, 40, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_valid==1 && is_last_byte==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2137]), first, "src/axi_stream_manager/stream_gearbox.v", 103, 40, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(is_last_byte==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2138]), first, "src/axi_stream_manager/stream_gearbox.v", 103, 40, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_valid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2139]), first, "src/axi_stream_manager/stream_gearbox.v", 95, 26, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "elsif", "95,97-101");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2140]), first, "src/axi_stream_manager/stream_gearbox.v", 95, 44, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(s_axis_tready==1 && s_axis_tvalid==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2141]), first, "src/axi_stream_manager/stream_gearbox.v", 95, 44, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(s_axis_tvalid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2142]), first, "src/axi_stream_manager/stream_gearbox.v", 95, 44, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(s_axis_tready==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2143]), first, "src/axi_stream_manager/stream_gearbox.v", 91, 17, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "elsif", "91,93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2144]), first, "src/axi_stream_manager/stream_gearbox.v", 91, 31, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_valid==1 && is_last_byte==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2145]), first, "src/axi_stream_manager/stream_gearbox.v", 91, 31, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(is_last_byte==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2146]), first, "src/axi_stream_manager/stream_gearbox.v", 91, 31, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_valid==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2147]), first, "src/axi_stream_manager/stream_gearbox.v", 90, 13, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "if", "90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2148]), first, "src/axi_stream_manager/stream_gearbox.v", 90, 14, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2149]), first, "src/axi_stream_manager/stream_gearbox.v", 117, 48, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_last==1 && is_last_byte==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2150]), first, "src/axi_stream_manager/stream_gearbox.v", 117, 48, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(is_last_byte==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2151]), first, "src/axi_stream_manager/stream_gearbox.v", 117, 48, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(buf_last==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2152]), first, "src/axi_stream_manager/stream_gearbox.v", 111, 17, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "if", "111,113-114,117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2153]), first, "src/axi_stream_manager/stream_gearbox.v", 111, 18, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "else", "118,120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2154]), first, "src/axi_stream_manager/stream_gearbox.v", 110, 13, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "if", "110");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2155]), first, "src/axi_stream_manager/stream_gearbox.v", 110, 14, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2156]), first, "src/axi_stream_manager/stream_gearbox.v", 83, 9, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "if", "83-86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2157]), first, "src/axi_stream_manager/stream_gearbox.v", 83, 10, ".top_slave_module.u_stream_gearbox", "v_branch/stream_gearbox", "else", "87");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2158]), first, "src/axi_stream_manager/stream_gearbox.v", 83, 13, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2159]), first, "src/axi_stream_manager/stream_gearbox.v", 83, 13, ".top_slave_module.u_stream_gearbox", "v_expr/stream_gearbox", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2160]), first, "src/axi_stream_manager/stream_gearbox.v", 81, 5, ".top_slave_module.u_stream_gearbox", "v_line/stream_gearbox", "block", "81");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2161]), first, "src/axi_stream_manager/stream_validator.v", 28, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2163]), first, "src/axi_stream_manager/stream_validator.v", 29, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[2165]), first, "src/axi_stream_manager/stream_validator.v", 31, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "s_axis_tdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2181]), first, "src/axi_stream_manager/stream_validator.v", 32, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "s_axis_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2183]), first, "src/axi_stream_manager/stream_validator.v", 33, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "s_axis_tready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2185]), first, "src/axi_stream_manager/stream_validator.v", 34, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "s_axis_tlast");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[2187]), first, "src/axi_stream_manager/stream_validator.v", 36, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "m_axis_tdata");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2203]), first, "src/axi_stream_manager/stream_validator.v", 37, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "m_axis_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2205]), first, "src/axi_stream_manager/stream_validator.v", 38, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "m_axis_tlast");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2207]), first, "src/axi_stream_manager/stream_validator.v", 39, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "m_current_pos");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2271]), first, "src/axi_stream_manager/stream_validator.v", 40, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "m_axis_tready");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2273]), first, "src/axi_stream_manager/stream_validator.v", 42, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "encoding_error");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2275]), first, "src/axi_stream_manager/stream_validator.v", 43, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "error_position");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2339]), first, "src/axi_stream_manager/stream_validator.v", 44, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "final_char_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2403]), first, "src/axi_stream_manager/stream_validator.v", 45, 39, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "char_count_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2405]), first, "src/axi_stream_manager/stream_validator.v", 50, 10, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "pipe_advance");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[2407]), first, "src/axi_stream_manager/stream_validator.v", 54, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "utf8_state");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2411]), first, "src/axi_stream_manager/stream_validator.v", 55, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "char_pos_counter");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2475]), first, "src/axi_stream_manager/stream_validator.v", 56, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "is_new_file");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2477]), first, "src/axi_stream_manager/stream_validator.v", 59, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "expect_e0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2479]), first, "src/axi_stream_manager/stream_validator.v", 60, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "expect_ed");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2481]), first, "src/axi_stream_manager/stream_validator.v", 61, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "expect_f0");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2483]), first, "src/axi_stream_manager/stream_validator.v", 62, 25, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "expect_f4");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[2485]), first, "src/axi_stream_manager/stream_validator.v", 65, 26, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "active_state");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2489]), first, "src/axi_stream_manager/stream_validator.v", 65, 55, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "cond_then", "65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2490]), first, "src/axi_stream_manager/stream_validator.v", 65, 56, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "cond_else", "65");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2491]), first, "src/axi_stream_manager/stream_validator.v", 66, 26, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "active_pos");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2555]), first, "src/axi_stream_manager/stream_validator.v", 66, 65, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "cond_then", "66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2556]), first, "src/axi_stream_manager/stream_validator.v", 66, 66, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "cond_else", "66");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2557]), first, "src/axi_stream_manager/stream_validator.v", 69, 9, ".top_slave_module.u_stream_validator", "v_toggle/stream_validator", "char_completes_this_byte");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2559]), first, "src/axi_stream_manager/stream_validator.v", 82, 28, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2560]), first, "src/axi_stream_manager/stream_validator.v", 83, 28, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "83");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2561]), first, "src/axi_stream_manager/stream_validator.v", 84, 28, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2562]), first, "src/axi_stream_manager/stream_validator.v", 85, 28, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "85");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2563]), first, "src/axi_stream_manager/stream_validator.v", 86, 17, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "86");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2564]), first, "src/axi_stream_manager/stream_validator.v", 90, 13, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "90-91");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2565]), first, "src/axi_stream_manager/stream_validator.v", 90, 14, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "93");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2566]), first, "src/axi_stream_manager/stream_validator.v", 79, 9, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "79,81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2567]), first, "src/axi_stream_manager/stream_validator.v", 79, 10, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "88");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2568]), first, "src/axi_stream_manager/stream_validator.v", 77, 5, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "block", "77-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2569]), first, "src/axi_stream_manager/stream_validator.v", 130, 17, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "130-137");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2570]), first, "src/axi_stream_manager/stream_validator.v", 130, 18, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2571]), first, "src/axi_stream_manager/stream_validator.v", 146, 36, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "146-148");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2572]), first, "src/axi_stream_manager/stream_validator.v", 151, 81, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2573]), first, "src/axi_stream_manager/stream_validator.v", 151, 82, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2574]), first, "src/axi_stream_manager/stream_validator.v", 151, 85, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2575]), first, "src/axi_stream_manager/stream_validator.v", 151, 85, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2576]), first, "src/axi_stream_manager/stream_validator.v", 151, 29, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2577]), first, "src/axi_stream_manager/stream_validator.v", 151, 30, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2578]), first, "src/axi_stream_manager/stream_validator.v", 151, 55, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata == 8'hc1)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2579]), first, "src/axi_stream_manager/stream_validator.v", 151, 55, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata == 8'hc0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2580]), first, "src/axi_stream_manager/stream_validator.v", 151, 55, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata == 8'hc0)==0 && (s_axis_tdata == 8'hc1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2581]), first, "src/axi_stream_manager/stream_validator.v", 150, 36, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "150,152-153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2582]), first, "src/axi_stream_manager/stream_validator.v", 155, 36, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "155-159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2583]), first, "src/axi_stream_manager/stream_validator.v", 162, 55, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2584]), first, "src/axi_stream_manager/stream_validator.v", 162, 56, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2585]), first, "src/axi_stream_manager/stream_validator.v", 162, 59, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2586]), first, "src/axi_stream_manager/stream_validator.v", 162, 59, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2587]), first, "src/axi_stream_manager/stream_validator.v", 162, 29, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2588]), first, "src/axi_stream_manager/stream_validator.v", 162, 30, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2589]), first, "src/axi_stream_manager/stream_validator.v", 161, 36, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "161,163-166");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2590]), first, "src/axi_stream_manager/stream_validator.v", 169, 29, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2591]), first, "src/axi_stream_manager/stream_validator.v", 169, 30, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2592]), first, "src/axi_stream_manager/stream_validator.v", 169, 33, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2593]), first, "src/axi_stream_manager/stream_validator.v", 169, 33, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2594]), first, "src/axi_stream_manager/stream_validator.v", 168, 25, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "case", "168,170");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2595]), first, "src/axi_stream_manager/stream_validator.v", 180, 67, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2596]), first, "src/axi_stream_manager/stream_validator.v", 180, 68, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2597]), first, "src/axi_stream_manager/stream_validator.v", 180, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2598]), first, "src/axi_stream_manager/stream_validator.v", 180, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2599]), first, "src/axi_stream_manager/stream_validator.v", 180, 25, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2600]), first, "src/axi_stream_manager/stream_validator.v", 180, 26, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2601]), first, "src/axi_stream_manager/stream_validator.v", 180, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_e0==1 && (s_axis_tdata < 8'ha0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2602]), first, "src/axi_stream_manager/stream_validator.v", 180, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata < 8'ha0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2603]), first, "src/axi_stream_manager/stream_validator.v", 180, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_e0==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2604]), first, "src/axi_stream_manager/stream_validator.v", 181, 67, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2605]), first, "src/axi_stream_manager/stream_validator.v", 181, 68, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2606]), first, "src/axi_stream_manager/stream_validator.v", 181, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2607]), first, "src/axi_stream_manager/stream_validator.v", 181, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2608]), first, "src/axi_stream_manager/stream_validator.v", 181, 25, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2609]), first, "src/axi_stream_manager/stream_validator.v", 181, 26, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2610]), first, "src/axi_stream_manager/stream_validator.v", 181, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_ed==1 && (s_axis_tdata >= 8'ha0)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2611]), first, "src/axi_stream_manager/stream_validator.v", 181, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata >= 8'ha0)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2612]), first, "src/axi_stream_manager/stream_validator.v", 181, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_ed==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2613]), first, "src/axi_stream_manager/stream_validator.v", 182, 67, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2614]), first, "src/axi_stream_manager/stream_validator.v", 182, 68, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2615]), first, "src/axi_stream_manager/stream_validator.v", 182, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2616]), first, "src/axi_stream_manager/stream_validator.v", 182, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2617]), first, "src/axi_stream_manager/stream_validator.v", 182, 25, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2618]), first, "src/axi_stream_manager/stream_validator.v", 182, 26, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2619]), first, "src/axi_stream_manager/stream_validator.v", 182, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_f0==1 && (s_axis_tdata < 8'h90)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2620]), first, "src/axi_stream_manager/stream_validator.v", 182, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata < 8'h90)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2621]), first, "src/axi_stream_manager/stream_validator.v", 182, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_f0==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2622]), first, "src/axi_stream_manager/stream_validator.v", 183, 67, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2623]), first, "src/axi_stream_manager/stream_validator.v", 183, 68, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2624]), first, "src/axi_stream_manager/stream_validator.v", 183, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2625]), first, "src/axi_stream_manager/stream_validator.v", 183, 71, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2626]), first, "src/axi_stream_manager/stream_validator.v", 183, 25, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2627]), first, "src/axi_stream_manager/stream_validator.v", 183, 26, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2628]), first, "src/axi_stream_manager/stream_validator.v", 183, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_f4==1 && (s_axis_tdata >= 8'h90)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2629]), first, "src/axi_stream_manager/stream_validator.v", 183, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "((s_axis_tdata >= 8'h90)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2630]), first, "src/axi_stream_manager/stream_validator.v", 183, 39, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(expect_f4==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2631]), first, "src/axi_stream_manager/stream_validator.v", 193, 25, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "193");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2632]), first, "src/axi_stream_manager/stream_validator.v", 193, 26, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2633]), first, "src/axi_stream_manager/stream_validator.v", 198, 25, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2634]), first, "src/axi_stream_manager/stream_validator.v", 198, 26, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2635]), first, "src/axi_stream_manager/stream_validator.v", 198, 29, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2636]), first, "src/axi_stream_manager/stream_validator.v", 198, 29, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2637]), first, "src/axi_stream_manager/stream_validator.v", 177, 21, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "177,185-188,190");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2638]), first, "src/axi_stream_manager/stream_validator.v", 177, 22, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "196,199-200,202-205");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2639]), first, "src/axi_stream_manager/stream_validator.v", 143, 17, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "143,145");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2640]), first, "src/axi_stream_manager/stream_validator.v", 143, 18, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2641]), first, "src/axi_stream_manager/stream_validator.v", 212, 41, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(char_completes_this_byte==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2642]), first, "src/axi_stream_manager/stream_validator.v", 212, 41, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(char_completes_this_byte==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2643]), first, "src/axi_stream_manager/stream_validator.v", 212, 80, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "cond_then", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2644]), first, "src/axi_stream_manager/stream_validator.v", 212, 81, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "cond_else", "212");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2645]), first, "src/axi_stream_manager/stream_validator.v", 216, 52, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2646]), first, "src/axi_stream_manager/stream_validator.v", 216, 53, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2647]), first, "src/axi_stream_manager/stream_validator.v", 216, 56, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2648]), first, "src/axi_stream_manager/stream_validator.v", 216, 56, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(encoding_error==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2649]), first, "src/axi_stream_manager/stream_validator.v", 216, 21, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "216");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2650]), first, "src/axi_stream_manager/stream_validator.v", 216, 22, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2651]), first, "src/axi_stream_manager/stream_validator.v", 216, 25, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(char_completes_this_byte==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2652]), first, "src/axi_stream_manager/stream_validator.v", 216, 25, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(char_completes_this_byte==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2653]), first, "src/axi_stream_manager/stream_validator.v", 210, 17, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "210,212-213");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2654]), first, "src/axi_stream_manager/stream_validator.v", 210, 18, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2655]), first, "src/axi_stream_manager/stream_validator.v", 122, 13, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "122,124-127,140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2656]), first, "src/axi_stream_manager/stream_validator.v", 122, 14, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "219,221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2657]), first, "src/axi_stream_manager/stream_validator.v", 120, 18, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "if", "120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2658]), first, "src/axi_stream_manager/stream_validator.v", 120, 19, ".top_slave_module.u_stream_validator", "v_branch/stream_validator", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2659]), first, "src/axi_stream_manager/stream_validator.v", 104, 9, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "elsif", "104-117");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2660]), first, "src/axi_stream_manager/stream_validator.v", 104, 13, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2661]), first, "src/axi_stream_manager/stream_validator.v", 104, 13, ".top_slave_module.u_stream_validator", "v_expr/stream_validator", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2662]), first, "src/axi_stream_manager/stream_validator.v", 102, 5, ".top_slave_module.u_stream_validator", "v_line/stream_validator", "block", "102");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2663]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 28, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2665]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 29, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2667]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 32, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "s_axis_tvalid");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[2669]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 33, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "s_axis_tdata");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2685]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 34, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "s_axis_tpos");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2749]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 35, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "s_axis_tlast");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2751]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 36, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "s_axis_tready");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[2753]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 41, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pattern_len");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2769]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 42, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "matcher_active");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2771]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 45, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "hit_data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2835]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 46, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "hit_valid_out");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[2837]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 47, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "fifo_count_in");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2847]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 50, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "match_count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2911]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 51, 64, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "match_count_valid");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[2913]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 65, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "state");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[2917]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 65, 36, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "next_state");
    vlSelf->__vlCoverToggleInsert(0, 2, 1, &(vlSymsp->__Vcoverage[2921]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 66, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "flush_counter");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2927]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 68, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "data_in_fifo");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[2991]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 69, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "match_found");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[2993]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 70, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pos_pipe[0]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3057]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 70, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pos_pipe[1]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3121]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 70, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pos_pipe[2]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3185]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 70, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pos_pipe[3]");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3249]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 71, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pattern_start_offset");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3313]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 72, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "clk_en_latch");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3315]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 73, 29, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "shift_reg_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3317]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 77, 10, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "match_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3319]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 80, 10, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "ready_to_accept");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3321]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 81, 10, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "s_axis_txfer");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3323]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 84, 26, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pattern_len_ext");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3387]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 85, 26, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "const_one");
    vlSelf->__vlCoverToggleInsert(0, 32, 1, &(vlSymsp->__Vcoverage[3451]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 86, 26, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "pos_diff_ext");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3517]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 89, 10, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "datapath_active");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3519]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 90, 10, ".top_slave_module.u_subchar_matcher", "v_toggle/subchar_matcher__F10", "clk_gated");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3521]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 106, 9, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "106-107");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3522]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 106, 10, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3523]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 106, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(clk==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3524]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 106, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(clk==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3525]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 105, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "105");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3526]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 115, 9, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "115");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3527]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 115, 10, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "116");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3528]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 115, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3529]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 115, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3530]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 114, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "114");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3531]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 125, 23, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3532]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 125, 24, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3533]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 125, 17, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "125");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3534]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 130, 22, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "130-131");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3535]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 130, 23, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3536]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 130, 39, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(s_axis_txfer==1 && s_axis_tlast==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3537]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 130, 39, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(s_axis_tlast==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3538]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 130, 39, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(s_axis_txfer==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3539]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 128, 17, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "elsif", "128-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3540]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 128, 21, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(ready_to_accept==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3541]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 128, 21, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(ready_to_accept==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3542]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 127, 20, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "127");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3543]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 135, 17, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "135-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3544]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 135, 18, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3545]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 134, 19, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "134");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3546]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 139, 23, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "139-140");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3547]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 139, 24, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3548]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 139, 21, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "139");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3549]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 122, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "122-124");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3550]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 149, 9, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "149-150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3551]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 147, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "147-149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3552]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 160, 18, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "160,162");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3553]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 160, 19, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3554]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 157, 9, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "elsif", "157,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3555]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 156, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3556]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 179, 13, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "179-180");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3557]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 179, 14, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3558]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 186, 21, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "186-189");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3559]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 186, 22, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3560]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 184, 21, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3561]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 198, 53, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(pos_diff_ext[POS_WIDTH[5:0]+:1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3562]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 198, 53, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(pos_diff_ext[POS_WIDTH[5:0]+:1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3563]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 198, 77, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "cond_then", "198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3564]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 198, 78, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "cond_else", "198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3565]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 195, 21, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "195-196,198");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3566]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 195, 22, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3567]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 193, 24, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "193-194");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3568]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 202, 23, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "202,204");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3569]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 211, 21, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "211,213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3570]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 211, 22, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3571]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 219, 53, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(pos_diff_ext[POS_WIDTH[5:0]+:1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3572]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 219, 53, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(pos_diff_ext[POS_WIDTH[5:0]+:1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3573]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 219, 77, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "cond_then", "219");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3574]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 219, 78, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "cond_else", "219");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3575]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 217, 21, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "217-219");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3576]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 217, 22, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3577]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 207, 25, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "case", "207-209");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3578]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 170, 9, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "170-175");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3579]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 170, 10, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "176,183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3580]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 170, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3581]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 170, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3582]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 169, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "169");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3583]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 230, 9, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "if", "230-231");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3584]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 230, 10, ".top_slave_module.u_subchar_matcher", "v_branch/subchar_matcher__F10", "else", "233");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3585]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 230, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3586]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 230, 13, ".top_slave_module.u_subchar_matcher", "v_expr/subchar_matcher__F10", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3587]), first, "src/axi_stream_manager/subchar_matcher/subchar_matcher.v", 229, 5, ".top_slave_module.u_subchar_matcher", "v_line/subchar_matcher__F10", "block", "229");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3588]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 18, 29, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_toggle/wide_comparator", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3590]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 19, 29, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_toggle/wide_comparator", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3592]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 25, 29, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_toggle/wide_comparator", "data_valid");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3594]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 28, 29, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_toggle/wide_comparator", "match_out");
    vlSelf->__vlCoverToggleInsert(0, 7, 1, &(vlSymsp->__Vcoverage[3596]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 40, 22, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_toggle/wide_comparator", "chunk_match");
    vlSelf->__vlCoverToggleInsert(0, 1, 1, &(vlSymsp->__Vcoverage[3612]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 41, 22, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_toggle/wide_comparator", "valid_pipe");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3616]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[0]==1 && chunk_match[1]==1 && chunk_match[2]==1 && chunk_match[3]==1 && chunk_match[4]==1 && chunk_match[5]==1 && chunk_match[6]==1 && chunk_match[7]==1 && valid_pipe[1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3617]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(valid_pipe[1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3618]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[7]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3619]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[6]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3620]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[5]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3621]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[4]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3622]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[3]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3623]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[2]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3624]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3625]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 62, 42, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(chunk_match[0]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3626]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 50, 9, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_branch/wide_comparator", "if", "50-52");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3627]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 50, 10, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_branch/wide_comparator", "else", "53,57,62");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3628]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 50, 13, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3629]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 50, 13, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_expr/wide_comparator", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3630]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 48, 5, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_line/wide_comparator", "block", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3631]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 80, 9, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_line/wide_comparator", "block", "80-81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3632]), first, "src/axi_stream_manager/subchar_matcher/wide_comparator.v", 70, 5, ".top_slave_module.u_subchar_matcher.wide_comparator_inst", "v_line/wide_comparator", "block", "70,75,80");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3633]), first, "src/axi_stream_manager/hits_fifo.v", 18, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "clk");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3635]), first, "src/axi_stream_manager/hits_fifo.v", 19, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "rst_n");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3637]), first, "src/axi_stream_manager/hits_fifo.v", 21, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "data_in");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3701]), first, "src/axi_stream_manager/hits_fifo.v", 22, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "wr_en");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3703]), first, "src/axi_stream_manager/hits_fifo.v", 24, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "rd_en");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[3705]), first, "src/axi_stream_manager/hits_fifo.v", 25, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "data_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3769]), first, "src/axi_stream_manager/hits_fifo.v", 26, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "empty");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[3771]), first, "src/axi_stream_manager/hits_fifo.v", 28, 41, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "count_out");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[3781]), first, "src/axi_stream_manager/hits_fifo.v", 34, 34, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "wr_ptr");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[3789]), first, "src/axi_stream_manager/hits_fifo.v", 35, 34, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "rd_ptr");
    vlSelf->__vlCoverToggleInsert(0, 4, 1, &(vlSymsp->__Vcoverage[3797]), first, "src/axi_stream_manager/hits_fifo.v", 36, 34, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "count");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3807]), first, "src/axi_stream_manager/hits_fifo.v", 38, 10, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "wr_allowed");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[3809]), first, "src/axi_stream_manager/hits_fifo.v", 39, 10, ".top_slave_module.u_hits_fifo", "v_toggle/hits_fifo__F10", "rd_allowed");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3811]), first, "src/axi_stream_manager/hits_fifo.v", 60, 22, ".top_slave_module.u_hits_fifo", "v_line/hits_fifo__F10", "case", "60-62,64-66");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3812]), first, "src/axi_stream_manager/hits_fifo.v", 70, 22, ".top_slave_module.u_hits_fifo", "v_line/hits_fifo__F10", "case", "70-71,73-75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3813]), first, "src/axi_stream_manager/hits_fifo.v", 79, 22, ".top_slave_module.u_hits_fifo", "v_line/hits_fifo__F10", "case", "79-82");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3814]), first, "src/axi_stream_manager/hits_fifo.v", 89, 22, ".top_slave_module.u_hits_fifo", "v_line/hits_fifo__F10", "case", "89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3815]), first, "src/axi_stream_manager/hits_fifo.v", 48, 9, ".top_slave_module.u_hits_fifo", "v_branch/hits_fifo__F10", "if", "48-53");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3816]), first, "src/axi_stream_manager/hits_fifo.v", 48, 10, ".top_slave_module.u_hits_fifo", "v_branch/hits_fifo__F10", "else", "54,57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3817]), first, "src/axi_stream_manager/hits_fifo.v", 48, 13, ".top_slave_module.u_hits_fifo", "v_expr/hits_fifo__F10", "(rst_n==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3818]), first, "src/axi_stream_manager/hits_fifo.v", 48, 13, ".top_slave_module.u_hits_fifo", "v_expr/hits_fifo__F10", "(rst_n==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3819]), first, "src/axi_stream_manager/hits_fifo.v", 46, 5, ".top_slave_module.u_hits_fifo", "v_line/hits_fifo__F10", "block", "46");
}
