// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "differentiate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic differentiate::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic differentiate::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<11> differentiate::ap_ST_fsm_state1 = "1";
const sc_lv<11> differentiate::ap_ST_fsm_state2 = "10";
const sc_lv<11> differentiate::ap_ST_fsm_state3 = "100";
const sc_lv<11> differentiate::ap_ST_fsm_state4 = "1000";
const sc_lv<11> differentiate::ap_ST_fsm_state5 = "10000";
const sc_lv<11> differentiate::ap_ST_fsm_state6 = "100000";
const sc_lv<11> differentiate::ap_ST_fsm_state7 = "1000000";
const sc_lv<11> differentiate::ap_ST_fsm_state8 = "10000000";
const sc_lv<11> differentiate::ap_ST_fsm_state9 = "100000000";
const sc_lv<11> differentiate::ap_ST_fsm_state10 = "1000000000";
const sc_lv<11> differentiate::ap_ST_fsm_state11 = "10000000000";
const sc_lv<32> differentiate::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> differentiate::ap_const_lv32_1 = "1";
const sc_lv<1> differentiate::ap_const_lv1_0 = "0";
const sc_lv<32> differentiate::ap_const_lv32_2 = "10";
const sc_lv<32> differentiate::ap_const_lv32_3 = "11";
const sc_lv<32> differentiate::ap_const_lv32_4 = "100";
const sc_lv<1> differentiate::ap_const_lv1_1 = "1";
const sc_lv<32> differentiate::ap_const_lv32_5 = "101";
const sc_lv<32> differentiate::ap_const_lv32_6 = "110";
const sc_lv<32> differentiate::ap_const_lv32_7 = "111";
const sc_lv<32> differentiate::ap_const_lv32_8 = "1000";
const sc_lv<32> differentiate::ap_const_lv32_9 = "1001";
const sc_lv<6> differentiate::ap_const_lv6_1 = "1";
const sc_lv<32> differentiate::ap_const_lv32_A = "1010";
const sc_lv<16> differentiate::ap_const_lv16_0 = "0000000000000000";
const sc_lv<2> differentiate::ap_const_lv2_0 = "00";
const sc_lv<6> differentiate::ap_const_lv6_3F = "111111";
const sc_lv<12> differentiate::ap_const_lv12_2E = "101110";
const sc_lv<6> differentiate::ap_const_lv6_2F = "101111";
const sc_lv<2> differentiate::ap_const_lv2_3 = "11";
const sc_lv<2> differentiate::ap_const_lv2_1 = "1";
const sc_lv<6> differentiate::ap_const_lv6_0 = "000000";
const sc_lv<4> differentiate::ap_const_lv4_0 = "0000";
const sc_lv<32> differentiate::ap_const_lv32_F = "1111";
const sc_lv<15> differentiate::ap_const_lv15_0 = "000000000000000";
const bool differentiate::ap_const_boolean_1 = true;

