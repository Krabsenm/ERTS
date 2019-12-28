#include "differentiate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void differentiate::thread_tmp_583_cast_fu_9890_p1() {
    tmp_583_cast_fu_9890_p1 = esl_sext<12,11>(r_V_30_2_reg_18148.read());
}

void differentiate::thread_tmp_584_fu_13631_p3() {
    tmp_584_fu_13631_p3 = temp_result_V_1_44_2_2_fu_13625_p2.read().range(14, 14);
}

void differentiate::thread_tmp_58_fu_6985_p3() {
    tmp_58_fu_6985_p3 = (!tmp_354_fu_6959_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_354_fu_6959_p3.read()[0].to_bool())? tmp_57_fu_6979_p2.read(): tmp_56_fu_6973_p2.read());
}

void differentiate::thread_tmp_595_cast_fu_10140_p1() {
    tmp_595_cast_fu_10140_p1 = esl_sext<13,11>(r_V_31_1_reg_18215.read());
}

void differentiate::thread_tmp_596_fu_13899_p3() {
    tmp_596_fu_13899_p3 = temp_result_V_1_45_2_2_fu_13893_p2.read().range(14, 14);
}

void differentiate::thread_tmp_59_fu_7229_p2() {
    tmp_59_fu_7229_p2 = (!tmp397_cast_fu_7226_p1.read().is_01() || !tmp394_cast_fu_7223_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp397_cast_fu_7226_p1.read()) + sc_bigint<15>(tmp394_cast_fu_7223_p1.read()));
}

void differentiate::thread_tmp_5_0_2_cast_fu_3409_p1() {
    tmp_5_0_2_cast_fu_3409_p1 = esl_sext<12,11>(r_V_5_0_2_reg_15854.read());
}

void differentiate::thread_tmp_5_1_cast_fu_3412_p1() {
    tmp_5_1_cast_fu_3412_p1 = esl_sext<12,11>(r_V_5_1_reg_14849.read());
}

void differentiate::thread_tmp_5_2_1_cast_fu_3424_p1() {
    tmp_5_2_1_cast_fu_3424_p1 = esl_sext<12,11>(r_V_5_2_1_reg_15807.read());
}

void differentiate::thread_tmp_5_2_2_cast_fu_3427_p1() {
    tmp_5_2_2_cast_fu_3427_p1 = esl_sext<12,11>(r_V_5_2_2_reg_15875.read());
}

void differentiate::thread_tmp_5_2_cast_fu_3418_p1() {
    tmp_5_2_cast_fu_3418_p1 = esl_sext<13,11>(r_V_5_2_reg_15739.read());
}

void differentiate::thread_tmp_5_fu_2897_p2() {
    tmp_5_fu_2897_p2 = (!tmp37_cast_fu_2894_p1.read().is_01() || !tmp34_cast_fu_2891_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp37_cast_fu_2894_p1.read()) + sc_bigint<15>(tmp34_cast_fu_2891_p1.read()));
}

void differentiate::thread_tmp_602_cast_fu_10146_p1() {
    tmp_602_cast_fu_10146_p1 = esl_sext<12,11>(r_V_31_2_reg_18242.read());
}

void differentiate::thread_tmp_60_fu_7235_p2() {
    tmp_60_fu_7235_p2 = (!ap_const_lv15_0.is_01() || !tmp_59_fu_7229_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_59_fu_7229_p2.read()));
}

void differentiate::thread_tmp_614_cast_fu_10396_p1() {
    tmp_614_cast_fu_10396_p1 = esl_sext<13,11>(r_V_32_1_reg_18309.read());
}

void differentiate::thread_tmp_61_fu_7241_p3() {
    tmp_61_fu_7241_p3 = (!tmp_355_fu_7215_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_355_fu_7215_p3.read()[0].to_bool())? tmp_60_fu_7235_p2.read(): tmp_59_fu_7229_p2.read());
}

void differentiate::thread_tmp_621_cast_fu_10402_p1() {
    tmp_621_cast_fu_10402_p1 = esl_sext<12,11>(r_V_32_2_reg_18336.read());
}

