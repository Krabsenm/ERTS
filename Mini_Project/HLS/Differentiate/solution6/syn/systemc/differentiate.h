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
#include "differentiate_diff_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_DIFF_ADDR_WIDTH = 14,
         unsigned int C_S_AXI_DIFF_DATA_WIDTH = 32>
struct differentiate : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_lv<12> > res_V_address0;
    sc_out< sc_logic > res_V_ce0;
    sc_out< sc_logic > res_V_we0;
    sc_out< sc_lv<15> > res_V_d0;
    sc_in< sc_logic > s_axi_diff_AWVALID;
    sc_out< sc_logic > s_axi_diff_AWREADY;
    sc_in< sc_uint<C_S_AXI_DIFF_ADDR_WIDTH> > s_axi_diff_AWADDR;
    sc_in< sc_logic > s_axi_diff_WVALID;
    sc_out< sc_logic > s_axi_diff_WREADY;
    sc_in< sc_uint<C_S_AXI_DIFF_DATA_WIDTH> > s_axi_diff_WDATA;
    sc_in< sc_uint<C_S_AXI_DIFF_DATA_WIDTH/8> > s_axi_diff_WSTRB;
    sc_in< sc_logic > s_axi_diff_ARVALID;
    sc_out< sc_logic > s_axi_diff_ARREADY;
    sc_in< sc_uint<C_S_AXI_DIFF_ADDR_WIDTH> > s_axi_diff_ARADDR;
    sc_out< sc_logic > s_axi_diff_RVALID;
    sc_in< sc_logic > s_axi_diff_RREADY;
    sc_out< sc_uint<C_S_AXI_DIFF_DATA_WIDTH> > s_axi_diff_RDATA;
    sc_out< sc_lv<2> > s_axi_diff_RRESP;
    sc_out< sc_logic > s_axi_diff_BVALID;
    sc_in< sc_logic > s_axi_diff_BREADY;
    sc_out< sc_lv<2> > s_axi_diff_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    differentiate(sc_module_name name);
    SC_HAS_PROCESS(differentiate);

    ~differentiate();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    differentiate_diff_s_axi<C_S_AXI_DIFF_ADDR_WIDTH,C_S_AXI_DIFF_DATA_WIDTH>* differentiate_diff_s_axi_U;
    differentiate_mulbkb<1,2,6,7,12>* differentiate_mulbkb_U0;
    differentiate_maccud<1,1,3,8,11,12>* differentiate_maccud_U1;
    differentiate_maccud<1,1,3,8,11,12>* differentiate_maccud_U2;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<12> > img_address0;
    sc_signal< sc_logic > img_ce0;
    sc_signal< sc_lv<8> > img_q0;
    sc_signal< sc_lv<4> > window_V_address0;
    sc_signal< sc_logic > window_V_ce0;
    sc_signal< sc_lv<3> > window_V_q0;
    sc_signal< sc_lv<6> > j_reg_260;
    sc_signal< sc_lv<3> > reg_272;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state6_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state15_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_flag00011001;
    sc_signal< sc_lv<1> > exitcond2_reg_915;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state8_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state17_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_flag00011001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_state10_pp0_stage5_iter0;
    sc_signal< bool > ap_block_pp0_stage5_flag00011001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage8;
    sc_signal< bool > ap_block_state13_pp0_stage8_iter0;
    sc_signal< bool > ap_block_pp0_stage8_flag00011001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_flag00011001;
    sc_signal< sc_lv<8> > reg_276;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage7;
    sc_signal< bool > ap_block_state12_pp0_stage7_iter0;
    sc_signal< bool > ap_block_pp0_stage7_flag00011001;
    sc_signal< sc_lv<8> > reg_280;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state7_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state16_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_flag00011001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_state9_pp0_stage4_iter0;
    sc_signal< bool > ap_block_pp0_stage4_flag00011001;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage6;
    sc_signal< bool > ap_block_state11_pp0_stage6_iter0;
    sc_signal< bool > ap_block_pp0_stage6_flag00011001;
    sc_signal< sc_lv<3> > reg_284;
    sc_signal< sc_lv<6> > tmp_fu_294_p2;
    sc_signal< sc_lv<6> > tmp_reg_872;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond1_fu_288_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<13> > tmp_9_fu_333_p2;
    sc_signal< sc_lv<13> > tmp_9_reg_884;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<13> > tmp_11_fu_361_p2;
    sc_signal< sc_lv<13> > tmp_11_reg_891;
    sc_signal< sc_lv<12> > grp_fu_303_p2;
    sc_signal< sc_lv<12> > tmp_12_reg_898;
    sc_signal< sc_lv<6> > i_1_fu_367_p2;
    sc_signal< sc_lv<6> > i_1_reg_903;
    sc_signal< sc_lv<13> > tmp_15_fu_397_p2;
    sc_signal< sc_lv<13> > tmp_15_reg_908;
    sc_signal< sc_lv<1> > exitcond2_fu_403_p2;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_exitcond2_reg_915;
    sc_signal< sc_lv<13> > j_cast_cast_fu_409_p1;
    sc_signal< sc_lv<13> > j_cast_cast_reg_919;
    sc_signal< sc_lv<6> > tmp_2_fu_423_p2;
    sc_signal< sc_lv<6> > tmp_2_reg_930;
    sc_signal< sc_lv<13> > tmp_2_cast_cast_fu_432_p1;
    sc_signal< sc_lv<13> > tmp_2_cast_cast_reg_936;
    sc_signal< sc_lv<12> > tmp_22_fu_445_p2;
    sc_signal< sc_lv<12> > tmp_22_reg_947;
    sc_signal< sc_lv<12> > ap_reg_pp0_iter1_tmp_22_reg_947;
    sc_signal< sc_lv<6> > j_1_fu_450_p2;
    sc_signal< sc_lv<6> > j_1_reg_952;
    sc_signal< sc_lv<13> > j_1_cast_cast_fu_456_p1;
    sc_signal< sc_lv<13> > j_1_cast_cast_reg_958;
    sc_signal< sc_lv<11> > r_V_fu_486_p2;
    sc_signal< sc_lv<11> > r_V_reg_974;
    sc_signal< sc_lv<13> > tmp_16_fu_492_p2;
    sc_signal< sc_lv<13> > tmp_16_reg_979;
    sc_signal< sc_lv<13> > tmp_17_fu_496_p2;
    sc_signal< sc_lv<13> > tmp_17_reg_984;
    sc_signal< sc_lv<13> > tmp_21_fu_500_p2;
    sc_signal< sc_lv<13> > tmp_21_reg_989;
    sc_signal< sc_lv<13> > tmp_25_fu_513_p2;
    sc_signal< sc_lv<13> > tmp_25_reg_999;
    sc_signal< sc_lv<11> > r_V_0_2_fu_525_p2;
    sc_signal< sc_lv<11> > r_V_0_2_reg_1004;
    sc_signal< sc_lv<11> > r_V_1_fu_543_p2;
    sc_signal< sc_lv<11> > r_V_1_reg_1014;
    sc_signal< sc_lv<11> > r_V_1_2_fu_561_p2;
    sc_signal< sc_lv<11> > r_V_1_2_reg_1025;
    sc_signal< sc_lv<11> > r_V_2_1_fu_579_p2;
    sc_signal< sc_lv<11> > r_V_2_1_reg_1035;
    sc_signal< sc_lv<11> > r_V_2_fu_597_p2;
    sc_signal< sc_lv<11> > r_V_2_reg_1045;
    sc_signal< sc_lv<11> > r_V_2_2_fu_622_p2;
    sc_signal< sc_lv<11> > r_V_2_2_reg_1051;
    sc_signal< sc_lv<12> > grp_fu_806_p3;
    sc_signal< sc_lv<12> > tmp8_reg_1056;
    sc_signal< sc_lv<13> > tmp7_fu_673_p2;
    sc_signal< sc_lv<13> > tmp7_reg_1062;
    sc_signal< sc_lv<14> > tmp4_fu_702_p2;
    sc_signal< sc_lv<14> > tmp4_reg_1067;
    sc_signal< sc_lv<13> > tmp10_fu_721_p2;
    sc_signal< sc_lv<13> > tmp10_reg_1072;
    sc_signal< sc_lv<14> > tmp14_fu_750_p2;
    sc_signal< sc_lv<14> > tmp14_reg_1077;
    sc_signal< sc_lv<15> > tmp_6_fu_794_p3;
    sc_signal< sc_lv<15> > tmp_6_reg_1082;
    sc_signal< bool > ap_block_pp0_stage0_flag00011011;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state5;
    sc_signal< bool > ap_block_pp0_stage8_flag00011011;
    sc_signal< bool > ap_block_pp0_stage3_flag00011011;
    sc_signal< sc_lv<6> > i_reg_248;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<6> > j_phi_fu_264_p4;
    sc_signal< bool > ap_block_pp0_stage0_flag00000000;
    sc_signal< sc_lv<32> > tmp_19_cast_fu_418_p1;
    sc_signal< sc_lv<32> > tmp_20_cast_fu_440_p1;
    sc_signal< bool > ap_block_pp0_stage1_flag00000000;
    sc_signal< sc_lv<32> > tmp_24_cast_fu_464_p1;
    sc_signal< bool > ap_block_pp0_stage2_flag00000000;
    sc_signal< sc_lv<32> > tmp_21_cast_fu_473_p1;
    sc_signal< bool > ap_block_pp0_stage3_flag00000000;
    sc_signal< sc_lv<32> > tmp_25_cast_fu_508_p1;
    sc_signal< bool > ap_block_pp0_stage4_flag00000000;
    sc_signal< sc_lv<32> > tmp_22_cast_fu_531_p1;
    sc_signal< bool > ap_block_pp0_stage5_flag00000000;
    sc_signal< sc_lv<32> > tmp_26_cast_fu_549_p1;
    sc_signal< bool > ap_block_pp0_stage6_flag00000000;
    sc_signal< sc_lv<32> > tmp_17_cast_fu_567_p1;
    sc_signal< bool > ap_block_pp0_stage7_flag00000000;
    sc_signal< sc_lv<32> > tmp_18_cast_fu_585_p1;
    sc_signal< bool > ap_block_pp0_stage8_flag00000000;
    sc_signal< sc_lv<32> > tmp_23_cast_fu_802_p1;
    sc_signal< sc_lv<6> > grp_fu_303_p0;
    sc_signal< sc_lv<7> > grp_fu_303_p1;
    sc_signal< sc_lv<12> > tmp_7_fu_309_p3;
    sc_signal< sc_lv<10> > tmp_8_fu_321_p3;
    sc_signal< sc_lv<13> > p_shl4_cast_fu_317_p1;
    sc_signal< sc_lv<13> > p_shl5_cast_fu_329_p1;
    sc_signal< sc_lv<12> > tmp_3_fu_339_p3;
    sc_signal< sc_lv<10> > tmp_10_fu_350_p3;
    sc_signal< sc_lv<13> > p_shl2_cast_fu_346_p1;
    sc_signal< sc_lv<13> > p_shl3_cast_fu_357_p1;
    sc_signal< sc_lv<12> > tmp_13_fu_373_p3;
    sc_signal< sc_lv<10> > tmp_14_fu_385_p3;
    sc_signal< sc_lv<13> > p_shl_cast_fu_381_p1;
    sc_signal< sc_lv<13> > p_shl1_cast_fu_393_p1;
    sc_signal< sc_lv<13> > tmp_18_fu_413_p2;
    sc_signal< sc_lv<13> > tmp_19_fu_435_p2;
    sc_signal< sc_lv<12> > tmp_2_cast_cast6_fu_429_p1;
    sc_signal< sc_lv<13> > tmp_23_fu_459_p2;
    sc_signal< sc_lv<13> > tmp_20_fu_469_p2;
    sc_signal< sc_lv<3> > r_V_fu_486_p0;
    sc_signal< sc_lv<8> > r_V_fu_486_p1;
    sc_signal< sc_lv<13> > tmp_24_fu_504_p2;
    sc_signal< sc_lv<3> > r_V_0_2_fu_525_p0;
    sc_signal< sc_lv<8> > r_V_0_2_fu_525_p1;
    sc_signal< sc_lv<3> > r_V_1_fu_543_p0;
    sc_signal< sc_lv<8> > r_V_1_fu_543_p1;
    sc_signal< sc_lv<3> > r_V_1_2_fu_561_p0;
    sc_signal< sc_lv<8> > r_V_1_2_fu_561_p1;
    sc_signal< sc_lv<3> > r_V_2_1_fu_579_p0;
    sc_signal< sc_lv<8> > r_V_2_1_fu_579_p1;
    sc_signal< sc_lv<3> > r_V_2_fu_597_p0;
    sc_signal< sc_lv<8> > r_V_2_fu_597_p1;
    sc_signal< sc_lv<3> > r_V_2_2_fu_622_p0;
    sc_signal< sc_lv<8> > r_V_2_2_fu_622_p1;
    sc_signal< sc_lv<12> > tmp_1_cast_fu_631_p1;
    sc_signal< sc_lv<12> > tmp_0_2_cast_fu_628_p1;
    sc_signal< sc_lv<12> > tmp9_fu_663_p2;
    sc_signal< sc_lv<13> > tmp8_cast_fu_660_p1;
    sc_signal< sc_lv<13> > tmp9_cast_fu_669_p1;
    sc_signal< sc_lv<12> > grp_fu_814_p3;
    sc_signal< sc_lv<12> > tmp_2_2_cast_fu_657_p1;
    sc_signal< sc_lv<12> > tmp_2_1_cast_fu_654_p1;
    sc_signal< sc_lv<12> > tmp2_fu_682_p2;
    sc_signal< sc_lv<13> > tmp_2_cast_fu_648_p1;
    sc_signal< sc_lv<13> > tmp13_cast_fu_688_p1;
    sc_signal< sc_lv<13> > tmp3_fu_692_p2;
    sc_signal< sc_lv<14> > tmp11_cast_fu_679_p1;
    sc_signal< sc_lv<14> > tmp12_cast_fu_698_p1;
    sc_signal< sc_lv<12> > tmp_16_cast_fu_651_p1;
    sc_signal< sc_lv<12> > tmp5_fu_708_p2;
    sc_signal< sc_lv<13> > tmp15_cast_fu_714_p1;
    sc_signal< sc_lv<13> > tmp16_cast_fu_718_p1;
    sc_signal< sc_lv<12> > tmp12_fu_730_p2;
    sc_signal< sc_lv<13> > tmp_9_cast_fu_634_p1;
    sc_signal< sc_lv<13> > tmp20_cast_fu_736_p1;
    sc_signal< sc_lv<13> > tmp13_fu_740_p2;
    sc_signal< sc_lv<14> > tmp18_cast_fu_727_p1;
    sc_signal< sc_lv<14> > tmp19_cast_fu_746_p1;
    sc_signal< sc_lv<15> > tmp7_cast_fu_756_p1;
    sc_signal< sc_lv<15> > tmp10_cast_fu_759_p1;
    sc_signal< sc_lv<15> > temp_result_V_1_2_2_fu_762_p2;
    sc_signal< sc_lv<15> > tmp14_cast_fu_776_p1;
    sc_signal< sc_lv<15> > tmp17_cast_fu_779_p1;
    sc_signal< sc_lv<15> > tmp_s_fu_782_p2;
    sc_signal< sc_lv<1> > tmp_26_fu_768_p3;
    sc_signal< sc_lv<15> > tmp_5_fu_788_p2;
    sc_signal< sc_lv<8> > grp_fu_806_p1;
    sc_signal< sc_lv<8> > grp_fu_814_p1;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_flag00011011;
    sc_signal< bool > ap_block_pp0_stage2_flag00011011;
    sc_signal< bool > ap_block_pp0_stage4_flag00011011;
    sc_signal< bool > ap_block_pp0_stage5_flag00011011;
    sc_signal< bool > ap_block_pp0_stage6_flag00011011;
    sc_signal< bool > ap_block_pp0_stage7_flag00011011;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<12> > grp_fu_303_p00;
    sc_signal< sc_lv<11> > grp_fu_806_p10;
    sc_signal< sc_lv<11> > grp_fu_814_p10;
    sc_signal< sc_lv<11> > r_V_0_2_fu_525_p10;
    sc_signal< sc_lv<11> > r_V_1_2_fu_561_p10;
    sc_signal< sc_lv<11> > r_V_1_fu_543_p10;
    sc_signal< sc_lv<11> > r_V_2_1_fu_579_p10;
    sc_signal< sc_lv<11> > r_V_2_2_fu_622_p10;
    sc_signal< sc_lv<11> > r_V_2_fu_597_p10;
    sc_signal< sc_lv<11> > r_V_fu_486_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_fsm_state1;
    static const sc_lv<14> ap_ST_fsm_state2;
    static const sc_lv<14> ap_ST_fsm_state3;
    static const sc_lv<14> ap_ST_fsm_state4;
    static const sc_lv<14> ap_ST_fsm_pp0_stage0;
    static const sc_lv<14> ap_ST_fsm_pp0_stage1;
    static const sc_lv<14> ap_ST_fsm_pp0_stage2;
    static const sc_lv<14> ap_ST_fsm_pp0_stage3;
    static const sc_lv<14> ap_ST_fsm_pp0_stage4;
    static const sc_lv<14> ap_ST_fsm_pp0_stage5;
    static const sc_lv<14> ap_ST_fsm_pp0_stage6;
    static const sc_lv<14> ap_ST_fsm_pp0_stage7;
    static const sc_lv<14> ap_ST_fsm_pp0_stage8;
    static const sc_lv<14> ap_ST_fsm_state18;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_5;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<12> ap_const_lv12_2E;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<15> ap_const_lv15_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_pp0_stage6();
    void thread_ap_CS_fsm_pp0_stage7();
    void thread_ap_CS_fsm_pp0_stage8();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_block_pp0_stage0_flag00000000();
    void thread_ap_block_pp0_stage0_flag00011001();
    void thread_ap_block_pp0_stage0_flag00011011();
    void thread_ap_block_pp0_stage1_flag00000000();
    void thread_ap_block_pp0_stage1_flag00011001();
    void thread_ap_block_pp0_stage1_flag00011011();
    void thread_ap_block_pp0_stage2_flag00000000();
    void thread_ap_block_pp0_stage2_flag00011001();
    void thread_ap_block_pp0_stage2_flag00011011();
    void thread_ap_block_pp0_stage3_flag00000000();
    void thread_ap_block_pp0_stage3_flag00011001();
    void thread_ap_block_pp0_stage3_flag00011011();
    void thread_ap_block_pp0_stage4_flag00000000();
    void thread_ap_block_pp0_stage4_flag00011001();
    void thread_ap_block_pp0_stage4_flag00011011();
    void thread_ap_block_pp0_stage5_flag00000000();
    void thread_ap_block_pp0_stage5_flag00011001();
    void thread_ap_block_pp0_stage5_flag00011011();
    void thread_ap_block_pp0_stage6_flag00000000();
    void thread_ap_block_pp0_stage6_flag00011001();
    void thread_ap_block_pp0_stage6_flag00011011();
    void thread_ap_block_pp0_stage7_flag00000000();
    void thread_ap_block_pp0_stage7_flag00011001();
    void thread_ap_block_pp0_stage7_flag00011011();
    void thread_ap_block_pp0_stage8_flag00000000();
    void thread_ap_block_pp0_stage8_flag00011001();
    void thread_ap_block_pp0_stage8_flag00011011();
    void thread_ap_block_state10_pp0_stage5_iter0();
    void thread_ap_block_state11_pp0_stage6_iter0();
    void thread_ap_block_state12_pp0_stage7_iter0();
    void thread_ap_block_state13_pp0_stage8_iter0();
    void thread_ap_block_state14_pp0_stage0_iter1();
    void thread_ap_block_state15_pp0_stage1_iter1();
    void thread_ap_block_state16_pp0_stage2_iter1();
    void thread_ap_block_state17_pp0_stage3_iter1();
    void thread_ap_block_state5_pp0_stage0_iter0();
    void thread_ap_block_state6_pp0_stage1_iter0();
    void thread_ap_block_state7_pp0_stage2_iter0();
    void thread_ap_block_state8_pp0_stage3_iter0();
    void thread_ap_block_state9_pp0_stage4_iter0();
    void thread_ap_condition_pp0_exit_iter0_state5();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_exitcond1_fu_288_p2();
    void thread_exitcond2_fu_403_p2();
    void thread_grp_fu_303_p0();
    void thread_grp_fu_303_p00();
    void thread_grp_fu_303_p1();
    void thread_grp_fu_806_p1();
    void thread_grp_fu_806_p10();
    void thread_grp_fu_814_p1();
    void thread_grp_fu_814_p10();
    void thread_i_1_fu_367_p2();
    void thread_img_address0();
    void thread_img_ce0();
    void thread_j_1_cast_cast_fu_456_p1();
    void thread_j_1_fu_450_p2();
    void thread_j_cast_cast_fu_409_p1();
    void thread_j_phi_fu_264_p4();
    void thread_p_shl1_cast_fu_393_p1();
    void thread_p_shl2_cast_fu_346_p1();
    void thread_p_shl3_cast_fu_357_p1();
    void thread_p_shl4_cast_fu_317_p1();
    void thread_p_shl5_cast_fu_329_p1();
    void thread_p_shl_cast_fu_381_p1();
    void thread_r_V_0_2_fu_525_p0();
    void thread_r_V_0_2_fu_525_p1();
    void thread_r_V_0_2_fu_525_p10();
    void thread_r_V_0_2_fu_525_p2();
    void thread_r_V_1_2_fu_561_p0();
    void thread_r_V_1_2_fu_561_p1();
    void thread_r_V_1_2_fu_561_p10();
    void thread_r_V_1_2_fu_561_p2();
    void thread_r_V_1_fu_543_p0();
    void thread_r_V_1_fu_543_p1();
    void thread_r_V_1_fu_543_p10();
    void thread_r_V_1_fu_543_p2();
    void thread_r_V_2_1_fu_579_p0();
    void thread_r_V_2_1_fu_579_p1();
    void thread_r_V_2_1_fu_579_p10();
    void thread_r_V_2_1_fu_579_p2();
    void thread_r_V_2_2_fu_622_p0();
    void thread_r_V_2_2_fu_622_p1();
    void thread_r_V_2_2_fu_622_p10();
    void thread_r_V_2_2_fu_622_p2();
    void thread_r_V_2_fu_597_p0();
    void thread_r_V_2_fu_597_p1();
    void thread_r_V_2_fu_597_p10();
    void thread_r_V_2_fu_597_p2();
    void thread_r_V_fu_486_p0();
    void thread_r_V_fu_486_p1();
    void thread_r_V_fu_486_p10();
    void thread_r_V_fu_486_p2();
    void thread_res_V_address0();
    void thread_res_V_ce0();
    void thread_res_V_d0();
    void thread_res_V_we0();
    void thread_temp_result_V_1_2_2_fu_762_p2();
    void thread_tmp10_cast_fu_759_p1();
    void thread_tmp10_fu_721_p2();
    void thread_tmp11_cast_fu_679_p1();
    void thread_tmp12_cast_fu_698_p1();
    void thread_tmp12_fu_730_p2();
    void thread_tmp13_cast_fu_688_p1();
    void thread_tmp13_fu_740_p2();
    void thread_tmp14_cast_fu_776_p1();
    void thread_tmp14_fu_750_p2();
    void thread_tmp15_cast_fu_714_p1();
    void thread_tmp16_cast_fu_718_p1();
    void thread_tmp17_cast_fu_779_p1();
    void thread_tmp18_cast_fu_727_p1();
    void thread_tmp19_cast_fu_746_p1();
    void thread_tmp20_cast_fu_736_p1();
    void thread_tmp2_fu_682_p2();
    void thread_tmp3_fu_692_p2();
    void thread_tmp4_fu_702_p2();
    void thread_tmp5_fu_708_p2();
    void thread_tmp7_cast_fu_756_p1();
    void thread_tmp7_fu_673_p2();
    void thread_tmp8_cast_fu_660_p1();
    void thread_tmp9_cast_fu_669_p1();
    void thread_tmp9_fu_663_p2();
    void thread_tmp_0_2_cast_fu_628_p1();
    void thread_tmp_10_fu_350_p3();
    void thread_tmp_11_fu_361_p2();
    void thread_tmp_13_fu_373_p3();
    void thread_tmp_14_fu_385_p3();
    void thread_tmp_15_fu_397_p2();
    void thread_tmp_16_cast_fu_651_p1();
    void thread_tmp_16_fu_492_p2();
    void thread_tmp_17_cast_fu_567_p1();
    void thread_tmp_17_fu_496_p2();
    void thread_tmp_18_cast_fu_585_p1();
    void thread_tmp_18_fu_413_p2();
    void thread_tmp_19_cast_fu_418_p1();
    void thread_tmp_19_fu_435_p2();
    void thread_tmp_1_cast_fu_631_p1();
    void thread_tmp_20_cast_fu_440_p1();
    void thread_tmp_20_fu_469_p2();
    void thread_tmp_21_cast_fu_473_p1();
    void thread_tmp_21_fu_500_p2();
    void thread_tmp_22_cast_fu_531_p1();
    void thread_tmp_22_fu_445_p2();
    void thread_tmp_23_cast_fu_802_p1();
    void thread_tmp_23_fu_459_p2();
    void thread_tmp_24_cast_fu_464_p1();
    void thread_tmp_24_fu_504_p2();
    void thread_tmp_25_cast_fu_508_p1();
    void thread_tmp_25_fu_513_p2();
    void thread_tmp_26_cast_fu_549_p1();
    void thread_tmp_26_fu_768_p3();
    void thread_tmp_2_1_cast_fu_654_p1();
    void thread_tmp_2_2_cast_fu_657_p1();
    void thread_tmp_2_cast_cast6_fu_429_p1();
    void thread_tmp_2_cast_cast_fu_432_p1();
    void thread_tmp_2_cast_fu_648_p1();
    void thread_tmp_2_fu_423_p2();
    void thread_tmp_3_fu_339_p3();
    void thread_tmp_5_fu_788_p2();
    void thread_tmp_6_fu_794_p3();
    void thread_tmp_7_fu_309_p3();
    void thread_tmp_8_fu_321_p3();
    void thread_tmp_9_cast_fu_634_p1();
    void thread_tmp_9_fu_333_p2();
    void thread_tmp_fu_294_p2();
    void thread_tmp_s_fu_782_p2();
    void thread_window_V_address0();
    void thread_window_V_ce0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif