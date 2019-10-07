// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _iosc_iosThread_HH_
#define _iosc_iosThread_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct iosc_iosThread : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_lv<4> > ctrl;
    sc_in< sc_lv<4> > inSwitch;
    sc_out< sc_lv<4> > outLeds;
    sc_out< sc_logic > outLeds_ap_vld;
    sc_out< sc_lv<4> > iosc_switchs_V;
    sc_out< sc_logic > iosc_switchs_V_ap_vld;
    sc_in< sc_lv<4> > iosc_secCounter_V;


    // Module declarations
    iosc_iosThread(sc_module_name name);
    SC_HAS_PROCESS(iosc_iosThread);

    ~iosc_iosThread();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<1> > tmp_fu_125_p2;
    sc_signal< sc_lv<1> > tmp_reg_138;
    sc_signal< sc_lv<4> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > r_V_fu_131_p2;
    sc_signal< sc_lv<4> > v_V_phi_fu_117_p4;
    sc_signal< sc_lv<4> > v_V_reg_114;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<4> ap_ST_fsm_state2;
    static const sc_lv<4> ap_ST_fsm_state3;
    static const sc_lv<4> ap_ST_fsm_state4;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_iosc_switchs_V();
    void thread_iosc_switchs_V_ap_vld();
    void thread_outLeds();
    void thread_outLeds_ap_vld();
    void thread_r_V_fu_131_p2();
    void thread_tmp_fu_125_p2();
    void thread_v_V_phi_fu_117_p4();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