void differentiate::thread_tmp_62_fu_7485_p2() {
    tmp_62_fu_7485_p2 = (!tmp417_cast_fu_7482_p1.read().is_01() || !tmp414_cast_fu_7479_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp417_cast_fu_7482_p1.read()) + sc_bigint<15>(tmp414_cast_fu_7479_p1.read()));
}

void differentiate::thread_tmp_633_cast_fu_10656_p1() {
    tmp_633_cast_fu_10656_p1 = esl_sext<13,11>(r_V_33_1_reg_18403.read());
}

void differentiate::thread_tmp_63_cast_fu_3115_p1() {
    tmp_63_cast_fu_3115_p1 = esl_sext<13,11>(r_V_3_1_reg_14817.read());
}

void differentiate::thread_tmp_63_fu_7491_p2() {
    tmp_63_fu_7491_p2 = (!ap_const_lv15_0.is_01() || !tmp_62_fu_7485_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_62_fu_7485_p2.read()));
}

void differentiate::thread_tmp_640_cast_fu_10662_p1() {
    tmp_640_cast_fu_10662_p1 = esl_sext<12,11>(r_V_33_2_reg_18430.read());
}

void differentiate::thread_tmp_64_fu_7497_p3() {
    tmp_64_fu_7497_p3 = (!tmp_356_fu_7471_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_356_fu_7471_p3.read()[0].to_bool())? tmp_63_fu_7491_p2.read(): tmp_62_fu_7485_p2.read());
}

void differentiate::thread_tmp_652_cast_fu_10924_p1() {
    tmp_652_cast_fu_10924_p1 = esl_sext<13,11>(r_V_34_1_reg_18497.read());
}

void differentiate::thread_tmp_659_cast_fu_10930_p1() {
    tmp_659_cast_fu_10930_p1 = esl_sext<12,11>(r_V_34_2_reg_18524.read());
}

void differentiate::thread_tmp_65_fu_7741_p2() {
    tmp_65_fu_7741_p2 = (!tmp437_cast_fu_7738_p1.read().is_01() || !tmp434_cast_fu_7735_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp437_cast_fu_7738_p1.read()) + sc_bigint<15>(tmp434_cast_fu_7735_p1.read()));
}

void differentiate::thread_tmp_66_fu_7747_p2() {
    tmp_66_fu_7747_p2 = (!ap_const_lv15_0.is_01() || !tmp_65_fu_7741_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_65_fu_7741_p2.read()));
}

void differentiate::thread_tmp_671_cast_fu_11193_p1() {
    tmp_671_cast_fu_11193_p1 = esl_sext<13,11>(r_V_35_1_reg_18605.read());
}

void differentiate::thread_tmp_678_cast_fu_11199_p1() {
    tmp_678_cast_fu_11199_p1 = esl_sext<12,11>(r_V_35_2_reg_18632.read());
}

void differentiate::thread_tmp_67_fu_7753_p3() {
    tmp_67_fu_7753_p3 = (!tmp_357_fu_7727_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_357_fu_7727_p3.read()[0].to_bool())? tmp_66_fu_7747_p2.read(): tmp_65_fu_7741_p2.read());
}

void differentiate::thread_tmp_68_fu_7997_p2() {
    tmp_68_fu_7997_p2 = (!tmp457_cast_fu_7994_p1.read().is_01() || !tmp454_cast_fu_7991_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp457_cast_fu_7994_p1.read()) + sc_bigint<15>(tmp454_cast_fu_7991_p1.read()));
}

void differentiate::thread_tmp_690_cast_fu_11457_p1() {
    tmp_690_cast_fu_11457_p1 = esl_sext<13,11>(r_V_36_1_reg_18713.read());
}

void differentiate::thread_tmp_697_cast_fu_11463_p1() {
    tmp_697_cast_fu_11463_p1 = esl_sext<12,11>(r_V_36_2_reg_18767.read());
}

void differentiate::thread_tmp_69_fu_8003_p2() {
    tmp_69_fu_8003_p2 = (!ap_const_lv15_0.is_01() || !tmp_68_fu_7997_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_68_fu_7997_p2.read()));
}