differentiate::differentiate(sc_module_name name) : sc_module(name), mVcdFile(0) {
    differentiate_mulbkb_U0 = new differentiate_mulbkb<1,2,6,7,12>("differentiate_mulbkb_U0");
    differentiate_mulbkb_U0->clk(ap_clk);
    differentiate_mulbkb_U0->reset(ap_rst);
    differentiate_mulbkb_U0->din0(grp_fu_188_p0);
    differentiate_mulbkb_U0->din1(grp_fu_188_p1);
    differentiate_mulbkb_U0->ce(ap_var_for_const0);
    differentiate_mulbkb_U0->dout(grp_fu_188_p2);
    differentiate_maccud_U1 = new differentiate_maccud<1,1,3,8,16,16>("differentiate_maccud_U1");
    differentiate_maccud_U1->din0(window_V_load_reg_481);
    differentiate_maccud_U1->din1(grp_fu_385_p1);
    differentiate_maccud_U1->din2(p_020_1_reg_150);
    differentiate_maccud_U1->dout(grp_fu_385_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_173_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_173_p2 );

    SC_METHOD(thread_exitcond1_fu_173_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_103 );

    SC_METHOD(thread_exitcond2_fu_194_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j_reg_115 );

    SC_METHOD(thread_exitcond3_fu_252_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ii_reg_139 );

    SC_METHOD(thread_exitcond_fu_349_p2);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( jj_reg_162 );

    SC_METHOD(thread_grp_fu_188_p0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( grp_fu_188_p00 );

    SC_METHOD(thread_grp_fu_188_p00);
    sensitive << ( tmp_reg_396 );

    SC_METHOD(thread_grp_fu_188_p1);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_grp_fu_385_p1);
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( grp_fu_385_p10 );

    SC_METHOD(thread_grp_fu_385_p10);
    sensitive << ( img_load_reg_486 );

    SC_METHOD(thread_i_1_fu_220_p2);
    sensitive << ( i_reg_103 );

    SC_METHOD(thread_ii_1_fu_258_p2);
    sensitive << ( ii_reg_139 );

    SC_METHOD(thread_ii_cast3_cast_fu_230_p1);
    sensitive << ( ii_reg_139 );

    SC_METHOD(thread_ii_cast4_fu_226_p1);
    sensitive << ( ii_reg_139 );

    SC_METHOD(thread_img_address0);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_18_cast_fu_375_p1 );

    SC_METHOD(thread_img_ce0);
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_j_1_fu_325_p2);
    sensitive << ( j_reg_115 );

    SC_METHOD(thread_jj_1_fu_355_p2);
    sensitive << ( jj_reg_162 );

    SC_METHOD(thread_jj_cast1_cast_fu_335_p1);
    sensitive << ( jj_reg_162 );

    SC_METHOD(thread_jj_cast2_fu_331_p1);
    sensitive << ( jj_reg_162 );

    SC_METHOD(thread_p_shl1_cast_fu_277_p1);
    sensitive << ( tmp_14_fu_269_p3 );

    SC_METHOD(thread_p_shl2_cast_fu_289_p1);
    sensitive << ( tmp_15_fu_281_p3 );

    SC_METHOD(thread_p_shl_cast_fu_242_p1);
    sensitive << ( tmp_10_fu_234_p3 );

    SC_METHOD(thread_res_V_address0);
    sensitive << ( res_V_addr_reg_420 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_res_V_ce0);
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_res_V_d0);
    sensitive << ( tmp_7_reg_448 );
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_res_V_we0);
    sensitive << ( ap_CS_fsm_state11 );

    SC_METHOD(thread_sum_fu_264_p2);
    sensitive << ( tmp_reg_396 );
    sensitive << ( ii_cast4_fu_226_p1 );

    SC_METHOD(thread_tmp_10_fu_234_p3);
    sensitive << ( ii_reg_139 );

    SC_METHOD(thread_tmp_11_cast_fu_215_p1);
    sensitive << ( tmp_5_fu_210_p2 );

    SC_METHOD(thread_tmp_11_fu_246_p2);
    sensitive << ( p_shl_cast_fu_242_p1 );
    sensitive << ( ii_cast3_cast_fu_230_p1 );

    SC_METHOD(thread_tmp_12_fu_299_p3);
    sensitive << ( p_s_reg_127 );

    SC_METHOD(thread_tmp_13_fu_307_p1);
    sensitive << ( p_s_reg_127 );

    SC_METHOD(thread_tmp_14_fu_269_p3);
    sensitive << ( sum_fu_264_p2 );

    SC_METHOD(thread_tmp_15_fu_281_p3);
    sensitive << ( sum_fu_264_p2 );

    SC_METHOD(thread_tmp_16_fu_293_p2);
    sensitive << ( p_shl1_cast_fu_277_p1 );
    sensitive << ( p_shl2_cast_fu_289_p1 );

    SC_METHOD(thread_tmp_17_cast_fu_344_p1);
    sensitive << ( tmp_17_fu_339_p2 );

    SC_METHOD(thread_tmp_17_fu_339_p2);
    sensitive << ( tmp_11_reg_430 );
    sensitive << ( jj_cast1_cast_fu_335_p1 );

    SC_METHOD(thread_tmp_18_cast_fu_375_p1);
    sensitive << ( tmp_18_reg_471 );

    SC_METHOD(thread_tmp_18_fu_370_p2);
    sensitive << ( tmp_16_reg_443 );
    sensitive << ( tmp_9_cast_cast_fu_366_p1 );

    SC_METHOD(thread_tmp_2_cast_cast_fu_206_p1);
    sensitive << ( tmp_2_fu_200_p2 );

    SC_METHOD(thread_tmp_2_fu_200_p2);
    sensitive << ( j_reg_115 );

    SC_METHOD(thread_tmp_5_fu_210_p2);
    sensitive << ( tmp_3_reg_407 );
    sensitive << ( tmp_2_cast_cast_fu_206_p1 );

    SC_METHOD(thread_tmp_6_fu_311_p2);
    sensitive << ( tmp_13_fu_307_p1 );

    SC_METHOD(thread_tmp_7_fu_317_p3);
    sensitive << ( tmp_13_fu_307_p1 );
    sensitive << ( tmp_12_fu_299_p3 );
    sensitive << ( tmp_6_fu_311_p2 );

    SC_METHOD(thread_tmp_9_cast_cast_fu_366_p1);
    sensitive << ( tmp_9_fu_361_p2 );

    SC_METHOD(thread_tmp_9_fu_361_p2);
    sensitive << ( tmp_2_reg_415 );
    sensitive << ( jj_cast2_fu_331_p1 );

    SC_METHOD(thread_tmp_fu_179_p2);
    sensitive << ( i_reg_103 );

    SC_METHOD(thread_window_V_address0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_17_cast_fu_344_p1 );

    SC_METHOD(thread_window_V_ce0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_173_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond2_fu_194_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond3_fu_252_p2 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( exitcond_fu_349_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "00000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "differentiate_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, img_address0, "(port)img_address0");
    sc_trace(mVcdFile, img_ce0, "(port)img_ce0");
    sc_trace(mVcdFile, img_q0, "(port)img_q0");
    sc_trace(mVcdFile, window_V_address0, "(port)window_V_address0");
    sc_trace(mVcdFile, window_V_ce0, "(port)window_V_ce0");
    sc_trace(mVcdFile, window_V_q0, "(port)window_V_q0");
    sc_trace(mVcdFile, res_V_address0, "(port)res_V_address0");
    sc_trace(mVcdFile, res_V_ce0, "(port)res_V_ce0");
    sc_trace(mVcdFile, res_V_we0, "(port)res_V_we0");
    sc_trace(mVcdFile, res_V_d0, "(port)res_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_fu_179_p2, "tmp_fu_179_p2");
    sc_trace(mVcdFile, tmp_reg_396, "tmp_reg_396");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond1_fu_173_p2, "exitcond1_fu_173_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, grp_fu_188_p2, "grp_fu_188_p2");
    sc_trace(mVcdFile, tmp_3_reg_407, "tmp_3_reg_407");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_2_fu_200_p2, "tmp_2_fu_200_p2");
    sc_trace(mVcdFile, tmp_2_reg_415, "tmp_2_reg_415");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, exitcond2_fu_194_p2, "exitcond2_fu_194_p2");
    sc_trace(mVcdFile, res_V_addr_reg_420, "res_V_addr_reg_420");
    sc_trace(mVcdFile, i_1_fu_220_p2, "i_1_fu_220_p2");
    sc_trace(mVcdFile, tmp_11_fu_246_p2, "tmp_11_fu_246_p2");
    sc_trace(mVcdFile, tmp_11_reg_430, "tmp_11_reg_430");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ii_1_fu_258_p2, "ii_1_fu_258_p2");
    sc_trace(mVcdFile, ii_1_reg_438, "ii_1_reg_438");
    sc_trace(mVcdFile, tmp_16_fu_293_p2, "tmp_16_fu_293_p2");
    sc_trace(mVcdFile, tmp_16_reg_443, "tmp_16_reg_443");
    sc_trace(mVcdFile, exitcond3_fu_252_p2, "exitcond3_fu_252_p2");
    sc_trace(mVcdFile, tmp_7_fu_317_p3, "tmp_7_fu_317_p3");
    sc_trace(mVcdFile, tmp_7_reg_448, "tmp_7_reg_448");
    sc_trace(mVcdFile, j_1_fu_325_p2, "j_1_fu_325_p2");
    sc_trace(mVcdFile, j_1_reg_453, "j_1_reg_453");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, jj_1_fu_355_p2, "jj_1_fu_355_p2");
    sc_trace(mVcdFile, jj_1_reg_466, "jj_1_reg_466");
    sc_trace(mVcdFile, tmp_18_fu_370_p2, "tmp_18_fu_370_p2");
    sc_trace(mVcdFile, tmp_18_reg_471, "tmp_18_reg_471");
    sc_trace(mVcdFile, exitcond_fu_349_p2, "exitcond_fu_349_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, window_V_load_reg_481, "window_V_load_reg_481");
    sc_trace(mVcdFile, img_load_reg_486, "img_load_reg_486");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, grp_fu_385_p3, "grp_fu_385_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, i_reg_103, "i_reg_103");
    sc_trace(mVcdFile, j_reg_115, "j_reg_115");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, p_s_reg_127, "p_s_reg_127");
    sc_trace(mVcdFile, ii_reg_139, "ii_reg_139");
    sc_trace(mVcdFile, p_020_1_reg_150, "p_020_1_reg_150");
    sc_trace(mVcdFile, jj_reg_162, "jj_reg_162");
    sc_trace(mVcdFile, tmp_11_cast_fu_215_p1, "tmp_11_cast_fu_215_p1");
    sc_trace(mVcdFile, tmp_17_cast_fu_344_p1, "tmp_17_cast_fu_344_p1");
    sc_trace(mVcdFile, tmp_18_cast_fu_375_p1, "tmp_18_cast_fu_375_p1");
    sc_trace(mVcdFile, grp_fu_188_p0, "grp_fu_188_p0");
    sc_trace(mVcdFile, grp_fu_188_p1, "grp_fu_188_p1");
    sc_trace(mVcdFile, tmp_2_cast_cast_fu_206_p1, "tmp_2_cast_cast_fu_206_p1");
    sc_trace(mVcdFile, tmp_5_fu_210_p2, "tmp_5_fu_210_p2");
    sc_trace(mVcdFile, tmp_10_fu_234_p3, "tmp_10_fu_234_p3");
    sc_trace(mVcdFile, p_shl_cast_fu_242_p1, "p_shl_cast_fu_242_p1");
    sc_trace(mVcdFile, ii_cast3_cast_fu_230_p1, "ii_cast3_cast_fu_230_p1");
    sc_trace(mVcdFile, ii_cast4_fu_226_p1, "ii_cast4_fu_226_p1");
    sc_trace(mVcdFile, sum_fu_264_p2, "sum_fu_264_p2");
    sc_trace(mVcdFile, tmp_14_fu_269_p3, "tmp_14_fu_269_p3");
    sc_trace(mVcdFile, tmp_15_fu_281_p3, "tmp_15_fu_281_p3");
    sc_trace(mVcdFile, p_shl1_cast_fu_277_p1, "p_shl1_cast_fu_277_p1");
    sc_trace(mVcdFile, p_shl2_cast_fu_289_p1, "p_shl2_cast_fu_289_p1");
    sc_trace(mVcdFile, tmp_13_fu_307_p1, "tmp_13_fu_307_p1");
    sc_trace(mVcdFile, tmp_12_fu_299_p3, "tmp_12_fu_299_p3");
    sc_trace(mVcdFile, tmp_6_fu_311_p2, "tmp_6_fu_311_p2");
    sc_trace(mVcdFile, jj_cast1_cast_fu_335_p1, "jj_cast1_cast_fu_335_p1");
    sc_trace(mVcdFile, tmp_17_fu_339_p2, "tmp_17_fu_339_p2");
    sc_trace(mVcdFile, jj_cast2_fu_331_p1, "jj_cast2_fu_331_p1");
    sc_trace(mVcdFile, tmp_9_fu_361_p2, "tmp_9_fu_361_p2");
    sc_trace(mVcdFile, tmp_9_cast_cast_fu_366_p1, "tmp_9_cast_cast_fu_366_p1");
    sc_trace(mVcdFile, grp_fu_385_p1, "grp_fu_385_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, grp_fu_188_p00, "grp_fu_188_p00");
    sc_trace(mVcdFile, grp_fu_385_p10, "grp_fu_385_p10");
#endif

    }
    mHdltvinHandle.open("differentiate.hdltvin.dat");
    mHdltvoutHandle.open("differentiate.hdltvout.dat");
}

