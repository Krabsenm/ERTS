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
#include "differentiate_diff_io_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_DIFF_IO_ADDR_WIDTH = 14,
         unsigned int C_S_AXI_DIFF_IO_DATA_WIDTH = 32>
struct differentiate : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_lv<12> > res_V_address0;
    sc_out< sc_logic > res_V_ce0;
    sc_out< sc_logic > res_V_we0;
    sc_out< sc_lv<15> > res_V_d0;
    sc_in< sc_logic > s_axi_diff_io_AWVALID;
    sc_out< sc_logic > s_axi_diff_io_AWREADY;
    sc_in< sc_uint<C_S_AXI_DIFF_IO_ADDR_WIDTH> > s_axi_diff_io_AWADDR;
    sc_in< sc_logic > s_axi_diff_io_WVALID;
    sc_out< sc_logic > s_axi_diff_io_WREADY;
    sc_in< sc_uint<C_S_AXI_DIFF_IO_DATA_WIDTH> > s_axi_diff_io_WDATA;
    sc_in< sc_uint<C_S_AXI_DIFF_IO_DATA_WIDTH/8> > s_axi_diff_io_WSTRB;
    sc_in< sc_logic > s_axi_diff_io_ARVALID;
    sc_out< sc_logic > s_axi_diff_io_ARREADY;
    sc_in< sc_uint<C_S_AXI_DIFF_IO_ADDR_WIDTH> > s_axi_diff_io_ARADDR;
    sc_out< sc_logic > s_axi_diff_io_RVALID;
    sc_in< sc_logic > s_axi_diff_io_RREADY;
    sc_out< sc_uint<C_S_AXI_DIFF_IO_DATA_WIDTH> > s_axi_diff_io_RDATA;
    sc_out< sc_lv<2> > s_axi_diff_io_RRESP;
    sc_out< sc_logic > s_axi_diff_io_BVALID;
    sc_in< sc_logic > s_axi_diff_io_BREADY;
    sc_out< sc_lv<2> > s_axi_diff_io_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    differentiate(sc_module_name name);
    SC_HAS_PROCESS(differentiate);

    ~differentiate();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    differentiate_diff_io_s_axi<C_S_AXI_DIFF_IO_ADDR_WIDTH,C_S_AXI_DIFF_IO_DATA_WIDTH>* differentiate_diff_io_s_axi_U;
    differentiate_mulbkb<1,2,6,7,12>* differentiate_mulbkb_U0;
    differentiate_maccud<1,1,3,8,11,12>* differentiate_maccud_U1;
    differentiate_maccud<1,1,3,8,11,12>* differentiate_maccud_U2;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<19> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<12> > img_address0;
    sc_signal< sc_logic > img_ce0;
    sc_signal< sc_lv<8> > img_q0;
    sc_signal< sc_lv<4> > window_V_address0;
    sc_signal< sc_logic > window_V_ce0;
    sc_signal< sc_lv<3> > window_V_q0;
    sc_signal< sc_lv<3> > reg_267;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > reg_271;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<3> > reg_275;
    sc_signal< sc_lv<3> > reg_279;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<8> > reg_283;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<3> > reg_287;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<8> > reg_291;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<13> > tmp_8_fu_319_p2;
    sc_signal< sc_lv<13> > tmp_8_reg_874;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > tmp_fu_331_p2;
    sc_signal< sc_lv<6> > tmp_reg_884;
    sc_signal< sc_lv<1> > exitcond1_fu_325_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<13> > tmp_10_fu_368_p2;
    sc_signal< sc_lv<13> > tmp_10_reg_896;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<12> > grp_fu_340_p2;
    sc_signal< sc_lv<12> > tmp_11_reg_903;
    sc_signal< sc_lv<6> > i_1_fu_374_p2;
    sc_signal< sc_lv<6> > i_1_reg_908;
    sc_signal< sc_lv<13> > tmp_14_fu_404_p2;
    sc_signal< sc_lv<13> > tmp_14_reg_913;
    sc_signal< sc_lv<12> > img_addr_1_reg_920;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<12> > img_addr_4_reg_925;
    sc_signal< sc_lv<12> > img_addr_7_reg_930;
    sc_signal< sc_lv<6> > tmp_2_fu_450_p2;
    sc_signal< sc_lv<6> > tmp_2_reg_938;
    sc_signal< sc_lv<1> > exitcond2_fu_444_p2;
    sc_signal< sc_lv<13> > tmp_2_cast_cast_fu_459_p1;
    sc_signal< sc_lv<13> > tmp_2_cast_cast_reg_944;
    sc_signal< sc_lv<12> > tmp_21_fu_472_p2;
    sc_signal< sc_lv<12> > tmp_21_reg_955;
    sc_signal< sc_lv<6> > j_1_fu_477_p2;
    sc_signal< sc_lv<6> > j_1_reg_960;
    sc_signal< sc_lv<11> > r_V_fu_491_p2;
    sc_signal< sc_lv<11> > r_V_reg_966;
    sc_signal< sc_lv<13> > j_1_cast_cast_fu_497_p1;
    sc_signal< sc_lv<13> > j_1_cast_cast_reg_971;
    sc_signal< sc_lv<13> > tmp_20_fu_519_p2;
    sc_signal< sc_lv<13> > tmp_20_reg_987;
    sc_signal< sc_lv<13> > tmp_23_fu_534_p2;
    sc_signal< sc_lv<13> > tmp_23_reg_992;
    sc_signal< sc_lv<13> > tmp_24_fu_538_p2;
    sc_signal< sc_lv<13> > tmp_24_reg_997;
    sc_signal< sc_lv<12> > grp_fu_813_p3;
    sc_signal< sc_lv<12> > tmp8_reg_1002;
    sc_signal< sc_lv<8> > img_load_3_reg_1008;
    sc_signal< sc_lv<3> > window_V_load_6_reg_1023;
    sc_signal< sc_lv<11> > r_V_1_2_fu_558_p2;
    sc_signal< sc_lv<11> > r_V_1_2_reg_1028;
    sc_signal< sc_lv<12> > grp_fu_821_p3;
    sc_signal< sc_lv<12> > tmp1_reg_1038;
    sc_signal< sc_lv<8> > img_load_8_reg_1044;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<11> > r_V_0_2_fu_587_p2;
    sc_signal< sc_lv<11> > r_V_0_2_reg_1049;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<11> > r_V_1_fu_600_p2;
    sc_signal< sc_lv<11> > r_V_1_reg_1054;
    sc_signal< sc_lv<11> > r_V_2_fu_613_p2;
    sc_signal< sc_lv<11> > r_V_2_reg_1060;
    sc_signal< sc_lv<11> > r_V_2_1_fu_627_p2;
    sc_signal< sc_lv<11> > r_V_2_1_reg_1066;
    sc_signal< sc_lv<11> > r_V_2_2_fu_640_p2;
    sc_signal< sc_lv<11> > r_V_2_2_reg_1071;
    sc_signal< sc_lv<13> > tmp7_fu_680_p2;
    sc_signal< sc_lv<13> > tmp7_reg_1076;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<14> > tmp4_fu_709_p2;
    sc_signal< sc_lv<14> > tmp4_reg_1081;
    sc_signal< sc_lv<13> > tmp10_fu_728_p2;
    sc_signal< sc_lv<13> > tmp10_reg_1086;
    sc_signal< sc_lv<14> > tmp14_fu_757_p2;
    sc_signal< sc_lv<14> > tmp14_reg_1091;
    sc_signal< sc_lv<15> > tmp_5_fu_801_p3;
    sc_signal< sc_lv<15> > tmp_5_reg_1096;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<6> > i_reg_243;
    sc_signal< sc_lv<6> > j_reg_255;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<32> > tmp_16_cast_fu_419_p1;
    sc_signal< sc_lv<32> > tmp_17_cast_fu_429_p1;
    sc_signal< sc_lv<32> > tmp_18_cast_fu_439_p1;
    sc_signal< sc_lv<32> > tmp_19_cast_fu_467_p1;
    sc_signal< sc_lv<32> > tmp_23_cast_fu_505_p1;
    sc_signal< sc_lv<32> > tmp_20_cast_fu_514_p1;
    sc_signal< sc_lv<32> > tmp_24_cast_fu_542_p1;
    sc_signal< sc_lv<32> > tmp_21_cast_fu_546_p1;
    sc_signal< sc_lv<32> > tmp_25_cast_fu_564_p1;
    sc_signal< sc_lv<32> > tmp_22_cast_fu_809_p1;
    sc_signal< sc_lv<12> > tmp_6_fu_295_p3;
    sc_signal< sc_lv<10> > tmp_7_fu_307_p3;
    sc_signal< sc_lv<13> > p_shl_cast_fu_303_p1;
    sc_signal< sc_lv<13> > p_shl1_cast_fu_315_p1;
    sc_signal< sc_lv<6> > grp_fu_340_p0;
    sc_signal< sc_lv<7> > grp_fu_340_p1;
    sc_signal< sc_lv<12> > tmp_9_fu_346_p3;
    sc_signal< sc_lv<10> > tmp_3_fu_357_p3;
    sc_signal< sc_lv<13> > p_shl4_cast_fu_353_p1;
    sc_signal< sc_lv<13> > p_shl5_cast_fu_364_p1;
    sc_signal< sc_lv<12> > tmp_12_fu_380_p3;
    sc_signal< sc_lv<10> > tmp_13_fu_392_p3;
    sc_signal< sc_lv<13> > p_shl2_cast_fu_388_p1;
    sc_signal< sc_lv<13> > p_shl3_cast_fu_400_p1;
    sc_signal< sc_lv<13> > j_cast_cast_fu_410_p1;
    sc_signal< sc_lv<13> > tmp_15_fu_414_p2;
    sc_signal< sc_lv<13> > tmp_16_fu_424_p2;
    sc_signal< sc_lv<13> > tmp_17_fu_434_p2;
    sc_signal< sc_lv<13> > tmp_18_fu_462_p2;
    sc_signal< sc_lv<12> > tmp_2_cast_cast6_fu_456_p1;
    sc_signal< sc_lv<3> > r_V_fu_491_p0;
    sc_signal< sc_lv<8> > r_V_fu_491_p1;
    sc_signal< sc_lv<13> > tmp_22_fu_500_p2;
    sc_signal< sc_lv<13> > tmp_19_fu_510_p2;
    sc_signal< sc_lv<3> > r_V_1_2_fu_558_p0;
    sc_signal< sc_lv<8> > r_V_1_2_fu_558_p1;
    sc_signal< sc_lv<3> > r_V_0_2_fu_587_p0;
    sc_signal< sc_lv<8> > r_V_0_2_fu_587_p1;
    sc_signal< sc_lv<3> > r_V_1_fu_600_p0;
    sc_signal< sc_lv<8> > r_V_1_fu_600_p1;
    sc_signal< sc_lv<3> > r_V_2_fu_613_p0;
    sc_signal< sc_lv<8> > r_V_2_fu_613_p1;
    sc_signal< sc_lv<3> > r_V_2_1_fu_627_p0;
    sc_signal< sc_lv<8> > r_V_2_1_fu_627_p1;
    sc_signal< sc_lv<3> > r_V_2_2_fu_640_p0;
    sc_signal< sc_lv<8> > r_V_2_2_fu_640_p1;
    sc_signal< sc_lv<12> > tmp_1_cast_fu_649_p1;
    sc_signal< sc_lv<12> > tmp_0_2_cast_fu_646_p1;
    sc_signal< sc_lv<12> > tmp9_fu_670_p2;
    sc_signal< sc_lv<13> > tmp8_cast_fu_667_p1;
    sc_signal< sc_lv<13> > tmp9_cast_fu_676_p1;
    sc_signal< sc_lv<12> > tmp_2_2_cast_fu_664_p1;
    sc_signal< sc_lv<12> > tmp_2_1_cast_fu_661_p1;
    sc_signal< sc_lv<12> > tmp2_fu_689_p2;
    sc_signal< sc_lv<13> > tmp_2_cast_fu_655_p1;
    sc_signal< sc_lv<13> > tmp13_cast_fu_695_p1;
    sc_signal< sc_lv<13> > tmp3_fu_699_p2;
    sc_signal< sc_lv<14> > tmp11_cast_fu_686_p1;
    sc_signal< sc_lv<14> > tmp12_cast_fu_705_p1;
    sc_signal< sc_lv<12> > tmp_15_cast_fu_658_p1;
    sc_signal< sc_lv<12> > tmp5_fu_715_p2;
    sc_signal< sc_lv<13> > tmp15_cast_fu_721_p1;
    sc_signal< sc_lv<13> > tmp16_cast_fu_725_p1;
    sc_signal< sc_lv<12> > tmp12_fu_737_p2;
    sc_signal< sc_lv<13> > tmp_8_cast_fu_652_p1;
    sc_signal< sc_lv<13> > tmp20_cast_fu_743_p1;
    sc_signal< sc_lv<13> > tmp13_fu_747_p2;
    sc_signal< sc_lv<14> > tmp18_cast_fu_734_p1;
    sc_signal< sc_lv<14> > tmp19_cast_fu_753_p1;
    sc_signal< sc_lv<15> > tmp7_cast_fu_763_p1;
    sc_signal< sc_lv<15> > tmp10_cast_fu_766_p1;
    sc_signal< sc_lv<15> > temp_result_V_1_2_2_fu_769_p2;
    sc_signal< sc_lv<15> > tmp14_cast_fu_783_p1;
    sc_signal< sc_lv<15> > tmp17_cast_fu_786_p1;
    sc_signal< sc_lv<15> > tmp_s_fu_789_p2;
    sc_signal< sc_lv<1> > tmp_25_fu_775_p3;
    sc_signal< sc_lv<15> > tmp_4_fu_795_p2;
    sc_signal< sc_lv<8> > grp_fu_813_p1;
    sc_signal< sc_lv<8> > grp_fu_821_p1;
    sc_signal< sc_lv<19> > ap_NS_fsm;
    sc_signal< sc_lv<12> > grp_fu_340_p00;
    sc_signal< sc_lv<11> > grp_fu_813_p10;
    sc_signal< sc_lv<11> > grp_fu_821_p10;
    sc_signal< sc_lv<11> > r_V_0_2_fu_587_p10;
    sc_signal< sc_lv<11> > r_V_1_2_fu_558_p10;
    sc_signal< sc_lv<11> > r_V_1_fu_600_p10;
    sc_signal< sc_lv<11> > r_V_2_1_fu_627_p10;
    sc_signal< sc_lv<11> > r_V_2_2_fu_640_p10;
    sc_signal< sc_lv<11> > r_V_2_fu_613_p10;
    sc_signal< sc_lv<11> > r_V_fu_491_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<19> ap_ST_fsm_state1;
    static const sc_lv<19> ap_ST_fsm_state2;
    static const sc_lv<19> ap_ST_fsm_state3;
    static const sc_lv<19> ap_ST_fsm_state4;
    static const sc_lv<19> ap_ST_fsm_state5;
    static const sc_lv<19> ap_ST_fsm_state6;
    static const sc_lv<19> ap_ST_fsm_state7;
    static const sc_lv<19> ap_ST_fsm_state8;
    static const sc_lv<19> ap_ST_fsm_state9;
    static const sc_lv<19> ap_ST_fsm_state10;
    static const sc_lv<19> ap_ST_fsm_state11;
    static const sc_lv<19> ap_ST_fsm_state12;
    static const sc_lv<19> ap_ST_fsm_state13;
    static const sc_lv<19> ap_ST_fsm_state14;
    static const sc_lv<19> ap_ST_fsm_state15;
    static const sc_lv<19> ap_ST_fsm_state16;
    static const sc_lv<19> ap_ST_fsm_state17;
    static const sc_lv<19> ap_ST_fsm_state18;
    static const sc_lv<19> ap_ST_fsm_state19;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<12> ap_const_lv12_2E;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<15> ap_const_lv15_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
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
    void thread_ap_rst_n_inv();
    void thread_exitcond1_fu_325_p2();
    void thread_exitcond2_fu_444_p2();
    void thread_grp_fu_340_p0();
    void thread_grp_fu_340_p00();
    void thread_grp_fu_340_p1();
    void thread_grp_fu_813_p1();
    void thread_grp_fu_813_p10();
    void thread_grp_fu_821_p1();
    void thread_grp_fu_821_p10();
    void thread_i_1_fu_374_p2();
    void thread_img_address0();
    void thread_img_ce0();
    void thread_j_1_cast_cast_fu_497_p1();
    void thread_j_1_fu_477_p2();
    void thread_j_cast_cast_fu_410_p1();
    void thread_p_shl1_cast_fu_315_p1();
    void thread_p_shl2_cast_fu_388_p1();
    void thread_p_shl3_cast_fu_400_p1();
    void thread_p_shl4_cast_fu_353_p1();
    void thread_p_shl5_cast_fu_364_p1();
    void thread_p_shl_cast_fu_303_p1();
    void thread_r_V_0_2_fu_587_p0();
    void thread_r_V_0_2_fu_587_p1();
    void thread_r_V_0_2_fu_587_p10();
    void thread_r_V_0_2_fu_587_p2();
    void thread_r_V_1_2_fu_558_p0();
    void thread_r_V_1_2_fu_558_p1();
    void thread_r_V_1_2_fu_558_p10();
    void thread_r_V_1_2_fu_558_p2();
    void thread_r_V_1_fu_600_p0();
    void thread_r_V_1_fu_600_p1();
    void thread_r_V_1_fu_600_p10();
    void thread_r_V_1_fu_600_p2();
    void thread_r_V_2_1_fu_627_p0();
    void thread_r_V_2_1_fu_627_p1();
    void thread_r_V_2_1_fu_627_p10();
    void thread_r_V_2_1_fu_627_p2();
    void thread_r_V_2_2_fu_640_p0();
    void thread_r_V_2_2_fu_640_p1();
    void thread_r_V_2_2_fu_640_p10();
    void thread_r_V_2_2_fu_640_p2();
    void thread_r_V_2_fu_613_p0();
    void thread_r_V_2_fu_613_p1();
    void thread_r_V_2_fu_613_p10();
    void thread_r_V_2_fu_613_p2();
    void thread_r_V_fu_491_p0();
    void thread_r_V_fu_491_p1();
    void thread_r_V_fu_491_p10();
    void thread_r_V_fu_491_p2();
    void thread_res_V_address0();
    void thread_res_V_ce0();
    void thread_res_V_d0();
    void thread_res_V_we0();
    void thread_temp_result_V_1_2_2_fu_769_p2();
    void thread_tmp10_cast_fu_766_p1();
    void thread_tmp10_fu_728_p2();
    void thread_tmp11_cast_fu_686_p1();
    void thread_tmp12_cast_fu_705_p1();
    void thread_tmp12_fu_737_p2();
    void thread_tmp13_cast_fu_695_p1();
    void thread_tmp13_fu_747_p2();
    void thread_tmp14_cast_fu_783_p1();
    void thread_tmp14_fu_757_p2();
    void thread_tmp15_cast_fu_721_p1();
    void thread_tmp16_cast_fu_725_p1();
    void thread_tmp17_cast_fu_786_p1();
    void thread_tmp18_cast_fu_734_p1();
    void thread_tmp19_cast_fu_753_p1();
    void thread_tmp20_cast_fu_743_p1();
    void thread_tmp2_fu_689_p2();
    void thread_tmp3_fu_699_p2();
    void thread_tmp4_fu_709_p2();
    void thread_tmp5_fu_715_p2();
    void thread_tmp7_cast_fu_763_p1();
    void thread_tmp7_fu_680_p2();
    void thread_tmp8_cast_fu_667_p1();
    void thread_tmp9_cast_fu_676_p1();
    void thread_tmp9_fu_670_p2();
    void thread_tmp_0_2_cast_fu_646_p1();
    void thread_tmp_10_fu_368_p2();
    void thread_tmp_12_fu_380_p3();
    void thread_tmp_13_fu_392_p3();
    void thread_tmp_14_fu_404_p2();
    void thread_tmp_15_cast_fu_658_p1();
    void thread_tmp_15_fu_414_p2();
    void thread_tmp_16_cast_fu_419_p1();
    void thread_tmp_16_fu_424_p2();
    void thread_tmp_17_cast_fu_429_p1();
    void thread_tmp_17_fu_434_p2();
    void thread_tmp_18_cast_fu_439_p1();
    void thread_tmp_18_fu_462_p2();
    void thread_tmp_19_cast_fu_467_p1();
    void thread_tmp_19_fu_510_p2();
    void thread_tmp_1_cast_fu_649_p1();
    void thread_tmp_20_cast_fu_514_p1();
    void thread_tmp_20_fu_519_p2();
    void thread_tmp_21_cast_fu_546_p1();
    void thread_tmp_21_fu_472_p2();
    void thread_tmp_22_cast_fu_809_p1();
    void thread_tmp_22_fu_500_p2();
    void thread_tmp_23_cast_fu_505_p1();
    void thread_tmp_23_fu_534_p2();
    void thread_tmp_24_cast_fu_542_p1();
    void thread_tmp_24_fu_538_p2();
    void thread_tmp_25_cast_fu_564_p1();
    void thread_tmp_25_fu_775_p3();
    void thread_tmp_2_1_cast_fu_661_p1();
    void thread_tmp_2_2_cast_fu_664_p1();
    void thread_tmp_2_cast_cast6_fu_456_p1();
    void thread_tmp_2_cast_cast_fu_459_p1();
    void thread_tmp_2_cast_fu_655_p1();
    void thread_tmp_2_fu_450_p2();
    void thread_tmp_3_fu_357_p3();
    void thread_tmp_4_fu_795_p2();
    void thread_tmp_5_fu_801_p3();
    void thread_tmp_6_fu_295_p3();
    void thread_tmp_7_fu_307_p3();
    void thread_tmp_8_cast_fu_652_p1();
    void thread_tmp_8_fu_319_p2();
    void thread_tmp_9_fu_346_p3();
    void thread_tmp_fu_331_p2();
    void thread_tmp_s_fu_789_p2();
    void thread_window_V_address0();
    void thread_window_V_ce0();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