void differentiate::thread_tmp_6_0_2_cast_fu_3559_p1() {
    tmp_6_0_2_cast_fu_3559_p1 = esl_sext<12,11>(r_V_6_0_2_reg_15927.read());
}

void differentiate::thread_tmp_6_1_cast_fu_3562_p1() {
    tmp_6_1_cast_fu_3562_p1 = esl_sext<12,11>(r_V_6_1_reg_14870.read());
}

void differentiate::thread_tmp_6_2_1_cast_fu_3574_p1() {
    tmp_6_2_1_cast_fu_3574_p1 = esl_sext<12,11>(r_V_6_2_1_reg_15880.read());
}

void differentiate::thread_tmp_6_2_2_cast_fu_3577_p1() {
    tmp_6_2_2_cast_fu_3577_p1 = esl_sext<12,11>(r_V_6_2_2_reg_15948.read());
}

void differentiate::thread_tmp_6_2_cast_fu_3568_p1() {
    tmp_6_2_cast_fu_3568_p1 = esl_sext<13,11>(r_V_6_2_reg_15812.read());
}

void differentiate::thread_tmp_6_cast_fu_2566_p1() {
    tmp_6_cast_fu_2566_p1 = esl_sext<13,11>(r_V_0_1_reg_14733.read());
}

void differentiate::thread_tmp_6_fu_2903_p2() {
    tmp_6_fu_2903_p2 = (!ap_const_lv15_0.is_01() || !tmp_5_fu_2897_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_5_fu_2897_p2.read()));
}

void differentiate::thread_tmp_709_cast_fu_11713_p1() {
    tmp_709_cast_fu_11713_p1 = esl_sext<13,11>(r_V_37_1_reg_18861.read());
}

void differentiate::thread_tmp_70_cast_fu_3121_p1() {
    tmp_70_cast_fu_3121_p1 = esl_sext<12,11>(r_V_3_2_reg_15525.read());
}

void differentiate::thread_tmp_70_fu_8009_p3() {
    tmp_70_fu_8009_p3 = (!tmp_358_fu_7983_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_358_fu_7983_p3.read()[0].to_bool())? tmp_69_fu_8003_p2.read(): tmp_68_fu_7997_p2.read());
}

void differentiate::thread_tmp_716_cast_fu_11719_p1() {
    tmp_716_cast_fu_11719_p1 = esl_sext<12,11>(r_V_37_2_reg_18901.read());
}

void differentiate::thread_tmp_71_fu_8253_p2() {
    tmp_71_fu_8253_p2 = (!tmp477_cast_fu_8250_p1.read().is_01() || !tmp474_cast_fu_8247_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp477_cast_fu_8250_p1.read()) + sc_bigint<15>(tmp474_cast_fu_8247_p1.read()));
}

void differentiate::thread_tmp_728_cast_fu_11969_p1() {
    tmp_728_cast_fu_11969_p1 = esl_sext<13,11>(r_V_38_1_reg_18981.read());
}

void differentiate::thread_tmp_72_fu_8259_p2() {
    tmp_72_fu_8259_p2 = (!ap_const_lv15_0.is_01() || !tmp_71_fu_8253_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_71_fu_8253_p2.read()));
}

void differentiate::thread_tmp_735_cast_fu_11975_p1() {
    tmp_735_cast_fu_11975_p1 = esl_sext<12,11>(r_V_38_2_reg_19021.read());
}

void differentiate::thread_tmp_73_fu_8265_p3() {
    tmp_73_fu_8265_p3 = (!tmp_359_fu_8239_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_359_fu_8239_p3.read()[0].to_bool())? tmp_72_fu_8259_p2.read(): tmp_71_fu_8253_p2.read());
}

void differentiate::thread_tmp_747_cast_fu_12225_p1() {
    tmp_747_cast_fu_12225_p1 = esl_sext<13,11>(r_V_39_1_reg_19088.read());
}

