set moduleName iosc_iosPulseThread
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {iosc::iosPulseThread}
set C_modelType { void 0 }
set C_modelArgList {
	{ iosc_secCounter_V int 4 regular {pointer 2}  }
	{ iosc_counter_clk_V int 32 regular {pointer 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "iosc_secCounter_V", "interface" : "wire", "bitwidth" : 4, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "iosc.secCounter.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "iosc_counter_clk_V", "interface" : "wire", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "iosc.counter_clk.V","cData": "uint32","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 8
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ iosc_secCounter_V_i sc_in sc_lv 4 signal 0 } 
	{ iosc_secCounter_V_o sc_out sc_lv 4 signal 0 } 
	{ iosc_secCounter_V_o_ap_vld sc_out sc_logic 1 outvld 0 } 
	{ iosc_counter_clk_V_i sc_in sc_lv 32 signal 1 } 
	{ iosc_counter_clk_V_o sc_out sc_lv 32 signal 1 } 
	{ iosc_counter_clk_V_o_ap_vld sc_out sc_logic 1 outvld 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "iosc_secCounter_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "iosc_secCounter_V", "role": "i" }} , 
 	{ "name": "iosc_secCounter_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "iosc_secCounter_V", "role": "o" }} , 
 	{ "name": "iosc_secCounter_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "iosc_secCounter_V", "role": "o_ap_vld" }} , 
 	{ "name": "iosc_counter_clk_V_i", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "iosc_counter_clk_V", "role": "i" }} , 
 	{ "name": "iosc_counter_clk_V_o", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "iosc_counter_clk_V", "role": "o" }} , 
 	{ "name": "iosc_counter_clk_V_o_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "iosc_counter_clk_V", "role": "o_ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "iosc_iosPulseThread",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "clk", "Type" : "None", "Direction" : "I"},
			{"Name" : "reset", "Type" : "None", "Direction" : "I"},
			{"Name" : "ctrl", "Type" : "None", "Direction" : "I"},
			{"Name" : "inSwitch", "Type" : "None", "Direction" : "I"},
			{"Name" : "outLeds", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "iosc_switchs_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "iosc_secPulse_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "iosc_secCounter_V", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "iosc_counter_clk_V", "Type" : "OVld", "Direction" : "IO"}]}]}


set ArgLastReadFirstWriteLatency {
	iosc_iosPulseThread {
		clk {Type I LastRead -1 FirstWrite -1}
		reset {Type I LastRead -1 FirstWrite -1}
		ctrl {Type I LastRead -1 FirstWrite -1}
		inSwitch {Type I LastRead -1 FirstWrite -1}
		outLeds {Type O LastRead -1 FirstWrite -1}
		iosc_switchs_V {Type I LastRead -1 FirstWrite -1}
		iosc_secPulse_V {Type I LastRead -1 FirstWrite -1}
		iosc_secCounter_V {Type IO LastRead 2 FirstWrite 2}
		iosc_counter_clk_V {Type IO LastRead 1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3", "Max" : "3"}
	, {"Name" : "Interval", "Min" : "3", "Max" : "3"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	iosc_secCounter_V { ap_ovld {  { iosc_secCounter_V_i in_data 0 4 }  { iosc_secCounter_V_o out_data 1 4 }  { iosc_secCounter_V_o_ap_vld out_vld 1 1 } } }
	iosc_counter_clk_V { ap_ovld {  { iosc_counter_clk_V_i in_data 0 32 }  { iosc_counter_clk_V_o out_data 1 32 }  { iosc_counter_clk_V_o_ap_vld out_vld 1 1 } } }
}
