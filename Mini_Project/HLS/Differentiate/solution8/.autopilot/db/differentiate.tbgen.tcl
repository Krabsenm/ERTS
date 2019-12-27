set C_TypeInfoList {{ 
"differentiate" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"img": [[], {"array": [ {"array": ["0", [48]]}, [64]]}] }, {"window": [[], {"array": [ {"array": ["1", [3]]}, [3]]}] }, {"res": [[], {"array": [ {"array": ["2", [46]]}, [62]]}] }],[],""], 
"0": [ "img_t", {"typedef": [[[], {"scalar": "unsigned char"}],""]}], 
"1": [ "window_t", {"typedef": [[[],"3"],""]}], 
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
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
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U1", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	differentiate {
		img {Type I LastRead 7 FirstWrite -1}
		window_V {Type I LastRead 6 FirstWrite -1}
		res_V {Type O LastRead -1 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "128589", "Max" : "128589"}
	, {"Name" : "Interval", "Min" : "128590", "Max" : "128590"}
]}

set PipelineEnableSignalInfo {[
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