void differentiate::thread_tmp_74_fu_8509_p2() {
    tmp_74_fu_8509_p2 = (!tmp497_cast_fu_8506_p1.read().is_01() || !tmp494_cast_fu_8503_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp497_cast_fu_8506_p1.read()) + sc_bigint<15>(tmp494_cast_fu_8503_p1.read()));
}

void differentiate::thread_tmp_754_cast_fu_12231_p1() {
    tmp_754_cast_fu_12231_p1 = esl_sext<12,11>(r_V_39_2_reg_19115.read());
}

void differentiate::thread_tmp_75_fu_8515_p2() {
    tmp_75_fu_8515_p2 = (!ap_const_lv15_0.is_01() || !tmp_74_fu_8509_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_74_fu_8509_p2.read()));
}

void differentiate::thread_tmp_766_cast_fu_12481_p1() {
    tmp_766_cast_fu_12481_p1 = esl_sext<13,11>(r_V_40_1_reg_19182.read());
}

void differentiate::thread_tmp_76_fu_8521_p3() {
    tmp_76_fu_8521_p3 = (!tmp_360_fu_8495_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_360_fu_8495_p3.read()[0].to_bool())? tmp_75_fu_8515_p2.read(): tmp_74_fu_8509_p2.read());
}

void differentiate::thread_tmp_773_cast_fu_12487_p1() {
    tmp_773_cast_fu_12487_p1 = esl_sext<12,11>(r_V_40_2_reg_19209.read());
}

void differentiate::thread_tmp_77_fu_8765_p2() {
    tmp_77_fu_8765_p2 = (!tmp517_cast_fu_8762_p1.read().is_01() || !tmp514_cast_fu_8759_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp517_cast_fu_8762_p1.read()) + sc_bigint<15>(tmp514_cast_fu_8759_p1.read()));
}

void differentiate::thread_tmp_785_cast_fu_12737_p1() {
    tmp_785_cast_fu_12737_p1 = esl_sext<13,11>(r_V_41_1_reg_19276.read());
}

void differentiate::thread_tmp_78_fu_8771_p2() {
    tmp_78_fu_8771_p2 = (!ap_const_lv15_0.is_01() || !tmp_77_fu_8765_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_77_fu_8765_p2.read()));
}

void differentiate::thread_tmp_792_cast_fu_12743_p1() {
    tmp_792_cast_fu_12743_p1 = esl_sext<12,11>(r_V_41_2_reg_19303.read());
}

void differentiate::thread_tmp_79_fu_8777_p3() {
    tmp_79_fu_8777_p3 = (!tmp_361_fu_8751_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_361_fu_8751_p3.read()[0].to_bool())? tmp_78_fu_8771_p2.read(): tmp_77_fu_8765_p2.read());
}

void differentiate::thread_tmp_7_0_2_cast_fu_3736_p1() {
    tmp_7_0_2_cast_fu_3736_p1 = esl_sext<12,11>(r_V_7_0_2_reg_16000.read());
}

void differentiate::thread_tmp_7_1_cast_fu_3739_p1() {
    tmp_7_1_cast_fu_3739_p1 = esl_sext<12,11>(r_V_7_1_reg_14896.read());
}

void differentiate::thread_tmp_7_2_1_cast_fu_3751_p1() {
    tmp_7_2_1_cast_fu_3751_p1 = esl_sext<12,11>(r_V_7_2_1_reg_15953.read());
}

void differentiate::thread_tmp_7_2_2_cast_fu_3754_p1() {
    tmp_7_2_2_cast_fu_3754_p1 = esl_sext<12,11>(r_V_7_2_2_reg_16021.read());
}

void differentiate::thread_tmp_7_2_cast_fu_3745_p1() {
    tmp_7_2_cast_fu_3745_p1 = esl_sext<13,11>(r_V_7_2_reg_15885.read());
}

void differentiate::thread_tmp_7_fu_2909_p3() {
    tmp_7_fu_2909_p3 = (!tmp_337_fu_2883_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_337_fu_2883_p3.read()[0].to_bool())? tmp_6_fu_2903_p2.read(): tmp_5_fu_2897_p2.read());
}

