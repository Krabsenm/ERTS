#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst_n", 1, hls_in, -1, "", "", 1),
	Port_Property("res_V_address0", 12, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("res_V_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("res_V_we0", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("res_V_d0", 15, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("s_axi_diff_io_AWVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_AWREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_AWADDR", 14, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_WVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_WREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_WDATA", 32, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_WSTRB", 4, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_ARVALID", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_ARREADY", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_ARADDR", 14, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_RVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_RREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_RDATA", 32, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_RRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_BVALID", 1, hls_out, -1, "", "", 1),
	Port_Property("s_axi_diff_io_BREADY", 1, hls_in, -1, "", "", 1),
	Port_Property("s_axi_diff_io_BRESP", 2, hls_out, -1, "", "", 1),
	Port_Property("interrupt", 1, hls_out, -1, "", "", 1),
};
const char* HLS_Design_Meta::dut_name = "differentiate";
