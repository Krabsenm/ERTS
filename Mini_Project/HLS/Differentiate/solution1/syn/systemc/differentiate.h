// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _differentiate_HH_
#define _differentiate_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "differentiate_mulbkb.h"
#include "differentiate_maccud.h"

namespace ap_rtl {

struct differentiate : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > img_address0;
    sc_out< sc_logic > img_ce0;
    sc_in< sc_lv<8> > img_q0;
    sc_out< sc_lv<4> > window_V_address0;
    sc_out< sc_logic > window_V_ce0;
    sc_in< sc_lv<3> > window_V_q0;
    sc_out< sc_lv<12> > res_V_address0;
    sc_out< sc_logic > res_V_ce0;
    sc_out< sc_logic > res_V_we0;
    sc_out< sc_lv<15> > res_V_d0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    differentiate(sc_module_name name);
    SC_HAS_PROCESS(differentiate);

    ~differentiate();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    differentiate_mulbkb<1,2,6,7,12>* differentiate_mulbkb_U0;
    differentiate_maccud<1,1,3,8,16,16>* differentiate_maccud_U1;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > tmp_fu_179_p2;
    sc_signal< sc_lv<6> > tmp_reg_396;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond1_fu_173_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<12> > grp_fu_188_p2;
    sc_signal< sc_lv<12> > tmp_3_reg_407;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > tmp_2_fu_200_p2;
    sc_signal< sc_lv<6> > tmp_2_reg_415;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond2_fu_194_p2;
    sc_signal< sc_lv<12> > res_V_addr_reg_420;
    sc_signal< sc_lv<6> > i_1_fu_220_p2;
    sc_signal< sc_lv<5> > tmp_11_fu_246_p2;
    sc_signal< sc_lv<5> > tmp_11_reg_430;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > ii_1_fu_258_p2;
    sc_signal< sc_lv<2> > ii_1_reg_438;
    sc_signal< sc_lv<13> > tmp_16_fu_293_p2;
    sc_signal< sc_lv<13> > tmp_16_reg_443;
    sc_signal< sc_lv<1> > exitcond3_fu_252_p2;
    sc_signal< sc_lv<15> > tmp_7_fu_317_p3;
    sc_signal< sc_lv<15> > tmp_7_reg_448;
    sc_signal< sc_lv<6> > j_1_fu_325_p2;
    sc_signal< sc_lv<6> > j_1_reg_453;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<2> > jj_1_fu_355_p2;
    sc_signal< sc_lv<2> > jj_1_reg_466;
    sc_signal< sc_lv<13> > tmp_18_fu_370_p2;
    sc_signal< sc_lv<13> > tmp_18_reg_471;
    sc_signal< sc_lv<1> > exitcond_fu_349_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<3> > window_V_load_reg_481;
    sc_signal< sc_lv<8> > img_load_reg_486;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<16> > grp_fu_385_p3;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<6> > i_reg_103;
    sc_signal< sc_lv<6> > j_reg_115;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<16> > p_s_reg_127;
    sc_signal< sc_lv<2> > ii_reg_139;
    sc_signal< sc_lv<16> > p_020_1_reg_150;
    sc_signal< sc_lv<2> > jj_reg_162;
    sc_signal< sc_lv<32> > tmp_11_cast_fu_215_p1;
    sc_signal< sc_lv<32> > tmp_17_cast_fu_344_p1;
    sc_signal< sc_lv<32> > tmp_18_cast_fu_375_p1;
    sc_signal< sc_lv<6> > grp_fu_188_p0;
    sc_signal< sc_lv<7> > grp_fu_188_p1;
    sc_signal< sc_lv<12> > tmp_2_cast_cast_fu_206_p1;
    sc_signal< sc_lv<12> > tmp_5_fu_210_p2;
    sc_signal< sc_lv<4> > tmp_10_fu_234_p3;
    sc_signal< sc_lv<5> > p_shl_cast_fu_242_p1;
    sc_signal< sc_lv<5> > ii_cast3_cast_fu_230_p1;
    sc_signal< sc_lv<6> > ii_cast4_fu_226_p1;
    sc_signal< sc_lv<6> > sum_fu_264_p2;
    sc_signal< sc_lv<12> > tmp_14_fu_269_p3;
    sc_signal< sc_lv<10> > tmp_15_fu_281_p3;
    sc_signal< sc_lv<13> > p_shl1_cast_fu_277_p1;
    sc_signal< sc_lv<13> > p_shl2_cast_fu_289_p1;
    sc_signal< sc_lv<15> > tmp_13_fu_307_p1;
    sc_signal< sc_lv<1> > tmp_12_fu_299_p3;
    sc_signal< sc_lv<15> > tmp_6_fu_311_p2;
    sc_signal< sc_lv<5> > jj_cast1_cast_fu_335_p1;
    sc_signal< sc_lv<5> > tmp_17_fu_339_p2;
    sc_signal< sc_lv<6> > jj_cast2_fu_331_p1;
    sc_signal< sc_lv<6> > tmp_9_fu_361_p2;
    sc_signal< sc_lv<13> > tmp_9_cast_cast_fu_366_p1;
    sc_signal< sc_lv<8> > grp_fu_385_p1;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    sc_signal< sc_lv<12> > grp_fu_188_p00;
    sc_signal< sc_lv<11> > grp_fu_385_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_state9;
    static const sc_lv<11> ap_ST_fsm_state10;
    static const sc_lv<11> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<12> ap_const_lv12_2E;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<15> ap_const_lv15_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_173_p2();
    void thread_exitcond2_fu_194_p2();
    void thread_exitcond3_fu_252_p2();
    void thread_exitcond_fu_349_p2();
    void thread_grp_fu_188_p0();
    void thread_grp_fu_188_p00();
    void thread_grp_fu_188_p1();
    void thread_grp_fu_385_p1();
    void thread_grp_fu_385_p10();
    void thread_i_1_fu_220_p2();
    void thread_ii_1_fu_258_p2();
    void thread_ii_cast3_cast_fu_230_p1();
    void thread_ii_cast4_fu_226_p1();
    void thread_img_address0();
    void thread_img_ce0();
    void thread_j_1_fu_325_p2();
    void thread_jj_1_fu_355_p2();
    void thread_jj_cast1_cast_fu_335_p1();
    void thread_jj_cast2_fu_331_p1();
    void thread_p_shl1_cast_fu_277_p1();
    void thread_p_shl2_cast_fu_289_p1();
    void thread_p_shl_cast_fu_242_p1();
    void thread_res_V_address0();
    void thread_res_V_ce0();
    void thread_res_V_d0();
    void thread_res_V_we0();
    void thread_sum_fu_264_p2();
    void thread_tmp_10_fu_234_p3();
    void thread_tmp_11_cast_fu_215_p1();
    void thread_tmp_11_fu_246_p2();
    void thread_tmp_12_fu_299_p3();
    void thread_tmp_13_fu_307_p1();
    void thread_tmp_14_fu_269_p3();
    void thread_tmp_15_fu_281_p3();
    void thread_tmp_16_fu_293_p2();
    void thread_tmp_17_cast_fu_344_p1();
    void thread_tmp_17_fu_339_p2();
    void thread_tmp_18_cast_fu_375_p1();
    void thread_tmp_18_fu_370_p2();
    void thread_tmp_2_cast_cast_fu_206_p1();
    void thread_tmp_2_fu_200_p2();
    void thread_tmp_5_fu_210_p2();
    void thread_tmp_6_fu_311_p2();
    void thread_tmp_7_fu_317_p3();
    void thread_tmp_9_cast_cast_fu_366_p1();
    void thread_tmp_9_fu_361_p2();
    void thread_tmp_fu_179_p2();
    void thread_window_V_address0();
    void thread_window_V_ce0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