void differentiate::thread_tmp_804_cast_fu_12993_p1() {
    tmp_804_cast_fu_12993_p1 = esl_sext<13,11>(r_V_42_1_reg_19370.read());
}

void differentiate::thread_tmp_80_fu_9021_p2() {
    tmp_80_fu_9021_p2 = (!tmp537_cast_fu_9018_p1.read().is_01() || !tmp534_cast_fu_9015_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp537_cast_fu_9018_p1.read()) + sc_bigint<15>(tmp534_cast_fu_9015_p1.read()));
}

void differentiate::thread_tmp_811_cast_fu_12999_p1() {
    tmp_811_cast_fu_12999_p1 = esl_sext<12,11>(r_V_42_2_reg_19397.read());
}

void differentiate::thread_tmp_81_fu_9027_p2() {
    tmp_81_fu_9027_p2 = (!ap_const_lv15_0.is_01() || !tmp_80_fu_9021_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_80_fu_9021_p2.read()));
}

void differentiate::thread_tmp_823_cast_fu_13249_p1() {
    tmp_823_cast_fu_13249_p1 = esl_sext<13,11>(r_V_43_1_reg_19464.read());
}

void differentiate::thread_tmp_82_cast_fu_3265_p1() {
    tmp_82_cast_fu_3265_p1 = esl_sext<13,11>(r_V_4_1_reg_14828.read());
}

void differentiate::thread_tmp_82_fu_9033_p3() {
    tmp_82_fu_9033_p3 = (!tmp_368_fu_9007_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_368_fu_9007_p3.read()[0].to_bool())? tmp_81_fu_9027_p2.read(): tmp_80_fu_9021_p2.read());
}

void differentiate::thread_tmp_830_cast_fu_13255_p1() {
    tmp_830_cast_fu_13255_p1 = esl_sext<12,11>(r_V_43_2_reg_19491.read());
}

void differentiate::thread_tmp_83_fu_9277_p2() {
    tmp_83_fu_9277_p2 = (!tmp557_cast_fu_9274_p1.read().is_01() || !tmp554_cast_fu_9271_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp557_cast_fu_9274_p1.read()) + sc_bigint<15>(tmp554_cast_fu_9271_p1.read()));
}

void differentiate::thread_tmp_842_cast_fu_13489_p1() {
    tmp_842_cast_fu_13489_p1 = esl_sext<13,11>(r_V_44_1_reg_19558.read());
}

void differentiate::thread_tmp_849_cast_fu_13495_p1() {
    tmp_849_cast_fu_13495_p1 = esl_sext<12,11>(r_V_44_2_reg_19585.read());
}

void differentiate::thread_tmp_84_fu_9283_p2() {
    tmp_84_fu_9283_p2 = (!ap_const_lv15_0.is_01() || !tmp_83_fu_9277_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_83_fu_9277_p2.read()));
}

void differentiate::thread_tmp_85_fu_9289_p3() {
    tmp_85_fu_9289_p3 = (!tmp_380_fu_9263_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_380_fu_9263_p3.read()[0].to_bool())? tmp_84_fu_9283_p2.read(): tmp_83_fu_9277_p2.read());
}

void differentiate::thread_tmp_861_cast_fu_13721_p1() {
    tmp_861_cast_fu_13721_p1 = esl_sext<13,11>(r_V_45_1_reg_19652.read());
}

void differentiate::thread_tmp_868_cast_fu_13727_p1() {
    tmp_868_cast_fu_13727_p1 = esl_sext<12,11>(r_V_45_2_reg_19679.read());
}

void differentiate::thread_tmp_86_fu_9533_p2() {
    tmp_86_fu_9533_p2 = (!tmp577_cast_fu_9530_p1.read().is_01() || !tmp574_cast_fu_9527_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp577_cast_fu_9530_p1.read()) + sc_bigint<15>(tmp574_cast_fu_9527_p1.read()));
}

