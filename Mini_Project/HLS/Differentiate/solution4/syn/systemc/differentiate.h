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

#include "differentiate_macbkb.h"
#include "differentiate_maccud.h"
#include "differentiate_macdEe.h"

namespace ap_rtl {

struct differentiate : public sc_module {
    // Port declarations 22
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > img_address0;
    sc_out< sc_logic > img_ce0;
    sc_in< sc_lv<8> > img_q0;
    sc_out< sc_lv<12> > img_address1;
    sc_out< sc_logic > img_ce1;
    sc_in< sc_lv<8> > img_q1;
    sc_out< sc_lv<4> > window_V_address0;
    sc_out< sc_logic > window_V_ce0;
    sc_in< sc_lv<3> > window_V_q0;
    sc_out< sc_lv<4> > window_V_address1;
    sc_out< sc_logic > window_V_ce1;
    sc_in< sc_lv<3> > window_V_q1;
    sc_out< sc_lv<12> > res_V_address0;
    sc_out< sc_logic > res_V_ce0;
    sc_out< sc_logic > res_V_we0;
    sc_out< sc_lv<15> > res_V_d0;


    // Module declarations
    differentiate(sc_module_name name);
    SC_HAS_PROCESS(differentiate);

    ~differentiate();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    differentiate_macbkb<1,1,6,7,6,12>* differentiate_macbkb_U0;
    differentiate_maccud<1,1,3,8,11,12>* differentiate_maccud_U1;
    differentiate_macdEe<1,1,3,8,12,13>* differentiate_macdEe_U2;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<15> > p_s_reg_186;
    sc_signal< sc_lv<2> > ii_reg_198;
    sc_signal< sc_lv<8> > reg_209;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter3;
    sc_signal< bool > ap_block_pp0_stage0_flag00011001;
    sc_signal< sc_lv<1> > exitcond3_reg_565;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state5_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state7_pp0_stage1_iter1;
    sc_signal< bool > ap_block_state9_pp0_stage1_iter2;
    sc_signal< bool > ap_block_state11_pp0_stage1_iter3;
    sc_signal< bool > ap_block_pp0_stage1_flag00011001;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond3_reg_565;
    sc_signal< sc_lv<12> > indvar_flatten_next_fu_219_p2;
    sc_signal< sc_lv<12> > indvar_flatten_next_reg_517;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > j_mid2_fu_237_p3;
    sc_signal< sc_lv<6> > j_mid2_reg_522;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_213_p2;
    sc_signal< sc_lv<6> > tmp_mid2_fu_251_p3;
    sc_signal< sc_lv<6> > tmp_mid2_reg_529;
    sc_signal< sc_lv<6> > i_mid2_fu_259_p3;
    sc_signal< sc_lv<6> > i_mid2_reg_535;
    sc_signal< sc_lv<13> > j_cast4_cast_fu_270_p1;
    sc_signal< sc_lv<13> > j_cast4_cast_reg_540;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<13> > tmp_2_cast_cast7_fu_278_p1;
    sc_signal< sc_lv<13> > tmp_2_cast_cast7_reg_545;
    sc_signal< sc_lv<12> > res_V_addr_reg_550;
    sc_signal< sc_lv<6> > j_1_fu_290_p2;
    sc_signal< sc_lv<6> > j_1_reg_555;
    sc_signal< sc_lv<13> > tmp_9_2_cast_cast_fu_295_p1;
    sc_signal< sc_lv<13> > tmp_9_2_cast_cast_reg_560;
    sc_signal< sc_lv<1> > exitcond3_fu_299_p2;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_exitcond3_reg_565;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_exitcond3_reg_565;
    sc_signal< sc_lv<2> > ii_1_fu_305_p2;
    sc_signal< sc_lv<2> > ii_1_reg_569;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<5> > tmp_3_fu_331_p2;
    sc_signal< sc_lv<5> > tmp_3_reg_574;
    sc_signal< sc_lv<13> > tmp_14_fu_366_p2;
    sc_signal< sc_lv<13> > tmp_14_reg_581;
    sc_signal< sc_lv<1> > ifzero_fu_372_p2;
    sc_signal< sc_lv<1> > ifzero_reg_588;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_ifzero_reg_588;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter2_ifzero_reg_588;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter3_ifzero_reg_588;
    sc_signal< sc_lv<13> > tmp_15_fu_411_p2;
    sc_signal< sc_lv<13> > tmp_15_reg_612;
    sc_signal< sc_lv<3> > window_V_load_1_reg_622;
    sc_signal< sc_lv<3> > window_V_load_2_reg_627;
    sc_signal< sc_lv<3> > window_V_load_reg_637;
    sc_signal< sc_lv<11> > r_V_2_fu_435_p2;
    sc_signal< sc_lv<11> > r_V_2_reg_642;
    sc_signal< sc_lv<8> > img_load_reg_647;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<12> > grp_fu_497_p3;
    sc_signal< sc_lv<12> > tmp1_reg_652;
    sc_signal< sc_lv<15> > temp_result_V_1_2_fu_463_p2;
    sc_signal< sc_lv<15> > temp_result_V_1_2_reg_657;
    sc_signal< sc_lv<15> > tmp_7_fu_481_p3;
    sc_signal< sc_lv<15> > tmp_7_reg_665;
    sc_signal< bool > ap_block_pp0_stage0_flag00011011;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state4;
    sc_signal< bool > ap_block_pp0_stage1_flag00011011;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<12> > indvar_flatten_reg_153;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<6> > i_reg_164;
    sc_signal< sc_lv<6> > j_reg_175;
    sc_signal< sc_lv<15> > p_s_phi_fu_190_p4;
    sc_signal< bool > ap_block_pp0_stage1_flag00000000;
    sc_signal< sc_lv<2> > ii_phi_fu_202_p4;
    sc_signal< bool > ap_block_pp0_stage0_flag00000000;
    sc_signal< sc_lv<32> > tmp_9_cast_fu_286_p1;
    sc_signal< sc_lv<32> > tmp_12_cast_fu_383_p1;
    sc_signal< sc_lv<32> > tmp_13_cast_fu_393_p1;
    sc_signal< sc_lv<32> > tmp_19_cast_fu_402_p1;
    sc_signal< sc_lv<32> > tmp_11_cast_fu_407_p1;
    sc_signal< sc_lv<32> > tmp_18_cast_fu_419_p1;
    sc_signal< sc_lv<32> > tmp_17_cast_fu_424_p1;
    sc_signal< sc_lv<1> > exitcond_fu_231_p2;
    sc_signal< sc_lv<6> > tmp3_fu_245_p2;
    sc_signal< sc_lv<6> > i_1_fu_225_p2;
    sc_signal< sc_lv<6> > tmp_2_fu_273_p2;
    sc_signal< sc_lv<12> > grp_fu_488_p3;
    sc_signal< sc_lv<4> > tmp_s_fu_319_p3;
    sc_signal< sc_lv<5> > p_shl2_cast_fu_327_p1;
    sc_signal< sc_lv<5> > ii_cast2_cast_fu_315_p1;
    sc_signal< sc_lv<6> > ii_cast3_fu_311_p1;
    sc_signal< sc_lv<6> > sum_fu_337_p2;
    sc_signal< sc_lv<12> > tmp_12_fu_342_p3;
    sc_signal< sc_lv<10> > tmp_13_fu_354_p3;
    sc_signal< sc_lv<13> > p_shl_cast_fu_350_p1;
    sc_signal< sc_lv<13> > p_shl1_cast_fu_362_p1;
    sc_signal< sc_lv<5> > tmp_10_fu_378_p2;
    sc_signal< sc_lv<5> > tmp_11_fu_388_p2;
    sc_signal< sc_lv<13> > tmp_17_fu_398_p2;
    sc_signal< sc_lv<13> > tmp_16_fu_415_p2;
    sc_signal< sc_lv<3> > r_V_2_fu_435_p0;
    sc_signal< sc_lv<8> > r_V_2_fu_435_p1;
    sc_signal< sc_lv<13> > grp_fu_505_p3;
    sc_signal< sc_lv<15> > p_cast_fu_460_p1;
    sc_signal< sc_lv<1> > tmp_fu_469_p3;
    sc_signal< sc_lv<15> > tmp_6_fu_476_p2;
    sc_signal< sc_lv<6> > grp_fu_488_p0;
    sc_signal< sc_lv<7> > grp_fu_488_p1;
    sc_signal< sc_lv<6> > grp_fu_488_p2;
    sc_signal< sc_lv<8> > grp_fu_497_p1;
    sc_signal< sc_lv<8> > grp_fu_505_p1;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<12> > grp_fu_488_p00;
    sc_signal< sc_lv<12> > grp_fu_488_p20;
    sc_signal< sc_lv<11> > grp_fu_497_p10;
    sc_signal< sc_lv<11> > grp_fu_505_p10;
    sc_signal< sc_lv<11> > r_V_2_fu_435_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_pp0_stage1;
    static const sc_lv<6> ap_ST_fsm_state12;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<12> ap_const_lv12_B24;
    static const sc_lv<12> ap_const_lv12_1;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<12> ap_const_lv12_2E;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_block_pp0_stage0_flag00000000();
    void thread_ap_block_pp0_stage0_flag00011001();
    void thread_ap_block_pp0_stage0_flag00011011();
    void thread_ap_block_pp0_stage1_flag00000000();
    void thread_ap_block_pp0_stage1_flag00011001();
    void thread_ap_block_pp0_stage1_flag00011011();
    void thread_ap_block_state10_pp0_stage0_iter3();
    void thread_ap_block_state11_pp0_stage1_iter3();
    void thread_ap_block_state4_pp0_stage0_iter0();
    void thread_ap_block_state5_pp0_stage1_iter0();
    void thread_ap_block_state6_pp0_stage0_iter1();
    void thread_ap_block_state7_pp0_stage1_iter1();
    void thread_ap_block_state8_pp0_stage0_iter2();
    void thread_ap_block_state9_pp0_stage1_iter2();
    void thread_ap_condition_pp0_exit_iter0_state4();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_exitcond3_fu_299_p2();
    void thread_exitcond_flatten_fu_213_p2();
    void thread_exitcond_fu_231_p2();
    void thread_grp_fu_488_p0();
    void thread_grp_fu_488_p00();
    void thread_grp_fu_488_p1();
    void thread_grp_fu_488_p2();
    void thread_grp_fu_488_p20();
    void thread_grp_fu_497_p1();
    void thread_grp_fu_497_p10();
    void thread_grp_fu_505_p1();
    void thread_grp_fu_505_p10();
    void thread_i_1_fu_225_p2();
    void thread_i_mid2_fu_259_p3();
    void thread_ifzero_fu_372_p2();
    void thread_ii_1_fu_305_p2();
    void thread_ii_cast2_cast_fu_315_p1();
    void thread_ii_cast3_fu_311_p1();
    void thread_ii_phi_fu_202_p4();
    void thread_img_address0();
    void thread_img_address1();
    void thread_img_ce0();
    void thread_img_ce1();
    void thread_indvar_flatten_next_fu_219_p2();
    void thread_j_1_fu_290_p2();
    void thread_j_cast4_cast_fu_270_p1();
    void thread_j_mid2_fu_237_p3();
    void thread_p_cast_fu_460_p1();
    void thread_p_s_phi_fu_190_p4();
    void thread_p_shl1_cast_fu_362_p1();
    void thread_p_shl2_cast_fu_327_p1();
    void thread_p_shl_cast_fu_350_p1();
    void thread_r_V_2_fu_435_p0();
    void thread_r_V_2_fu_435_p1();
    void thread_r_V_2_fu_435_p10();
    void thread_r_V_2_fu_435_p2();
    void thread_res_V_address0();
    void thread_res_V_ce0();
    void thread_res_V_d0();
    void thread_res_V_we0();
    void thread_sum_fu_337_p2();
    void thread_temp_result_V_1_2_fu_463_p2();
    void thread_tmp3_fu_245_p2();
    void thread_tmp_10_fu_378_p2();
    void thread_tmp_11_cast_fu_407_p1();
    void thread_tmp_11_fu_388_p2();
    void thread_tmp_12_cast_fu_383_p1();
    void thread_tmp_12_fu_342_p3();
    void thread_tmp_13_cast_fu_393_p1();
    void thread_tmp_13_fu_354_p3();
    void thread_tmp_14_fu_366_p2();
    void thread_tmp_15_fu_411_p2();
    void thread_tmp_16_fu_415_p2();
    void thread_tmp_17_cast_fu_424_p1();
    void thread_tmp_17_fu_398_p2();
    void thread_tmp_18_cast_fu_419_p1();
    void thread_tmp_19_cast_fu_402_p1();
    void thread_tmp_2_cast_cast7_fu_278_p1();
    void thread_tmp_2_fu_273_p2();
    void thread_tmp_3_fu_331_p2();
    void thread_tmp_6_fu_476_p2();
    void thread_tmp_7_fu_481_p3();
    void thread_tmp_9_2_cast_cast_fu_295_p1();
    void thread_tmp_9_cast_fu_286_p1();
    void thread_tmp_fu_469_p3();
    void thread_tmp_mid2_fu_251_p3();
    void thread_tmp_s_fu_319_p3();
    void thread_window_V_address0();
    void thread_window_V_address1();
    void thread_window_V_ce0();
    void thread_window_V_ce1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif