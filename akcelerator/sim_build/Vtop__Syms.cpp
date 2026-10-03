// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_top_slave_module);
    __Vhier.remove(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_axi_lite_regs);
    __Vhier.remove(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_hits_fifo);
    __Vhier.remove(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_stream_gearbox);
    __Vhier.remove(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_stream_validator);
    __Vhier.remove(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_subchar_matcher);
    __Vhier.remove(&__Vscope_top_slave_module__u_subchar_matcher, &__Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(680);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_slave_module.configure(this, name(), "top_slave_module", "top_slave_module", "top_slave_module", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_slave_module__u_axi_lite_regs.configure(this, name(), "top_slave_module.u_axi_lite_regs", "u_axi_lite_regs", "axi_lite_registers", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_slave_module__u_hits_fifo.configure(this, name(), "top_slave_module.u_hits_fifo", "u_hits_fifo", "hits_fifo", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_slave_module__u_stream_gearbox.configure(this, name(), "top_slave_module.u_stream_gearbox", "u_stream_gearbox", "stream_gearbox", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_slave_module__u_stream_validator.configure(this, name(), "top_slave_module.u_stream_validator", "u_stream_validator", "stream_validator", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_slave_module__u_subchar_matcher.configure(this, name(), "top_slave_module.u_subchar_matcher", "u_subchar_matcher", "subchar_matcher", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.configure(this, name(), "top_slave_module.u_subchar_matcher.wide_comparator_inst", "wide_comparator_inst", "wide_comparator", -9, VerilatedScope::SCOPE_MODULE);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_top_slave_module);
    __Vhier.add(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_axi_lite_regs);
    __Vhier.add(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_hits_fifo);
    __Vhier.add(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_stream_gearbox);
    __Vhier.add(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_stream_validator);
    __Vhier.add(&__Vscope_top_slave_module, &__Vscope_top_slave_module__u_subchar_matcher);
    __Vhier.add(&__Vscope_top_slave_module__u_subchar_matcher, &__Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"S_AXIS_TDATA", &(TOP.S_AXIS_TDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXIS_TKEEP", &(TOP.S_AXIS_TKEEP), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXIS_TLAST", &(TOP.S_AXIS_TLAST), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXIS_TREADY", &(TOP.S_AXIS_TREADY), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXIS_TVALID", &(TOP.S_AXIS_TVALID), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_ACLK", &(TOP.S_AXI_ACLK), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_ARADDR", &(TOP.S_AXI_ARADDR), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_ARESETN", &(TOP.S_AXI_ARESETN), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_ARREADY", &(TOP.S_AXI_ARREADY), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_ARVALID", &(TOP.S_AXI_ARVALID), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_AWADDR", &(TOP.S_AXI_AWADDR), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_AWREADY", &(TOP.S_AXI_AWREADY), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_AWVALID", &(TOP.S_AXI_AWVALID), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_BREADY", &(TOP.S_AXI_BREADY), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_BRESP", &(TOP.S_AXI_BRESP), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_BVALID", &(TOP.S_AXI_BVALID), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_RDATA", &(TOP.S_AXI_RDATA), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_RREADY", &(TOP.S_AXI_RREADY), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_RRESP", &(TOP.S_AXI_RRESP), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_RVALID", &(TOP.S_AXI_RVALID), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_WDATA", &(TOP.S_AXI_WDATA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_WREADY", &(TOP.S_AXI_WREADY), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,0,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_WSTRB", &(TOP.S_AXI_WSTRB), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"S_AXI_WVALID", &(TOP.S_AXI_WVALID), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"C_S_AXI_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__C_S_AXI_ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"C_S_AXI_DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__C_S_AXI_DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"FIFO_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__FIFO_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"MATCH_LATENCY", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__MATCH_LATENCY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"PATTERN_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__PATTERN_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"POS_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__POS_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXIS_TDATA", &(TOP.top_slave_module__DOT__S_AXIS_TDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXIS_TKEEP", &(TOP.top_slave_module__DOT__S_AXIS_TKEEP), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXIS_TLAST", &(TOP.top_slave_module__DOT__S_AXIS_TLAST), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXIS_TREADY", &(TOP.top_slave_module__DOT__S_AXIS_TREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXIS_TVALID", &(TOP.top_slave_module__DOT__S_AXIS_TVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_ACLK", &(TOP.top_slave_module__DOT__S_AXI_ACLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_ARADDR", &(TOP.top_slave_module__DOT__S_AXI_ARADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_ARESETN", &(TOP.top_slave_module__DOT__S_AXI_ARESETN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_ARREADY", &(TOP.top_slave_module__DOT__S_AXI_ARREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_ARVALID", &(TOP.top_slave_module__DOT__S_AXI_ARVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_AWADDR", &(TOP.top_slave_module__DOT__S_AXI_AWADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_AWREADY", &(TOP.top_slave_module__DOT__S_AXI_AWREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_AWVALID", &(TOP.top_slave_module__DOT__S_AXI_AWVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_BREADY", &(TOP.top_slave_module__DOT__S_AXI_BREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_BRESP", &(TOP.top_slave_module__DOT__S_AXI_BRESP), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_BVALID", &(TOP.top_slave_module__DOT__S_AXI_BVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_RDATA", &(TOP.top_slave_module__DOT__S_AXI_RDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_RREADY", &(TOP.top_slave_module__DOT__S_AXI_RREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_RRESP", &(TOP.top_slave_module__DOT__S_AXI_RRESP), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_RVALID", &(TOP.top_slave_module__DOT__S_AXI_RVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_WDATA", &(TOP.top_slave_module__DOT__S_AXI_WDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_WREADY", &(TOP.top_slave_module__DOT__S_AXI_WREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_WSTRB", &(TOP.top_slave_module__DOT__S_AXI_WSTRB), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"S_AXI_WVALID", &(TOP.top_slave_module__DOT__S_AXI_WVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"fifo_count_wire", &(TOP.top_slave_module__DOT__fifo_count_wire), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"fifo_wr_en", &(TOP.top_slave_module__DOT__fifo_wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"gb_tdata", &(TOP.top_slave_module__DOT__gb_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"gb_tlast", &(TOP.top_slave_module__DOT__gb_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"gb_tready", &(TOP.top_slave_module__DOT__gb_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"gb_tvalid", &(TOP.top_slave_module__DOT__gb_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"hit_data_wire", &(TOP.top_slave_module__DOT__hit_data_wire), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"hit_valid_wire", &(TOP.top_slave_module__DOT__hit_valid_wire), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"matcher_en", &(TOP.top_slave_module__DOT__matcher_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"matcher_tdata", &(TOP.top_slave_module__DOT__matcher_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"matcher_tlast", &(TOP.top_slave_module__DOT__matcher_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"matcher_tpos", &(TOP.top_slave_module__DOT__matcher_tpos), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"matcher_tready", &(TOP.top_slave_module__DOT__matcher_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"matcher_tvalid", &(TOP.top_slave_module__DOT__matcher_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"rst_n_meta", &(TOP.top_slave_module__DOT__rst_n_meta), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"rst_n_sync", &(TOP.top_slave_module__DOT__rst_n_sync), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_char_count_valid", &(TOP.top_slave_module__DOT__sig_char_count_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_encoding_error", &(TOP.top_slave_module__DOT__sig_encoding_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_error_position", &(TOP.top_slave_module__DOT__sig_error_position), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_fifo_data_out", &(TOP.top_slave_module__DOT__sig_fifo_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_fifo_empty", &(TOP.top_slave_module__DOT__sig_fifo_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_fifo_rd_en", &(TOP.top_slave_module__DOT__sig_fifo_rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_final_char_count", &(TOP.top_slave_module__DOT__sig_final_char_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_mask_in", &(TOP.top_slave_module__DOT__sig_mask_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_match_count", &(TOP.top_slave_module__DOT__sig_match_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_match_count_valid", &(TOP.top_slave_module__DOT__sig_match_count_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_operation_mode", &(TOP.top_slave_module__DOT__sig_operation_mode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_pattern_in", &(TOP.top_slave_module__DOT__sig_pattern_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_pattern_len", &(TOP.top_slave_module__DOT__sig_pattern_len), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sig_pattern_len_full", &(TOP.top_slave_module__DOT__sig_pattern_len_full), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"sys_rst_n", &(TOP.top_slave_module__DOT__sys_rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"val_tdata", &(TOP.top_slave_module__DOT__val_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"val_tlast", &(TOP.top_slave_module__DOT__val_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"val_tpos", &(TOP.top_slave_module__DOT__val_tpos), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"val_tready", &(TOP.top_slave_module__DOT__val_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module.varInsert(__Vfinal,"val_tvalid", &(TOP.top_slave_module__DOT__val_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"ADDR_MASK_BASE", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_MASK_BASE))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"ADDR_MASK_HIGH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_MASK_HIGH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"ADDR_PATTERN_BASE", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_PATTERN_BASE))), true, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"ADDR_PATTERN_HIGH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_PATTERN_HIGH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"ADDR_SHIFT", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__ADDR_SHIFT))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"C_S_AXI_ADDR_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__C_S_AXI_ADDR_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"C_S_AXI_DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__C_S_AXI_DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"PATTERN_IDX_W", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__PATTERN_IDX_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"PATTERN_REGS", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__PATTERN_REGS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"PATTERN_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__PATTERN_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"POS_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__POS_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_ACLK", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ACLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_ARADDR", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_ARESETN", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARESETN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_ARREADY", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_ARVALID", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_ARVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_AWADDR", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_AWREADY", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_AWVALID", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_AWVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_BREADY", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_BRESP", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BRESP), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_BVALID", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_BVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_RDATA", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_RREADY", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_RRESP", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RRESP), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_RVALID", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_RVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_WDATA", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WDATA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_WREADY", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WREADY), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_WSTRB", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WSTRB), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"S_AXI_WVALID", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__S_AXI_WVALID), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"awaddr", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__awaddr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_araddr_reg", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_araddr_reg), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_arready", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_arready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_awready", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_awready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_bvalid", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_bvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_rdata", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_rvalid", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_rvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"axi_wready", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__axi_wready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"byte_index", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__byte_index), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"char_count_valid", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__char_count_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"cpu_reads_fifo", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__cpu_reads_fifo), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"encoding_error", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__encoding_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"error_position", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__error_position), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"fifo_data_out", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"fifo_empty", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"fifo_rd_en", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__fifo_rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"final_char_count", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__final_char_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"i", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"latched_data_valid", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_data_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"latched_fifo_data", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__latched_fifo_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"mask_in", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__mask_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"match_count", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"match_count_valid", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__match_count_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"operation_mode", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__operation_mode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"pattern_in", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"pattern_len", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__pattern_len), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"read_mask_offset", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__read_mask_offset), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"read_pat_offset", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__read_pat_offset), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"reg_mask", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_mask), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,31 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"reg_pattern", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__reg_pattern), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,31 ,31,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"sending_valid_fifo_data", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__sending_valid_fifo_data), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"slv_reg_wren", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__slv_reg_wren), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"write_mask_offset", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__write_mask_offset), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_axi_lite_regs.varInsert(__Vfinal,"write_pat_offset", &(TOP.top_slave_module__DOT__u_axi_lite_regs__DOT__write_pat_offset), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,0,1 ,11,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_hits_fifo__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"FIFO_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_hits_fifo__DOT__FIFO_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"clk", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"count", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"count_out", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__count_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"data_in", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__data_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"data_out", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"empty", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__empty), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"mem", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,15 ,31,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"rd_allowed", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__rd_allowed), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"rd_en", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__rd_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"rd_ptr", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__rd_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"rst_n", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"wr_allowed", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__wr_allowed), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"wr_en", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__wr_en), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_hits_fifo.varInsert(__Vfinal,"wr_ptr", &(TOP.top_slave_module__DOT__u_hits_fifo__DOT__wr_ptr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"DATA_IN_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__DATA_IN_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"DATA_OUT_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__DATA_OUT_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"KEEP_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__KEEP_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"buf_data", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__buf_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"buf_idx", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__buf_idx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"buf_keep", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__buf_keep), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"buf_last", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__buf_last), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"buf_valid", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__buf_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"clk", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"ext_byte", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__ext_byte), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"is_last_byte", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__is_last_byte), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"m_axis_tdata", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"m_axis_tlast", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"m_axis_tready", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"m_axis_tvalid", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__m_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"max_idx", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__max_idx), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"pipe_advance", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__pipe_advance), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"rst_n", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"s_axis_tdata", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tdata), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"s_axis_tkeep", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tkeep), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,3,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"s_axis_tlast", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"s_axis_tready", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_gearbox.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.top_slave_module__DOT__u_stream_gearbox__DOT__s_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_stream_validator__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"POS_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_stream_validator__DOT__POS_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"active_pos", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__active_pos), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"active_state", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__active_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"char_completes_this_byte", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__char_completes_this_byte), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"char_count_valid", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__char_count_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"char_pos_counter", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__char_pos_counter), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"clk", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"encoding_error", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__encoding_error), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"error_position", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__error_position), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"expect_e0", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__expect_e0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"expect_ed", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__expect_ed), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"expect_f0", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__expect_f0), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"expect_f4", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__expect_f4), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"final_char_count", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__final_char_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"is_new_file", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__is_new_file), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"m_axis_tdata", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"m_axis_tlast", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"m_axis_tready", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"m_axis_tvalid", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__m_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"m_current_pos", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__m_current_pos), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"pipe_advance", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__pipe_advance), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"rst_n", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"s_axis_tdata", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"s_axis_tlast", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"s_axis_tready", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__s_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_stream_validator.varInsert(__Vfinal,"utf8_state", &(TOP.top_slave_module__DOT__u_stream_validator__DOT__utf8_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"DATA_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__DATA_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"FIFO_DEPTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__FIFO_DEPTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"FLUSHING", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__FLUSHING))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"FLUSH_CNT_W", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__FLUSH_CNT_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"FLUSH_TARGET", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__FLUSH_TARGET))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"IDLE", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__IDLE))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"MATCH_LATENCY", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__MATCH_LATENCY))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"PATTERN_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__PATTERN_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"PAT_LEN_W", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__PAT_LEN_W))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"PAUSED", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__PAUSED))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"POS_WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__POS_WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"RUNNING", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__RUNNING))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"clk", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"clk_en_latch", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__clk_en_latch), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"clk_gated", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__clk_gated), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"const_one", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__const_one), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"data_in_fifo", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__data_in_fifo), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"datapath_active", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__datapath_active), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"fifo_count_in", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__fifo_count_in), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,4,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"flush_counter", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__flush_counter), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,2,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"hit_data_out", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__hit_data_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"hit_valid_out", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__hit_valid_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"i", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"mask_in", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__mask_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"match_count", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__match_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"match_count_valid", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__match_count_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"match_found", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__match_found), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"match_out", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__match_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"matcher_active", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__matcher_active), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"next_state", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__next_state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"pattern_in", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"pattern_len", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"pattern_len_ext", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_len_ext), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"pattern_start_offset", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__pattern_start_offset), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"pos_diff_ext", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__pos_diff_ext), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,0,1 ,32,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"pos_pipe", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__pos_pipe), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,0,3 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"ready_to_accept", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__ready_to_accept), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"rst_n", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"s_axis_tdata", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tdata), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"s_axis_tlast", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tlast), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"s_axis_tpos", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tpos), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"s_axis_tready", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"s_axis_tvalid", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_tvalid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"s_axis_txfer", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__s_axis_txfer), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"shift_reg", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"shift_reg_valid", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__shift_reg_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher.varInsert(__Vfinal,"state", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__state), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"CHUNKS", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__CHUNKS))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"CHUNK_SIZE", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__CHUNK_SIZE))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"WIDTH", const_cast<void*>(static_cast<const void*>(&(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__WIDTH))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"chunk_match", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__chunk_match), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,7,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"clk", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"data_valid", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__data_valid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"i", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"mask_in", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mask_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"match_out", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__match_out), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"mismatch", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__mismatch), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"pattern_in", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__pattern_in), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"rst_n", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"shift_reg", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__shift_reg), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1023,0);
        __Vscope_top_slave_module__u_subchar_matcher__wide_comparator_inst.varInsert(__Vfinal,"valid_pipe", &(TOP.top_slave_module__DOT__u_subchar_matcher__DOT__wide_comparator_inst__DOT__valid_pipe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0,1 ,1,0);
    }
}