void differentiate::thread_tmp_87_fu_9539_p2() {
    tmp_87_fu_9539_p2 = (!ap_const_lv15_0.is_01() || !tmp_86_fu_9533_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_86_fu_9533_p2.read()));
}

void differentiate::thread_tmp_88_fu_9545_p3() {
    tmp_88_fu_9545_p3 = (!tmp_392_fu_9519_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_392_fu_9519_p3.read()[0].to_bool())? tmp_87_fu_9539_p2.read(): tmp_86_fu_9533_p2.read());
}

void differentiate::thread_tmp_89_cast_fu_3271_p1() {
    tmp_89_cast_fu_3271_p1 = esl_sext<12,11>(r_V_4_2_reg_15667.read());
}

void differentiate::thread_tmp_89_fu_9789_p2() {
    tmp_89_fu_9789_p2 = (!tmp597_cast_fu_9786_p1.read().is_01() || !tmp594_cast_fu_9783_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp597_cast_fu_9786_p1.read()) + sc_bigint<15>(tmp594_cast_fu_9783_p1.read()));
}

void differentiate::thread_tmp_8_0_2_cast_fu_4036_p1() {
    tmp_8_0_2_cast_fu_4036_p1 = esl_sext<12,11>(r_V_8_0_2_reg_16083.read());
}

void differentiate::thread_tmp_8_1_cast_fu_4039_p1() {
    tmp_8_1_cast_fu_4039_p1 = esl_sext<12,11>(r_V_8_1_reg_14922.read());
}

void differentiate::thread_tmp_8_2_1_cast_fu_4051_p1() {
    tmp_8_2_1_cast_fu_4051_p1 = esl_sext<12,11>(r_V_8_2_1_reg_16026.read());
}

void differentiate::thread_tmp_8_2_2_cast_fu_4054_p1() {
    tmp_8_2_2_cast_fu_4054_p1 = esl_sext<12,11>(r_V_8_2_2_reg_16113.read());
}

void differentiate::thread_tmp_8_2_cast_fu_4045_p1() {
    tmp_8_2_cast_fu_4045_p1 = esl_sext<13,11>(r_V_8_2_reg_15958.read());
}

void differentiate::thread_tmp_8_fu_3877_p2() {
    tmp_8_fu_3877_p2 = (!tmp57_cast_fu_3874_p1.read().is_01() || !tmp54_cast_fu_3871_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp57_cast_fu_3874_p1.read()) + sc_bigint<15>(tmp54_cast_fu_3871_p1.read()));
}

void differentiate::thread_tmp_90_fu_9795_p2() {
    tmp_90_fu_9795_p2 = (!ap_const_lv15_0.is_01() || !tmp_89_fu_9789_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_89_fu_9789_p2.read()));
}

void differentiate::thread_tmp_91_fu_9801_p3() {
    tmp_91_fu_9801_p3 = (!tmp_404_fu_9775_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_404_fu_9775_p3.read()[0].to_bool())? tmp_90_fu_9795_p2.read(): tmp_89_fu_9789_p2.read());
}

void differentiate::thread_tmp_92_fu_10045_p2() {
    tmp_92_fu_10045_p2 = (!tmp617_cast_fu_10042_p1.read().is_01() || !tmp614_cast_fu_10039_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp617_cast_fu_10042_p1.read()) + sc_bigint<15>(tmp614_cast_fu_10039_p1.read()));
}

void differentiate::thread_tmp_93_fu_10051_p2() {
    tmp_93_fu_10051_p2 = (!ap_const_lv15_0.is_01() || !tmp_92_fu_10045_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_92_fu_10045_p2.read()));
}

void differentiate::thread_tmp_94_fu_10057_p3() {
    tmp_94_fu_10057_p3 = (!tmp_416_fu_10031_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_416_fu_10031_p3.read()[0].to_bool())? tmp_93_fu_10051_p2.read(): tmp_92_fu_10045_p2.read());
}

void differentiate::thread_tmp_95_fu_10301_p2() {
    tmp_95_fu_10301_p2 = (!tmp637_cast_fu_10298_p1.read().is_01() || !tmp634_cast_fu_10295_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp637_cast_fu_10298_p1.read()) + sc_bigint<15>(tmp634_cast_fu_10295_p1.read()));
}

