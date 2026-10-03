// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

// Parameter definitions for Vtop___024root
constexpr CData/*1:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__IDLE;
constexpr CData/*1:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__RUNNING;
constexpr CData/*1:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__PAUSED;
constexpr CData/*1:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__FLUSHING;
constexpr SData/*11:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_PATTERN_BASE;
constexpr SData/*11:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_MASK_BASE;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__C_S_AXI_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__C_S_AXI_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__PATTERN_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__POS_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__FIFO_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__MATCH_LATENCY;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__C_S_AXI_DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__C_S_AXI_ADDR_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__PATTERN_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__POS_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__PATTERN_REGS;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__PATTERN_IDX_W;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_SHIFT;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_PATTERN_HIGH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_MASK_HIGH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_stream_gearbox__DOT__DATA_IN_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_stream_gearbox__DOT__DATA_OUT_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_stream_gearbox__DOT__KEEP_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_stream_validator__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_stream_validator__DOT__POS_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__FIFO_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__PATTERN_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__POS_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__MATCH_LATENCY;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__FLUSH_TARGET;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__FLUSH_CNT_W;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__PAT_LEN_W;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__CHUNK_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__CHUNKS;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_hits_fifo__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop___024root::top_slave_module__DOT__u_hits_fifo__DOT__FIFO_DEPTH;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root___configure_coverage(Vtop___024root* vlSelf, bool first);

void Vtop___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
    Vtop___024root___configure_coverage(this, first);
}

Vtop___024root::~Vtop___024root() {
}

// Coverage
void Vtop___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    std::string fullhier = std::string{VerilatedModule::name()} + hierp;
    if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",fullhier,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

// Toggle Coverage
void Vtop___024root::__vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp) {
    int step = (end >= begin) ? 1 : -1;
    for (int i = begin; i != end + step; i += step) {
        for (int j = 0; j < 2; j++) {
            uint32_t* count32p = countp;
            static uint32_t fake_zero_count = 0;
            std::string fullhier = std::string{VerilatedModule::name()} + hierp;
            if (!fullhier.empty() && fullhier[0] == '.') fullhier = fullhier.substr(1);
            std::string commentWithIndex = commentp;
            if (ranged) commentWithIndex += '[' + std::to_string(i) + ']';
            commentWithIndex += j ? ":0->1" : ":1->0";
            if (!enable) count32p = &fake_zero_count;
            *count32p = 0;
            VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), VerilatedModule::name(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
                "hier",fullhier,  "page",pagep,  "comment",commentWithIndex.c_str(),  "", "");
            ++countp;
        }
    }
}
