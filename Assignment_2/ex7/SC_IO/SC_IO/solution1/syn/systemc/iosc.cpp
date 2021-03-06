// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "iosc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic iosc::ap_const_logic_1 = sc_dt::Log_1;
const sc_lv<1> iosc::ap_const_lv1_0 = "0";
const sc_lv<32> iosc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> iosc::ap_const_lv32_1 = "1";
const sc_lv<1> iosc::ap_const_lv1_1 = "1";
const sc_lv<4> iosc::ap_const_lv4_0 = "0000";
const sc_lv<2> iosc::ap_const_lv2_0 = "00";
const sc_logic iosc::ap_const_logic_0 = sc_dt::Log_0;
const bool iosc::ap_const_boolean_1 = true;

iosc::iosc(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_iosc_iosPulseThread_fu_108 = new iosc_iosPulseThread("grp_iosc_iosPulseThread_fu_108");
    grp_iosc_iosPulseThread_fu_108->ap_clk(clk);
    grp_iosc_iosPulseThread_fu_108->ap_rst(reset);
    grp_iosc_iosPulseThread_fu_108->iosc_secCounter_V_i(iosc_secCounter_V);
    grp_iosc_iosPulseThread_fu_108->iosc_secCounter_V_o(grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o);
    grp_iosc_iosPulseThread_fu_108->iosc_secCounter_V_o_ap_vld(grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld);
    grp_iosc_iosPulseThread_fu_108->iosc_counter_clk_V_i(iosc_counter_clk_V);
    grp_iosc_iosPulseThread_fu_108->iosc_counter_clk_V_o(grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o);
    grp_iosc_iosPulseThread_fu_108->iosc_counter_clk_V_o_ap_vld(grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld);
    grp_iosc_iosThread_fu_130 = new iosc_iosThread("grp_iosc_iosThread_fu_130");
    grp_iosc_iosThread_fu_130->ap_clk(clk);
    grp_iosc_iosThread_fu_130->ap_rst(reset);
    grp_iosc_iosThread_fu_130->ctrl(ctrl);
    grp_iosc_iosThread_fu_130->inSwitch(inSwitch);
    grp_iosc_iosThread_fu_130->outLeds(grp_iosc_iosThread_fu_130_outLeds);
    grp_iosc_iosThread_fu_130->outLeds_ap_vld(grp_iosc_iosThread_fu_130_outLeds_ap_vld);
    grp_iosc_iosThread_fu_130->iosc_switchs_V(grp_iosc_iosThread_fu_130_iosc_switchs_V);
    grp_iosc_iosThread_fu_130->iosc_switchs_V_ap_vld(grp_iosc_iosThread_fu_130_iosc_switchs_V_ap_vld);
    grp_iosc_iosThread_fu_130->iosc_secCounter_V(iosc_secCounter_V);

    SC_METHOD(thread_iosc_counter_clk_V);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_iosc_secCounter_V);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_outLeds);
    dont_initialize();
    sensitive << ( clk.pos() );

    SC_METHOD(thread_ap_CS_fsm);

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_iosc_ssdm_thread_1_load_fu_156_p1);

    SC_METHOD(thread_iosc_ssdm_thread_s_load_fu_152_p1);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( clk.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "iosc_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, clk, "(port)clk");
    sc_trace(mVcdFile, reset, "(port)reset");
    sc_trace(mVcdFile, ctrl, "(port)ctrl");
    sc_trace(mVcdFile, inSwitch, "(port)inSwitch");
    sc_trace(mVcdFile, outLeds, "(port)outLeds");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, iosc_ssdm_thread_s_load_fu_152_p1, "iosc_ssdm_thread_s_load_fu_152_p1");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o, "grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o");
    sc_trace(mVcdFile, grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld, "grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld");
    sc_trace(mVcdFile, grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o, "grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o");
    sc_trace(mVcdFile, grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld, "grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld");
    sc_trace(mVcdFile, grp_iosc_iosThread_fu_130_outLeds, "grp_iosc_iosThread_fu_130_outLeds");
    sc_trace(mVcdFile, grp_iosc_iosThread_fu_130_outLeds_ap_vld, "grp_iosc_iosThread_fu_130_outLeds_ap_vld");
    sc_trace(mVcdFile, grp_iosc_iosThread_fu_130_iosc_switchs_V, "grp_iosc_iosThread_fu_130_iosc_switchs_V");
    sc_trace(mVcdFile, grp_iosc_iosThread_fu_130_iosc_switchs_V_ap_vld, "grp_iosc_iosThread_fu_130_iosc_switchs_V_ap_vld");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, iosc_secCounter_V, "iosc_secCounter_V");
    sc_trace(mVcdFile, iosc_counter_clk_V, "iosc_counter_clk_V");
    sc_trace(mVcdFile, iosc_ssdm_thread_1_load_fu_156_p1, "iosc_ssdm_thread_1_load_fu_156_p1");
#endif

    }
    mHdltvinHandle.open("iosc.hdltvin.dat");
    mHdltvoutHandle.open("iosc.hdltvout.dat");
}

iosc::~iosc() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete grp_iosc_iosPulseThread_fu_108;
    delete grp_iosc_iosThread_fu_130;
}

void iosc::thread_iosc_counter_clk_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, iosc_ssdm_thread_s_load_fu_152_p1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, iosc_ssdm_thread_1_load_fu_156_p1.read()))) {
        iosc_counter_clk_V = ap_const_lv32_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld.read())) {
        iosc_counter_clk_V = grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o.read();
    }
}

void iosc::thread_iosc_secCounter_V() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, iosc_ssdm_thread_s_load_fu_152_p1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, iosc_ssdm_thread_1_load_fu_156_p1.read()))) {
        iosc_secCounter_V = ap_const_lv4_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld.read())) {
        iosc_secCounter_V = grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o.read();
    }
}

void iosc::thread_outLeds() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, grp_iosc_iosThread_fu_130_outLeds_ap_vld.read())) {
        outLeds = grp_iosc_iosThread_fu_130_outLeds.read();
    }
}

void iosc::thread_ap_CS_fsm() {
    ap_CS_fsm = ap_const_lv2_0;
}

void iosc::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void iosc::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void iosc::thread_iosc_ssdm_thread_1_load_fu_156_p1() {
    iosc_ssdm_thread_1_load_fu_156_p1 = ap_const_lv1_0;
}

void iosc::thread_iosc_ssdm_thread_s_load_fu_152_p1() {
    iosc_ssdm_thread_s_load_fu_152_p1 = ap_const_lv1_0;
}

void iosc::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"reset\" :  \"" << reset.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ctrl\" :  \"" << ctrl.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"inSwitch\" :  \"" << inSwitch.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"outLeds\" :  \"" << outLeds.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