void differentiate::thread_tmp_96_fu_10307_p2() {
    tmp_96_fu_10307_p2 = (!ap_const_lv15_0.is_01() || !tmp_95_fu_10301_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_95_fu_10301_p2.read()));
}

void differentiate::thread_tmp_97_fu_10313_p3() {
    tmp_97_fu_10313_p3 = (!tmp_428_fu_10287_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_428_fu_10287_p3.read()[0].to_bool())? tmp_96_fu_10307_p2.read(): tmp_95_fu_10301_p2.read());
}

void differentiate::thread_tmp_98_fu_10557_p2() {
    tmp_98_fu_10557_p2 = (!tmp657_cast_fu_10554_p1.read().is_01() || !tmp654_cast_fu_10551_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp657_cast_fu_10554_p1.read()) + sc_bigint<15>(tmp654_cast_fu_10551_p1.read()));
}

void differentiate::thread_tmp_99_fu_10563_p2() {
    tmp_99_fu_10563_p2 = (!ap_const_lv15_0.is_01() || !tmp_98_fu_10557_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_98_fu_10557_p2.read()));
}

void differentiate::thread_tmp_9_0_2_cast_fu_4346_p1() {
    tmp_9_0_2_cast_fu_4346_p1 = esl_sext<12,11>(r_V_9_0_2_reg_16174.read());
}

void differentiate::thread_tmp_9_1_cast_fu_4349_p1() {
    tmp_9_1_cast_fu_4349_p1 = esl_sext<12,11>(r_V_9_1_reg_14948.read());
}

void differentiate::thread_tmp_9_2_1_cast_fu_4361_p1() {
    tmp_9_2_1_cast_fu_4361_p1 = esl_sext<12,11>(r_V_9_2_1_reg_16118.read());
}

void differentiate::thread_tmp_9_2_2_cast_fu_4364_p1() {
    tmp_9_2_2_cast_fu_4364_p1 = esl_sext<12,11>(r_V_9_2_2_reg_16204.read());
}

void differentiate::thread_tmp_9_2_cast_fu_4355_p1() {
    tmp_9_2_cast_fu_4355_p1 = esl_sext<13,11>(r_V_9_2_reg_16031.read());
}

void differentiate::thread_tmp_9_fu_3883_p2() {
    tmp_9_fu_3883_p2 = (!ap_const_lv15_0.is_01() || !tmp_8_fu_3877_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_8_fu_3877_p2.read()));
}

void differentiate::thread_tmp_fu_2277_p2() {
    tmp_fu_2277_p2 = (!ap_const_lv6_3F.is_01() || !i_reg_1864.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_3F) + sc_biguint<6>(i_reg_1864.read()));
}

void differentiate::thread_tmp_s_fu_1906_p3() {
    tmp_s_fu_1906_p3 = esl_concat<6,6>(i_phi_fu_1868_p4.read(), ap_const_lv6_0);
}

void differentiate::thread_window_V_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_flag00000000.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_5);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage20_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage22_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage24_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_0);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage19_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_8);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage18_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_7);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage17_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_6);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage16_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_4);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_3);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_2);
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00000000.read(), ap_const_boolean_0)) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
                 esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00000000.read(), ap_const_boolean_0)))) {
        window_V_address0 =  (sc_lv<4>) (ap_const_lv32_1);
    } else {
        window_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void differentiate::thread_window_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage18.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage18_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage4.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage4_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage5.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage5_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage6.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage6_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage7.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage7_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage8.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage8_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage9.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage9_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage10.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage10_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage11.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage11_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage12.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage12_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage13.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage13_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage14.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage14_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage15.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage15_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage16.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage16_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage17.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage17_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage19.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage19_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage20.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage20_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage21.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage21_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage22.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage22_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage23.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage23_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage24.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage24_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage25.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage25_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage3_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        window_V_ce0 = ap_const_logic_1;
    } else {
        window_V_ce0 = ap_const_logic_0;
    }
}

}