differentiate::~differentiate() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete differentiate_mulbkb_U0;
    delete differentiate_maccud_U1;
}

void differentiate::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void differentiate::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(exitcond2_fu_194_p2.read(), ap_const_lv1_1))) {
        i_reg_103 = i_1_fu_220_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_103 = ap_const_lv6_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_349_p2.read()))) {
        ii_reg_139 = ii_1_reg_438.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_194_p2.read()))) {
        ii_reg_139 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        j_reg_115 = j_1_reg_453.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_reg_115 = ap_const_lv6_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        jj_reg_162 = jj_1_reg_466.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_252_p2.read()))) {
        jj_reg_162 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        p_020_1_reg_150 = grp_fu_385_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_252_p2.read()))) {
        p_020_1_reg_150 = p_s_reg_127.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_349_p2.read()))) {
        p_s_reg_127 = p_020_1_reg_150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_194_p2.read()))) {
        p_s_reg_127 = ap_const_lv16_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ii_1_reg_438 = ii_1_fu_258_p2.read();
        tmp_11_reg_430 = tmp_11_fu_246_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        img_load_reg_486 = img_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond3_fu_252_p2.read()))) {
        j_1_reg_453 = j_1_fu_325_p2.read();
        tmp_7_reg_448 = tmp_7_fu_317_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        jj_1_reg_466 = jj_1_fu_355_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_194_p2.read()))) {
        res_V_addr_reg_420 =  (sc_lv<12>) (tmp_11_cast_fu_215_p1.read());
        tmp_2_reg_415 = tmp_2_fu_200_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_252_p2.read()))) {
        tmp_16_reg_443 = tmp_16_fu_293_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_349_p2.read()))) {
        tmp_18_reg_471 = tmp_18_fu_370_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp_3_reg_407 = grp_fu_188_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_173_p2.read(), ap_const_lv1_0))) {
        tmp_reg_396 = tmp_fu_179_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        window_V_load_reg_481 = window_V_q0.read();
    }
}

