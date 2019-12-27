set C_TypeInfoList {{ 
"differentiate" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"img": [[], {"array": [ {"array": ["0", [48]]}, [64]]}] }, {"window": [[], {"array": [ {"array": ["1", [3]]}, [3]]}] }, {"res": [[], {"array": [ {"array": ["2", [46]]}, [62]]}] }],[],""], 
"1": [ "window_t", {"typedef": [[[],"3"],""]}], 
"0": [ "img_t", {"typedef": [[[], {"scalar": "unsigned char"}],""]}], 
"3": [ "ap_int<3>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 3}}]],""]}}], 
"2": [ "result_t", {"typedef": [[[],"4"],""]}], 
"4": [ "ap_uint<15>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 15}}]],""]}}]
}}
set moduleName differentiate
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {differentiate}
set C_modelType { void 0 }
set C_modelArgList {
	{ img int 8 regular {axi_slave 0}  }
	{ window_V int 3 regular {axi_slave 0}  }
	{ res_V int 15 regular {array 2852 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "img", "interface" : "axi_slave", "bundle":"diff_io","type":"ap_memory","bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "img","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 47,"step" : 1}]}]}], "offset" : {"in":4096}, "offset_end" : {"in":8191}} , 
 	{ "Name" : "window_V", "interface" : "axi_slave", "bundle":"diff_io","type":"ap_memory","bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "window.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}], "offset" : {"in":8192}, "offset_end" : {"in":8207}} , 
 	{ "Name" : "res_V", "interface" : "memory", "bitwidth" : 15, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":14,"cElement": [{"cName": "res.V","cData": "uint15","bit_use": { "low": 0,"up": 14},"cArray": [{"low" : 0,"up" : 61,"step" : 1},{"low" : 0,"up" : 45,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ res_V_address0 sc_out sc_lv 12 signal 2 } 
	{ res_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ res_V_we0 sc_out sc_logic 1 signal 2 } 
	{ res_V_d0 sc_out sc_lv 15 signal 2 } 
	{ s_axi_diff_io_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_diff_io_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_diff_io_AWADDR sc_in sc_lv 14 signal -1 } 
	{ s_axi_diff_io_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_diff_io_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_diff_io_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_diff_io_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_diff_io_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_diff_io_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_diff_io_ARADDR sc_in sc_lv 14 signal -1 } 
	{ s_axi_diff_io_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_diff_io_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_diff_io_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_diff_io_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_diff_io_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_diff_io_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_diff_io_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_diff_io_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "diff_io", "role": "AWADDR" },"address":[{"name":"differentiate","role":"start","value":"0","valid_bit":"0"},{"name":"differentiate","role":"continue","value":"0","valid_bit":"4"},{"name":"differentiate","role":"auto_start","value":"0","valid_bit":"7"},{"name":"img","role":"data","value":"4096"},{"name":"window_V","role":"data","value":"8192"}] },
	{ "name": "s_axi_diff_io_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "AWVALID" } },
	{ "name": "s_axi_diff_io_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "AWREADY" } },
	{ "name": "s_axi_diff_io_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "WVALID" } },
	{ "name": "s_axi_diff_io_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "WREADY" } },
	{ "name": "s_axi_diff_io_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "diff_io", "role": "WDATA" } },
	{ "name": "s_axi_diff_io_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "diff_io", "role": "WSTRB" } },
	{ "name": "s_axi_diff_io_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "diff_io", "role": "ARADDR" },"address":[{"name":"differentiate","role":"start","value":"0","valid_bit":"0"},{"name":"differentiate","role":"done","value":"0","valid_bit":"1"},{"name":"differentiate","role":"idle","value":"0","valid_bit":"2"},{"name":"differentiate","role":"ready","value":"0","valid_bit":"3"},{"name":"differentiate","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_diff_io_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "ARVALID" } },
	{ "name": "s_axi_diff_io_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "ARREADY" } },
	{ "name": "s_axi_diff_io_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "RVALID" } },
	{ "name": "s_axi_diff_io_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "RREADY" } },
	{ "name": "s_axi_diff_io_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "diff_io", "role": "RDATA" } },
	{ "name": "s_axi_diff_io_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "diff_io", "role": "RRESP" } },
	{ "name": "s_axi_diff_io_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "BVALID" } },
	{ "name": "s_axi_diff_io_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "BREADY" } },
	{ "name": "s_axi_diff_io_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "diff_io", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "diff_io", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "res_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "res_V", "role": "address0" }} , 
 	{ "name": "res_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce0" }} , 
 	{ "name": "res_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we0" }} , 
 	{ "name": "res_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "res_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94"],
		"CDFG" : "differentiate",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "img", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "window_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "res_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_diff_io_s_axi_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_mulbkb_U0", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U1", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U2", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U3", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U4", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U5", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U6", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U7", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U8", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U9", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U10", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U11", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U12", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U13", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U14", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U15", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U16", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U17", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U18", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U19", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U20", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U21", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U22", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U23", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U24", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U25", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U26", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U27", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U28", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U29", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U30", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U31", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U32", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U33", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U34", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U35", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U36", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U37", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U38", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U39", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U40", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U41", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U42", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U43", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U44", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U45", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U46", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U47", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U48", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U49", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U50", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U51", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U52", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U53", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U54", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U55", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U56", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U57", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U58", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U59", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U60", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U61", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U62", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U63", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U64", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U65", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U66", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U67", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U68", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U69", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U70", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U71", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U72", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U73", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U74", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U75", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U76", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U77", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U78", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U79", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U80", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U81", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U82", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U83", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U84", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U85", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U86", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U87", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U88", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U89", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U90", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U91", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U92", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	differentiate {
		img {Type I LastRead 144 FirstWrite -1}
		window_V {Type I LastRead 26 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 28}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "8933", "Max" : "8933"}
	, {"Name" : "Interval", "Min" : "8934", "Max" : "8934"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	res_V { ap_memory {  { res_V_address0 mem_address 1 12 }  { res_V_ce0 mem_ce 1 1 }  { res_V_we0 mem_we 1 1 }  { res_V_d0 mem_din 1 15 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
