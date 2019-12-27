set C_TypeInfoList {{ 
"differentiate" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"img": [[], {"array": [ {"array": ["0", [48]]}, [64]]}] }, {"window": [[], {"array": [ {"array": ["1", [3]]}, [3]]}] }, {"res": [[], {"array": [ {"array": ["2", [46]]}, [62]]}] }],[],""], 
"2": [ "result_t", {"typedef": [[[],"3"],""]}], 
"3": [ "ap_uint<15>", {"hls_type": {"ap_uint": [[[[], {"scalar": { "int": 15}}]],""]}}], 
"1": [ "window_t", {"typedef": [[[],"4"],""]}], 
"4": [ "ap_int<3>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 3}}]],""]}}], 
"0": [ "img_t", {"typedef": [[[], {"scalar": "unsigned char"}],""]}]
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
	{ img int 8 regular {array 3072 { 1 3 } 1 1 }  }
	{ window_V int 3 regular {array 9 { 1 3 } 1 1 }  }
	{ res_V int 15 regular {array 2852 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "img", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "img","cData": "unsigned char","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 63,"step" : 1},{"low" : 0,"up" : 47,"step" : 1}]}]}]} , 
 	{ "Name" : "window_V", "interface" : "memory", "bitwidth" : 3, "direction" : "READONLY", "bitSlice":[{"low":0,"up":2,"cElement": [{"cName": "window.V","cData": "int3","bit_use": { "low": 0,"up": 2},"cArray": [{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "res_V", "interface" : "memory", "bitwidth" : 15, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":14,"cElement": [{"cName": "res.V","cData": "uint15","bit_use": { "low": 0,"up": 14},"cArray": [{"low" : 0,"up" : 61,"step" : 1},{"low" : 0,"up" : 45,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 16
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ img_address0 sc_out sc_lv 12 signal 0 } 
	{ img_ce0 sc_out sc_logic 1 signal 0 } 
	{ img_q0 sc_in sc_lv 8 signal 0 } 
	{ window_V_address0 sc_out sc_lv 4 signal 1 } 
	{ window_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ window_V_q0 sc_in sc_lv 3 signal 1 } 
	{ res_V_address0 sc_out sc_lv 12 signal 2 } 
	{ res_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ res_V_we0 sc_out sc_logic 1 signal 2 } 
	{ res_V_d0 sc_out sc_lv 15 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "img_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "img", "role": "address0" }} , 
 	{ "name": "img_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "img", "role": "ce0" }} , 
 	{ "name": "img_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "img", "role": "q0" }} , 
 	{ "name": "window_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "window_V", "role": "address0" }} , 
 	{ "name": "window_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "window_V", "role": "ce0" }} , 
 	{ "name": "window_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "window_V", "role": "q0" }} , 
 	{ "name": "res_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "res_V", "role": "address0" }} , 
 	{ "name": "res_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "ce0" }} , 
 	{ "name": "res_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "res_V", "role": "we0" }} , 
 	{ "name": "res_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "res_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_mulbkb_U0", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.differentiate_maccud_U1", "Parent" : "0"}]}


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
	img { ap_memory {  { img_address0 mem_address 1 12 }  { img_ce0 mem_ce 1 1 }  { img_q0 mem_dout 0 8 } } }
	window_V { ap_memory {  { window_V_address0 mem_address 1 4 }  { window_V_ce0 mem_ce 1 1 }  { window_V_q0 mem_dout 0 3 } } }
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