void differentiate::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void differentiate::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void differentiate::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void differentiate::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void differentiate::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void differentiate::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void differentiate::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void differentiate::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void differentiate::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void differentiate::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void differentiate::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void differentiate::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_173_p2.read(), ap_const_lv1_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void differentiate::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void differentiate::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_173_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void differentiate::thread_exitcond1_fu_173_p2() {
    exitcond1_fu_173_p2 = (!i_reg_103.read().is_01() || !ap_const_lv6_3F.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_103.read() == ap_const_lv6_3F);
}

void differentiate::thread_exitcond2_fu_194_p2() {
    exitcond2_fu_194_p2 = (!j_reg_115.read().is_01() || !ap_const_lv6_2F.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_115.read() == ap_const_lv6_2F);
}

void differentiate::thread_exitcond3_fu_252_p2() {
    exitcond3_fu_252_p2 = (!ii_reg_139.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ii_reg_139.read() == ap_const_lv2_3);
}

void differentiate::thread_exitcond_fu_349_p2() {
    exitcond_fu_349_p2 = (!jj_reg_162.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(jj_reg_162.read() == ap_const_lv2_3);
}

void differentiate::thread_grp_fu_188_p0() {
    grp_fu_188_p0 =  (sc_lv<6>) (grp_fu_188_p00.read());
}

void differentiate::thread_grp_fu_188_p00() {
    grp_fu_188_p00 = esl_zext<12,6>(tmp_reg_396.read());
}

void differentiate::thread_grp_fu_188_p1() {
    grp_fu_188_p1 =  (sc_lv<7>) (ap_const_lv12_2E);
}

void differentiate::thread_grp_fu_385_p1() {
    grp_fu_385_p1 =  (sc_lv<8>) (grp_fu_385_p10.read());
}

void differentiate::thread_grp_fu_385_p10() {
    grp_fu_385_p10 = esl_zext<11,8>(img_load_reg_486.read());
}

void differentiate::thread_i_1_fu_220_p2() {
    i_1_fu_220_p2 = (!i_reg_103.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(i_reg_103.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void differentiate::thread_ii_1_fu_258_p2() {
    ii_1_fu_258_p2 = (!ii_reg_139.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ii_reg_139.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void differentiate::thread_ii_cast3_cast_fu_230_p1() {
    ii_cast3_cast_fu_230_p1 = esl_zext<5,2>(ii_reg_139.read());
}

void differentiate::thread_ii_cast4_fu_226_p1() {
    ii_cast4_fu_226_p1 = esl_zext<6,2>(ii_reg_139.read());
}

void differentiate::thread_img_address0() {
    img_address0 =  (sc_lv<12>) (tmp_18_cast_fu_375_p1.read());
}

void differentiate::thread_img_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        img_ce0 = ap_const_logic_1;
    } else {
        img_ce0 = ap_const_logic_0;
    }
}

void differentiate::thread_j_1_fu_325_p2() {
    j_1_fu_325_p2 = (!ap_const_lv6_1.is_01() || !j_reg_115.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(j_reg_115.read()));
}

void differentiate::thread_jj_1_fu_355_p2() {
    jj_1_fu_355_p2 = (!jj_reg_162.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(jj_reg_162.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void differentiate::thread_jj_cast1_cast_fu_335_p1() {
    jj_cast1_cast_fu_335_p1 = esl_zext<5,2>(jj_reg_162.read());
}

void differentiate::thread_jj_cast2_fu_331_p1() {
    jj_cast2_fu_331_p1 = esl_zext<6,2>(jj_reg_162.read());
}

void differentiate::thread_p_shl1_cast_fu_277_p1() {
    p_shl1_cast_fu_277_p1 = esl_zext<13,12>(tmp_14_fu_269_p3.read());
}

void differentiate::thread_p_shl2_cast_fu_289_p1() {
    p_shl2_cast_fu_289_p1 = esl_zext<13,10>(tmp_15_fu_281_p3.read());
}

void differentiate::thread_p_shl_cast_fu_242_p1() {
    p_shl_cast_fu_242_p1 = esl_zext<5,4>(tmp_10_fu_234_p3.read());
}

void differentiate::thread_res_V_address0() {
    res_V_address0 = res_V_addr_reg_420.read();
}

void differentiate::thread_res_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        res_V_ce0 = ap_const_logic_1;
    } else {
        res_V_ce0 = ap_const_logic_0;
    }
}

void differentiate::thread_res_V_d0() {
    res_V_d0 = tmp_7_reg_448.read();
}

void differentiate::thread_res_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        res_V_we0 = ap_const_logic_1;
    } else {
        res_V_we0 = ap_const_logic_0;
    }
}

void differentiate::thread_sum_fu_264_p2() {
    sum_fu_264_p2 = (!tmp_reg_396.read().is_01() || !ii_cast4_fu_226_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_reg_396.read()) + sc_biguint<6>(ii_cast4_fu_226_p1.read()));
}

void differentiate::thread_tmp_10_fu_234_p3() {
    tmp_10_fu_234_p3 = esl_concat<2,2>(ii_reg_139.read(), ap_const_lv2_0);
}

void differentiate::thread_tmp_11_cast_fu_215_p1() {
    tmp_11_cast_fu_215_p1 = esl_zext<32,12>(tmp_5_fu_210_p2.read());
}

void differentiate::thread_tmp_11_fu_246_p2() {
    tmp_11_fu_246_p2 = (!p_shl_cast_fu_242_p1.read().is_01() || !ii_cast3_cast_fu_230_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(p_shl_cast_fu_242_p1.read()) - sc_biguint<5>(ii_cast3_cast_fu_230_p1.read()));
}

void differentiate::thread_tmp_12_fu_299_p3() {
    tmp_12_fu_299_p3 = p_s_reg_127.read().range(15, 15);
}

void differentiate::thread_tmp_13_fu_307_p1() {
    tmp_13_fu_307_p1 = p_s_reg_127.read().range(15-1, 0);
}

void differentiate::thread_tmp_14_fu_269_p3() {
    tmp_14_fu_269_p3 = esl_concat<6,6>(sum_fu_264_p2.read(), ap_const_lv6_0);
}

void differentiate::thread_tmp_15_fu_281_p3() {
    tmp_15_fu_281_p3 = esl_concat<6,4>(sum_fu_264_p2.read(), ap_const_lv4_0);
}

void differentiate::thread_tmp_16_fu_293_p2() {
    tmp_16_fu_293_p2 = (!p_shl1_cast_fu_277_p1.read().is_01() || !p_shl2_cast_fu_289_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl1_cast_fu_277_p1.read()) - sc_biguint<13>(p_shl2_cast_fu_289_p1.read()));
}

void differentiate::thread_tmp_17_cast_fu_344_p1() {
    tmp_17_cast_fu_344_p1 = esl_sext<32,5>(tmp_17_fu_339_p2.read());
}

void differentiate::thread_tmp_17_fu_339_p2() {
    tmp_17_fu_339_p2 = (!tmp_11_reg_430.read().is_01() || !jj_cast1_cast_fu_335_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_11_reg_430.read()) + sc_biguint<5>(jj_cast1_cast_fu_335_p1.read()));
}

