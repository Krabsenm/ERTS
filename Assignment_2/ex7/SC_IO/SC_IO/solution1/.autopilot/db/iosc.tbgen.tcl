set moduleName iosc
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {iosc::iosc}
set C_modelType { void 0 }
set C_modelArgList {
	{ clk int 1 unused {pointer 0}  }
	{ reset int 1 unused {pointer 0}  }
	{ ctrl int 4 regular {pointer 0 volatile }  }
	{ inSwitch int 4 regular {pointer 0 volatile }  }
	{ outLeds int 4 regular {pointer 1 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "clk", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "iosc.clk.m_if.Val","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "reset", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "iosc.reset.m_if.Val","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "ctrl", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "iosc.ctrl.m_if.Val.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "inSwitch", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "iosc.inSwitch.m_if.Val.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "outLeds", "interface" : "wire", "bitwidth" : 4, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":3,"cElement": [{"cName": "iosc.outLeds.m_if.Val.V","cData": "uint4","bit_use": { "low": 0,"up": 3},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 5
set portList { 
	{ clk sc_in sc_logic 1 clock -1 } 
	{ reset sc_in sc_logic 1 reset -1 active_high_sync clk } 
	{ ctrl sc_in sc_lv 4 signal 2 clk } 
	{ inSwitch sc_in sc_lv 4 signal 3 clk } 
	{ outLeds sc_out sc_lv 4 signal 4 clk } 
}
set NewPortList {[ 
	{ "name": "clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "clk", "role": "default" }} , 
 	{ "name": "reset", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "reset", "role": "default" }} , 
 	{ "name": "ctrl", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "ctrl", "role": "default" }} , 
 	{ "name": "inSwitch", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "inSwitch", "role": "default" }} , 
 	{ "name": "outLeds", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "outLeds", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "iosc",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Dataflow", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"InputProcess" : [],
		"OutputProcess" : [],
		"Port" : [
			{"Name" : "clk", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "clk"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "clk"}]},
			{"Name" : "reset", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "reset"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "reset"}]},
			{"Name" : "ctrl", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "ctrl"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "ctrl"}]},
			{"Name" : "inSwitch", "Type" : "None", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "inSwitch"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "inSwitch"}]},
			{"Name" : "outLeds", "Type" : "Vld", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "outLeds"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "outLeds"}]},
			{"Name" : "iosc_switchs_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "iosc_switchs_V"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "iosc_switchs_V"}]},
			{"Name" : "iosc_secPulse_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "iosc_secPulse_V"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "iosc_secPulse_V"}]},
			{"Name" : "iosc_secCounter_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "iosc_secCounter_V"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "iosc_secCounter_V"}]},
			{"Name" : "iosc_counter_clk_V", "Type" : "OVld", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_iosc_iosThread_fu_130", "Port" : "iosc_counter_clk_V"},
					{"ID" : "1", "SubInstance" : "grp_iosc_iosPulseThread_fu_108", "Port" : "iosc_counter_clk_V"}]},
			{"Name" : "iosc_ssdm_thread_M_iosThread", "Type" : "None", "Direction" : "I"},
			{"Name" : "iosc_ssdm_thread_M_iosPulseThread", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_iosc_iosPulseThread_fu_108", "Parent" : "0",
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
			{"Name" : "iosc_counter_clk_V", "Type" : "OVld", "Direction" : "IO"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_iosc_iosThread_fu_130", "Parent" : "0",
		"CDFG" : "iosc_iosThread",
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
			{"Name" : "iosc_switchs_V", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "iosc_secPulse_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "iosc_secCounter_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "iosc_counter_clk_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	iosc {
		clk {Type I LastRead -1 FirstWrite -1}
		reset {Type I LastRead -1 FirstWrite -1}
		ctrl {Type I LastRead 3 FirstWrite -1}
		inSwitch {Type I LastRead 3 FirstWrite -1}
		outLeds {Type O LastRead -1 FirstWrite -1}
		iosc_switchs_V {Type IO LastRead -1 FirstWrite -1}
		iosc_secPulse_V {Type IO LastRead -1 FirstWrite -1}
		iosc_secCounter_V {Type IO LastRead -1 FirstWrite -1}
		iosc_counter_clk_V {Type IO LastRead -1 FirstWrite -1}
		iosc_ssdm_thread_M_iosThread {Type I LastRead -1 FirstWrite -1}
		iosc_ssdm_thread_M_iosPulseThread {Type I LastRead -1 FirstWrite -1}}
	iosc_iosPulseThread {
		clk {Type I LastRead -1 FirstWrite -1}
		reset {Type I LastRead -1 FirstWrite -1}
		ctrl {Type I LastRead -1 FirstWrite -1}
		inSwitch {Type I LastRead -1 FirstWrite -1}
		outLeds {Type O LastRead -1 FirstWrite -1}
		iosc_switchs_V {Type I LastRead -1 FirstWrite -1}
		iosc_secPulse_V {Type I LastRead -1 FirstWrite -1}
		iosc_secCounter_V {Type IO LastRead 2 FirstWrite 2}
		iosc_counter_clk_V {Type IO LastRead 1 FirstWrite 1}}
	iosc_iosThread {
		clk {Type I LastRead -1 FirstWrite -1}
		reset {Type I LastRead -1 FirstWrite -1}
		ctrl {Type I LastRead 3 FirstWrite -1}
		inSwitch {Type I LastRead 3 FirstWrite -1}
		outLeds {Type O LastRead -1 FirstWrite 3}
		iosc_switchs_V {Type O LastRead -1 FirstWrite 3}
		iosc_secPulse_V {Type I LastRead -1 FirstWrite -1}
		iosc_secCounter_V {Type I LastRead 2 FirstWrite -1}
		iosc_counter_clk_V {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "0", "Max" : "5"}
	, {"Name" : "Interval", "Min" : "1", "Max" : "6"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	ctrl { ap_none {  { ctrl in_data 0 4 } } }
	inSwitch { ap_none {  { inSwitch in_data 0 4 } } }
	outLeds { ap_vld {  { outLeds out_data 1 4 } } }
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