void differentiate::thread_tmp_18_cast_fu_375_p1() {
    tmp_18_cast_fu_375_p1 = esl_sext<32,13>(tmp_18_reg_471.read());
}

void differentiate::thread_tmp_18_fu_370_p2() {
    tmp_18_fu_370_p2 = (!tmp_16_reg_443.read().is_01() || !tmp_9_cast_cast_fu_366_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_16_reg_443.read()) + sc_biguint<13>(tmp_9_cast_cast_fu_366_p1.read()));
}

void differentiate::thread_tmp_2_cast_cast_fu_206_p1() {
    tmp_2_cast_cast_fu_206_p1 = esl_zext<12,6>(tmp_2_fu_200_p2.read());
}

void differentiate::thread_tmp_2_fu_200_p2() {
    tmp_2_fu_200_p2 = (!j_reg_115.read().is_01() || !ap_const_lv6_3F.is_01())? sc_lv<6>(): (sc_biguint<6>(j_reg_115.read()) + sc_bigint<6>(ap_const_lv6_3F));
}

void differentiate::thread_tmp_5_fu_210_p2() {
    tmp_5_fu_210_p2 = (!tmp_3_reg_407.read().is_01() || !tmp_2_cast_cast_fu_206_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_3_reg_407.read()) + sc_biguint<12>(tmp_2_cast_cast_fu_206_p1.read()));
}

void differentiate::thread_tmp_6_fu_311_p2() {
    tmp_6_fu_311_p2 = (!ap_const_lv15_0.is_01() || !tmp_13_fu_307_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_13_fu_307_p1.read()));
}

void differentiate::thread_tmp_7_fu_317_p3() {
    tmp_7_fu_317_p3 = (!tmp_12_fu_299_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_12_fu_299_p3.read()[0].to_bool())? tmp_6_fu_311_p2.read(): tmp_13_fu_307_p1.read());
}

void differentiate::thread_tmp_9_cast_cast_fu_366_p1() {
    tmp_9_cast_cast_fu_366_p1 = esl_zext<13,6>(tmp_9_fu_361_p2.read());
}

void differentiate::thread_tmp_9_fu_361_p2() {
    tmp_9_fu_361_p2 = (!tmp_2_reg_415.read().is_01() || !jj_cast2_fu_331_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(tmp_2_reg_415.read()) + sc_biguint<6>(jj_cast2_fu_331_p1.read()));
}

void differentiate::thread_tmp_fu_179_p2() {
    tmp_fu_179_p2 = (!i_reg_103.read().is_01() || !ap_const_lv6_3F.is_01())? sc_lv<6>(): (sc_biguint<6>(i_reg_103.read()) + sc_bigint<6>(ap_const_lv6_3F));
}

void differentiate::thread_window_V_address0() {
    window_V_address0 =  (sc_lv<4>) (tmp_17_cast_fu_344_p1.read());
}

void differentiate::thread_window_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        window_V_ce0 = ap_const_logic_1;
    } else {
        window_V_ce0 = ap_const_logic_0;
    }
}

void differentiate::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_173_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(exitcond2_fu_194_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_fu_252_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state11;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_349_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXXXX";
            break;
    }
}

void differentiate::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"img_address0\" :  \"" << img_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"img_ce0\" :  \"" << img_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"img_q0\" :  \"" << img_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"window_V_address0\" :  \"" << window_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"window_V_ce0\" :  \"" << window_V_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"window_V_q0\" :  \"" << window_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_address0\" :  \"" << res_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_ce0\" :  \"" << res_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_we0\" :  \"" << res_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"res_V_d0\" :  \"" << res_V_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
