#include "differentiate.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void differentiate::thread_tmp68_cast_fu_3900_p1() {
    tmp68_cast_fu_3900_p1 = esl_sext<13,12>(grp_fu_14045_p3.read());
}

void differentiate::thread_tmp68_fu_3334_p2() {
    tmp68_fu_3334_p2 = (!tmp_4_0_2_cast_fu_3259_p1.read().is_01() || !tmp_4_2_2_cast_fu_3277_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_4_0_2_cast_fu_3259_p1.read()) + sc_bigint<12>(tmp_4_2_2_cast_fu_3277_p1.read()));
}

void differentiate::thread_tmp690_cast_fu_11066_p1() {
    tmp690_cast_fu_11066_p1 = esl_sext<15,14>(tmp463_reg_18783.read());
}

void differentiate::thread_tmp691_cast_fu_10958_p1() {
    tmp691_cast_fu_10958_p1 = esl_sext<14,12>(tmp460_reg_18702.read());
}

void differentiate::thread_tmp692_cast_fu_10977_p1() {
    tmp692_cast_fu_10977_p1 = esl_sext<14,13>(tmp462_fu_10971_p2.read());
}

void differentiate::thread_tmp693_cast_fu_10967_p1() {
    tmp693_cast_fu_10967_p1 = esl_sext<13,12>(tmp461_fu_10961_p2.read());
}

void differentiate::thread_tmp694_cast_fu_11083_p1() {
    tmp694_cast_fu_11083_p1 = esl_sext<15,13>(tmp465_reg_18788.read());
}

void differentiate::thread_tmp695_cast_fu_10993_p1() {
    tmp695_cast_fu_10993_p1 = esl_sext<13,12>(tmp464_fu_10987_p2.read());
}

void differentiate::thread_tmp696_cast_fu_10997_p1() {
    tmp696_cast_fu_10997_p1 = esl_sext<13,12>(tmp460_reg_18702.read());
}

void differentiate::thread_tmp697_cast_fu_11086_p1() {
    tmp697_cast_fu_11086_p1 = esl_sext<15,14>(tmp468_reg_18793.read());
}

void differentiate::thread_tmp698_cast_fu_11006_p1() {
    tmp698_cast_fu_11006_p1 = esl_sext<14,12>(tmp457_reg_18626.read());
}

void differentiate::thread_tmp699_cast_fu_11025_p1() {
    tmp699_cast_fu_11025_p1 = esl_sext<14,13>(tmp467_fu_11019_p2.read());
}

void differentiate::thread_tmp69_cast_fu_3903_p1() {
    tmp69_cast_fu_3903_p1 = esl_sext<13,12>(tmp44_reg_15756.read());
}

void differentiate::thread_tmp69_fu_3344_p2() {
    tmp69_fu_3344_p2 = (!tmp100_cast_fu_3340_p1.read().is_01() || !tmp_82_cast_fu_3265_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp100_cast_fu_3340_p1.read()) + sc_bigint<13>(tmp_82_cast_fu_3265_p1.read()));
}

void differentiate::thread_tmp700_cast_fu_11015_p1() {
    tmp700_cast_fu_11015_p1 = esl_sext<13,12>(tmp466_fu_11009_p2.read());
}

void differentiate::thread_tmp707_cast_fu_11328_p1() {
    tmp707_cast_fu_11328_p1 = esl_sext<15,13>(tmp471_reg_18912.read());
}

void differentiate::thread_tmp708_cast_fu_11208_p1() {
    tmp708_cast_fu_11208_p1 = esl_sext<13,12>(tmp469_reg_18748.read());
}

void differentiate::thread_tmp709_cast_fu_11217_p1() {
    tmp709_cast_fu_11217_p1 = esl_sext<13,12>(tmp470_fu_11211_p2.read());
}

void differentiate::thread_tmp70_cast_fu_3966_p1() {
    tmp70_cast_fu_3966_p1 = esl_sext<15,14>(tmp49_reg_15761.read());
}

void differentiate::thread_tmp70_fu_4030_p2() {
    tmp70_fu_4030_p2 = (!tmp99_cast_fu_4027_p1.read().is_01() || !tmp98_cast_fu_4024_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp99_cast_fu_4027_p1.read()) + sc_bigint<14>(tmp98_cast_fu_4024_p1.read()));
}

void differentiate::thread_tmp710_cast_fu_11331_p1() {
    tmp710_cast_fu_11331_p1 = esl_sext<15,14>(tmp475_reg_18917.read());
}

void differentiate::thread_tmp711_cast_fu_11227_p1() {
    tmp711_cast_fu_11227_p1 = esl_sext<14,12>(tmp472_reg_18837.read());
}

void differentiate::thread_tmp712_cast_fu_11246_p1() {
    tmp712_cast_fu_11246_p1 = esl_sext<14,13>(tmp474_fu_11240_p2.read());
}

void differentiate::thread_tmp713_cast_fu_11236_p1() {
    tmp713_cast_fu_11236_p1 = esl_sext<13,12>(tmp473_fu_11230_p2.read());
}

void differentiate::thread_tmp714_cast_fu_11348_p1() {
    tmp714_cast_fu_11348_p1 = esl_sext<15,13>(tmp477_reg_18922.read());
}

void differentiate::thread_tmp715_cast_fu_11262_p1() {
    tmp715_cast_fu_11262_p1 = esl_sext<13,12>(tmp476_fu_11256_p2.read());
}

void differentiate::thread_tmp716_cast_fu_11266_p1() {
    tmp716_cast_fu_11266_p1 = esl_sext<13,12>(tmp472_reg_18837.read());
}

void differentiate::thread_tmp717_cast_fu_11351_p1() {
    tmp717_cast_fu_11351_p1 = esl_sext<15,14>(tmp480_reg_18927.read());
}

void differentiate::thread_tmp718_cast_fu_11275_p1() {
    tmp718_cast_fu_11275_p1 = esl_sext<14,12>(tmp469_reg_18748.read());
}

void differentiate::thread_tmp719_cast_fu_11294_p1() {
    tmp719_cast_fu_11294_p1 = esl_sext<14,13>(tmp479_fu_11288_p2.read());
}

void differentiate::thread_tmp71_cast_fu_3136_p1() {
    tmp71_cast_fu_3136_p1 = esl_sext<14,12>(tmp46_reg_15661.read());
}

void differentiate::thread_tmp720_cast_fu_11284_p1() {
    tmp720_cast_fu_11284_p1 = esl_sext<13,12>(tmp478_fu_11278_p2.read());
}

void differentiate::thread_tmp727_cast_fu_11592_p1() {
    tmp727_cast_fu_11592_p1 = esl_sext<15,13>(tmp483_reg_19032.read());
}

void differentiate::thread_tmp728_cast_fu_11472_p1() {
    tmp728_cast_fu_11472_p1 = esl_sext<13,12>(tmp481_reg_18895.read());
}

void differentiate::thread_tmp729_cast_fu_11481_p1() {
    tmp729_cast_fu_11481_p1 = esl_sext<13,12>(tmp482_fu_11475_p2.read());
}

void differentiate::thread_tmp72_cast_fu_3155_p1() {
    tmp72_cast_fu_3155_p1 = esl_sext<14,13>(tmp48_fu_3149_p2.read());
}

void differentiate::thread_tmp72_fu_3430_p2() {
    tmp72_fu_3430_p2 = (!tmp_5_0_2_cast_fu_3409_p1.read().is_01() || !tmp_5_1_cast_fu_3412_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_5_0_2_cast_fu_3409_p1.read()) + sc_bigint<12>(tmp_5_1_cast_fu_3412_p1.read()));
}

void differentiate::thread_tmp730_cast_fu_11595_p1() {
    tmp730_cast_fu_11595_p1 = esl_sext<15,14>(tmp487_reg_19037.read());
}

void differentiate::thread_tmp731_cast_fu_11491_p1() {
    tmp731_cast_fu_11491_p1 = esl_sext<14,12>(tmp484_reg_18970.read());
}

void differentiate::thread_tmp732_cast_fu_11510_p1() {
    tmp732_cast_fu_11510_p1 = esl_sext<14,13>(tmp486_fu_11504_p2.read());
}

void differentiate::thread_tmp733_cast_fu_11500_p1() {
    tmp733_cast_fu_11500_p1 = esl_sext<13,12>(tmp485_fu_11494_p2.read());
}

void differentiate::thread_tmp734_cast_fu_11612_p1() {
    tmp734_cast_fu_11612_p1 = esl_sext<15,13>(tmp489_reg_19042.read());
}

void differentiate::thread_tmp735_cast_fu_11526_p1() {
    tmp735_cast_fu_11526_p1 = esl_sext<13,12>(tmp488_fu_11520_p2.read());
}

void differentiate::thread_tmp736_cast_fu_11530_p1() {
    tmp736_cast_fu_11530_p1 = esl_sext<13,12>(tmp484_reg_18970.read());
}

void differentiate::thread_tmp737_cast_fu_11615_p1() {
    tmp737_cast_fu_11615_p1 = esl_sext<15,14>(tmp492_reg_19047.read());
}

void differentiate::thread_tmp738_cast_fu_11539_p1() {
    tmp738_cast_fu_11539_p1 = esl_sext<14,12>(tmp481_reg_18895.read());
}

void differentiate::thread_tmp739_cast_fu_11558_p1() {
    tmp739_cast_fu_11558_p1 = esl_sext<14,13>(tmp491_fu_11552_p2.read());
}

void differentiate::thread_tmp73_cast_fu_3145_p1() {
    tmp73_cast_fu_3145_p1 = esl_sext<13,12>(tmp47_fu_3139_p2.read());
}

void differentiate::thread_tmp73_fu_4216_p2() {
    tmp73_fu_4216_p2 = (!tmp109_cast_fu_4213_p1.read().is_01() || !tmp108_cast_fu_4210_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp109_cast_fu_4213_p1.read()) + sc_bigint<13>(tmp108_cast_fu_4210_p1.read()));
}

void differentiate::thread_tmp740_cast_fu_11548_p1() {
    tmp740_cast_fu_11548_p1 = esl_sext<13,12>(tmp490_fu_11542_p2.read());
}

void differentiate::thread_tmp747_cast_fu_11848_p1() {
    tmp747_cast_fu_11848_p1 = esl_sext<15,13>(tmp495_reg_19126.read());
}

void differentiate::thread_tmp748_cast_fu_11728_p1() {
    tmp748_cast_fu_11728_p1 = esl_sext<13,12>(tmp493_reg_19015.read());
}

void differentiate::thread_tmp749_cast_fu_11737_p1() {
    tmp749_cast_fu_11737_p1 = esl_sext<13,12>(tmp494_fu_11731_p2.read());
}

void differentiate::thread_tmp74_cast_fu_3983_p1() {
    tmp74_cast_fu_3983_p1 = esl_sext<15,13>(tmp52_reg_15766.read());
}

void differentiate::thread_tmp750_cast_fu_11851_p1() {
    tmp750_cast_fu_11851_p1 = esl_sext<15,14>(tmp499_reg_19131.read());
}

void differentiate::thread_tmp751_cast_fu_11747_p1() {
    tmp751_cast_fu_11747_p1 = esl_sext<14,12>(tmp496_reg_19077.read());
}

void differentiate::thread_tmp752_cast_fu_11766_p1() {
    tmp752_cast_fu_11766_p1 = esl_sext<14,13>(tmp498_fu_11760_p2.read());
}

void differentiate::thread_tmp753_cast_fu_11756_p1() {
    tmp753_cast_fu_11756_p1 = esl_sext<13,12>(tmp497_fu_11750_p2.read());
}

void differentiate::thread_tmp754_cast_fu_11868_p1() {
    tmp754_cast_fu_11868_p1 = esl_sext<15,13>(tmp501_reg_19136.read());
}

void differentiate::thread_tmp755_cast_fu_11782_p1() {
    tmp755_cast_fu_11782_p1 = esl_sext<13,12>(tmp500_fu_11776_p2.read());
}

void differentiate::thread_tmp756_cast_fu_11786_p1() {
    tmp756_cast_fu_11786_p1 = esl_sext<13,12>(tmp496_reg_19077.read());
}

void differentiate::thread_tmp757_cast_fu_11871_p1() {
    tmp757_cast_fu_11871_p1 = esl_sext<15,14>(tmp504_reg_19141.read());
}

void differentiate::thread_tmp758_cast_fu_11795_p1() {
    tmp758_cast_fu_11795_p1 = esl_sext<14,12>(tmp493_reg_19015.read());
}

void differentiate::thread_tmp759_cast_fu_11814_p1() {
    tmp759_cast_fu_11814_p1 = esl_sext<14,13>(tmp503_fu_11808_p2.read());
}

void differentiate::thread_tmp75_cast_fu_3171_p1() {
    tmp75_cast_fu_3171_p1 = esl_sext<13,12>(tmp50_fu_3165_p2.read());
}

void differentiate::thread_tmp75_fu_3439_p2() {
    tmp75_fu_3439_p2 = (!tmp_5_2_1_cast_fu_3424_p1.read().is_01() || !tmp_5_2_2_cast_fu_3427_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_5_2_1_cast_fu_3424_p1.read()) + sc_bigint<12>(tmp_5_2_2_cast_fu_3427_p1.read()));
}

void differentiate::thread_tmp760_cast_fu_11804_p1() {
    tmp760_cast_fu_11804_p1 = esl_sext<13,12>(tmp502_fu_11798_p2.read());
}

void differentiate::thread_tmp767_cast_fu_12104_p1() {
    tmp767_cast_fu_12104_p1 = esl_sext<15,13>(tmp507_reg_19220.read());
}

void differentiate::thread_tmp768_cast_fu_11984_p1() {
    tmp768_cast_fu_11984_p1 = esl_sext<13,12>(tmp505_reg_19109.read());
}

void differentiate::thread_tmp769_cast_fu_11993_p1() {
    tmp769_cast_fu_11993_p1 = esl_sext<13,12>(tmp506_fu_11987_p2.read());
}

void differentiate::thread_tmp76_cast_fu_3175_p1() {
    tmp76_cast_fu_3175_p1 = esl_sext<13,12>(tmp46_reg_15661.read());
}

void differentiate::thread_tmp76_fu_3449_p2() {
    tmp76_fu_3449_p2 = (!tmp113_cast_fu_3445_p1.read().is_01() || !tmp_5_2_cast_fu_3418_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp113_cast_fu_3445_p1.read()) + sc_bigint<13>(tmp_5_2_cast_fu_3418_p1.read()));
}

void differentiate::thread_tmp770_cast_fu_12107_p1() {
    tmp770_cast_fu_12107_p1 = esl_sext<15,14>(tmp511_reg_19225.read());
}

void differentiate::thread_tmp771_cast_fu_12003_p1() {
    tmp771_cast_fu_12003_p1 = esl_sext<14,12>(tmp508_reg_19171.read());
}

void differentiate::thread_tmp772_cast_fu_12022_p1() {
    tmp772_cast_fu_12022_p1 = esl_sext<14,13>(tmp510_fu_12016_p2.read());
}

void differentiate::thread_tmp773_cast_fu_12012_p1() {
    tmp773_cast_fu_12012_p1 = esl_sext<13,12>(tmp509_fu_12006_p2.read());
}

void differentiate::thread_tmp774_cast_fu_12124_p1() {
    tmp774_cast_fu_12124_p1 = esl_sext<15,13>(tmp513_reg_19230.read());
}

void differentiate::thread_tmp775_cast_fu_12038_p1() {
    tmp775_cast_fu_12038_p1 = esl_sext<13,12>(tmp512_fu_12032_p2.read());
}

void differentiate::thread_tmp776_cast_fu_12042_p1() {
    tmp776_cast_fu_12042_p1 = esl_sext<13,12>(tmp508_reg_19171.read());
}

void differentiate::thread_tmp777_cast_fu_12127_p1() {
    tmp777_cast_fu_12127_p1 = esl_sext<15,14>(tmp516_reg_19235.read());
}

void differentiate::thread_tmp778_cast_fu_12051_p1() {
    tmp778_cast_fu_12051_p1 = esl_sext<14,12>(tmp505_reg_19109.read());
}

void differentiate::thread_tmp779_cast_fu_12070_p1() {
    tmp779_cast_fu_12070_p1 = esl_sext<14,13>(tmp515_fu_12064_p2.read());
}

void differentiate::thread_tmp77_cast_fu_3986_p1() {
    tmp77_cast_fu_3986_p1 = esl_sext<15,14>(tmp56_reg_16108.read());
}

void differentiate::thread_tmp77_fu_3459_p2() {
    tmp77_fu_3459_p2 = (!tmp112_cast_fu_3455_p1.read().is_01() || !tmp111_cast_fu_3436_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp112_cast_fu_3455_p1.read()) + sc_bigint<14>(tmp111_cast_fu_3436_p1.read()));
}

void differentiate::thread_tmp780_cast_fu_12060_p1() {
    tmp780_cast_fu_12060_p1 = esl_sext<13,12>(tmp514_fu_12054_p2.read());
}

void differentiate::thread_tmp787_cast_fu_12360_p1() {
    tmp787_cast_fu_12360_p1 = esl_sext<15,13>(tmp519_reg_19314.read());
}

void differentiate::thread_tmp788_cast_fu_12240_p1() {
    tmp788_cast_fu_12240_p1 = esl_sext<13,12>(tmp517_reg_19203.read());
}

void differentiate::thread_tmp789_cast_fu_12249_p1() {
    tmp789_cast_fu_12249_p1 = esl_sext<13,12>(tmp518_fu_12243_p2.read());
}

void differentiate::thread_tmp78_cast_fu_3912_p1() {
    tmp78_cast_fu_3912_p1 = esl_sext<14,12>(grp_fu_14045_p3.read());
}

void differentiate::thread_tmp78_fu_3465_p2() {
    tmp78_fu_3465_p2 = (!tmp_108_cast_fu_3421_p1.read().is_01() || !tmp_5_2_1_cast_fu_3424_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_108_cast_fu_3421_p1.read()) + sc_bigint<12>(tmp_5_2_1_cast_fu_3424_p1.read()));
}

void differentiate::thread_tmp790_cast_fu_12363_p1() {
    tmp790_cast_fu_12363_p1 = esl_sext<15,14>(tmp523_reg_19319.read());
}

void differentiate::thread_tmp791_cast_fu_12259_p1() {
    tmp791_cast_fu_12259_p1 = esl_sext<14,12>(tmp520_reg_19265.read());
}

void differentiate::thread_tmp792_cast_fu_12278_p1() {
    tmp792_cast_fu_12278_p1 = esl_sext<14,13>(tmp522_fu_12272_p2.read());
}

void differentiate::thread_tmp793_cast_fu_12268_p1() {
    tmp793_cast_fu_12268_p1 = esl_sext<13,12>(tmp521_fu_12262_p2.read());
}

void differentiate::thread_tmp794_cast_fu_12380_p1() {
    tmp794_cast_fu_12380_p1 = esl_sext<15,13>(tmp525_reg_19324.read());
}

void differentiate::thread_tmp795_cast_fu_12294_p1() {
    tmp795_cast_fu_12294_p1 = esl_sext<13,12>(tmp524_fu_12288_p2.read());
}

void differentiate::thread_tmp796_cast_fu_12298_p1() {
    tmp796_cast_fu_12298_p1 = esl_sext<13,12>(tmp520_reg_19265.read());
}

void differentiate::thread_tmp797_cast_fu_12383_p1() {
    tmp797_cast_fu_12383_p1 = esl_sext<15,14>(tmp528_reg_19329.read());
}

void differentiate::thread_tmp798_cast_fu_12307_p1() {
    tmp798_cast_fu_12307_p1 = esl_sext<14,12>(tmp517_reg_19203.read());
}

void differentiate::thread_tmp799_cast_fu_12326_p1() {
    tmp799_cast_fu_12326_p1 = esl_sext<14,13>(tmp527_fu_12320_p2.read());
}

void differentiate::thread_tmp79_cast_fu_3915_p1() {
    tmp79_cast_fu_3915_p1 = esl_sext<14,13>(tmp55_reg_15771.read());
}

void differentiate::thread_tmp7_cast_fu_13806_p1() {
    tmp7_cast_fu_13806_p1 = esl_sext<15,13>(tmp7_reg_19807.read());
}

void differentiate::thread_tmp7_fu_13697_p2() {
    tmp7_fu_13697_p2 = (!tmp9_cast_fu_13694_p1.read().is_01() || !tmp8_cast_fu_13691_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp9_cast_fu_13694_p1.read()) + sc_bigint<13>(tmp8_cast_fu_13691_p1.read()));
}

void differentiate::thread_tmp800_cast_fu_12316_p1() {
    tmp800_cast_fu_12316_p1 = esl_sext<13,12>(tmp526_fu_12310_p2.read());
}

void differentiate::thread_tmp807_cast_fu_12616_p1() {
    tmp807_cast_fu_12616_p1 = esl_sext<15,13>(tmp531_reg_19408.read());
}

void differentiate::thread_tmp808_cast_fu_12496_p1() {
    tmp808_cast_fu_12496_p1 = esl_sext<13,12>(tmp529_reg_19297.read());
}

void differentiate::thread_tmp809_cast_fu_12505_p1() {
    tmp809_cast_fu_12505_p1 = esl_sext<13,12>(tmp530_fu_12499_p2.read());
}

void differentiate::thread_tmp80_cast_fu_3190_p1() {
    tmp80_cast_fu_3190_p1 = esl_sext<13,12>(tmp54_fu_3184_p2.read());
}

void differentiate::thread_tmp80_fu_3478_p2() {
    tmp80_fu_3478_p2 = (!tmp116_cast_fu_3475_p1.read().is_01() || !tmp115_cast_fu_3471_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp116_cast_fu_3475_p1.read()) + sc_bigint<13>(tmp115_cast_fu_3471_p1.read()));
}

void differentiate::thread_tmp810_cast_fu_12619_p1() {
    tmp810_cast_fu_12619_p1 = esl_sext<15,14>(tmp535_reg_19413.read());
}

void differentiate::thread_tmp811_cast_fu_12515_p1() {
    tmp811_cast_fu_12515_p1 = esl_sext<14,12>(tmp532_reg_19359.read());
}

void differentiate::thread_tmp812_cast_fu_12534_p1() {
    tmp812_cast_fu_12534_p1 = esl_sext<14,13>(tmp534_fu_12528_p2.read());
}

void differentiate::thread_tmp813_cast_fu_12524_p1() {
    tmp813_cast_fu_12524_p1 = esl_sext<13,12>(tmp533_fu_12518_p2.read());
}

void differentiate::thread_tmp814_cast_fu_12636_p1() {
    tmp814_cast_fu_12636_p1 = esl_sext<15,13>(tmp537_reg_19418.read());
}

void differentiate::thread_tmp815_cast_fu_12550_p1() {
    tmp815_cast_fu_12550_p1 = esl_sext<13,12>(tmp536_fu_12544_p2.read());
}

void differentiate::thread_tmp816_cast_fu_12554_p1() {
    tmp816_cast_fu_12554_p1 = esl_sext<13,12>(tmp532_reg_19359.read());
}

void differentiate::thread_tmp817_cast_fu_12639_p1() {
    tmp817_cast_fu_12639_p1 = esl_sext<15,14>(tmp540_reg_19423.read());
}

void differentiate::thread_tmp818_cast_fu_12563_p1() {
    tmp818_cast_fu_12563_p1 = esl_sext<14,12>(tmp529_reg_19297.read());
}

void differentiate::thread_tmp819_cast_fu_12582_p1() {
    tmp819_cast_fu_12582_p1 = esl_sext<14,13>(tmp539_fu_12576_p2.read());
}

void differentiate::thread_tmp820_cast_fu_12572_p1() {
    tmp820_cast_fu_12572_p1 = esl_sext<13,12>(tmp538_fu_12566_p2.read());
}

void differentiate::thread_tmp827_cast_fu_12872_p1() {
    tmp827_cast_fu_12872_p1 = esl_sext<15,13>(tmp543_reg_19502.read());
}

void differentiate::thread_tmp828_cast_fu_12752_p1() {
    tmp828_cast_fu_12752_p1 = esl_sext<13,12>(tmp541_reg_19391.read());
}

void differentiate::thread_tmp829_cast_fu_12761_p1() {
    tmp829_cast_fu_12761_p1 = esl_sext<13,12>(tmp542_fu_12755_p2.read());
}

void differentiate::thread_tmp82_fu_3484_p2() {
    tmp82_fu_3484_p2 = (!tmp_5_0_2_cast_fu_3409_p1.read().is_01() || !tmp_5_2_2_cast_fu_3427_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_5_0_2_cast_fu_3409_p1.read()) + sc_bigint<12>(tmp_5_2_2_cast_fu_3427_p1.read()));
}

void differentiate::thread_tmp830_cast_fu_12875_p1() {
    tmp830_cast_fu_12875_p1 = esl_sext<15,14>(tmp547_reg_19507.read());
}

void differentiate::thread_tmp831_cast_fu_12771_p1() {
    tmp831_cast_fu_12771_p1 = esl_sext<14,12>(tmp544_reg_19453.read());
}

void differentiate::thread_tmp832_cast_fu_12790_p1() {
    tmp832_cast_fu_12790_p1 = esl_sext<14,13>(tmp546_fu_12784_p2.read());
}

void differentiate::thread_tmp833_cast_fu_12780_p1() {
    tmp833_cast_fu_12780_p1 = esl_sext<13,12>(tmp545_fu_12774_p2.read());
}

void differentiate::thread_tmp834_cast_fu_12892_p1() {
    tmp834_cast_fu_12892_p1 = esl_sext<15,13>(tmp549_reg_19512.read());
}

void differentiate::thread_tmp835_cast_fu_12806_p1() {
    tmp835_cast_fu_12806_p1 = esl_sext<13,12>(tmp548_fu_12800_p2.read());
}

void differentiate::thread_tmp836_cast_fu_12810_p1() {
    tmp836_cast_fu_12810_p1 = esl_sext<13,12>(tmp544_reg_19453.read());
}

void differentiate::thread_tmp837_cast_fu_12895_p1() {
    tmp837_cast_fu_12895_p1 = esl_sext<15,14>(tmp552_reg_19517.read());
}

void differentiate::thread_tmp838_cast_fu_12819_p1() {
    tmp838_cast_fu_12819_p1 = esl_sext<14,12>(tmp541_reg_19391.read());
}

void differentiate::thread_tmp839_cast_fu_12838_p1() {
    tmp839_cast_fu_12838_p1 = esl_sext<14,13>(tmp551_fu_12832_p2.read());
}

void differentiate::thread_tmp83_fu_3494_p2() {
    tmp83_fu_3494_p2 = (!tmp120_cast_fu_3490_p1.read().is_01() || !tmp_101_cast_fu_3415_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp120_cast_fu_3490_p1.read()) + sc_bigint<13>(tmp_101_cast_fu_3415_p1.read()));
}

void differentiate::thread_tmp840_cast_fu_12828_p1() {
    tmp840_cast_fu_12828_p1 = esl_sext<13,12>(tmp550_fu_12822_p2.read());
}

void differentiate::thread_tmp847_cast_fu_13128_p1() {
    tmp847_cast_fu_13128_p1 = esl_sext<15,13>(tmp555_reg_19596.read());
}

void differentiate::thread_tmp848_cast_fu_13008_p1() {
    tmp848_cast_fu_13008_p1 = esl_sext<13,12>(tmp553_reg_19485.read());
}

void differentiate::thread_tmp849_cast_fu_13017_p1() {
    tmp849_cast_fu_13017_p1 = esl_sext<13,12>(tmp554_fu_13011_p2.read());
}

void differentiate::thread_tmp84_fu_4228_p2() {
    tmp84_fu_4228_p2 = (!tmp119_cast_fu_4225_p1.read().is_01() || !tmp118_cast_fu_4222_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp119_cast_fu_4225_p1.read()) + sc_bigint<14>(tmp118_cast_fu_4222_p1.read()));
}

void differentiate::thread_tmp850_cast_fu_13131_p1() {
    tmp850_cast_fu_13131_p1 = esl_sext<15,14>(tmp559_reg_19601.read());
}

void differentiate::thread_tmp851_cast_fu_13027_p1() {
    tmp851_cast_fu_13027_p1 = esl_sext<14,12>(tmp556_reg_19547.read());
}

void differentiate::thread_tmp852_cast_fu_13046_p1() {
    tmp852_cast_fu_13046_p1 = esl_sext<14,13>(tmp558_fu_13040_p2.read());
}

void differentiate::thread_tmp853_cast_fu_13036_p1() {
    tmp853_cast_fu_13036_p1 = esl_sext<13,12>(tmp557_fu_13030_p2.read());
}

void differentiate::thread_tmp854_cast_fu_13148_p1() {
    tmp854_cast_fu_13148_p1 = esl_sext<15,13>(tmp561_reg_19606.read());
}

void differentiate::thread_tmp855_cast_fu_13062_p1() {
    tmp855_cast_fu_13062_p1 = esl_sext<13,12>(tmp560_fu_13056_p2.read());
}

void differentiate::thread_tmp856_cast_fu_13066_p1() {
    tmp856_cast_fu_13066_p1 = esl_sext<13,12>(tmp556_reg_19547.read());
}

void differentiate::thread_tmp857_cast_fu_13151_p1() {
    tmp857_cast_fu_13151_p1 = esl_sext<15,14>(tmp564_reg_19611.read());
}

void differentiate::thread_tmp858_cast_fu_13075_p1() {
    tmp858_cast_fu_13075_p1 = esl_sext<14,12>(tmp553_reg_19485.read());
}

void differentiate::thread_tmp859_cast_fu_13094_p1() {
    tmp859_cast_fu_13094_p1 = esl_sext<14,13>(tmp563_fu_13088_p2.read());
}

void differentiate::thread_tmp860_cast_fu_13084_p1() {
    tmp860_cast_fu_13084_p1 = esl_sext<13,12>(tmp562_fu_13078_p2.read());
}

void differentiate::thread_tmp867_cast_fu_13384_p1() {
    tmp867_cast_fu_13384_p1 = esl_sext<15,13>(tmp567_reg_19690.read());
}

void differentiate::thread_tmp868_cast_fu_13264_p1() {
    tmp868_cast_fu_13264_p1 = esl_sext<13,12>(tmp565_reg_19579.read());
}

void differentiate::thread_tmp869_cast_fu_13273_p1() {
    tmp869_cast_fu_13273_p1 = esl_sext<13,12>(tmp566_fu_13267_p2.read());
}

void differentiate::thread_tmp86_fu_3580_p2() {
    tmp86_fu_3580_p2 = (!tmp_6_0_2_cast_fu_3559_p1.read().is_01() || !tmp_6_1_cast_fu_3562_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_6_0_2_cast_fu_3559_p1.read()) + sc_bigint<12>(tmp_6_1_cast_fu_3562_p1.read()));
}

void differentiate::thread_tmp870_cast_fu_13387_p1() {
    tmp870_cast_fu_13387_p1 = esl_sext<15,14>(tmp571_reg_19695.read());
}

void differentiate::thread_tmp871_cast_fu_13283_p1() {
    tmp871_cast_fu_13283_p1 = esl_sext<14,12>(tmp568_reg_19641.read());
}

void differentiate::thread_tmp872_cast_fu_13302_p1() {
    tmp872_cast_fu_13302_p1 = esl_sext<14,13>(tmp570_fu_13296_p2.read());
}

void differentiate::thread_tmp873_cast_fu_13292_p1() {
    tmp873_cast_fu_13292_p1 = esl_sext<13,12>(tmp569_fu_13286_p2.read());
}

void differentiate::thread_tmp874_cast_fu_13404_p1() {
    tmp874_cast_fu_13404_p1 = esl_sext<15,13>(tmp573_reg_19700.read());
}

void differentiate::thread_tmp875_cast_fu_13318_p1() {
    tmp875_cast_fu_13318_p1 = esl_sext<13,12>(tmp572_fu_13312_p2.read());
}

void differentiate::thread_tmp876_cast_fu_13322_p1() {
    tmp876_cast_fu_13322_p1 = esl_sext<13,12>(tmp568_reg_19641.read());
}

void differentiate::thread_tmp877_cast_fu_13407_p1() {
    tmp877_cast_fu_13407_p1 = esl_sext<15,14>(tmp576_reg_19705.read());
}

void differentiate::thread_tmp878_cast_fu_13331_p1() {
    tmp878_cast_fu_13331_p1 = esl_sext<14,12>(tmp565_reg_19579.read());
}

void differentiate::thread_tmp879_cast_fu_13350_p1() {
    tmp879_cast_fu_13350_p1 = esl_sext<14,13>(tmp575_fu_13344_p2.read());
}

void differentiate::thread_tmp87_cast_fu_4161_p1() {
    tmp87_cast_fu_4161_p1 = esl_sext<15,13>(tmp59_reg_16139.read());
}

void differentiate::thread_tmp87_fu_4328_p2() {
    tmp87_fu_4328_p2 = (!tmp129_cast_fu_4325_p1.read().is_01() || !tmp128_cast_fu_4322_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp129_cast_fu_4325_p1.read()) + sc_bigint<13>(tmp128_cast_fu_4322_p1.read()));
}

void differentiate::thread_tmp880_cast_fu_13340_p1() {
    tmp880_cast_fu_13340_p1 = esl_sext<13,12>(tmp574_fu_13334_p2.read());
}

void differentiate::thread_tmp887_cast_fu_13619_p1() {
    tmp887_cast_fu_13619_p1 = esl_sext<15,13>(tmp579_reg_19767.read());
}

void differentiate::thread_tmp888_cast_fu_13504_p1() {
    tmp888_cast_fu_13504_p1 = esl_sext<13,12>(tmp577_reg_19673.read());
}

void differentiate::thread_tmp889_cast_fu_13513_p1() {
    tmp889_cast_fu_13513_p1 = esl_sext<13,12>(tmp578_fu_13507_p2.read());
}

void differentiate::thread_tmp88_cast_fu_4012_p1() {
    tmp88_cast_fu_4012_p1 = esl_sext<13,12>(grp_fu_14053_p3.read());
}

void differentiate::thread_tmp890_cast_fu_13622_p1() {
    tmp890_cast_fu_13622_p1 = esl_sext<15,14>(tmp583_reg_19772.read());
}

void differentiate::thread_tmp891_cast_fu_13523_p1() {
    tmp891_cast_fu_13523_p1 = esl_sext<14,12>(tmp580_reg_19730.read());
}

void differentiate::thread_tmp892_cast_fu_13542_p1() {
    tmp892_cast_fu_13542_p1 = esl_sext<14,13>(tmp582_fu_13536_p2.read());
}

void differentiate::thread_tmp893_cast_fu_13532_p1() {
    tmp893_cast_fu_13532_p1 = esl_sext<13,12>(tmp581_fu_13526_p2.read());
}

void differentiate::thread_tmp894_cast_fu_13639_p1() {
    tmp894_cast_fu_13639_p1 = esl_sext<15,13>(tmp585_reg_19777.read());
}

void differentiate::thread_tmp895_cast_fu_13558_p1() {
    tmp895_cast_fu_13558_p1 = esl_sext<13,12>(tmp584_fu_13552_p2.read());
}

void differentiate::thread_tmp896_cast_fu_13562_p1() {
    tmp896_cast_fu_13562_p1 = esl_sext<13,12>(tmp580_reg_19730.read());
}

void differentiate::thread_tmp897_cast_fu_13642_p1() {
    tmp897_cast_fu_13642_p1 = esl_sext<15,14>(tmp588_reg_19782.read());
}

void differentiate::thread_tmp898_cast_fu_13571_p1() {
    tmp898_cast_fu_13571_p1 = esl_sext<14,12>(tmp577_reg_19673.read());
}

void differentiate::thread_tmp899_cast_fu_13590_p1() {
    tmp899_cast_fu_13590_p1 = esl_sext<14,13>(tmp587_fu_13584_p2.read());
}

void differentiate::thread_tmp89_cast_fu_4015_p1() {
    tmp89_cast_fu_4015_p1 = esl_sext<13,12>(tmp58_reg_15829.read());
}

void differentiate::thread_tmp89_fu_3589_p2() {
    tmp89_fu_3589_p2 = (!tmp_6_2_1_cast_fu_3574_p1.read().is_01() || !tmp_6_2_2_cast_fu_3577_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_6_2_1_cast_fu_3574_p1.read()) + sc_bigint<12>(tmp_6_2_2_cast_fu_3577_p1.read()));
}

void differentiate::thread_tmp8_cast_fu_13691_p1() {
    tmp8_cast_fu_13691_p1 = esl_sext<13,12>(grp_fu_14544_p3.read());
}

void differentiate::thread_tmp900_cast_fu_13580_p1() {
    tmp900_cast_fu_13580_p1 = esl_sext<13,12>(tmp586_fu_13574_p2.read());
}

void differentiate::thread_tmp907_cast_fu_13887_p1() {
    tmp907_cast_fu_13887_p1 = esl_sext<15,13>(tmp591_reg_19817.read());
}

void differentiate::thread_tmp908_cast_fu_13736_p1() {
    tmp908_cast_fu_13736_p1 = esl_sext<13,12>(tmp589_reg_19756.read());
}

void differentiate::thread_tmp909_cast_fu_13745_p1() {
    tmp909_cast_fu_13745_p1 = esl_sext<13,12>(tmp590_fu_13739_p2.read());
}

void differentiate::thread_tmp90_cast_fu_4164_p1() {
    tmp90_cast_fu_4164_p1 = esl_sext<15,14>(tmp63_reg_15834.read());
}

void differentiate::thread_tmp90_fu_3599_p2() {
    tmp90_fu_3599_p2 = (!tmp133_cast_fu_3595_p1.read().is_01() || !tmp_6_2_cast_fu_3568_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp133_cast_fu_3595_p1.read()) + sc_bigint<13>(tmp_6_2_cast_fu_3568_p1.read()));
}

void differentiate::thread_tmp910_cast_fu_13890_p1() {
    tmp910_cast_fu_13890_p1 = esl_sext<15,14>(tmp595_reg_19842.read());
}

void differentiate::thread_tmp911_cast_fu_13859_p1() {
    tmp911_cast_fu_13859_p1 = esl_sext<14,12>(grp_fu_14553_p3.read());
}

void differentiate::thread_tmp912_cast_fu_13862_p1() {
    tmp912_cast_fu_13862_p1 = esl_sext<14,13>(tmp594_reg_19822.read());
}

void differentiate::thread_tmp913_cast_fu_13761_p1() {
    tmp913_cast_fu_13761_p1 = esl_sext<13,12>(tmp593_fu_13755_p2.read());
}

void differentiate::thread_tmp914_cast_fu_13907_p1() {
    tmp914_cast_fu_13907_p1 = esl_sext<15,13>(tmp597_reg_19847.read());
}

void differentiate::thread_tmp915_cast_fu_13871_p1() {
    tmp915_cast_fu_13871_p1 = esl_sext<13,12>(tmp596_reg_19827.read());
}

void differentiate::thread_tmp916_cast_fu_13874_p1() {
    tmp916_cast_fu_13874_p1 = esl_sext<13,12>(grp_fu_14553_p3.read());
}

void differentiate::thread_tmp917_cast_fu_13910_p1() {
    tmp917_cast_fu_13910_p1 = esl_sext<15,14>(tmp600_reg_19832.read());
}

void differentiate::thread_tmp918_cast_fu_13777_p1() {
    tmp918_cast_fu_13777_p1 = esl_sext<14,12>(tmp589_reg_19756.read());
}

void differentiate::thread_tmp919_cast_fu_13796_p1() {
    tmp919_cast_fu_13796_p1 = esl_sext<14,13>(tmp599_fu_13790_p2.read());
}

void differentiate::thread_tmp91_cast_fu_3286_p1() {
    tmp91_cast_fu_3286_p1 = esl_sext<14,12>(tmp60_reg_15718.read());
}

void differentiate::thread_tmp91_fu_3609_p2() {
    tmp91_fu_3609_p2 = (!tmp132_cast_fu_3605_p1.read().is_01() || !tmp131_cast_fu_3586_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp132_cast_fu_3605_p1.read()) + sc_bigint<14>(tmp131_cast_fu_3586_p1.read()));
}

void differentiate::thread_tmp920_cast_fu_13786_p1() {
    tmp920_cast_fu_13786_p1 = esl_sext<13,12>(tmp598_fu_13780_p2.read());
}

void differentiate::thread_tmp92_cast_fu_3305_p1() {
    tmp92_cast_fu_3305_p1 = esl_sext<14,13>(tmp62_fu_3299_p2.read());
}

void differentiate::thread_tmp92_fu_3615_p2() {
    tmp92_fu_3615_p2 = (!tmp_127_cast_fu_3571_p1.read().is_01() || !tmp_6_2_1_cast_fu_3574_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_127_cast_fu_3571_p1.read()) + sc_bigint<12>(tmp_6_2_1_cast_fu_3574_p1.read()));
}

void differentiate::thread_tmp93_cast_fu_3295_p1() {
    tmp93_cast_fu_3295_p1 = esl_sext<13,12>(tmp61_fu_3289_p2.read());
}

void differentiate::thread_tmp94_cast_fu_4181_p1() {
    tmp94_cast_fu_4181_p1 = esl_sext<15,13>(tmp66_reg_15839.read());
}

void differentiate::thread_tmp94_fu_3628_p2() {
    tmp94_fu_3628_p2 = (!tmp136_cast_fu_3625_p1.read().is_01() || !tmp135_cast_fu_3621_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp136_cast_fu_3625_p1.read()) + sc_bigint<13>(tmp135_cast_fu_3621_p1.read()));
}

void differentiate::thread_tmp95_cast_fu_3321_p1() {
    tmp95_cast_fu_3321_p1 = esl_sext<13,12>(tmp64_fu_3315_p2.read());
}

void differentiate::thread_tmp96_cast_fu_3325_p1() {
    tmp96_cast_fu_3325_p1 = esl_sext<13,12>(tmp60_reg_15718.read());
}

void differentiate::thread_tmp96_fu_3634_p2() {
    tmp96_fu_3634_p2 = (!tmp_6_0_2_cast_fu_3559_p1.read().is_01() || !tmp_6_2_2_cast_fu_3577_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_6_0_2_cast_fu_3559_p1.read()) + sc_bigint<12>(tmp_6_2_2_cast_fu_3577_p1.read()));
}

void differentiate::thread_tmp97_cast_fu_4184_p1() {
    tmp97_cast_fu_4184_p1 = esl_sext<15,14>(tmp70_reg_16144.read());
}

void differentiate::thread_tmp97_fu_3644_p2() {
    tmp97_fu_3644_p2 = (!tmp140_cast_fu_3640_p1.read().is_01() || !tmp_120_cast_fu_3565_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(tmp140_cast_fu_3640_p1.read()) + sc_bigint<13>(tmp_120_cast_fu_3565_p1.read()));
}

void differentiate::thread_tmp98_cast_fu_4024_p1() {
    tmp98_cast_fu_4024_p1 = esl_sext<14,12>(grp_fu_14053_p3.read());
}

void differentiate::thread_tmp98_fu_4340_p2() {
    tmp98_fu_4340_p2 = (!tmp139_cast_fu_4337_p1.read().is_01() || !tmp138_cast_fu_4334_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(tmp139_cast_fu_4337_p1.read()) + sc_bigint<14>(tmp138_cast_fu_4334_p1.read()));
}

void differentiate::thread_tmp99_cast_fu_4027_p1() {
    tmp99_cast_fu_4027_p1 = esl_sext<14,13>(tmp69_reg_15844.read());
}

void differentiate::thread_tmp9_cast_fu_13694_p1() {
    tmp9_cast_fu_13694_p1 = esl_sext<13,12>(tmp9_reg_15469.read());
}

void differentiate::thread_tmp9_fu_2588_p2() {
    tmp9_fu_2588_p2 = (!tmp_0_0_2_cast_fu_2560_p1.read().is_01() || !tmp_0_1_cast_fu_2563_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp_0_0_2_cast_fu_2560_p1.read()) + sc_bigint<12>(tmp_0_1_cast_fu_2563_p1.read()));
}

void differentiate::thread_tmp_0_0_2_cast_fu_2560_p1() {
    tmp_0_0_2_cast_fu_2560_p1 = esl_sext<12,11>(r_V_0_0_2_reg_15291.read());
}

void differentiate::thread_tmp_0_1_cast_fu_2563_p1() {
    tmp_0_1_cast_fu_2563_p1 = esl_sext<12,11>(r_V_0_1_reg_14733.read());
}

void differentiate::thread_tmp_0_2_1_cast_fu_2582_p1() {
    tmp_0_2_1_cast_fu_2582_p1 = esl_sext<12,11>(r_V_0_2_1_reg_15364.read());
}

void differentiate::thread_tmp_0_2_2_cast_fu_2585_p1() {
    tmp_0_2_2_cast_fu_2585_p1 = esl_sext<12,11>(r_V_0_2_2_reg_15421.read());
}

void differentiate::thread_tmp_0_2_cast_fu_2576_p1() {
    tmp_0_2_cast_fu_2576_p1 = esl_sext<13,11>(r_V_0_2_reg_15332.read());
}

void differentiate::thread_tmp_100_fu_10569_p3() {
    tmp_100_fu_10569_p3 = (!tmp_440_fu_10543_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_440_fu_10543_p3.read()[0].to_bool())? tmp_99_fu_10563_p2.read(): tmp_98_fu_10557_p2.read());
}

void differentiate::thread_tmp_101_cast_fu_3415_p1() {
    tmp_101_cast_fu_3415_p1 = esl_sext<13,11>(r_V_5_1_reg_14849.read());
}

void differentiate::thread_tmp_101_fu_10821_p2() {
    tmp_101_fu_10821_p2 = (!tmp677_cast_fu_10818_p1.read().is_01() || !tmp674_cast_fu_10815_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp677_cast_fu_10818_p1.read()) + sc_bigint<15>(tmp674_cast_fu_10815_p1.read()));
}

void differentiate::thread_tmp_102_fu_10827_p2() {
    tmp_102_fu_10827_p2 = (!ap_const_lv15_0.is_01() || !tmp_101_fu_10821_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_101_fu_10821_p2.read()));
}

void differentiate::thread_tmp_103_fu_10833_p3() {
    tmp_103_fu_10833_p3 = (!tmp_452_fu_10807_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_452_fu_10807_p3.read()[0].to_bool())? tmp_102_fu_10827_p2.read(): tmp_101_fu_10821_p2.read());
}

void differentiate::thread_tmp_104_fu_11089_p2() {
    tmp_104_fu_11089_p2 = (!tmp697_cast_fu_11086_p1.read().is_01() || !tmp694_cast_fu_11083_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp697_cast_fu_11086_p1.read()) + sc_bigint<15>(tmp694_cast_fu_11083_p1.read()));
}

void differentiate::thread_tmp_105_fu_11095_p2() {
    tmp_105_fu_11095_p2 = (!ap_const_lv15_0.is_01() || !tmp_104_fu_11089_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_104_fu_11089_p2.read()));
}

void differentiate::thread_tmp_106_fu_11101_p3() {
    tmp_106_fu_11101_p3 = (!tmp_464_fu_11075_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_464_fu_11075_p3.read()[0].to_bool())? tmp_105_fu_11095_p2.read(): tmp_104_fu_11089_p2.read());
}

void differentiate::thread_tmp_107_fu_11354_p2() {
    tmp_107_fu_11354_p2 = (!tmp717_cast_fu_11351_p1.read().is_01() || !tmp714_cast_fu_11348_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp717_cast_fu_11351_p1.read()) + sc_bigint<15>(tmp714_cast_fu_11348_p1.read()));
}

void differentiate::thread_tmp_108_cast_fu_3421_p1() {
    tmp_108_cast_fu_3421_p1 = esl_sext<12,11>(r_V_5_2_reg_15739.read());
}

void differentiate::thread_tmp_108_fu_11360_p2() {
    tmp_108_fu_11360_p2 = (!ap_const_lv15_0.is_01() || !tmp_107_fu_11354_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_107_fu_11354_p2.read()));
}

void differentiate::thread_tmp_109_fu_11366_p3() {
    tmp_109_fu_11366_p3 = (!tmp_476_fu_11340_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_476_fu_11340_p3.read()[0].to_bool())? tmp_108_fu_11360_p2.read(): tmp_107_fu_11354_p2.read());
}

void differentiate::thread_tmp_10_0_2_cast_fu_4656_p1() {
    tmp_10_0_2_cast_fu_4656_p1 = esl_sext<12,11>(r_V_10_0_2_reg_16265.read());
}

void differentiate::thread_tmp_10_1_cast_fu_4659_p1() {
    tmp_10_1_cast_fu_4659_p1 = esl_sext<12,11>(r_V_10_1_reg_14974.read());
}

void differentiate::thread_tmp_10_2_1_cast_fu_4671_p1() {
    tmp_10_2_1_cast_fu_4671_p1 = esl_sext<12,11>(r_V_10_2_1_reg_16209.read());
}

void differentiate::thread_tmp_10_2_2_cast_fu_4674_p1() {
    tmp_10_2_2_cast_fu_4674_p1 = esl_sext<12,11>(r_V_10_2_2_reg_16295.read());
}

void differentiate::thread_tmp_10_2_cast_fu_4665_p1() {
    tmp_10_2_cast_fu_4665_p1 = esl_sext<13,11>(r_V_10_2_reg_16123.read());
}

void differentiate::thread_tmp_10_fu_3889_p3() {
    tmp_10_fu_3889_p3 = (!tmp_338_fu_3863_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_338_fu_3863_p3.read()[0].to_bool())? tmp_9_fu_3883_p2.read(): tmp_8_fu_3877_p2.read());
}

void differentiate::thread_tmp_110_fu_11618_p2() {
    tmp_110_fu_11618_p2 = (!tmp737_cast_fu_11615_p1.read().is_01() || !tmp734_cast_fu_11612_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp737_cast_fu_11615_p1.read()) + sc_bigint<15>(tmp734_cast_fu_11612_p1.read()));
}

void differentiate::thread_tmp_111_fu_11624_p2() {
    tmp_111_fu_11624_p2 = (!ap_const_lv15_0.is_01() || !tmp_110_fu_11618_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_110_fu_11618_p2.read()));
}

void differentiate::thread_tmp_112_fu_11630_p3() {
    tmp_112_fu_11630_p3 = (!tmp_488_fu_11604_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_488_fu_11604_p3.read()[0].to_bool())? tmp_111_fu_11624_p2.read(): tmp_110_fu_11618_p2.read());
}

void differentiate::thread_tmp_113_fu_11874_p2() {
    tmp_113_fu_11874_p2 = (!tmp757_cast_fu_11871_p1.read().is_01() || !tmp754_cast_fu_11868_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp757_cast_fu_11871_p1.read()) + sc_bigint<15>(tmp754_cast_fu_11868_p1.read()));
}

void differentiate::thread_tmp_114_fu_11880_p2() {
    tmp_114_fu_11880_p2 = (!ap_const_lv15_0.is_01() || !tmp_113_fu_11874_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_113_fu_11874_p2.read()));
}

void differentiate::thread_tmp_115_fu_11886_p3() {
    tmp_115_fu_11886_p3 = (!tmp_500_fu_11860_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_500_fu_11860_p3.read()[0].to_bool())? tmp_114_fu_11880_p2.read(): tmp_113_fu_11874_p2.read());
}

void differentiate::thread_tmp_116_fu_12130_p2() {
    tmp_116_fu_12130_p2 = (!tmp777_cast_fu_12127_p1.read().is_01() || !tmp774_cast_fu_12124_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp777_cast_fu_12127_p1.read()) + sc_bigint<15>(tmp774_cast_fu_12124_p1.read()));
}

void differentiate::thread_tmp_117_fu_12136_p2() {
    tmp_117_fu_12136_p2 = (!ap_const_lv15_0.is_01() || !tmp_116_fu_12130_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_116_fu_12130_p2.read()));
}

void differentiate::thread_tmp_118_fu_12142_p3() {
    tmp_118_fu_12142_p3 = (!tmp_512_fu_12116_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_512_fu_12116_p3.read()[0].to_bool())? tmp_117_fu_12136_p2.read(): tmp_116_fu_12130_p2.read());
}

void differentiate::thread_tmp_119_fu_12386_p2() {
    tmp_119_fu_12386_p2 = (!tmp797_cast_fu_12383_p1.read().is_01() || !tmp794_cast_fu_12380_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp797_cast_fu_12383_p1.read()) + sc_bigint<15>(tmp794_cast_fu_12380_p1.read()));
}

void differentiate::thread_tmp_11_0_2_cast_fu_4966_p1() {
    tmp_11_0_2_cast_fu_4966_p1 = esl_sext<12,11>(r_V_11_0_2_reg_16356.read());
}

void differentiate::thread_tmp_11_1_cast_fu_4969_p1() {
    tmp_11_1_cast_fu_4969_p1 = esl_sext<12,11>(r_V_11_1_reg_15000.read());
}

void differentiate::thread_tmp_11_2_1_cast_fu_4981_p1() {
    tmp_11_2_1_cast_fu_4981_p1 = esl_sext<12,11>(r_V_11_2_1_reg_16300.read());
}

void differentiate::thread_tmp_11_2_2_cast_fu_4984_p1() {
    tmp_11_2_2_cast_fu_4984_p1 = esl_sext<12,11>(r_V_11_2_2_reg_16386.read());
}

void differentiate::thread_tmp_11_2_cast_fu_4975_p1() {
    tmp_11_2_cast_fu_4975_p1 = esl_sext<13,11>(r_V_11_2_reg_16214.read());
}

void differentiate::thread_tmp_11_fu_3989_p2() {
    tmp_11_fu_3989_p2 = (!tmp77_cast_fu_3986_p1.read().is_01() || !tmp74_cast_fu_3983_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp77_cast_fu_3986_p1.read()) + sc_bigint<15>(tmp74_cast_fu_3983_p1.read()));
}

void differentiate::thread_tmp_120_cast_fu_3565_p1() {
    tmp_120_cast_fu_3565_p1 = esl_sext<13,11>(r_V_6_1_reg_14870.read());
}

void differentiate::thread_tmp_120_fu_12392_p2() {
    tmp_120_fu_12392_p2 = (!ap_const_lv15_0.is_01() || !tmp_119_fu_12386_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_119_fu_12386_p2.read()));
}

void differentiate::thread_tmp_121_fu_12398_p3() {
    tmp_121_fu_12398_p3 = (!tmp_524_fu_12372_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_524_fu_12372_p3.read()[0].to_bool())? tmp_120_fu_12392_p2.read(): tmp_119_fu_12386_p2.read());
}

void differentiate::thread_tmp_122_fu_12642_p2() {
    tmp_122_fu_12642_p2 = (!tmp817_cast_fu_12639_p1.read().is_01() || !tmp814_cast_fu_12636_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp817_cast_fu_12639_p1.read()) + sc_bigint<15>(tmp814_cast_fu_12636_p1.read()));
}

void differentiate::thread_tmp_123_fu_12648_p2() {
    tmp_123_fu_12648_p2 = (!ap_const_lv15_0.is_01() || !tmp_122_fu_12642_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_122_fu_12642_p2.read()));
}

void differentiate::thread_tmp_124_fu_12654_p3() {
    tmp_124_fu_12654_p3 = (!tmp_536_fu_12628_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_536_fu_12628_p3.read()[0].to_bool())? tmp_123_fu_12648_p2.read(): tmp_122_fu_12642_p2.read());
}

void differentiate::thread_tmp_125_fu_12898_p2() {
    tmp_125_fu_12898_p2 = (!tmp837_cast_fu_12895_p1.read().is_01() || !tmp834_cast_fu_12892_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp837_cast_fu_12895_p1.read()) + sc_bigint<15>(tmp834_cast_fu_12892_p1.read()));
}

void differentiate::thread_tmp_126_fu_12904_p2() {
    tmp_126_fu_12904_p2 = (!ap_const_lv15_0.is_01() || !tmp_125_fu_12898_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_125_fu_12898_p2.read()));
}

void differentiate::thread_tmp_127_cast_fu_3571_p1() {
    tmp_127_cast_fu_3571_p1 = esl_sext<12,11>(r_V_6_2_reg_15812.read());
}

void differentiate::thread_tmp_127_fu_12910_p3() {
    tmp_127_fu_12910_p3 = (!tmp_548_fu_12884_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_548_fu_12884_p3.read()[0].to_bool())? tmp_126_fu_12904_p2.read(): tmp_125_fu_12898_p2.read());
}

void differentiate::thread_tmp_128_fu_13154_p2() {
    tmp_128_fu_13154_p2 = (!tmp857_cast_fu_13151_p1.read().is_01() || !tmp854_cast_fu_13148_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp857_cast_fu_13151_p1.read()) + sc_bigint<15>(tmp854_cast_fu_13148_p1.read()));
}

void differentiate::thread_tmp_129_fu_13160_p2() {
    tmp_129_fu_13160_p2 = (!ap_const_lv15_0.is_01() || !tmp_128_fu_13154_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_128_fu_13154_p2.read()));
}

void differentiate::thread_tmp_12_0_2_cast_fu_5252_p1() {
    tmp_12_0_2_cast_fu_5252_p1 = esl_sext<12,11>(r_V_12_0_2_reg_16447.read());
}

void differentiate::thread_tmp_12_1_cast_fu_5255_p1() {
    tmp_12_1_cast_fu_5255_p1 = esl_sext<12,11>(r_V_12_1_reg_15026.read());
}

void differentiate::thread_tmp_12_2_1_cast_fu_5267_p1() {
    tmp_12_2_1_cast_fu_5267_p1 = esl_sext<12,11>(r_V_12_2_1_reg_16391.read());
}

void differentiate::thread_tmp_12_2_2_cast_fu_5270_p1() {
    tmp_12_2_2_cast_fu_5270_p1 = esl_sext<12,11>(r_V_12_2_2_reg_16477.read());
}

void differentiate::thread_tmp_12_2_cast_fu_5261_p1() {
    tmp_12_2_cast_fu_5261_p1 = esl_sext<13,11>(r_V_12_2_reg_16305.read());
}

void differentiate::thread_tmp_12_cast_fu_2579_p1() {
    tmp_12_cast_fu_2579_p1 = esl_sext<12,11>(r_V_0_2_reg_15332.read());
}

void differentiate::thread_tmp_12_fu_3995_p2() {
    tmp_12_fu_3995_p2 = (!ap_const_lv15_0.is_01() || !tmp_11_fu_3989_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_11_fu_3989_p2.read()));
}

void differentiate::thread_tmp_130_fu_13166_p3() {
    tmp_130_fu_13166_p3 = (!tmp_560_fu_13140_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_560_fu_13140_p3.read()[0].to_bool())? tmp_129_fu_13160_p2.read(): tmp_128_fu_13154_p2.read());
}

void differentiate::thread_tmp_131_fu_13410_p2() {
    tmp_131_fu_13410_p2 = (!tmp877_cast_fu_13407_p1.read().is_01() || !tmp874_cast_fu_13404_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp877_cast_fu_13407_p1.read()) + sc_bigint<15>(tmp874_cast_fu_13404_p1.read()));
}

void differentiate::thread_tmp_132_fu_13416_p2() {
    tmp_132_fu_13416_p2 = (!ap_const_lv15_0.is_01() || !tmp_131_fu_13410_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_131_fu_13410_p2.read()));
}

void differentiate::thread_tmp_133_fu_13422_p3() {
    tmp_133_fu_13422_p3 = (!tmp_572_fu_13396_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_572_fu_13396_p3.read()[0].to_bool())? tmp_132_fu_13416_p2.read(): tmp_131_fu_13410_p2.read());
}

void differentiate::thread_tmp_134_fu_13645_p2() {
    tmp_134_fu_13645_p2 = (!tmp897_cast_fu_13642_p1.read().is_01() || !tmp894_cast_fu_13639_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp897_cast_fu_13642_p1.read()) + sc_bigint<15>(tmp894_cast_fu_13639_p1.read()));
}

void differentiate::thread_tmp_135_fu_13651_p2() {
    tmp_135_fu_13651_p2 = (!ap_const_lv15_0.is_01() || !tmp_134_fu_13645_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_134_fu_13645_p2.read()));
}

void differentiate::thread_tmp_136_fu_13657_p3() {
    tmp_136_fu_13657_p3 = (!tmp_584_fu_13631_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_584_fu_13631_p3.read()[0].to_bool())? tmp_135_fu_13651_p2.read(): tmp_134_fu_13645_p2.read());
}

void differentiate::thread_tmp_137_fu_13913_p2() {
    tmp_137_fu_13913_p2 = (!tmp917_cast_fu_13910_p1.read().is_01() || !tmp914_cast_fu_13907_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp917_cast_fu_13910_p1.read()) + sc_bigint<15>(tmp914_cast_fu_13907_p1.read()));
}

void differentiate::thread_tmp_138_fu_13919_p2() {
    tmp_138_fu_13919_p2 = (!ap_const_lv15_0.is_01() || !tmp_137_fu_13913_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_137_fu_13913_p2.read()));
}

void differentiate::thread_tmp_139_cast_fu_3742_p1() {
    tmp_139_cast_fu_3742_p1 = esl_sext<13,11>(r_V_7_1_reg_14896.read());
}

void differentiate::thread_tmp_139_fu_13925_p3() {
    tmp_139_fu_13925_p3 = (!tmp_596_fu_13899_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_596_fu_13899_p3.read()[0].to_bool())? tmp_138_fu_13919_p2.read(): tmp_137_fu_13913_p2.read());
}

void differentiate::thread_tmp_13_0_2_cast_fu_5491_p1() {
    tmp_13_0_2_cast_fu_5491_p1 = esl_sext<12,11>(r_V_13_0_2_reg_16528.read());
}

void differentiate::thread_tmp_13_1_cast_fu_5494_p1() {
    tmp_13_1_cast_fu_5494_p1 = esl_sext<12,11>(r_V_13_1_reg_15059.read());
}

void differentiate::thread_tmp_13_2_1_cast_fu_5506_p1() {
    tmp_13_2_1_cast_fu_5506_p1 = esl_sext<12,11>(r_V_13_2_1_reg_16482.read());
}

void differentiate::thread_tmp_13_2_2_cast_fu_5509_p1() {
    tmp_13_2_2_cast_fu_5509_p1 = esl_sext<12,11>(r_V_13_2_2_reg_16548.read());
}

void differentiate::thread_tmp_13_2_cast_fu_5500_p1() {
    tmp_13_2_cast_fu_5500_p1 = esl_sext<13,11>(r_V_13_2_reg_16396.read());
}

void differentiate::thread_tmp_13_fu_4001_p3() {
    tmp_13_fu_4001_p3 = (!tmp_339_fu_3975_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_339_fu_3975_p3.read()[0].to_bool())? tmp_12_fu_3995_p2.read(): tmp_11_fu_3989_p2.read());
}

void differentiate::thread_tmp_140_fu_1918_p3() {
    tmp_140_fu_1918_p3 = esl_concat<6,4>(i_phi_fu_1868_p4.read(), ap_const_lv4_0);
}

void differentiate::thread_tmp_141_fu_1930_p2() {
    tmp_141_fu_1930_p2 = (!p_shl4_cast_fu_1914_p1.read().is_01() || !p_shl5_cast_fu_1926_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl4_cast_fu_1914_p1.read()) - sc_biguint<13>(p_shl5_cast_fu_1926_p1.read()));
}

void differentiate::thread_tmp_142_cast_fu_1936_p1() {
    tmp_142_cast_fu_1936_p1 = esl_sext<32,13>(tmp_141_fu_1930_p2.read());
}

void differentiate::thread_tmp_142_fu_1941_p2() {
    tmp_142_fu_1941_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_1);
}

void differentiate::thread_tmp_143_cast_fu_1946_p1() {
    tmp_143_cast_fu_1946_p1 = esl_zext<32,13>(tmp_142_fu_1941_p2.read());
}

void differentiate::thread_tmp_143_fu_1951_p2() {
    tmp_143_fu_1951_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_2);
}

void differentiate::thread_tmp_144_cast_fu_1956_p1() {
    tmp_144_cast_fu_1956_p1 = esl_sext<32,13>(tmp_143_fu_1951_p2.read());
}

void differentiate::thread_tmp_144_fu_1961_p2() {
    tmp_144_fu_1961_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_3);
}

void differentiate::thread_tmp_145_cast_fu_1966_p1() {
    tmp_145_cast_fu_1966_p1 = esl_sext<32,13>(tmp_144_fu_1961_p2.read());
}

void differentiate::thread_tmp_145_fu_1971_p2() {
    tmp_145_fu_1971_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_4);
}

void differentiate::thread_tmp_146_cast1_fu_1976_p1() {
    tmp_146_cast1_fu_1976_p1 = esl_sext<32,13>(tmp_145_fu_1971_p2.read());
}

void differentiate::thread_tmp_146_cast_fu_3748_p1() {
    tmp_146_cast_fu_3748_p1 = esl_sext<12,11>(r_V_7_2_reg_15885.read());
}

void differentiate::thread_tmp_146_fu_2013_p2() {
    tmp_146_fu_2013_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_5);
}

void differentiate::thread_tmp_147_cast_fu_2018_p1() {
    tmp_147_cast_fu_2018_p1 = esl_sext<32,13>(tmp_146_fu_2013_p2.read());
}

void differentiate::thread_tmp_147_fu_2047_p2() {
    tmp_147_fu_2047_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_6);
}

void differentiate::thread_tmp_148_cast_fu_2052_p1() {
    tmp_148_cast_fu_2052_p1 = esl_sext<32,13>(tmp_147_fu_2047_p2.read());
}

void differentiate::thread_tmp_148_fu_2075_p2() {
    tmp_148_fu_2075_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_7);
}

void differentiate::thread_tmp_149_cast_fu_2080_p1() {
    tmp_149_cast_fu_2080_p1 = esl_sext<32,13>(tmp_148_fu_2075_p2.read());
}

void differentiate::thread_tmp_149_fu_2099_p2() {
    tmp_149_fu_2099_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_8);
}

void differentiate::thread_tmp_14_0_2_cast_fu_5750_p1() {
    tmp_14_0_2_cast_fu_5750_p1 = esl_sext<12,11>(r_V_14_0_2_reg_16600.read());
}

void differentiate::thread_tmp_14_1_cast_fu_5753_p1() {
    tmp_14_1_cast_fu_5753_p1 = esl_sext<12,11>(r_V_14_1_reg_15136.read());
}

void differentiate::thread_tmp_14_2_1_cast_fu_5765_p1() {
    tmp_14_2_1_cast_fu_5765_p1 = esl_sext<12,11>(r_V_14_2_1_reg_16559.read());
}

void differentiate::thread_tmp_14_2_2_cast_fu_5768_p1() {
    tmp_14_2_2_cast_fu_5768_p1 = esl_sext<12,11>(r_V_14_2_2_reg_16648.read());
}

void differentiate::thread_tmp_14_2_cast_fu_5759_p1() {
    tmp_14_2_cast_fu_5759_p1 = esl_sext<13,11>(r_V_14_2_reg_16487.read());
}

void differentiate::thread_tmp_14_fu_4187_p2() {
    tmp_14_fu_4187_p2 = (!tmp97_cast_fu_4184_p1.read().is_01() || !tmp94_cast_fu_4181_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp97_cast_fu_4184_p1.read()) + sc_bigint<15>(tmp94_cast_fu_4181_p1.read()));
}

void differentiate::thread_tmp_150_cast_fu_2104_p1() {
    tmp_150_cast_fu_2104_p1 = esl_sext<32,13>(tmp_149_fu_2099_p2.read());
}

void differentiate::thread_tmp_150_fu_2123_p2() {
    tmp_150_fu_2123_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_9);
}

void differentiate::thread_tmp_151_cast_fu_2128_p1() {
    tmp_151_cast_fu_2128_p1 = esl_sext<32,13>(tmp_150_fu_2123_p2.read());
}

void differentiate::thread_tmp_151_fu_2147_p2() {
    tmp_151_fu_2147_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_A);
}

void differentiate::thread_tmp_152_cast_fu_2152_p1() {
    tmp_152_cast_fu_2152_p1 = esl_sext<32,13>(tmp_151_fu_2147_p2.read());
}

void differentiate::thread_tmp_152_fu_2171_p2() {
    tmp_152_fu_2171_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_B);
}

void differentiate::thread_tmp_153_cast_fu_2176_p1() {
    tmp_153_cast_fu_2176_p1 = esl_sext<32,13>(tmp_152_fu_2171_p2.read());
}

void differentiate::thread_tmp_153_fu_2195_p2() {
    tmp_153_fu_2195_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_C);
}

void differentiate::thread_tmp_154_cast_fu_2200_p1() {
    tmp_154_cast_fu_2200_p1 = esl_sext<32,13>(tmp_153_fu_2195_p2.read());
}

void differentiate::thread_tmp_154_fu_2219_p2() {
    tmp_154_fu_2219_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_D);
}

void differentiate::thread_tmp_155_cast_fu_2224_p1() {
    tmp_155_cast_fu_2224_p1 = esl_sext<32,13>(tmp_154_fu_2219_p2.read());
}

void differentiate::thread_tmp_155_fu_2243_p2() {
    tmp_155_fu_2243_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_E);
}

void differentiate::thread_tmp_156_cast_fu_2248_p1() {
    tmp_156_cast_fu_2248_p1 = esl_sext<32,13>(tmp_155_fu_2243_p2.read());
}

void differentiate::thread_tmp_156_fu_2267_p2() {
    tmp_156_fu_2267_p2 = (tmp_141_reg_14611.read() | ap_const_lv13_F);
}

void differentiate::thread_tmp_157_cast_fu_2272_p1() {
    tmp_157_cast_fu_2272_p1 = esl_sext<32,13>(tmp_156_fu_2267_p2.read());
}

void differentiate::thread_tmp_157_fu_5383_p2() {
    tmp_157_fu_5383_p2 = (!ap_const_lv13_10.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_10) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_158_cast1_fu_5388_p1() {
    tmp_158_cast1_fu_5388_p1 = esl_sext<32,13>(tmp_157_fu_5383_p2.read());
}

void differentiate::thread_tmp_158_cast_fu_4042_p1() {
    tmp_158_cast_fu_4042_p1 = esl_sext<13,11>(r_V_8_1_reg_14922.read());
}

void differentiate::thread_tmp_158_fu_5698_p2() {
    tmp_158_fu_5698_p2 = (!ap_const_lv13_11.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_11) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_159_cast_fu_5703_p1() {
    tmp_159_cast_fu_5703_p1 = esl_sext<32,13>(tmp_158_fu_5698_p2.read());
}

void differentiate::thread_tmp_159_fu_5954_p2() {
    tmp_159_fu_5954_p2 = (!ap_const_lv13_12.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_12) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_15_0_2_cast_fu_6006_p1() {
    tmp_15_0_2_cast_fu_6006_p1 = esl_sext<12,11>(r_V_15_0_2_reg_16700.read());
}

void differentiate::thread_tmp_15_1_cast_fu_6009_p1() {
    tmp_15_1_cast_fu_6009_p1 = esl_sext<12,11>(r_V_15_1_reg_15169.read());
}

void differentiate::thread_tmp_15_2_1_cast_fu_6021_p1() {
    tmp_15_2_1_cast_fu_6021_p1 = esl_sext<12,11>(r_V_15_2_1_reg_16653.read());
}

void differentiate::thread_tmp_15_2_2_cast_fu_6024_p1() {
    tmp_15_2_2_cast_fu_6024_p1 = esl_sext<12,11>(r_V_15_2_2_reg_16742.read());
}

void differentiate::thread_tmp_15_2_cast_fu_6015_p1() {
    tmp_15_2_cast_fu_6015_p1 = esl_sext<13,11>(r_V_15_2_reg_16564.read());
}

void differentiate::thread_tmp_15_fu_4193_p2() {
    tmp_15_fu_4193_p2 = (!ap_const_lv15_0.is_01() || !tmp_14_fu_4187_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_14_fu_4187_p2.read()));
}

void differentiate::thread_tmp_160_cast_fu_5959_p1() {
    tmp_160_cast_fu_5959_p1 = esl_sext<32,13>(tmp_159_fu_5954_p2.read());
}

void differentiate::thread_tmp_160_fu_6214_p2() {
    tmp_160_fu_6214_p2 = (!ap_const_lv13_13.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_13) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_161_cast_fu_6219_p1() {
    tmp_161_cast_fu_6219_p1 = esl_sext<32,13>(tmp_160_fu_6214_p2.read());
}

void differentiate::thread_tmp_161_fu_6486_p2() {
    tmp_161_fu_6486_p2 = (!ap_const_lv13_14.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_14) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_162_cast_fu_6491_p1() {
    tmp_162_cast_fu_6491_p1 = esl_sext<32,13>(tmp_161_fu_6486_p2.read());
}

void differentiate::thread_tmp_162_fu_6750_p2() {
    tmp_162_fu_6750_p2 = (!ap_const_lv13_15.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_15) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_163_cast_fu_6755_p1() {
    tmp_163_cast_fu_6755_p1 = esl_sext<32,13>(tmp_162_fu_6750_p2.read());
}

void differentiate::thread_tmp_163_fu_7010_p2() {
    tmp_163_fu_7010_p2 = (!ap_const_lv13_16.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_16) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_164_cast_fu_7015_p1() {
    tmp_164_cast_fu_7015_p1 = esl_sext<32,13>(tmp_163_fu_7010_p2.read());
}

void differentiate::thread_tmp_164_fu_7266_p2() {
    tmp_164_fu_7266_p2 = (!ap_const_lv13_17.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_17) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_165_cast1_fu_7271_p1() {
    tmp_165_cast1_fu_7271_p1 = esl_sext<32,13>(tmp_164_fu_7266_p2.read());
}

void differentiate::thread_tmp_165_cast_fu_4048_p1() {
    tmp_165_cast_fu_4048_p1 = esl_sext<12,11>(r_V_8_2_reg_15958.read());
}

void differentiate::thread_tmp_165_fu_7522_p2() {
    tmp_165_fu_7522_p2 = (!ap_const_lv13_18.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_18) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_166_cast_fu_7527_p1() {
    tmp_166_cast_fu_7527_p1 = esl_sext<32,13>(tmp_165_fu_7522_p2.read());
}

void differentiate::thread_tmp_166_fu_7778_p2() {
    tmp_166_fu_7778_p2 = (!ap_const_lv13_19.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_19) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_167_cast_fu_7783_p1() {
    tmp_167_cast_fu_7783_p1 = esl_sext<32,13>(tmp_166_fu_7778_p2.read());
}

void differentiate::thread_tmp_167_fu_8034_p2() {
    tmp_167_fu_8034_p2 = (!ap_const_lv13_1A.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1A) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_168_cast_fu_8039_p1() {
    tmp_168_cast_fu_8039_p1 = esl_sext<32,13>(tmp_167_fu_8034_p2.read());
}

void differentiate::thread_tmp_168_fu_8290_p2() {
    tmp_168_fu_8290_p2 = (!ap_const_lv13_1B.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1B) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_169_cast_fu_8295_p1() {
    tmp_169_cast_fu_8295_p1 = esl_sext<32,13>(tmp_168_fu_8290_p2.read());
}

void differentiate::thread_tmp_169_fu_8546_p2() {
    tmp_169_fu_8546_p2 = (!ap_const_lv13_1C.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1C) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_16_0_2_cast_fu_6274_p1() {
    tmp_16_0_2_cast_fu_6274_p1 = esl_sext<12,11>(r_V_16_0_2_reg_16794.read());
}

void differentiate::thread_tmp_16_1_cast_fu_6277_p1() {
    tmp_16_1_cast_fu_6277_p1 = esl_sext<12,11>(r_V_16_1_reg_16637.read());
}

void differentiate::thread_tmp_16_2_1_cast_fu_6289_p1() {
    tmp_16_2_1_cast_fu_6289_p1 = esl_sext<12,11>(r_V_16_2_1_reg_16747.read());
}

void differentiate::thread_tmp_16_2_2_cast_fu_6292_p1() {
    tmp_16_2_2_cast_fu_6292_p1 = esl_sext<12,11>(r_V_16_2_2_reg_16857.read());
}

void differentiate::thread_tmp_16_2_cast_fu_6283_p1() {
    tmp_16_2_cast_fu_6283_p1 = esl_sext<13,11>(r_V_16_2_reg_16664.read());
}

void differentiate::thread_tmp_16_fu_4199_p3() {
    tmp_16_fu_4199_p3 = (!tmp_340_fu_4173_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_340_fu_4173_p3.read()[0].to_bool())? tmp_15_fu_4193_p2.read(): tmp_14_fu_4187_p2.read());
}

void differentiate::thread_tmp_170_cast_fu_8551_p1() {
    tmp_170_cast_fu_8551_p1 = esl_sext<32,13>(tmp_169_fu_8546_p2.read());
}

void differentiate::thread_tmp_170_fu_8802_p2() {
    tmp_170_fu_8802_p2 = (!ap_const_lv13_1D.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1D) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_171_cast_fu_8807_p1() {
    tmp_171_cast_fu_8807_p1 = esl_sext<32,13>(tmp_170_fu_8802_p2.read());
}

void differentiate::thread_tmp_171_fu_9058_p2() {
    tmp_171_fu_9058_p2 = (!ap_const_lv13_1E.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1E) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_172_cast_fu_9063_p1() {
    tmp_172_cast_fu_9063_p1 = esl_sext<32,13>(tmp_171_fu_9058_p2.read());
}

void differentiate::thread_tmp_172_fu_9314_p2() {
    tmp_172_fu_9314_p2 = (!ap_const_lv13_1F.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1F) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_173_cast_fu_9319_p1() {
    tmp_173_cast_fu_9319_p1 = esl_sext<32,13>(tmp_172_fu_9314_p2.read());
}

void differentiate::thread_tmp_173_fu_9570_p2() {
    tmp_173_fu_9570_p2 = (!ap_const_lv13_20.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_20) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_174_cast_fu_9575_p1() {
    tmp_174_cast_fu_9575_p1 = esl_sext<32,13>(tmp_173_fu_9570_p2.read());
}

void differentiate::thread_tmp_174_fu_9826_p2() {
    tmp_174_fu_9826_p2 = (!ap_const_lv13_21.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_21) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_175_cast_fu_9831_p1() {
    tmp_175_cast_fu_9831_p1 = esl_sext<32,13>(tmp_174_fu_9826_p2.read());
}

void differentiate::thread_tmp_175_fu_10082_p2() {
    tmp_175_fu_10082_p2 = (!ap_const_lv13_22.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_22) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_176_cast_fu_10087_p1() {
    tmp_176_cast_fu_10087_p1 = esl_sext<32,13>(tmp_175_fu_10082_p2.read());
}

void differentiate::thread_tmp_176_fu_10338_p2() {
    tmp_176_fu_10338_p2 = (!ap_const_lv13_23.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_23) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_177_cast1_fu_10343_p1() {
    tmp_177_cast1_fu_10343_p1 = esl_sext<32,13>(tmp_176_fu_10338_p2.read());
}

void differentiate::thread_tmp_177_cast_fu_4352_p1() {
    tmp_177_cast_fu_4352_p1 = esl_sext<13,11>(r_V_9_1_reg_14948.read());
}

void differentiate::thread_tmp_177_fu_10598_p2() {
    tmp_177_fu_10598_p2 = (!ap_const_lv13_24.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_24) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_178_cast_fu_10603_p1() {
    tmp_178_cast_fu_10603_p1 = esl_sext<32,13>(tmp_177_fu_10598_p2.read());
}

void differentiate::thread_tmp_178_fu_10858_p2() {
    tmp_178_fu_10858_p2 = (!ap_const_lv13_25.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_25) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_179_cast_fu_10863_p1() {
    tmp_179_cast_fu_10863_p1 = esl_sext<32,13>(tmp_178_fu_10858_p2.read());
}

void differentiate::thread_tmp_179_fu_11130_p2() {
    tmp_179_fu_11130_p2 = (!ap_const_lv13_26.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_26) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_17_0_2_cast_fu_6542_p1() {
    tmp_17_0_2_cast_fu_6542_p1 = esl_sext<12,11>(r_V_17_0_2_reg_16972.read());
}

void differentiate::thread_tmp_17_1_cast_fu_6545_p1() {
    tmp_17_1_cast_fu_6545_p1 = esl_sext<12,11>(r_V_17_1_reg_16731.read());
}

void differentiate::thread_tmp_17_2_1_cast_fu_6557_p1() {
    tmp_17_2_1_cast_fu_6557_p1 = esl_sext<12,11>(r_V_17_2_1_reg_16883.read());
}

void differentiate::thread_tmp_17_2_2_cast_fu_6560_p1() {
    tmp_17_2_2_cast_fu_6560_p1 = esl_sext<12,11>(r_V_17_2_2_reg_17035.read());
}

void differentiate::thread_tmp_17_2_cast_fu_6551_p1() {
    tmp_17_2_cast_fu_6551_p1 = esl_sext<13,11>(r_V_17_2_reg_16758.read());
}

void differentiate::thread_tmp_17_fu_4299_p2() {
    tmp_17_fu_4299_p2 = (!tmp117_cast_fu_4296_p1.read().is_01() || !tmp114_cast_fu_4293_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp117_cast_fu_4296_p1.read()) + sc_bigint<15>(tmp114_cast_fu_4293_p1.read()));
}

void differentiate::thread_tmp_180_cast_fu_11135_p1() {
    tmp_180_cast_fu_11135_p1 = esl_sext<32,13>(tmp_179_fu_11130_p2.read());
}

void differentiate::thread_tmp_180_fu_11394_p2() {
    tmp_180_fu_11394_p2 = (!ap_const_lv13_27.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_27) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_181_cast_fu_11399_p1() {
    tmp_181_cast_fu_11399_p1 = esl_sext<32,13>(tmp_180_fu_11394_p2.read());
}

void differentiate::thread_tmp_181_fu_11655_p2() {
    tmp_181_fu_11655_p2 = (!ap_const_lv13_28.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_28) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_182_cast_fu_11660_p1() {
    tmp_182_cast_fu_11660_p1 = esl_sext<32,13>(tmp_181_fu_11655_p2.read());
}

void differentiate::thread_tmp_182_fu_11911_p2() {
    tmp_182_fu_11911_p2 = (!ap_const_lv13_29.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_29) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_183_cast_fu_11916_p1() {
    tmp_183_cast_fu_11916_p1 = esl_sext<32,13>(tmp_182_fu_11911_p2.read());
}

void differentiate::thread_tmp_183_fu_12167_p2() {
    tmp_183_fu_12167_p2 = (!ap_const_lv13_2A.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2A) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_184_cast1_fu_12172_p1() {
    tmp_184_cast1_fu_12172_p1 = esl_sext<32,13>(tmp_183_fu_12167_p2.read());
}

void differentiate::thread_tmp_184_cast_fu_4358_p1() {
    tmp_184_cast_fu_4358_p1 = esl_sext<12,11>(r_V_9_2_reg_16031.read());
}

void differentiate::thread_tmp_184_fu_12423_p2() {
    tmp_184_fu_12423_p2 = (!ap_const_lv13_2B.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2B) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_185_cast_fu_12428_p1() {
    tmp_185_cast_fu_12428_p1 = esl_sext<32,13>(tmp_184_fu_12423_p2.read());
}

void differentiate::thread_tmp_185_fu_12679_p2() {
    tmp_185_fu_12679_p2 = (!ap_const_lv13_2C.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2C) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_186_cast_fu_12684_p1() {
    tmp_186_cast_fu_12684_p1 = esl_sext<32,13>(tmp_185_fu_12679_p2.read());
}

void differentiate::thread_tmp_186_fu_12935_p2() {
    tmp_186_fu_12935_p2 = (!ap_const_lv13_2D.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2D) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_187_cast_fu_12940_p1() {
    tmp_187_cast_fu_12940_p1 = esl_sext<32,13>(tmp_186_fu_12935_p2.read());
}

void differentiate::thread_tmp_187_fu_13191_p2() {
    tmp_187_fu_13191_p2 = (!ap_const_lv13_2E.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2E) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_188_cast_fu_13196_p1() {
    tmp_188_cast_fu_13196_p1 = esl_sext<32,13>(tmp_187_fu_13191_p2.read());
}

void differentiate::thread_tmp_188_fu_13609_p2() {
    tmp_188_fu_13609_p2 = (!ap_const_lv13_2F.is_01() || !tmp_141_reg_14611.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2F) + sc_biguint<13>(tmp_141_reg_14611.read()));
}

void differentiate::thread_tmp_189_cast_fu_13614_p1() {
    tmp_189_cast_fu_13614_p1 = esl_sext<32,13>(tmp_188_fu_13609_p2.read());
}

void differentiate::thread_tmp_189_fu_2297_p3() {
    tmp_189_fu_2297_p3 = esl_concat<6,6>(tmp_reg_15042.read(), ap_const_lv6_0);
}

void differentiate::thread_tmp_18_0_2_cast_fu_6806_p1() {
    tmp_18_0_2_cast_fu_6806_p1 = esl_sext<12,11>(r_V_18_0_2_reg_17108.read());
}

void differentiate::thread_tmp_18_1_cast_fu_6809_p1() {
    tmp_18_1_cast_fu_6809_p1 = esl_sext<12,11>(r_V_18_1_reg_16846.read());
}

void differentiate::thread_tmp_18_2_1_cast_fu_6821_p1() {
    tmp_18_2_1_cast_fu_6821_p1 = esl_sext<12,11>(r_V_18_2_1_reg_17061.read());
}

void differentiate::thread_tmp_18_2_2_cast_fu_6824_p1() {
    tmp_18_2_2_cast_fu_6824_p1 = esl_sext<12,11>(r_V_18_2_2_reg_17192.read());
}

void differentiate::thread_tmp_18_2_cast_fu_6815_p1() {
    tmp_18_2_cast_fu_6815_p1 = esl_sext<13,11>(r_V_18_2_reg_16915.read());
}

void differentiate::thread_tmp_18_fu_4305_p2() {
    tmp_18_fu_4305_p2 = (!ap_const_lv15_0.is_01() || !tmp_17_fu_4299_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_17_fu_4299_p2.read()));
}

void differentiate::thread_tmp_190_fu_2308_p3() {
    tmp_190_fu_2308_p3 = esl_concat<6,4>(tmp_reg_15042.read(), ap_const_lv4_0);
}

void differentiate::thread_tmp_191_fu_2319_p2() {
    tmp_191_fu_2319_p2 = (!p_shl2_cast_fu_2304_p1.read().is_01() || !p_shl3_cast_fu_2315_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl2_cast_fu_2304_p1.read()) - sc_biguint<13>(p_shl3_cast_fu_2315_p1.read()));
}

void differentiate::thread_tmp_192_cast_fu_13479_p1() {
    tmp_192_cast_fu_13479_p1 = esl_sext<32,13>(tmp_191_reg_15070.read());
}

void differentiate::thread_tmp_192_fu_2325_p2() {
    tmp_192_fu_2325_p2 = (tmp_191_fu_2319_p2.read() | ap_const_lv13_1);
}

void differentiate::thread_tmp_193_cast_fu_2331_p1() {
    tmp_193_cast_fu_2331_p1 = esl_zext<32,13>(tmp_192_fu_2325_p2.read());
}

void differentiate::thread_tmp_193_fu_2350_p2() {
    tmp_193_fu_2350_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_2);
}

void differentiate::thread_tmp_194_cast_fu_2355_p1() {
    tmp_194_cast_fu_2355_p1 = esl_sext<32,13>(tmp_193_fu_2350_p2.read());
}

void differentiate::thread_tmp_194_fu_2480_p2() {
    tmp_194_fu_2480_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_3);
}

void differentiate::thread_tmp_195_cast_fu_2485_p1() {
    tmp_195_cast_fu_2485_p1 = esl_sext<32,13>(tmp_194_fu_2480_p2.read());
}

void differentiate::thread_tmp_195_fu_2550_p2() {
    tmp_195_fu_2550_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_4);
}

void differentiate::thread_tmp_196_cast1_fu_2555_p1() {
    tmp_196_cast1_fu_2555_p1 = esl_sext<32,13>(tmp_195_fu_2550_p2.read());
}

void differentiate::thread_tmp_196_cast_fu_4662_p1() {
    tmp_196_cast_fu_4662_p1 = esl_sext<13,11>(r_V_10_1_reg_14974.read());
}

void differentiate::thread_tmp_196_fu_2707_p2() {
    tmp_196_fu_2707_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_5);
}

void differentiate::thread_tmp_197_cast_fu_2712_p1() {
    tmp_197_cast_fu_2712_p1 = esl_sext<32,13>(tmp_196_fu_2707_p2.read());
}

void differentiate::thread_tmp_197_fu_2939_p2() {
    tmp_197_fu_2939_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_6);
}

void differentiate::thread_tmp_198_cast_fu_2944_p1() {
    tmp_198_cast_fu_2944_p1 = esl_sext<32,13>(tmp_197_fu_2939_p2.read());
}

void differentiate::thread_tmp_198_fu_3099_p2() {
    tmp_198_fu_3099_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_7);
}

void differentiate::thread_tmp_199_cast_fu_3104_p1() {
    tmp_199_cast_fu_3104_p1 = esl_sext<32,13>(tmp_198_fu_3099_p2.read());
}

void differentiate::thread_tmp_199_fu_3249_p2() {
    tmp_199_fu_3249_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_8);
}

void differentiate::thread_tmp_19_0_2_cast_fu_7062_p1() {
    tmp_19_0_2_cast_fu_7062_p1 = esl_sext<12,11>(r_V_19_0_2_reg_17244.read());
}

void differentiate::thread_tmp_19_1_cast_fu_7065_p1() {
    tmp_19_1_cast_fu_7065_p1 = esl_sext<12,11>(r_V_19_1_reg_17024.read());
}

void differentiate::thread_tmp_19_2_1_cast_fu_7077_p1() {
    tmp_19_2_1_cast_fu_7077_p1 = esl_sext<12,11>(r_V_19_2_1_reg_17197.read());
}

void differentiate::thread_tmp_19_2_2_cast_fu_7080_p1() {
    tmp_19_2_2_cast_fu_7080_p1 = esl_sext<12,11>(r_V_19_2_2_reg_17286.read());
}

void differentiate::thread_tmp_19_2_cast_fu_7071_p1() {
    tmp_19_2_cast_fu_7071_p1 = esl_sext<13,11>(r_V_19_2_reg_17072.read());
}

void differentiate::thread_tmp_19_fu_4311_p3() {
    tmp_19_fu_4311_p3 = (!tmp_341_fu_4285_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_341_fu_4285_p3.read()[0].to_bool())? tmp_18_fu_4305_p2.read(): tmp_17_fu_4299_p2.read());
}

void differentiate::thread_tmp_1_0_2_cast_fu_2723_p1() {
    tmp_1_0_2_cast_fu_2723_p1 = esl_sext<12,11>(r_V_1_0_2_reg_15494.read());
}

void differentiate::thread_tmp_1_1_cast_fu_2726_p1() {
    tmp_1_1_cast_fu_2726_p1 = esl_sext<12,11>(r_V_1_1_reg_14750.read());
}

void differentiate::thread_tmp_1_2_1_cast_fu_2738_p1() {
    tmp_1_2_1_cast_fu_2738_p1 = esl_sext<12,11>(r_V_1_2_1_reg_15426.read());
}

void differentiate::thread_tmp_1_2_2_cast_fu_2741_p1() {
    tmp_1_2_2_cast_fu_2741_p1 = esl_sext<12,11>(r_V_1_2_2_reg_15509.read());
}

void differentiate::thread_tmp_1_2_cast_fu_2732_p1() {
    tmp_1_2_cast_fu_2732_p1 = esl_sext<13,11>(r_V_1_2_reg_15369.read());
}

void differentiate::thread_tmp_200_cast_fu_3254_p1() {
    tmp_200_cast_fu_3254_p1 = esl_sext<32,13>(tmp_199_fu_3249_p2.read());
}

void differentiate::thread_tmp_200_fu_3399_p2() {
    tmp_200_fu_3399_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_9);
}

void differentiate::thread_tmp_201_cast_fu_3404_p1() {
    tmp_201_cast_fu_3404_p1 = esl_sext<32,13>(tmp_200_fu_3399_p2.read());
}

void differentiate::thread_tmp_201_fu_3549_p2() {
    tmp_201_fu_3549_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_A);
}

void differentiate::thread_tmp_202_cast_fu_3554_p1() {
    tmp_202_cast_fu_3554_p1 = esl_sext<32,13>(tmp_201_fu_3549_p2.read());
}

void differentiate::thread_tmp_202_fu_3699_p2() {
    tmp_202_fu_3699_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_B);
}

void differentiate::thread_tmp_203_cast1_fu_3704_p1() {
    tmp_203_cast1_fu_3704_p1 = esl_sext<32,13>(tmp_202_fu_3699_p2.read());
}

void differentiate::thread_tmp_203_cast_fu_4668_p1() {
    tmp_203_cast_fu_4668_p1 = esl_sext<12,11>(r_V_10_2_reg_16123.read());
}

void differentiate::thread_tmp_203_fu_3943_p2() {
    tmp_203_fu_3943_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_C);
}

void differentiate::thread_tmp_204_cast_fu_3948_p1() {
    tmp_204_cast_fu_3948_p1 = esl_sext<32,13>(tmp_203_fu_3943_p2.read());
}

void differentiate::thread_tmp_204_fu_4253_p2() {
    tmp_204_fu_4253_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_D);
}

void differentiate::thread_tmp_205_cast_fu_4258_p1() {
    tmp_205_cast_fu_4258_p1 = esl_sext<32,13>(tmp_204_fu_4253_p2.read());
}

void differentiate::thread_tmp_205_fu_4563_p2() {
    tmp_205_fu_4563_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_E);
}

void differentiate::thread_tmp_206_cast_fu_4568_p1() {
    tmp_206_cast_fu_4568_p1 = esl_sext<32,13>(tmp_205_fu_4563_p2.read());
}

void differentiate::thread_tmp_206_fu_4873_p2() {
    tmp_206_fu_4873_p2 = (tmp_191_reg_15070.read() | ap_const_lv13_F);
}

void differentiate::thread_tmp_207_cast_fu_4878_p1() {
    tmp_207_cast_fu_4878_p1 = esl_sext<32,13>(tmp_206_fu_4873_p2.read());
}

void differentiate::thread_tmp_207_fu_5183_p2() {
    tmp_207_fu_5183_p2 = (!ap_const_lv13_10.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_10) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_208_cast_fu_5188_p1() {
    tmp_208_cast_fu_5188_p1 = esl_sext<32,13>(tmp_207_fu_5183_p2.read());
}

void differentiate::thread_tmp_208_fu_5625_p2() {
    tmp_208_fu_5625_p2 = (!ap_const_lv13_11.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_11) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_209_cast_fu_5630_p1() {
    tmp_209_cast_fu_5630_p1 = esl_sext<32,13>(tmp_208_fu_5625_p2.read());
}

void differentiate::thread_tmp_209_fu_5881_p2() {
    tmp_209_fu_5881_p2 = (!ap_const_lv13_12.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_12) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_20_0_2_cast_fu_7318_p1() {
    tmp_20_0_2_cast_fu_7318_p1 = esl_sext<12,11>(r_V_20_0_2_reg_17338.read());
}

void differentiate::thread_tmp_20_1_cast_fu_7321_p1() {
    tmp_20_1_cast_fu_7321_p1 = esl_sext<12,11>(r_V_20_1_reg_17160.read());
}

void differentiate::thread_tmp_20_2_1_cast_fu_7333_p1() {
    tmp_20_2_1_cast_fu_7333_p1 = esl_sext<12,11>(r_V_20_2_1_reg_17291.read());
}

void differentiate::thread_tmp_20_2_2_cast_fu_7336_p1() {
    tmp_20_2_2_cast_fu_7336_p1 = esl_sext<12,11>(r_V_20_2_2_reg_17380.read());
}

void differentiate::thread_tmp_20_2_cast_fu_7327_p1() {
    tmp_20_2_cast_fu_7327_p1 = esl_sext<13,11>(r_V_20_2_reg_17208.read());
}

void differentiate::thread_tmp_20_fu_4497_p2() {
    tmp_20_fu_4497_p2 = (!tmp137_cast_fu_4494_p1.read().is_01() || !tmp134_cast_fu_4491_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp137_cast_fu_4494_p1.read()) + sc_bigint<15>(tmp134_cast_fu_4491_p1.read()));
}

void differentiate::thread_tmp_210_cast_fu_5886_p1() {
    tmp_210_cast_fu_5886_p1 = esl_sext<32,13>(tmp_209_fu_5881_p2.read());
}

void differentiate::thread_tmp_210_fu_6141_p2() {
    tmp_210_fu_6141_p2 = (!ap_const_lv13_13.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_13) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_211_cast_fu_6146_p1() {
    tmp_211_cast_fu_6146_p1 = esl_sext<32,13>(tmp_210_fu_6141_p2.read());
}

void differentiate::thread_tmp_211_fu_6409_p2() {
    tmp_211_fu_6409_p2 = (!ap_const_lv13_14.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_14) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_212_cast_fu_6414_p1() {
    tmp_212_cast_fu_6414_p1 = esl_sext<32,13>(tmp_211_fu_6409_p2.read());
}

void differentiate::thread_tmp_212_fu_6673_p2() {
    tmp_212_fu_6673_p2 = (!ap_const_lv13_15.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_15) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_213_cast_fu_6678_p1() {
    tmp_213_cast_fu_6678_p1 = esl_sext<32,13>(tmp_212_fu_6673_p2.read());
}

void differentiate::thread_tmp_213_fu_6937_p2() {
    tmp_213_fu_6937_p2 = (!ap_const_lv13_16.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_16) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_214_cast_fu_6942_p1() {
    tmp_214_cast_fu_6942_p1 = esl_sext<32,13>(tmp_213_fu_6937_p2.read());
}

void differentiate::thread_tmp_214_fu_7193_p2() {
    tmp_214_fu_7193_p2 = (!ap_const_lv13_17.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_17) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_215_cast1_fu_7198_p1() {
    tmp_215_cast1_fu_7198_p1 = esl_sext<32,13>(tmp_214_fu_7193_p2.read());
}

void differentiate::thread_tmp_215_cast_fu_4972_p1() {
    tmp_215_cast_fu_4972_p1 = esl_sext<13,11>(r_V_11_1_reg_15000.read());
}

void differentiate::thread_tmp_215_fu_7449_p2() {
    tmp_215_fu_7449_p2 = (!ap_const_lv13_18.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_18) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_216_cast_fu_7454_p1() {
    tmp_216_cast_fu_7454_p1 = esl_sext<32,13>(tmp_215_fu_7449_p2.read());
}

void differentiate::thread_tmp_216_fu_7705_p2() {
    tmp_216_fu_7705_p2 = (!ap_const_lv13_19.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_19) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_217_cast_fu_7710_p1() {
    tmp_217_cast_fu_7710_p1 = esl_sext<32,13>(tmp_216_fu_7705_p2.read());
}

void differentiate::thread_tmp_217_fu_7961_p2() {
    tmp_217_fu_7961_p2 = (!ap_const_lv13_1A.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1A) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_218_cast_fu_7966_p1() {
    tmp_218_cast_fu_7966_p1 = esl_sext<32,13>(tmp_217_fu_7961_p2.read());
}

void differentiate::thread_tmp_218_fu_8217_p2() {
    tmp_218_fu_8217_p2 = (!ap_const_lv13_1B.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1B) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_219_cast_fu_8222_p1() {
    tmp_219_cast_fu_8222_p1 = esl_sext<32,13>(tmp_218_fu_8217_p2.read());
}

void differentiate::thread_tmp_219_fu_8473_p2() {
    tmp_219_fu_8473_p2 = (!ap_const_lv13_1C.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1C) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_21_0_2_cast_fu_7574_p1() {
    tmp_21_0_2_cast_fu_7574_p1 = esl_sext<12,11>(r_V_21_0_2_reg_17432.read());
}

void differentiate::thread_tmp_21_1_cast_fu_7577_p1() {
    tmp_21_1_cast_fu_7577_p1 = esl_sext<12,11>(r_V_21_1_reg_17275.read());
}

void differentiate::thread_tmp_21_2_1_cast_fu_7589_p1() {
    tmp_21_2_1_cast_fu_7589_p1 = esl_sext<12,11>(r_V_21_2_1_reg_17385.read());
}

void differentiate::thread_tmp_21_2_2_cast_fu_7592_p1() {
    tmp_21_2_2_cast_fu_7592_p1 = esl_sext<12,11>(r_V_21_2_2_reg_17474.read());
}

void differentiate::thread_tmp_21_2_cast_fu_7583_p1() {
    tmp_21_2_cast_fu_7583_p1 = esl_sext<13,11>(r_V_21_2_reg_17302.read());
}

void differentiate::thread_tmp_21_fu_4503_p2() {
    tmp_21_fu_4503_p2 = (!ap_const_lv15_0.is_01() || !tmp_20_fu_4497_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_20_fu_4497_p2.read()));
}

void differentiate::thread_tmp_220_cast_fu_8478_p1() {
    tmp_220_cast_fu_8478_p1 = esl_sext<32,13>(tmp_219_fu_8473_p2.read());
}

void differentiate::thread_tmp_220_fu_8729_p2() {
    tmp_220_fu_8729_p2 = (!ap_const_lv13_1D.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1D) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_221_cast_fu_8734_p1() {
    tmp_221_cast_fu_8734_p1 = esl_sext<32,13>(tmp_220_fu_8729_p2.read());
}

void differentiate::thread_tmp_221_fu_8985_p2() {
    tmp_221_fu_8985_p2 = (!ap_const_lv13_1E.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1E) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_222_cast1_fu_8990_p1() {
    tmp_222_cast1_fu_8990_p1 = esl_sext<32,13>(tmp_221_fu_8985_p2.read());
}

void differentiate::thread_tmp_222_cast_fu_4978_p1() {
    tmp_222_cast_fu_4978_p1 = esl_sext<12,11>(r_V_11_2_reg_16214.read());
}

void differentiate::thread_tmp_222_fu_9241_p2() {
    tmp_222_fu_9241_p2 = (!ap_const_lv13_1F.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1F) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_223_cast_fu_9246_p1() {
    tmp_223_cast_fu_9246_p1 = esl_sext<32,13>(tmp_222_fu_9241_p2.read());
}

void differentiate::thread_tmp_223_fu_9497_p2() {
    tmp_223_fu_9497_p2 = (!ap_const_lv13_20.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_20) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_224_cast_fu_9502_p1() {
    tmp_224_cast_fu_9502_p1 = esl_sext<32,13>(tmp_223_fu_9497_p2.read());
}

void differentiate::thread_tmp_224_fu_9753_p2() {
    tmp_224_fu_9753_p2 = (!ap_const_lv13_21.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_21) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_225_cast_fu_9758_p1() {
    tmp_225_cast_fu_9758_p1 = esl_sext<32,13>(tmp_224_fu_9753_p2.read());
}

void differentiate::thread_tmp_225_fu_10009_p2() {
    tmp_225_fu_10009_p2 = (!ap_const_lv13_22.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_22) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_226_cast_fu_10014_p1() {
    tmp_226_cast_fu_10014_p1 = esl_sext<32,13>(tmp_225_fu_10009_p2.read());
}

void differentiate::thread_tmp_226_fu_10265_p2() {
    tmp_226_fu_10265_p2 = (!ap_const_lv13_23.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_23) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_227_cast_fu_10270_p1() {
    tmp_227_cast_fu_10270_p1 = esl_sext<32,13>(tmp_226_fu_10265_p2.read());
}

void differentiate::thread_tmp_227_fu_10521_p2() {
    tmp_227_fu_10521_p2 = (!ap_const_lv13_24.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_24) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_228_cast_fu_10526_p1() {
    tmp_228_cast_fu_10526_p1 = esl_sext<32,13>(tmp_227_fu_10521_p2.read());
}

void differentiate::thread_tmp_228_fu_10785_p2() {
    tmp_228_fu_10785_p2 = (!ap_const_lv13_25.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_25) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_229_cast_fu_10790_p1() {
    tmp_229_cast_fu_10790_p1 = esl_sext<32,13>(tmp_228_fu_10785_p2.read());
}

void differentiate::thread_tmp_229_fu_11053_p2() {
    tmp_229_fu_11053_p2 = (!ap_const_lv13_26.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_26) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_22_0_2_cast_fu_7830_p1() {
    tmp_22_0_2_cast_fu_7830_p1 = esl_sext<12,11>(r_V_22_0_2_reg_17526.read());
}

void differentiate::thread_tmp_22_1_cast_fu_7833_p1() {
    tmp_22_1_cast_fu_7833_p1 = esl_sext<12,11>(r_V_22_1_reg_17369.read());
}

void differentiate::thread_tmp_22_2_1_cast_fu_7845_p1() {
    tmp_22_2_1_cast_fu_7845_p1 = esl_sext<12,11>(r_V_22_2_1_reg_17479.read());
}

void differentiate::thread_tmp_22_2_2_cast_fu_7848_p1() {
    tmp_22_2_2_cast_fu_7848_p1 = esl_sext<12,11>(r_V_22_2_2_reg_17568.read());
}

void differentiate::thread_tmp_22_2_cast_fu_7839_p1() {
    tmp_22_2_cast_fu_7839_p1 = esl_sext<13,11>(r_V_22_2_reg_17396.read());
}

void differentiate::thread_tmp_22_fu_4509_p3() {
    tmp_22_fu_4509_p3 = (!tmp_342_fu_4483_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_342_fu_4483_p3.read()[0].to_bool())? tmp_21_fu_4503_p2.read(): tmp_20_fu_4497_p2.read());
}

void differentiate::thread_tmp_230_cast_fu_11058_p1() {
    tmp_230_cast_fu_11058_p1 = esl_sext<32,13>(tmp_229_fu_11053_p2.read());
}

void differentiate::thread_tmp_230_fu_11318_p2() {
    tmp_230_fu_11318_p2 = (!ap_const_lv13_27.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_27) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_231_cast_fu_11323_p1() {
    tmp_231_cast_fu_11323_p1 = esl_sext<32,13>(tmp_230_fu_11318_p2.read());
}

void differentiate::thread_tmp_231_fu_11582_p2() {
    tmp_231_fu_11582_p2 = (!ap_const_lv13_28.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_28) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_232_cast_fu_11587_p1() {
    tmp_232_cast_fu_11587_p1 = esl_sext<32,13>(tmp_231_fu_11582_p2.read());
}

void differentiate::thread_tmp_232_fu_11838_p2() {
    tmp_232_fu_11838_p2 = (!ap_const_lv13_29.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_29) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_233_cast_fu_11843_p1() {
    tmp_233_cast_fu_11843_p1 = esl_sext<32,13>(tmp_232_fu_11838_p2.read());
}

void differentiate::thread_tmp_233_fu_12094_p2() {
    tmp_233_fu_12094_p2 = (!ap_const_lv13_2A.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2A) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_234_cast1_fu_12099_p1() {
    tmp_234_cast1_fu_12099_p1 = esl_sext<32,13>(tmp_233_fu_12094_p2.read());
}

void differentiate::thread_tmp_234_cast_fu_5258_p1() {
    tmp_234_cast_fu_5258_p1 = esl_sext<13,11>(r_V_12_1_reg_15026.read());
}

void differentiate::thread_tmp_234_fu_12350_p2() {
    tmp_234_fu_12350_p2 = (!ap_const_lv13_2B.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2B) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_235_cast_fu_12355_p1() {
    tmp_235_cast_fu_12355_p1 = esl_sext<32,13>(tmp_234_fu_12350_p2.read());
}

void differentiate::thread_tmp_235_fu_12606_p2() {
    tmp_235_fu_12606_p2 = (!ap_const_lv13_2C.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2C) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_236_cast_fu_12611_p1() {
    tmp_236_cast_fu_12611_p1 = esl_sext<32,13>(tmp_235_fu_12606_p2.read());
}

void differentiate::thread_tmp_236_fu_12862_p2() {
    tmp_236_fu_12862_p2 = (!ap_const_lv13_2D.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2D) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_237_cast_fu_12867_p1() {
    tmp_237_cast_fu_12867_p1 = esl_sext<32,13>(tmp_236_fu_12862_p2.read());
}

void differentiate::thread_tmp_237_fu_13118_p2() {
    tmp_237_fu_13118_p2 = (!ap_const_lv13_2E.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2E) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_238_cast_fu_13123_p1() {
    tmp_238_cast_fu_13123_p1 = esl_sext<32,13>(tmp_237_fu_13118_p2.read());
}

void differentiate::thread_tmp_238_fu_13374_p2() {
    tmp_238_fu_13374_p2 = (!ap_const_lv13_2F.is_01() || !tmp_191_reg_15070.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2F) + sc_biguint<13>(tmp_191_reg_15070.read()));
}

void differentiate::thread_tmp_239_cast_fu_13379_p1() {
    tmp_239_cast_fu_13379_p1 = esl_sext<32,13>(tmp_238_fu_13374_p2.read());
}

void differentiate::thread_tmp_23_0_2_cast_fu_8086_p1() {
    tmp_23_0_2_cast_fu_8086_p1 = esl_sext<12,11>(r_V_23_0_2_reg_17620.read());
}

void differentiate::thread_tmp_23_1_cast_fu_8089_p1() {
    tmp_23_1_cast_fu_8089_p1 = esl_sext<12,11>(r_V_23_1_reg_17463.read());
}

void differentiate::thread_tmp_23_2_1_cast_fu_8101_p1() {
    tmp_23_2_1_cast_fu_8101_p1 = esl_sext<12,11>(r_V_23_2_1_reg_17573.read());
}

void differentiate::thread_tmp_23_2_2_cast_fu_8104_p1() {
    tmp_23_2_2_cast_fu_8104_p1 = esl_sext<12,11>(r_V_23_2_2_reg_17662.read());
}

void differentiate::thread_tmp_23_2_cast_fu_8095_p1() {
    tmp_23_2_cast_fu_8095_p1 = esl_sext<13,11>(r_V_23_2_reg_17490.read());
}

void differentiate::thread_tmp_23_fu_4609_p2() {
    tmp_23_fu_4609_p2 = (!tmp157_cast_fu_4606_p1.read().is_01() || !tmp154_cast_fu_4603_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp157_cast_fu_4606_p1.read()) + sc_bigint<15>(tmp154_cast_fu_4603_p1.read()));
}

void differentiate::thread_tmp_240_cast_fu_13883_p1() {
    tmp_240_cast_fu_13883_p1 = esl_zext<32,13>(tmp_239_reg_15587.read());
}

void differentiate::thread_tmp_240_fu_2857_p1() {
    tmp_240_fu_2857_p1 = grp_fu_2717_p2.read().range(12-1, 0);
}

void differentiate::thread_tmp_241_cast1_fu_2954_p1() {
    tmp_241_cast1_fu_2954_p1 = esl_zext<32,12>(tmp_241_fu_2949_p2.read());
}

void differentiate::thread_tmp_241_cast_fu_5264_p1() {
    tmp_241_cast_fu_5264_p1 = esl_sext<12,11>(r_V_12_2_reg_16305.read());
}

void differentiate::thread_tmp_241_fu_2949_p2() {
    tmp_241_fu_2949_p2 = (tmp_240_reg_15592.read() | ap_const_lv12_1);
}

void differentiate::thread_tmp_242_cast_fu_3958_p1() {
    tmp_242_cast_fu_3958_p1 = esl_zext<32,12>(tmp_242_fu_3953_p2.read());
}

void differentiate::thread_tmp_242_fu_3953_p2() {
    tmp_242_fu_3953_p2 = (!ap_const_lv12_2.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_2) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_243_cast_fu_4146_p1() {
    tmp_243_cast_fu_4146_p1 = esl_zext<32,12>(tmp_243_fu_4141_p2.read());
}

void differentiate::thread_tmp_243_fu_4141_p2() {
    tmp_243_fu_4141_p2 = (!ap_const_lv12_3.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_3) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_244_cast_fu_4268_p1() {
    tmp_244_cast_fu_4268_p1 = esl_zext<32,12>(tmp_244_fu_4263_p2.read());
}

void differentiate::thread_tmp_244_fu_4263_p2() {
    tmp_244_fu_4263_p2 = (!ap_const_lv12_4.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_4) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_245_cast_fu_4456_p1() {
    tmp_245_cast_fu_4456_p1 = esl_zext<32,12>(tmp_245_fu_4451_p2.read());
}

void differentiate::thread_tmp_245_fu_4451_p2() {
    tmp_245_fu_4451_p2 = (!ap_const_lv12_5.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_5) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_246_cast_fu_4578_p1() {
    tmp_246_cast_fu_4578_p1 = esl_zext<32,12>(tmp_246_fu_4573_p2.read());
}

void differentiate::thread_tmp_246_fu_4573_p2() {
    tmp_246_fu_4573_p2 = (!ap_const_lv12_6.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_6) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_247_cast_fu_4766_p1() {
    tmp_247_cast_fu_4766_p1 = esl_zext<32,12>(tmp_247_fu_4761_p2.read());
}

void differentiate::thread_tmp_247_fu_4761_p2() {
    tmp_247_fu_4761_p2 = (!ap_const_lv12_7.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_7) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_248_cast_fu_4888_p1() {
    tmp_248_cast_fu_4888_p1 = esl_zext<32,12>(tmp_248_fu_4883_p2.read());
}

void differentiate::thread_tmp_248_fu_4883_p2() {
    tmp_248_fu_4883_p2 = (!ap_const_lv12_8.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_8) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_249_cast_fu_5076_p1() {
    tmp_249_cast_fu_5076_p1 = esl_zext<32,12>(tmp_249_fu_5071_p2.read());
}

void differentiate::thread_tmp_249_fu_5071_p2() {
    tmp_249_fu_5071_p2 = (!ap_const_lv12_9.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_9) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_24_0_2_cast_fu_8342_p1() {
    tmp_24_0_2_cast_fu_8342_p1 = esl_sext<12,11>(r_V_24_0_2_reg_17714.read());
}

void differentiate::thread_tmp_24_1_cast_fu_8345_p1() {
    tmp_24_1_cast_fu_8345_p1 = esl_sext<12,11>(r_V_24_1_reg_17557.read());
}

void differentiate::thread_tmp_24_2_1_cast_fu_8357_p1() {
    tmp_24_2_1_cast_fu_8357_p1 = esl_sext<12,11>(r_V_24_2_1_reg_17667.read());
}

void differentiate::thread_tmp_24_2_2_cast_fu_8360_p1() {
    tmp_24_2_2_cast_fu_8360_p1 = esl_sext<12,11>(r_V_24_2_2_reg_17756.read());
}

void differentiate::thread_tmp_24_2_cast_fu_8351_p1() {
    tmp_24_2_cast_fu_8351_p1 = esl_sext<13,11>(r_V_24_2_reg_17584.read());
}

void differentiate::thread_tmp_24_fu_4615_p2() {
    tmp_24_fu_4615_p2 = (!ap_const_lv15_0.is_01() || !tmp_23_fu_4609_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_23_fu_4609_p2.read()));
}

void differentiate::thread_tmp_250_cast_fu_5198_p1() {
    tmp_250_cast_fu_5198_p1 = esl_zext<32,12>(tmp_250_fu_5193_p2.read());
}

void differentiate::thread_tmp_250_fu_5193_p2() {
    tmp_250_fu_5193_p2 = (!ap_const_lv12_A.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_A) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_251_cast_fu_5398_p1() {
    tmp_251_cast_fu_5398_p1 = esl_zext<32,12>(tmp_251_fu_5393_p2.read());
}

void differentiate::thread_tmp_251_fu_5393_p2() {
    tmp_251_fu_5393_p2 = (!ap_const_lv12_B.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_B) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_252_cast_fu_5476_p1() {
    tmp_252_cast_fu_5476_p1 = esl_zext<32,12>(tmp_252_fu_5471_p2.read());
}

void differentiate::thread_tmp_252_fu_5471_p2() {
    tmp_252_fu_5471_p2 = (!ap_const_lv12_C.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_C) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_253_cast1_fu_5713_p1() {
    tmp_253_cast1_fu_5713_p1 = esl_zext<32,12>(tmp_253_fu_5708_p2.read());
}

void differentiate::thread_tmp_253_cast_fu_5497_p1() {
    tmp_253_cast_fu_5497_p1 = esl_sext<13,11>(r_V_13_1_reg_15059.read());
}

void differentiate::thread_tmp_253_fu_5708_p2() {
    tmp_253_fu_5708_p2 = (!ap_const_lv12_D.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_D) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_254_cast_fu_5969_p1() {
    tmp_254_cast_fu_5969_p1 = esl_zext<32,12>(tmp_254_fu_5964_p2.read());
}

void differentiate::thread_tmp_254_fu_5964_p2() {
    tmp_254_fu_5964_p2 = (!ap_const_lv12_E.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_E) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_255_cast_fu_6229_p1() {
    tmp_255_cast_fu_6229_p1 = esl_zext<32,12>(tmp_255_fu_6224_p2.read());
}

void differentiate::thread_tmp_255_fu_6224_p2() {
    tmp_255_fu_6224_p2 = (!ap_const_lv12_F.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_F) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_256_cast_fu_6501_p1() {
    tmp_256_cast_fu_6501_p1 = esl_zext<32,12>(tmp_256_fu_6496_p2.read());
}

void differentiate::thread_tmp_256_fu_6496_p2() {
    tmp_256_fu_6496_p2 = (!ap_const_lv12_10.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_10) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_257_cast_fu_6765_p1() {
    tmp_257_cast_fu_6765_p1 = esl_zext<32,12>(tmp_257_fu_6760_p2.read());
}

void differentiate::thread_tmp_257_fu_6760_p2() {
    tmp_257_fu_6760_p2 = (!ap_const_lv12_11.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_11) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_258_cast_fu_7025_p1() {
    tmp_258_cast_fu_7025_p1 = esl_zext<32,12>(tmp_258_fu_7020_p2.read());
}

void differentiate::thread_tmp_258_fu_7020_p2() {
    tmp_258_fu_7020_p2 = (!ap_const_lv12_12.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_12) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_259_cast_fu_7281_p1() {
    tmp_259_cast_fu_7281_p1 = esl_zext<32,12>(tmp_259_fu_7276_p2.read());
}

void differentiate::thread_tmp_259_fu_7276_p2() {
    tmp_259_fu_7276_p2 = (!ap_const_lv12_13.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_13) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_25_0_2_cast_fu_8598_p1() {
    tmp_25_0_2_cast_fu_8598_p1 = esl_sext<12,11>(r_V_25_0_2_reg_17808.read());
}

void differentiate::thread_tmp_25_1_cast_fu_8601_p1() {
    tmp_25_1_cast_fu_8601_p1 = esl_sext<12,11>(r_V_25_1_reg_17651.read());
}

void differentiate::thread_tmp_25_2_1_cast_fu_8613_p1() {
    tmp_25_2_1_cast_fu_8613_p1 = esl_sext<12,11>(r_V_25_2_1_reg_17761.read());
}

void differentiate::thread_tmp_25_2_2_cast_fu_8616_p1() {
    tmp_25_2_2_cast_fu_8616_p1 = esl_sext<12,11>(r_V_25_2_2_reg_17850.read());
}

void differentiate::thread_tmp_25_2_cast_fu_8607_p1() {
    tmp_25_2_cast_fu_8607_p1 = esl_sext<13,11>(r_V_25_2_reg_17678.read());
}

void differentiate::thread_tmp_25_cast_fu_2729_p1() {
    tmp_25_cast_fu_2729_p1 = esl_sext<13,11>(r_V_1_1_reg_14750.read());
}

void differentiate::thread_tmp_25_fu_4621_p3() {
    tmp_25_fu_4621_p3 = (!tmp_343_fu_4595_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_343_fu_4595_p3.read()[0].to_bool())? tmp_24_fu_4615_p2.read(): tmp_23_fu_4609_p2.read());
}

void differentiate::thread_tmp_260_cast1_fu_7537_p1() {
    tmp_260_cast1_fu_7537_p1 = esl_zext<32,12>(tmp_260_fu_7532_p2.read());
}

void differentiate::thread_tmp_260_cast_fu_5503_p1() {
    tmp_260_cast_fu_5503_p1 = esl_sext<12,11>(r_V_13_2_reg_16396.read());
}

void differentiate::thread_tmp_260_fu_7532_p2() {
    tmp_260_fu_7532_p2 = (!ap_const_lv12_14.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_14) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_261_cast_fu_7793_p1() {
    tmp_261_cast_fu_7793_p1 = esl_zext<32,12>(tmp_261_fu_7788_p2.read());
}

void differentiate::thread_tmp_261_fu_7788_p2() {
    tmp_261_fu_7788_p2 = (!ap_const_lv12_15.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_15) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_262_cast_fu_8049_p1() {
    tmp_262_cast_fu_8049_p1 = esl_zext<32,12>(tmp_262_fu_8044_p2.read());
}

void differentiate::thread_tmp_262_fu_8044_p2() {
    tmp_262_fu_8044_p2 = (!ap_const_lv12_16.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_16) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_263_cast_fu_8305_p1() {
    tmp_263_cast_fu_8305_p1 = esl_zext<32,12>(tmp_263_fu_8300_p2.read());
}

void differentiate::thread_tmp_263_fu_8300_p2() {
    tmp_263_fu_8300_p2 = (!ap_const_lv12_17.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_17) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_264_cast_fu_8561_p1() {
    tmp_264_cast_fu_8561_p1 = esl_zext<32,12>(tmp_264_fu_8556_p2.read());
}

void differentiate::thread_tmp_264_fu_8556_p2() {
    tmp_264_fu_8556_p2 = (!ap_const_lv12_18.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_18) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_265_cast_fu_8817_p1() {
    tmp_265_cast_fu_8817_p1 = esl_zext<32,12>(tmp_265_fu_8812_p2.read());
}

void differentiate::thread_tmp_265_fu_8812_p2() {
    tmp_265_fu_8812_p2 = (!ap_const_lv12_19.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_19) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_266_cast_fu_9073_p1() {
    tmp_266_cast_fu_9073_p1 = esl_zext<32,12>(tmp_266_fu_9068_p2.read());
}

void differentiate::thread_tmp_266_fu_9068_p2() {
    tmp_266_fu_9068_p2 = (!ap_const_lv12_1A.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1A) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_267_cast_fu_9329_p1() {
    tmp_267_cast_fu_9329_p1 = esl_zext<32,12>(tmp_267_fu_9324_p2.read());
}

void differentiate::thread_tmp_267_fu_9324_p2() {
    tmp_267_fu_9324_p2 = (!ap_const_lv12_1B.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1B) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_268_cast_fu_9585_p1() {
    tmp_268_cast_fu_9585_p1 = esl_zext<32,12>(tmp_268_fu_9580_p2.read());
}

void differentiate::thread_tmp_268_fu_9580_p2() {
    tmp_268_fu_9580_p2 = (!ap_const_lv12_1C.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1C) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_269_cast_fu_9841_p1() {
    tmp_269_cast_fu_9841_p1 = esl_zext<32,12>(tmp_269_fu_9836_p2.read());
}

void differentiate::thread_tmp_269_fu_9836_p2() {
    tmp_269_fu_9836_p2 = (!ap_const_lv12_1D.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1D) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_26_0_2_cast_fu_8854_p1() {
    tmp_26_0_2_cast_fu_8854_p1 = esl_sext<12,11>(r_V_26_0_2_reg_17902.read());
}

void differentiate::thread_tmp_26_1_cast_fu_8857_p1() {
    tmp_26_1_cast_fu_8857_p1 = esl_sext<12,11>(r_V_26_1_reg_17745.read());
}

void differentiate::thread_tmp_26_2_1_cast_fu_8869_p1() {
    tmp_26_2_1_cast_fu_8869_p1 = esl_sext<12,11>(r_V_26_2_1_reg_17855.read());
}

void differentiate::thread_tmp_26_2_2_cast_fu_8872_p1() {
    tmp_26_2_2_cast_fu_8872_p1 = esl_sext<12,11>(r_V_26_2_2_reg_17944.read());
}

void differentiate::thread_tmp_26_2_cast_fu_8863_p1() {
    tmp_26_2_cast_fu_8863_p1 = esl_sext<13,11>(r_V_26_2_reg_17772.read());
}

void differentiate::thread_tmp_26_fu_4807_p2() {
    tmp_26_fu_4807_p2 = (!tmp177_cast_fu_4804_p1.read().is_01() || !tmp174_cast_fu_4801_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp177_cast_fu_4804_p1.read()) + sc_bigint<15>(tmp174_cast_fu_4801_p1.read()));
}

void differentiate::thread_tmp_270_cast_fu_10097_p1() {
    tmp_270_cast_fu_10097_p1 = esl_zext<32,12>(tmp_270_fu_10092_p2.read());
}

void differentiate::thread_tmp_270_fu_10092_p2() {
    tmp_270_fu_10092_p2 = (!ap_const_lv12_1E.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1E) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_271_cast_fu_10353_p1() {
    tmp_271_cast_fu_10353_p1 = esl_zext<32,12>(tmp_271_fu_10348_p2.read());
}

void differentiate::thread_tmp_271_fu_10348_p2() {
    tmp_271_fu_10348_p2 = (!ap_const_lv12_1F.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_1F) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_272_cast1_fu_10613_p1() {
    tmp_272_cast1_fu_10613_p1 = esl_zext<32,12>(tmp_272_fu_10608_p2.read());
}

void differentiate::thread_tmp_272_cast_fu_5756_p1() {
    tmp_272_cast_fu_5756_p1 = esl_sext<13,11>(r_V_14_1_reg_15136.read());
}

void differentiate::thread_tmp_272_fu_10608_p2() {
    tmp_272_fu_10608_p2 = (!ap_const_lv12_20.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_20) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_273_cast_fu_10873_p1() {
    tmp_273_cast_fu_10873_p1 = esl_zext<32,12>(tmp_273_fu_10868_p2.read());
}

void differentiate::thread_tmp_273_fu_10868_p2() {
    tmp_273_fu_10868_p2 = (!ap_const_lv12_21.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_21) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_274_cast_fu_11145_p1() {
    tmp_274_cast_fu_11145_p1 = esl_zext<32,12>(tmp_274_fu_11140_p2.read());
}

void differentiate::thread_tmp_274_fu_11140_p2() {
    tmp_274_fu_11140_p2 = (!ap_const_lv12_22.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_22) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_275_cast_fu_11409_p1() {
    tmp_275_cast_fu_11409_p1 = esl_zext<32,12>(tmp_275_fu_11404_p2.read());
}

void differentiate::thread_tmp_275_fu_11404_p2() {
    tmp_275_fu_11404_p2 = (!ap_const_lv12_23.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_23) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_276_cast_fu_11670_p1() {
    tmp_276_cast_fu_11670_p1 = esl_zext<32,12>(tmp_276_fu_11665_p2.read());
}

void differentiate::thread_tmp_276_fu_11665_p2() {
    tmp_276_fu_11665_p2 = (!ap_const_lv12_24.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_24) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_277_cast_fu_11926_p1() {
    tmp_277_cast_fu_11926_p1 = esl_zext<32,12>(tmp_277_fu_11921_p2.read());
}

void differentiate::thread_tmp_277_fu_11921_p2() {
    tmp_277_fu_11921_p2 = (!ap_const_lv12_25.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_25) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_278_cast_fu_12182_p1() {
    tmp_278_cast_fu_12182_p1 = esl_zext<32,12>(tmp_278_fu_12177_p2.read());
}

void differentiate::thread_tmp_278_fu_12177_p2() {
    tmp_278_fu_12177_p2 = (!ap_const_lv12_26.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_26) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_279_cast1_fu_12438_p1() {
    tmp_279_cast1_fu_12438_p1 = esl_zext<32,12>(tmp_279_fu_12433_p2.read());
}

void differentiate::thread_tmp_279_cast_fu_5762_p1() {
    tmp_279_cast_fu_5762_p1 = esl_sext<12,11>(r_V_14_2_reg_16487.read());
}

void differentiate::thread_tmp_279_fu_12433_p2() {
    tmp_279_fu_12433_p2 = (!ap_const_lv12_27.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_27) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_27_0_2_cast_fu_9110_p1() {
    tmp_27_0_2_cast_fu_9110_p1 = esl_sext<12,11>(r_V_27_0_2_reg_17996.read());
}

void differentiate::thread_tmp_27_1_cast_fu_9113_p1() {
    tmp_27_1_cast_fu_9113_p1 = esl_sext<12,11>(r_V_27_1_reg_17839.read());
}

void differentiate::thread_tmp_27_2_1_cast_fu_9125_p1() {
    tmp_27_2_1_cast_fu_9125_p1 = esl_sext<12,11>(r_V_27_2_1_reg_17949.read());
}

void differentiate::thread_tmp_27_2_2_cast_fu_9128_p1() {
    tmp_27_2_2_cast_fu_9128_p1 = esl_sext<12,11>(r_V_27_2_2_reg_18038.read());
}

void differentiate::thread_tmp_27_2_cast_fu_9119_p1() {
    tmp_27_2_cast_fu_9119_p1 = esl_sext<13,11>(r_V_27_2_reg_17866.read());
}

void differentiate::thread_tmp_27_fu_4813_p2() {
    tmp_27_fu_4813_p2 = (!ap_const_lv15_0.is_01() || !tmp_26_fu_4807_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_26_fu_4807_p2.read()));
}

void differentiate::thread_tmp_280_cast_fu_12694_p1() {
    tmp_280_cast_fu_12694_p1 = esl_zext<32,12>(tmp_280_fu_12689_p2.read());
}

void differentiate::thread_tmp_280_fu_12689_p2() {
    tmp_280_fu_12689_p2 = (!ap_const_lv12_28.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_28) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_281_cast_fu_12950_p1() {
    tmp_281_cast_fu_12950_p1 = esl_zext<32,12>(tmp_281_fu_12945_p2.read());
}

void differentiate::thread_tmp_281_fu_12945_p2() {
    tmp_281_fu_12945_p2 = (!ap_const_lv12_29.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_29) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_282_cast_fu_13206_p1() {
    tmp_282_cast_fu_13206_p1 = esl_zext<32,12>(tmp_282_fu_13201_p2.read());
}

void differentiate::thread_tmp_282_fu_13201_p2() {
    tmp_282_fu_13201_p2 = (!ap_const_lv12_2A.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_2A) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_283_cast_fu_13447_p1() {
    tmp_283_cast_fu_13447_p1 = esl_zext<32,12>(tmp_283_fu_13442_p2.read());
}

void differentiate::thread_tmp_283_fu_13442_p2() {
    tmp_283_fu_13442_p2 = (!ap_const_lv12_2B.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_2B) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_284_cast_fu_13679_p1() {
    tmp_284_cast_fu_13679_p1 = esl_zext<32,12>(tmp_284_fu_13674_p2.read());
}

void differentiate::thread_tmp_284_fu_13674_p2() {
    tmp_284_fu_13674_p2 = (!ap_const_lv12_2C.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_2C) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_285_cast_fu_13938_p1() {
    tmp_285_cast_fu_13938_p1 = esl_zext<32,12>(tmp_285_fu_13933_p2.read());
}

void differentiate::thread_tmp_285_fu_13933_p2() {
    tmp_285_fu_13933_p2 = (!ap_const_lv12_2D.is_01() || !tmp_240_reg_15592.read().is_01())? sc_lv<12>(): (sc_biguint<12>(ap_const_lv12_2D) + sc_biguint<12>(tmp_240_reg_15592.read()));
}

void differentiate::thread_tmp_286_fu_2394_p3() {
    tmp_286_fu_2394_p3 = esl_concat<6,6>(i_1_reg_15152.read(), ap_const_lv6_0);
}

void differentiate::thread_tmp_287_fu_2405_p3() {
    tmp_287_fu_2405_p3 = esl_concat<6,4>(i_1_reg_15152.read(), ap_const_lv4_0);
}

void differentiate::thread_tmp_288_cast_fu_2422_p1() {
    tmp_288_cast_fu_2422_p1 = esl_sext<32,13>(tmp_288_fu_2416_p2.read());
}

void differentiate::thread_tmp_288_fu_2416_p2() {
    tmp_288_fu_2416_p2 = (!p_shl_cast_fu_2401_p1.read().is_01() || !p_shl1_cast_fu_2412_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl_cast_fu_2401_p1.read()) - sc_biguint<13>(p_shl1_cast_fu_2412_p1.read()));
}

void differentiate::thread_tmp_289_cast_fu_2446_p1() {
    tmp_289_cast_fu_2446_p1 = esl_zext<32,13>(tmp_289_fu_2441_p2.read());
}

void differentiate::thread_tmp_289_fu_2441_p2() {
    tmp_289_fu_2441_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_1);
}

void differentiate::thread_tmp_28_0_2_cast_fu_9366_p1() {
    tmp_28_0_2_cast_fu_9366_p1 = esl_sext<12,11>(r_V_28_0_2_reg_18090.read());
}

void differentiate::thread_tmp_28_1_cast_fu_9369_p1() {
    tmp_28_1_cast_fu_9369_p1 = esl_sext<12,11>(r_V_28_1_reg_17933.read());
}

void differentiate::thread_tmp_28_2_1_cast_fu_9381_p1() {
    tmp_28_2_1_cast_fu_9381_p1 = esl_sext<12,11>(r_V_28_2_1_reg_18043.read());
}

void differentiate::thread_tmp_28_2_2_cast_fu_9384_p1() {
    tmp_28_2_2_cast_fu_9384_p1 = esl_sext<12,11>(r_V_28_2_2_reg_18132.read());
}

void differentiate::thread_tmp_28_2_cast_fu_9375_p1() {
    tmp_28_2_cast_fu_9375_p1 = esl_sext<13,11>(r_V_28_2_reg_17960.read());
}

void differentiate::thread_tmp_28_fu_4819_p3() {
    tmp_28_fu_4819_p3 = (!tmp_344_fu_4793_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_344_fu_4793_p3.read()[0].to_bool())? tmp_27_fu_4813_p2.read(): tmp_26_fu_4807_p2.read());
}

void differentiate::thread_tmp_290_cast_fu_2461_p1() {
    tmp_290_cast_fu_2461_p1 = esl_sext<32,13>(tmp_290_fu_2456_p2.read());
}

void differentiate::thread_tmp_290_fu_2456_p2() {
    tmp_290_fu_2456_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_2);
}

void differentiate::thread_tmp_291_cast1_fu_2518_p1() {
    tmp_291_cast1_fu_2518_p1 = esl_sext<32,13>(tmp_291_fu_2513_p2.read());
}

void differentiate::thread_tmp_291_cast_fu_6012_p1() {
    tmp_291_cast_fu_6012_p1 = esl_sext<13,11>(r_V_15_1_reg_15169.read());
}

void differentiate::thread_tmp_291_fu_2513_p2() {
    tmp_291_fu_2513_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_3);
}

void differentiate::thread_tmp_292_cast_fu_2677_p1() {
    tmp_292_cast_fu_2677_p1 = esl_sext<32,13>(tmp_292_fu_2672_p2.read());
}

void differentiate::thread_tmp_292_fu_2672_p2() {
    tmp_292_fu_2672_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_4);
}

void differentiate::thread_tmp_293_cast_fu_2866_p1() {
    tmp_293_cast_fu_2866_p1 = esl_sext<32,13>(tmp_293_fu_2861_p2.read());
}

void differentiate::thread_tmp_293_fu_2861_p2() {
    tmp_293_fu_2861_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_5);
}

void differentiate::thread_tmp_294_cast_fu_3072_p1() {
    tmp_294_cast_fu_3072_p1 = esl_sext<32,13>(tmp_294_fu_3067_p2.read());
}

void differentiate::thread_tmp_294_fu_3067_p2() {
    tmp_294_fu_3067_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_6);
}

void differentiate::thread_tmp_295_cast_fu_3222_p1() {
    tmp_295_cast_fu_3222_p1 = esl_sext<32,13>(tmp_295_fu_3217_p2.read());
}

void differentiate::thread_tmp_295_fu_3217_p2() {
    tmp_295_fu_3217_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_7);
}

void differentiate::thread_tmp_296_cast_fu_3372_p1() {
    tmp_296_cast_fu_3372_p1 = esl_sext<32,13>(tmp_296_fu_3367_p2.read());
}

void differentiate::thread_tmp_296_fu_3367_p2() {
    tmp_296_fu_3367_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_8);
}

void differentiate::thread_tmp_297_cast_fu_3522_p1() {
    tmp_297_cast_fu_3522_p1 = esl_sext<32,13>(tmp_297_fu_3517_p2.read());
}

void differentiate::thread_tmp_297_fu_3517_p2() {
    tmp_297_fu_3517_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_9);
}

void differentiate::thread_tmp_298_cast9_fu_3672_p1() {
    tmp_298_cast9_fu_3672_p1 = esl_sext<32,13>(tmp_298_fu_3667_p2.read());
}

void differentiate::thread_tmp_298_cast_fu_6018_p1() {
    tmp_298_cast_fu_6018_p1 = esl_sext<12,11>(r_V_15_2_reg_16564.read());
}

void differentiate::thread_tmp_298_fu_3667_p2() {
    tmp_298_fu_3667_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_A);
}

void differentiate::thread_tmp_299_cast_fu_3846_p1() {
    tmp_299_cast_fu_3846_p1 = esl_sext<32,13>(tmp_299_fu_3841_p2.read());
}

void differentiate::thread_tmp_299_fu_3841_p2() {
    tmp_299_fu_3841_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_B);
}

void differentiate::thread_tmp_29_0_2_cast_fu_9622_p1() {
    tmp_29_0_2_cast_fu_9622_p1 = esl_sext<12,11>(r_V_29_0_2_reg_18184.read());
}

void differentiate::thread_tmp_29_1_cast_fu_9625_p1() {
    tmp_29_1_cast_fu_9625_p1 = esl_sext<12,11>(r_V_29_1_reg_18027.read());
}

void differentiate::thread_tmp_29_2_1_cast_fu_9637_p1() {
    tmp_29_2_1_cast_fu_9637_p1 = esl_sext<12,11>(r_V_29_2_1_reg_18137.read());
}

void differentiate::thread_tmp_29_2_2_cast_fu_9640_p1() {
    tmp_29_2_2_cast_fu_9640_p1 = esl_sext<12,11>(r_V_29_2_2_reg_18226.read());
}

void differentiate::thread_tmp_29_2_cast_fu_9631_p1() {
    tmp_29_2_cast_fu_9631_p1 = esl_sext<13,11>(r_V_29_2_reg_18054.read());
}

void differentiate::thread_tmp_29_fu_4919_p2() {
    tmp_29_fu_4919_p2 = (!tmp197_cast_fu_4916_p1.read().is_01() || !tmp194_cast_fu_4913_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp197_cast_fu_4916_p1.read()) + sc_bigint<15>(tmp194_cast_fu_4913_p1.read()));
}

void differentiate::thread_tmp_2_0_2_cast_fu_2959_p1() {
    tmp_2_0_2_cast_fu_2959_p1 = esl_sext<12,11>(r_V_2_0_2_reg_15566.read());
}

void differentiate::thread_tmp_2_1_cast_fu_2962_p1() {
    tmp_2_1_cast_fu_2962_p1 = esl_sext<12,11>(r_V_2_1_reg_14756.read());
}

void differentiate::thread_tmp_2_2_1_cast_fu_2974_p1() {
    tmp_2_2_1_cast_fu_2974_p1 = esl_sext<12,11>(r_V_2_2_1_reg_15520.read());
}

void differentiate::thread_tmp_2_2_2_cast_fu_2977_p1() {
    tmp_2_2_2_cast_fu_2977_p1 = esl_sext<12,11>(r_V_2_2_2_reg_15651.read());
}

void differentiate::thread_tmp_2_2_cast_fu_2968_p1() {
    tmp_2_2_cast_fu_2968_p1 = esl_sext<13,11>(r_V_2_2_reg_15437.read());
}

void differentiate::thread_tmp_2_fu_13832_p2() {
    tmp_2_fu_13832_p2 = (!tmp17_cast_fu_13829_p1.read().is_01() || !tmp14_cast_fu_13826_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp17_cast_fu_13829_p1.read()) + sc_bigint<15>(tmp14_cast_fu_13826_p1.read()));
}

void differentiate::thread_tmp_300_cast_fu_4156_p1() {
    tmp_300_cast_fu_4156_p1 = esl_sext<32,13>(tmp_300_fu_4151_p2.read());
}

void differentiate::thread_tmp_300_fu_4151_p2() {
    tmp_300_fu_4151_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_C);
}

void differentiate::thread_tmp_301_cast_fu_4466_p1() {
    tmp_301_cast_fu_4466_p1 = esl_sext<32,13>(tmp_301_fu_4461_p2.read());
}

void differentiate::thread_tmp_301_fu_4461_p2() {
    tmp_301_fu_4461_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_D);
}

void differentiate::thread_tmp_302_cast_fu_4776_p1() {
    tmp_302_cast_fu_4776_p1 = esl_sext<32,13>(tmp_302_fu_4771_p2.read());
}

void differentiate::thread_tmp_302_fu_4771_p2() {
    tmp_302_fu_4771_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_E);
}

void differentiate::thread_tmp_303_cast_fu_5086_p1() {
    tmp_303_cast_fu_5086_p1 = esl_sext<32,13>(tmp_303_fu_5081_p2.read());
}

void differentiate::thread_tmp_303_fu_5081_p2() {
    tmp_303_fu_5081_p2 = (tmp_288_reg_15210.read() | ap_const_lv13_F);
}

void differentiate::thread_tmp_304_cast_fu_5486_p1() {
    tmp_304_cast_fu_5486_p1 = esl_sext<32,13>(tmp_304_fu_5481_p2.read());
}

void differentiate::thread_tmp_304_fu_5481_p2() {
    tmp_304_fu_5481_p2 = (!ap_const_lv13_10.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_10) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_305_cast_fu_5745_p1() {
    tmp_305_cast_fu_5745_p1 = esl_sext<32,13>(tmp_305_fu_5740_p2.read());
}

void differentiate::thread_tmp_305_fu_5740_p2() {
    tmp_305_fu_5740_p2 = (!ap_const_lv13_11.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_11) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_306_cast_fu_6001_p1() {
    tmp_306_cast_fu_6001_p1 = esl_sext<32,13>(tmp_306_fu_5996_p2.read());
}

void differentiate::thread_tmp_306_fu_5996_p2() {
    tmp_306_fu_5996_p2 = (!ap_const_lv13_12.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_12) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_307_cast_fu_6269_p1() {
    tmp_307_cast_fu_6269_p1 = esl_sext<32,13>(tmp_307_fu_6264_p2.read());
}

void differentiate::thread_tmp_307_fu_6264_p2() {
    tmp_307_fu_6264_p2 = (!ap_const_lv13_13.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_13) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_308_cast_fu_6537_p1() {
    tmp_308_cast_fu_6537_p1 = esl_sext<32,13>(tmp_308_fu_6532_p2.read());
}

void differentiate::thread_tmp_308_fu_6532_p2() {
    tmp_308_fu_6532_p2 = (!ap_const_lv13_14.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_14) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_309_cast_fu_6801_p1() {
    tmp_309_cast_fu_6801_p1 = esl_sext<32,13>(tmp_309_fu_6796_p2.read());
}

void differentiate::thread_tmp_309_fu_6796_p2() {
    tmp_309_fu_6796_p2 = (!ap_const_lv13_15.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_15) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_30_0_2_cast_fu_9878_p1() {
    tmp_30_0_2_cast_fu_9878_p1 = esl_sext<12,11>(r_V_30_0_2_reg_18278.read());
}

void differentiate::thread_tmp_30_1_cast_fu_9881_p1() {
    tmp_30_1_cast_fu_9881_p1 = esl_sext<12,11>(r_V_30_1_reg_18121.read());
}

void differentiate::thread_tmp_30_2_1_cast_fu_9893_p1() {
    tmp_30_2_1_cast_fu_9893_p1 = esl_sext<12,11>(r_V_30_2_1_reg_18231.read());
}

void differentiate::thread_tmp_30_2_2_cast_fu_9896_p1() {
    tmp_30_2_2_cast_fu_9896_p1 = esl_sext<12,11>(r_V_30_2_2_reg_18320.read());
}

void differentiate::thread_tmp_30_2_cast_fu_9887_p1() {
    tmp_30_2_cast_fu_9887_p1 = esl_sext<13,11>(r_V_30_2_reg_18148.read());
}

void differentiate::thread_tmp_30_fu_4925_p2() {
    tmp_30_fu_4925_p2 = (!ap_const_lv15_0.is_01() || !tmp_29_fu_4919_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_29_fu_4919_p2.read()));
}

void differentiate::thread_tmp_310_cast8_fu_7057_p1() {
    tmp_310_cast8_fu_7057_p1 = esl_sext<32,13>(tmp_310_fu_7052_p2.read());
}

void differentiate::thread_tmp_310_cast_fu_6280_p1() {
    tmp_310_cast_fu_6280_p1 = esl_sext<13,11>(r_V_16_1_reg_16637.read());
}

void differentiate::thread_tmp_310_fu_7052_p2() {
    tmp_310_fu_7052_p2 = (!ap_const_lv13_16.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_16) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_311_cast_fu_7313_p1() {
    tmp_311_cast_fu_7313_p1 = esl_sext<32,13>(tmp_311_fu_7308_p2.read());
}

void differentiate::thread_tmp_311_fu_7308_p2() {
    tmp_311_fu_7308_p2 = (!ap_const_lv13_17.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_17) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_312_cast_fu_7569_p1() {
    tmp_312_cast_fu_7569_p1 = esl_sext<32,13>(tmp_312_fu_7564_p2.read());
}

void differentiate::thread_tmp_312_fu_7564_p2() {
    tmp_312_fu_7564_p2 = (!ap_const_lv13_18.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_18) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_313_cast_fu_7825_p1() {
    tmp_313_cast_fu_7825_p1 = esl_sext<32,13>(tmp_313_fu_7820_p2.read());
}

void differentiate::thread_tmp_313_fu_7820_p2() {
    tmp_313_fu_7820_p2 = (!ap_const_lv13_19.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_19) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_314_cast_fu_8081_p1() {
    tmp_314_cast_fu_8081_p1 = esl_sext<32,13>(tmp_314_fu_8076_p2.read());
}

void differentiate::thread_tmp_314_fu_8076_p2() {
    tmp_314_fu_8076_p2 = (!ap_const_lv13_1A.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1A) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_315_cast_fu_8337_p1() {
    tmp_315_cast_fu_8337_p1 = esl_sext<32,13>(tmp_315_fu_8332_p2.read());
}

void differentiate::thread_tmp_315_fu_8332_p2() {
    tmp_315_fu_8332_p2 = (!ap_const_lv13_1B.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1B) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_316_cast_fu_8593_p1() {
    tmp_316_cast_fu_8593_p1 = esl_sext<32,13>(tmp_316_fu_8588_p2.read());
}

void differentiate::thread_tmp_316_fu_8588_p2() {
    tmp_316_fu_8588_p2 = (!ap_const_lv13_1C.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1C) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_317_cast7_fu_8849_p1() {
    tmp_317_cast7_fu_8849_p1 = esl_sext<32,13>(tmp_317_fu_8844_p2.read());
}

void differentiate::thread_tmp_317_cast_fu_6286_p1() {
    tmp_317_cast_fu_6286_p1 = esl_sext<12,11>(r_V_16_2_reg_16664.read());
}

void differentiate::thread_tmp_317_fu_8844_p2() {
    tmp_317_fu_8844_p2 = (!ap_const_lv13_1D.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1D) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_318_cast_fu_9105_p1() {
    tmp_318_cast_fu_9105_p1 = esl_sext<32,13>(tmp_318_fu_9100_p2.read());
}

void differentiate::thread_tmp_318_fu_9100_p2() {
    tmp_318_fu_9100_p2 = (!ap_const_lv13_1E.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1E) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_319_cast_fu_9361_p1() {
    tmp_319_cast_fu_9361_p1 = esl_sext<32,13>(tmp_319_fu_9356_p2.read());
}

void differentiate::thread_tmp_319_fu_9356_p2() {
    tmp_319_fu_9356_p2 = (!ap_const_lv13_1F.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_1F) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_31_0_2_cast_fu_10134_p1() {
    tmp_31_0_2_cast_fu_10134_p1 = esl_sext<12,11>(r_V_31_0_2_reg_18372.read());
}

void differentiate::thread_tmp_31_1_cast_fu_10137_p1() {
    tmp_31_1_cast_fu_10137_p1 = esl_sext<12,11>(r_V_31_1_reg_18215.read());
}

void differentiate::thread_tmp_31_2_1_cast_fu_10149_p1() {
    tmp_31_2_1_cast_fu_10149_p1 = esl_sext<12,11>(r_V_31_2_1_reg_18325.read());
}

void differentiate::thread_tmp_31_2_2_cast_fu_10152_p1() {
    tmp_31_2_2_cast_fu_10152_p1 = esl_sext<12,11>(r_V_31_2_2_reg_18414.read());
}

void differentiate::thread_tmp_31_2_cast_fu_10143_p1() {
    tmp_31_2_cast_fu_10143_p1 = esl_sext<13,11>(r_V_31_2_reg_18242.read());
}

void differentiate::thread_tmp_31_fu_4931_p3() {
    tmp_31_fu_4931_p3 = (!tmp_345_fu_4905_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_345_fu_4905_p3.read()[0].to_bool())? tmp_30_fu_4925_p2.read(): tmp_29_fu_4919_p2.read());
}

void differentiate::thread_tmp_320_cast_fu_9617_p1() {
    tmp_320_cast_fu_9617_p1 = esl_sext<32,13>(tmp_320_fu_9612_p2.read());
}

void differentiate::thread_tmp_320_fu_9612_p2() {
    tmp_320_fu_9612_p2 = (!ap_const_lv13_20.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_20) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_321_cast_fu_9873_p1() {
    tmp_321_cast_fu_9873_p1 = esl_sext<32,13>(tmp_321_fu_9868_p2.read());
}

void differentiate::thread_tmp_321_fu_9868_p2() {
    tmp_321_fu_9868_p2 = (!ap_const_lv13_21.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_21) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_322_cast_fu_10129_p1() {
    tmp_322_cast_fu_10129_p1 = esl_sext<32,13>(tmp_322_fu_10124_p2.read());
}

void differentiate::thread_tmp_322_fu_10124_p2() {
    tmp_322_fu_10124_p2 = (!ap_const_lv13_22.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_22) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_323_cast_fu_10385_p1() {
    tmp_323_cast_fu_10385_p1 = esl_sext<32,13>(tmp_323_fu_10380_p2.read());
}

void differentiate::thread_tmp_323_fu_10380_p2() {
    tmp_323_fu_10380_p2 = (!ap_const_lv13_23.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_23) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_324_cast_fu_10645_p1() {
    tmp_324_cast_fu_10645_p1 = esl_sext<32,13>(tmp_324_fu_10640_p2.read());
}

void differentiate::thread_tmp_324_fu_10640_p2() {
    tmp_324_fu_10640_p2 = (!ap_const_lv13_24.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_24) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_325_cast_fu_10913_p1() {
    tmp_325_cast_fu_10913_p1 = esl_sext<32,13>(tmp_325_fu_10908_p2.read());
}

void differentiate::thread_tmp_325_fu_10908_p2() {
    tmp_325_fu_10908_p2 = (!ap_const_lv13_25.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_25) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_326_cast_fu_11182_p1() {
    tmp_326_cast_fu_11182_p1 = esl_sext<32,13>(tmp_326_fu_11177_p2.read());
}

void differentiate::thread_tmp_326_fu_11177_p2() {
    tmp_326_fu_11177_p2 = (!ap_const_lv13_26.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_26) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_327_cast_fu_11446_p1() {
    tmp_327_cast_fu_11446_p1 = esl_sext<32,13>(tmp_327_fu_11441_p2.read());
}

void differentiate::thread_tmp_327_fu_11441_p2() {
    tmp_327_fu_11441_p2 = (!ap_const_lv13_27.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_27) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_328_cast_fu_11702_p1() {
    tmp_328_cast_fu_11702_p1 = esl_sext<32,13>(tmp_328_fu_11697_p2.read());
}

void differentiate::thread_tmp_328_fu_11697_p2() {
    tmp_328_fu_11697_p2 = (!ap_const_lv13_28.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_28) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_329_cast6_fu_11958_p1() {
    tmp_329_cast6_fu_11958_p1 = esl_sext<32,13>(tmp_329_fu_11953_p2.read());
}

void differentiate::thread_tmp_329_cast_fu_6548_p1() {
    tmp_329_cast_fu_6548_p1 = esl_sext<13,11>(r_V_17_1_reg_16731.read());
}

void differentiate::thread_tmp_329_fu_11953_p2() {
    tmp_329_fu_11953_p2 = (!ap_const_lv13_29.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_29) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_32_0_2_cast_fu_10390_p1() {
    tmp_32_0_2_cast_fu_10390_p1 = esl_sext<12,11>(r_V_32_0_2_reg_18466.read());
}

void differentiate::thread_tmp_32_1_cast_fu_10393_p1() {
    tmp_32_1_cast_fu_10393_p1 = esl_sext<12,11>(r_V_32_1_reg_18309.read());
}

void differentiate::thread_tmp_32_2_1_cast_fu_10405_p1() {
    tmp_32_2_1_cast_fu_10405_p1 = esl_sext<12,11>(r_V_32_2_1_reg_18419.read());
}

void differentiate::thread_tmp_32_2_2_cast_fu_10408_p1() {
    tmp_32_2_2_cast_fu_10408_p1 = esl_sext<12,11>(r_V_32_2_2_reg_18508.read());
}

void differentiate::thread_tmp_32_2_cast_fu_10399_p1() {
    tmp_32_2_cast_fu_10399_p1 = esl_sext<13,11>(r_V_32_2_reg_18336.read());
}

void differentiate::thread_tmp_32_cast_fu_2735_p1() {
    tmp_32_cast_fu_2735_p1 = esl_sext<12,11>(r_V_1_2_reg_15369.read());
}

void differentiate::thread_tmp_32_fu_5117_p2() {
    tmp_32_fu_5117_p2 = (!tmp217_cast_fu_5114_p1.read().is_01() || !tmp214_cast_fu_5111_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp217_cast_fu_5114_p1.read()) + sc_bigint<15>(tmp214_cast_fu_5111_p1.read()));
}

void differentiate::thread_tmp_330_cast_fu_12214_p1() {
    tmp_330_cast_fu_12214_p1 = esl_sext<32,13>(tmp_330_fu_12209_p2.read());
}

void differentiate::thread_tmp_330_fu_12209_p2() {
    tmp_330_fu_12209_p2 = (!ap_const_lv13_2A.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2A) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_331_cast_fu_12470_p1() {
    tmp_331_cast_fu_12470_p1 = esl_sext<32,13>(tmp_331_fu_12465_p2.read());
}

void differentiate::thread_tmp_331_fu_12465_p2() {
    tmp_331_fu_12465_p2 = (!ap_const_lv13_2B.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2B) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_332_cast_fu_12726_p1() {
    tmp_332_cast_fu_12726_p1 = esl_sext<32,13>(tmp_332_fu_12721_p2.read());
}

void differentiate::thread_tmp_332_fu_12721_p2() {
    tmp_332_fu_12721_p2 = (!ap_const_lv13_2C.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2C) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_333_cast_fu_12982_p1() {
    tmp_333_cast_fu_12982_p1 = esl_sext<32,13>(tmp_333_fu_12977_p2.read());
}

void differentiate::thread_tmp_333_fu_12977_p2() {
    tmp_333_fu_12977_p2 = (!ap_const_lv13_2D.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2D) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_334_cast_fu_13238_p1() {
    tmp_334_cast_fu_13238_p1 = esl_sext<32,13>(tmp_334_fu_13233_p2.read());
}

void differentiate::thread_tmp_334_fu_13233_p2() {
    tmp_334_fu_13233_p2 = (!ap_const_lv13_2E.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2E) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_335_cast_fu_13457_p1() {
    tmp_335_cast_fu_13457_p1 = esl_sext<32,13>(tmp_335_fu_13452_p2.read());
}

void differentiate::thread_tmp_335_fu_13452_p2() {
    tmp_335_fu_13452_p2 = (!ap_const_lv13_2F.is_01() || !tmp_288_reg_15210.read().is_01())? sc_lv<13>(): (sc_biguint<13>(ap_const_lv13_2F) + sc_biguint<13>(tmp_288_reg_15210.read()));
}

void differentiate::thread_tmp_336_cast_fu_6554_p1() {
    tmp_336_cast_fu_6554_p1 = esl_sext<12,11>(r_V_17_2_reg_16758.read());
}

void differentiate::thread_tmp_336_fu_13818_p3() {
    tmp_336_fu_13818_p3 = temp_result_V_1_0_2_2_fu_13812_p2.read().range(14, 14);
}

void differentiate::thread_tmp_337_fu_2883_p3() {
    tmp_337_fu_2883_p3 = temp_result_V_1_1_2_2_fu_2877_p2.read().range(14, 14);
}

void differentiate::thread_tmp_338_fu_3863_p3() {
    tmp_338_fu_3863_p3 = temp_result_V_1_2_2_2_fu_3857_p2.read().range(14, 14);
}

void differentiate::thread_tmp_339_fu_3975_p3() {
    tmp_339_fu_3975_p3 = temp_result_V_1_3_2_2_fu_3969_p2.read().range(14, 14);
}

void differentiate::thread_tmp_33_0_2_cast_fu_10650_p1() {
    tmp_33_0_2_cast_fu_10650_p1 = esl_sext<12,11>(r_V_33_0_2_reg_18560.read());
}

void differentiate::thread_tmp_33_1_cast_fu_10653_p1() {
    tmp_33_1_cast_fu_10653_p1 = esl_sext<12,11>(r_V_33_1_reg_18403.read());
}

void differentiate::thread_tmp_33_2_1_cast_fu_10665_p1() {
    tmp_33_2_1_cast_fu_10665_p1 = esl_sext<12,11>(r_V_33_2_1_reg_18513.read());
}

void differentiate::thread_tmp_33_2_2_cast_fu_10668_p1() {
    tmp_33_2_2_cast_fu_10668_p1 = esl_sext<12,11>(r_V_33_2_2_reg_18616.read());
}

void differentiate::thread_tmp_33_2_cast_fu_10659_p1() {
    tmp_33_2_cast_fu_10659_p1 = esl_sext<13,11>(r_V_33_2_reg_18430.read());
}

void differentiate::thread_tmp_33_fu_5123_p2() {
    tmp_33_fu_5123_p2 = (!ap_const_lv15_0.is_01() || !tmp_32_fu_5117_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_32_fu_5117_p2.read()));
}

void differentiate::thread_tmp_340_fu_4173_p3() {
    tmp_340_fu_4173_p3 = temp_result_V_1_4_2_2_fu_4167_p2.read().range(14, 14);
}

void differentiate::thread_tmp_341_fu_4285_p3() {
    tmp_341_fu_4285_p3 = temp_result_V_1_5_2_2_fu_4279_p2.read().range(14, 14);
}

void differentiate::thread_tmp_342_fu_4483_p3() {
    tmp_342_fu_4483_p3 = temp_result_V_1_6_2_2_fu_4477_p2.read().range(14, 14);
}

void differentiate::thread_tmp_343_fu_4595_p3() {
    tmp_343_fu_4595_p3 = temp_result_V_1_7_2_2_fu_4589_p2.read().range(14, 14);
}

void differentiate::thread_tmp_344_fu_4793_p3() {
    tmp_344_fu_4793_p3 = temp_result_V_1_8_2_2_fu_4787_p2.read().range(14, 14);
}

void differentiate::thread_tmp_345_fu_4905_p3() {
    tmp_345_fu_4905_p3 = temp_result_V_1_9_2_2_fu_4899_p2.read().range(14, 14);
}

void differentiate::thread_tmp_346_fu_5103_p3() {
    tmp_346_fu_5103_p3 = temp_result_V_1_10_2_2_fu_5097_p2.read().range(14, 14);
}

void differentiate::thread_tmp_347_fu_5215_p3() {
    tmp_347_fu_5215_p3 = temp_result_V_1_11_2_2_fu_5209_p2.read().range(14, 14);
}

void differentiate::thread_tmp_348_cast_fu_6812_p1() {
    tmp_348_cast_fu_6812_p1 = esl_sext<13,11>(r_V_18_1_reg_16846.read());
}

void differentiate::thread_tmp_348_fu_5415_p3() {
    tmp_348_fu_5415_p3 = temp_result_V_1_12_2_2_fu_5409_p2.read().range(14, 14);
}

void differentiate::thread_tmp_349_fu_5647_p3() {
    tmp_349_fu_5647_p3 = temp_result_V_1_13_2_2_fu_5641_p2.read().range(14, 14);
}

void differentiate::thread_tmp_34_0_2_cast_fu_10918_p1() {
    tmp_34_0_2_cast_fu_10918_p1 = esl_sext<12,11>(r_V_34_0_2_reg_18668.read());
}

void differentiate::thread_tmp_34_1_cast_fu_10921_p1() {
    tmp_34_1_cast_fu_10921_p1 = esl_sext<12,11>(r_V_34_1_reg_18497.read());
}

void differentiate::thread_tmp_34_2_1_cast_fu_10933_p1() {
    tmp_34_2_1_cast_fu_10933_p1 = esl_sext<12,11>(r_V_34_2_1_reg_18621.read());
}

void differentiate::thread_tmp_34_2_2_cast_fu_10936_p1() {
    tmp_34_2_2_cast_fu_10936_p1 = esl_sext<12,11>(r_V_34_2_2_reg_18724.read());
}

void differentiate::thread_tmp_34_2_cast_fu_10927_p1() {
    tmp_34_2_cast_fu_10927_p1 = esl_sext<13,11>(r_V_34_2_reg_18524.read());
}

void differentiate::thread_tmp_34_fu_5129_p3() {
    tmp_34_fu_5129_p3 = (!tmp_346_fu_5103_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_346_fu_5103_p3.read()[0].to_bool())? tmp_33_fu_5123_p2.read(): tmp_32_fu_5117_p2.read());
}

void differentiate::thread_tmp_350_fu_5903_p3() {
    tmp_350_fu_5903_p3 = temp_result_V_1_14_2_2_fu_5897_p2.read().range(14, 14);
}

void differentiate::thread_tmp_351_fu_6163_p3() {
    tmp_351_fu_6163_p3 = temp_result_V_1_15_2_2_fu_6157_p2.read().range(14, 14);
}

void differentiate::thread_tmp_352_fu_6431_p3() {
    tmp_352_fu_6431_p3 = temp_result_V_1_16_2_2_fu_6425_p2.read().range(14, 14);
}

void differentiate::thread_tmp_353_fu_6695_p3() {
    tmp_353_fu_6695_p3 = temp_result_V_1_17_2_2_fu_6689_p2.read().range(14, 14);
}

void differentiate::thread_tmp_354_fu_6959_p3() {
    tmp_354_fu_6959_p3 = temp_result_V_1_18_2_2_fu_6953_p2.read().range(14, 14);
}

void differentiate::thread_tmp_355_cast_fu_6818_p1() {
    tmp_355_cast_fu_6818_p1 = esl_sext<12,11>(r_V_18_2_reg_16915.read());
}

void differentiate::thread_tmp_355_fu_7215_p3() {
    tmp_355_fu_7215_p3 = temp_result_V_1_19_2_2_fu_7209_p2.read().range(14, 14);
}

void differentiate::thread_tmp_356_fu_7471_p3() {
    tmp_356_fu_7471_p3 = temp_result_V_1_20_2_2_fu_7465_p2.read().range(14, 14);
}

void differentiate::thread_tmp_357_fu_7727_p3() {
    tmp_357_fu_7727_p3 = temp_result_V_1_21_2_2_fu_7721_p2.read().range(14, 14);
}

void differentiate::thread_tmp_358_fu_7983_p3() {
    tmp_358_fu_7983_p3 = temp_result_V_1_22_2_2_fu_7977_p2.read().range(14, 14);
}

void differentiate::thread_tmp_359_fu_8239_p3() {
    tmp_359_fu_8239_p3 = temp_result_V_1_23_2_2_fu_8233_p2.read().range(14, 14);
}

void differentiate::thread_tmp_35_0_2_cast_fu_11187_p1() {
    tmp_35_0_2_cast_fu_11187_p1 = esl_sext<12,11>(r_V_35_0_2_reg_18817.read());
}

void differentiate::thread_tmp_35_1_cast_fu_11190_p1() {
    tmp_35_1_cast_fu_11190_p1 = esl_sext<12,11>(r_V_35_1_reg_18605.read());
}

void differentiate::thread_tmp_35_2_1_cast_fu_11202_p1() {
    tmp_35_2_1_cast_fu_11202_p1 = esl_sext<12,11>(r_V_35_2_1_reg_18743.read());
}

void differentiate::thread_tmp_35_2_2_cast_fu_11205_p1() {
    tmp_35_2_2_cast_fu_11205_p1 = esl_sext<12,11>(r_V_35_2_2_reg_18872.read());
}

void differentiate::thread_tmp_35_2_cast_fu_11196_p1() {
    tmp_35_2_cast_fu_11196_p1 = esl_sext<13,11>(r_V_35_2_reg_18632.read());
}

void differentiate::thread_tmp_35_fu_5229_p2() {
    tmp_35_fu_5229_p2 = (!tmp237_cast_fu_5226_p1.read().is_01() || !tmp234_cast_fu_5223_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp237_cast_fu_5226_p1.read()) + sc_bigint<15>(tmp234_cast_fu_5223_p1.read()));
}

void differentiate::thread_tmp_360_fu_8495_p3() {
    tmp_360_fu_8495_p3 = temp_result_V_1_24_2_2_fu_8489_p2.read().range(14, 14);
}

void differentiate::thread_tmp_361_fu_8751_p3() {
    tmp_361_fu_8751_p3 = temp_result_V_1_25_2_2_fu_8745_p2.read().range(14, 14);
}

void differentiate::thread_tmp_367_cast_fu_7068_p1() {
    tmp_367_cast_fu_7068_p1 = esl_sext<13,11>(r_V_19_1_reg_17024.read());
}

void differentiate::thread_tmp_368_fu_9007_p3() {
    tmp_368_fu_9007_p3 = temp_result_V_1_26_2_2_fu_9001_p2.read().range(14, 14);
}

void differentiate::thread_tmp_36_0_2_cast_fu_11451_p1() {
    tmp_36_0_2_cast_fu_11451_p1 = esl_sext<12,11>(r_V_36_0_2_reg_18937.read());
}

void differentiate::thread_tmp_36_1_cast_fu_11454_p1() {
    tmp_36_1_cast_fu_11454_p1 = esl_sext<12,11>(r_V_36_1_reg_18713.read());
}

void differentiate::thread_tmp_36_2_1_cast_fu_11466_p1() {
    tmp_36_2_1_cast_fu_11466_p1 = esl_sext<12,11>(r_V_36_2_1_reg_18890.read());
}

void differentiate::thread_tmp_36_2_2_cast_fu_11469_p1() {
    tmp_36_2_2_cast_fu_11469_p1 = esl_sext<12,11>(r_V_36_2_2_reg_19005.read());
}

void differentiate::thread_tmp_36_2_cast_fu_11460_p1() {
    tmp_36_2_cast_fu_11460_p1 = esl_sext<13,11>(r_V_36_2_reg_18767.read());
}

void differentiate::thread_tmp_36_fu_5235_p2() {
    tmp_36_fu_5235_p2 = (!ap_const_lv15_0.is_01() || !tmp_35_fu_5229_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_35_fu_5229_p2.read()));
}

void differentiate::thread_tmp_374_cast_fu_7074_p1() {
    tmp_374_cast_fu_7074_p1 = esl_sext<12,11>(r_V_19_2_reg_17072.read());
}

void differentiate::thread_tmp_37_0_2_cast_fu_11707_p1() {
    tmp_37_0_2_cast_fu_11707_p1 = esl_sext<12,11>(r_V_37_0_2_reg_19057.read());
}

void differentiate::thread_tmp_37_1_cast_fu_11710_p1() {
    tmp_37_1_cast_fu_11710_p1 = esl_sext<12,11>(r_V_37_1_reg_18861.read());
}

void differentiate::thread_tmp_37_2_1_cast_fu_11722_p1() {
    tmp_37_2_1_cast_fu_11722_p1 = esl_sext<12,11>(r_V_37_2_1_reg_19010.read());
}

void differentiate::thread_tmp_37_2_2_cast_fu_11725_p1() {
    tmp_37_2_2_cast_fu_11725_p1 = esl_sext<12,11>(r_V_37_2_2_reg_19099.read());
}

void differentiate::thread_tmp_37_2_cast_fu_11716_p1() {
    tmp_37_2_cast_fu_11716_p1 = esl_sext<13,11>(r_V_37_2_reg_18901.read());
}

void differentiate::thread_tmp_37_fu_5241_p3() {
    tmp_37_fu_5241_p3 = (!tmp_347_fu_5215_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_347_fu_5215_p3.read()[0].to_bool())? tmp_36_fu_5235_p2.read(): tmp_35_fu_5229_p2.read());
}

void differentiate::thread_tmp_380_fu_9263_p3() {
    tmp_380_fu_9263_p3 = temp_result_V_1_27_2_2_fu_9257_p2.read().range(14, 14);
}

void differentiate::thread_tmp_386_cast_fu_7324_p1() {
    tmp_386_cast_fu_7324_p1 = esl_sext<13,11>(r_V_20_1_reg_17160.read());
}

void differentiate::thread_tmp_38_0_2_cast_fu_11963_p1() {
    tmp_38_0_2_cast_fu_11963_p1 = esl_sext<12,11>(r_V_38_0_2_reg_19151.read());
}

void differentiate::thread_tmp_38_1_cast_fu_11966_p1() {
    tmp_38_1_cast_fu_11966_p1 = esl_sext<12,11>(r_V_38_1_reg_18981.read());
}

void differentiate::thread_tmp_38_2_1_cast_fu_11978_p1() {
    tmp_38_2_1_cast_fu_11978_p1 = esl_sext<12,11>(r_V_38_2_1_reg_19104.read());
}

void differentiate::thread_tmp_38_2_2_cast_fu_11981_p1() {
    tmp_38_2_2_cast_fu_11981_p1 = esl_sext<12,11>(r_V_38_2_2_reg_19193.read());
}

void differentiate::thread_tmp_38_2_cast_fu_11972_p1() {
    tmp_38_2_cast_fu_11972_p1 = esl_sext<13,11>(r_V_38_2_reg_19021.read());
}

void differentiate::thread_tmp_38_fu_5429_p2() {
    tmp_38_fu_5429_p2 = (!tmp257_cast_fu_5426_p1.read().is_01() || !tmp254_cast_fu_5423_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp257_cast_fu_5426_p1.read()) + sc_bigint<15>(tmp254_cast_fu_5423_p1.read()));
}

void differentiate::thread_tmp_392_fu_9519_p3() {
    tmp_392_fu_9519_p3 = temp_result_V_1_28_2_2_fu_9513_p2.read().range(14, 14);
}

void differentiate::thread_tmp_393_cast_fu_7330_p1() {
    tmp_393_cast_fu_7330_p1 = esl_sext<12,11>(r_V_20_2_reg_17208.read());
}

void differentiate::thread_tmp_39_0_2_cast_fu_12219_p1() {
    tmp_39_0_2_cast_fu_12219_p1 = esl_sext<12,11>(r_V_39_0_2_reg_19245.read());
}

void differentiate::thread_tmp_39_1_cast_fu_12222_p1() {
    tmp_39_1_cast_fu_12222_p1 = esl_sext<12,11>(r_V_39_1_reg_19088.read());
}

void differentiate::thread_tmp_39_2_1_cast_fu_12234_p1() {
    tmp_39_2_1_cast_fu_12234_p1 = esl_sext<12,11>(r_V_39_2_1_reg_19198.read());
}

void differentiate::thread_tmp_39_2_2_cast_fu_12237_p1() {
    tmp_39_2_2_cast_fu_12237_p1 = esl_sext<12,11>(r_V_39_2_2_reg_19287.read());
}

void differentiate::thread_tmp_39_2_cast_fu_12228_p1() {
    tmp_39_2_cast_fu_12228_p1 = esl_sext<13,11>(r_V_39_2_reg_19115.read());
}

void differentiate::thread_tmp_39_fu_5435_p2() {
    tmp_39_fu_5435_p2 = (!ap_const_lv15_0.is_01() || !tmp_38_fu_5429_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_38_fu_5429_p2.read()));
}

void differentiate::thread_tmp_3_0_2_cast_fu_3109_p1() {
    tmp_3_0_2_cast_fu_3109_p1 = esl_sext<12,11>(r_V_3_0_2_reg_15708.read());
}

void differentiate::thread_tmp_3_1_cast_fu_3112_p1() {
    tmp_3_1_cast_fu_3112_p1 = esl_sext<12,11>(r_V_3_1_reg_14817.read());
}

void differentiate::thread_tmp_3_2_1_cast_fu_3124_p1() {
    tmp_3_2_1_cast_fu_3124_p1 = esl_sext<12,11>(r_V_3_2_1_reg_15656.read());
}

void differentiate::thread_tmp_3_2_2_cast_fu_3127_p1() {
    tmp_3_2_2_cast_fu_3127_p1 = esl_sext<12,11>(r_V_3_2_2_reg_15729.read());
}

void differentiate::thread_tmp_3_2_cast_fu_3118_p1() {
    tmp_3_2_cast_fu_3118_p1 = esl_sext<13,11>(r_V_3_2_reg_15525.read());
}

void differentiate::thread_tmp_3_fu_13838_p2() {
    tmp_3_fu_13838_p2 = (!ap_const_lv15_0.is_01() || !tmp_2_fu_13832_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_2_fu_13832_p2.read()));
}

void differentiate::thread_tmp_404_fu_9775_p3() {
    tmp_404_fu_9775_p3 = temp_result_V_1_29_2_2_fu_9769_p2.read().range(14, 14);
}

void differentiate::thread_tmp_405_cast_fu_7580_p1() {
    tmp_405_cast_fu_7580_p1 = esl_sext<13,11>(r_V_21_1_reg_17275.read());
}

void differentiate::thread_tmp_40_0_2_cast_fu_12475_p1() {
    tmp_40_0_2_cast_fu_12475_p1 = esl_sext<12,11>(r_V_40_0_2_reg_19339.read());
}

void differentiate::thread_tmp_40_1_cast_fu_12478_p1() {
    tmp_40_1_cast_fu_12478_p1 = esl_sext<12,11>(r_V_40_1_reg_19182.read());
}

void differentiate::thread_tmp_40_2_1_cast_fu_12490_p1() {
    tmp_40_2_1_cast_fu_12490_p1 = esl_sext<12,11>(r_V_40_2_1_reg_19292.read());
}

void differentiate::thread_tmp_40_2_2_cast_fu_12493_p1() {
    tmp_40_2_2_cast_fu_12493_p1 = esl_sext<12,11>(r_V_40_2_2_reg_19381.read());
}

void differentiate::thread_tmp_40_2_cast_fu_12484_p1() {
    tmp_40_2_cast_fu_12484_p1 = esl_sext<13,11>(r_V_40_2_reg_19209.read());
}

void differentiate::thread_tmp_40_fu_5441_p3() {
    tmp_40_fu_5441_p3 = (!tmp_348_fu_5415_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_348_fu_5415_p3.read()[0].to_bool())? tmp_39_fu_5435_p2.read(): tmp_38_fu_5429_p2.read());
}

void differentiate::thread_tmp_412_cast_fu_7586_p1() {
    tmp_412_cast_fu_7586_p1 = esl_sext<12,11>(r_V_21_2_reg_17302.read());
}

void differentiate::thread_tmp_416_fu_10031_p3() {
    tmp_416_fu_10031_p3 = temp_result_V_1_30_2_2_fu_10025_p2.read().range(14, 14);
}

void differentiate::thread_tmp_41_0_2_cast_fu_12731_p1() {
    tmp_41_0_2_cast_fu_12731_p1 = esl_sext<12,11>(r_V_41_0_2_reg_19433.read());
}

void differentiate::thread_tmp_41_1_cast_fu_12734_p1() {
    tmp_41_1_cast_fu_12734_p1 = esl_sext<12,11>(r_V_41_1_reg_19276.read());
}

void differentiate::thread_tmp_41_2_1_cast_fu_12746_p1() {
    tmp_41_2_1_cast_fu_12746_p1 = esl_sext<12,11>(r_V_41_2_1_reg_19386.read());
}

void differentiate::thread_tmp_41_2_2_cast_fu_12749_p1() {
    tmp_41_2_2_cast_fu_12749_p1 = esl_sext<12,11>(r_V_41_2_2_reg_19475.read());
}

void differentiate::thread_tmp_41_2_cast_fu_12740_p1() {
    tmp_41_2_cast_fu_12740_p1 = esl_sext<13,11>(r_V_41_2_reg_19303.read());
}

void differentiate::thread_tmp_41_fu_5661_p2() {
    tmp_41_fu_5661_p2 = (!tmp277_cast_fu_5658_p1.read().is_01() || !tmp274_cast_fu_5655_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp277_cast_fu_5658_p1.read()) + sc_bigint<15>(tmp274_cast_fu_5655_p1.read()));
}

void differentiate::thread_tmp_424_cast_fu_7836_p1() {
    tmp_424_cast_fu_7836_p1 = esl_sext<13,11>(r_V_22_1_reg_17369.read());
}

void differentiate::thread_tmp_428_fu_10287_p3() {
    tmp_428_fu_10287_p3 = temp_result_V_1_31_2_2_fu_10281_p2.read().range(14, 14);
}

void differentiate::thread_tmp_42_0_2_cast_fu_12987_p1() {
    tmp_42_0_2_cast_fu_12987_p1 = esl_sext<12,11>(r_V_42_0_2_reg_19527.read());
}

void differentiate::thread_tmp_42_1_cast_fu_12990_p1() {
    tmp_42_1_cast_fu_12990_p1 = esl_sext<12,11>(r_V_42_1_reg_19370.read());
}

void differentiate::thread_tmp_42_2_1_cast_fu_13002_p1() {
    tmp_42_2_1_cast_fu_13002_p1 = esl_sext<12,11>(r_V_42_2_1_reg_19480.read());
}

void differentiate::thread_tmp_42_2_2_cast_fu_13005_p1() {
    tmp_42_2_2_cast_fu_13005_p1 = esl_sext<12,11>(r_V_42_2_2_reg_19569.read());
}

void differentiate::thread_tmp_42_2_cast_fu_12996_p1() {
    tmp_42_2_cast_fu_12996_p1 = esl_sext<13,11>(r_V_42_2_reg_19397.read());
}

void differentiate::thread_tmp_42_fu_5667_p2() {
    tmp_42_fu_5667_p2 = (!ap_const_lv15_0.is_01() || !tmp_41_fu_5661_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_41_fu_5661_p2.read()));
}

void differentiate::thread_tmp_431_cast_fu_7842_p1() {
    tmp_431_cast_fu_7842_p1 = esl_sext<12,11>(r_V_22_2_reg_17396.read());
}

void differentiate::thread_tmp_43_0_2_cast_fu_13243_p1() {
    tmp_43_0_2_cast_fu_13243_p1 = esl_sext<12,11>(r_V_43_0_2_reg_19621.read());
}

void differentiate::thread_tmp_43_1_cast_fu_13246_p1() {
    tmp_43_1_cast_fu_13246_p1 = esl_sext<12,11>(r_V_43_1_reg_19464.read());
}

void differentiate::thread_tmp_43_2_1_cast_fu_13258_p1() {
    tmp_43_2_1_cast_fu_13258_p1 = esl_sext<12,11>(r_V_43_2_1_reg_19574.read());
}

void differentiate::thread_tmp_43_2_2_cast_fu_13261_p1() {
    tmp_43_2_2_cast_fu_13261_p1 = esl_sext<12,11>(r_V_43_2_2_reg_19663.read());
}

void differentiate::thread_tmp_43_2_cast_fu_13252_p1() {
    tmp_43_2_cast_fu_13252_p1 = esl_sext<13,11>(r_V_43_2_reg_19491.read());
}

void differentiate::thread_tmp_43_fu_5673_p3() {
    tmp_43_fu_5673_p3 = (!tmp_349_fu_5647_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_349_fu_5647_p3.read()[0].to_bool())? tmp_42_fu_5667_p2.read(): tmp_41_fu_5661_p2.read());
}

void differentiate::thread_tmp_440_fu_10543_p3() {
    tmp_440_fu_10543_p3 = temp_result_V_1_32_2_2_fu_10537_p2.read().range(14, 14);
}

void differentiate::thread_tmp_443_cast_fu_8092_p1() {
    tmp_443_cast_fu_8092_p1 = esl_sext<13,11>(r_V_23_1_reg_17463.read());
}

void differentiate::thread_tmp_44_0_2_cast_fu_13483_p1() {
    tmp_44_0_2_cast_fu_13483_p1 = esl_sext<12,11>(r_V_44_0_2_reg_19710.read());
}

void differentiate::thread_tmp_44_1_cast_fu_13486_p1() {
    tmp_44_1_cast_fu_13486_p1 = esl_sext<12,11>(r_V_44_1_reg_19558.read());
}

void differentiate::thread_tmp_44_2_1_cast_fu_13498_p1() {
    tmp_44_2_1_cast_fu_13498_p1 = esl_sext<12,11>(r_V_44_2_1_reg_19668.read());
}

void differentiate::thread_tmp_44_2_2_cast_fu_13501_p1() {
    tmp_44_2_2_cast_fu_13501_p1 = esl_sext<12,11>(r_V_44_2_2_reg_19746.read());
}

void differentiate::thread_tmp_44_2_cast_fu_13492_p1() {
    tmp_44_2_cast_fu_13492_p1 = esl_sext<13,11>(r_V_44_2_reg_19585.read());
}

void differentiate::thread_tmp_44_cast_fu_2965_p1() {
    tmp_44_cast_fu_2965_p1 = esl_sext<13,11>(r_V_2_1_reg_14756.read());
}

void differentiate::thread_tmp_44_fu_5917_p2() {
    tmp_44_fu_5917_p2 = (!tmp297_cast_fu_5914_p1.read().is_01() || !tmp294_cast_fu_5911_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp297_cast_fu_5914_p1.read()) + sc_bigint<15>(tmp294_cast_fu_5911_p1.read()));
}

void differentiate::thread_tmp_450_cast_fu_8098_p1() {
    tmp_450_cast_fu_8098_p1 = esl_sext<12,11>(r_V_23_2_reg_17490.read());
}

void differentiate::thread_tmp_452_fu_10807_p3() {
    tmp_452_fu_10807_p3 = temp_result_V_1_33_2_2_fu_10801_p2.read().range(14, 14);
}

void differentiate::thread_tmp_45_0_2_cast_fu_13715_p1() {
    tmp_45_0_2_cast_fu_13715_p1 = esl_sext<12,11>(r_V_45_0_2_reg_19787.read());
}

void differentiate::thread_tmp_45_1_cast_fu_13718_p1() {
    tmp_45_1_cast_fu_13718_p1 = esl_sext<12,11>(r_V_45_1_reg_19652.read());
}

void differentiate::thread_tmp_45_2_1_cast_fu_13730_p1() {
    tmp_45_2_1_cast_fu_13730_p1 = esl_sext<12,11>(r_V_45_2_1_reg_19751.read());
}

void differentiate::thread_tmp_45_2_2_cast_fu_13733_p1() {
    tmp_45_2_2_cast_fu_13733_p1 = esl_sext<12,11>(r_V_45_2_2_reg_19802.read());
}

void differentiate::thread_tmp_45_2_cast_fu_13724_p1() {
    tmp_45_2_cast_fu_13724_p1 = esl_sext<13,11>(r_V_45_2_reg_19679.read());
}

void differentiate::thread_tmp_45_fu_5923_p2() {
    tmp_45_fu_5923_p2 = (!ap_const_lv15_0.is_01() || !tmp_44_fu_5917_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_44_fu_5917_p2.read()));
}

void differentiate::thread_tmp_462_cast_fu_8348_p1() {
    tmp_462_cast_fu_8348_p1 = esl_sext<13,11>(r_V_24_1_reg_17557.read());
}

void differentiate::thread_tmp_464_fu_11075_p3() {
    tmp_464_fu_11075_p3 = temp_result_V_1_34_2_2_fu_11069_p2.read().range(14, 14);
}

void differentiate::thread_tmp_469_cast_fu_8354_p1() {
    tmp_469_cast_fu_8354_p1 = esl_sext<12,11>(r_V_24_2_reg_17584.read());
}

void differentiate::thread_tmp_46_fu_5929_p3() {
    tmp_46_fu_5929_p3 = (!tmp_350_fu_5903_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_350_fu_5903_p3.read()[0].to_bool())? tmp_45_fu_5923_p2.read(): tmp_44_fu_5917_p2.read());
}

void differentiate::thread_tmp_476_fu_11340_p3() {
    tmp_476_fu_11340_p3 = temp_result_V_1_35_2_2_fu_11334_p2.read().range(14, 14);
}

void differentiate::thread_tmp_47_fu_6177_p2() {
    tmp_47_fu_6177_p2 = (!tmp317_cast_fu_6174_p1.read().is_01() || !tmp314_cast_fu_6171_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp317_cast_fu_6174_p1.read()) + sc_bigint<15>(tmp314_cast_fu_6171_p1.read()));
}

void differentiate::thread_tmp_481_cast_fu_8604_p1() {
    tmp_481_cast_fu_8604_p1 = esl_sext<13,11>(r_V_25_1_reg_17651.read());
}

void differentiate::thread_tmp_488_cast_fu_8610_p1() {
    tmp_488_cast_fu_8610_p1 = esl_sext<12,11>(r_V_25_2_reg_17678.read());
}

void differentiate::thread_tmp_488_fu_11604_p3() {
    tmp_488_fu_11604_p3 = temp_result_V_1_36_2_2_fu_11598_p2.read().range(14, 14);
}

void differentiate::thread_tmp_48_fu_6183_p2() {
    tmp_48_fu_6183_p2 = (!ap_const_lv15_0.is_01() || !tmp_47_fu_6177_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_47_fu_6177_p2.read()));
}

void differentiate::thread_tmp_49_fu_6189_p3() {
    tmp_49_fu_6189_p3 = (!tmp_351_fu_6163_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_351_fu_6163_p3.read()[0].to_bool())? tmp_48_fu_6183_p2.read(): tmp_47_fu_6177_p2.read());
}

void differentiate::thread_tmp_4_0_2_cast_fu_3259_p1() {
    tmp_4_0_2_cast_fu_3259_p1 = esl_sext<12,11>(r_V_4_0_2_reg_15781.read());
}

void differentiate::thread_tmp_4_1_cast_fu_3262_p1() {
    tmp_4_1_cast_fu_3262_p1 = esl_sext<12,11>(r_V_4_1_reg_14828.read());
}

void differentiate::thread_tmp_4_2_1_cast_fu_3274_p1() {
    tmp_4_2_1_cast_fu_3274_p1 = esl_sext<12,11>(r_V_4_2_1_reg_15734.read());
}

void differentiate::thread_tmp_4_2_2_cast_fu_3277_p1() {
    tmp_4_2_2_cast_fu_3277_p1 = esl_sext<12,11>(r_V_4_2_2_reg_15802.read());
}

void differentiate::thread_tmp_4_2_cast_fu_3268_p1() {
    tmp_4_2_cast_fu_3268_p1 = esl_sext<13,11>(r_V_4_2_reg_15667.read());
}

void differentiate::thread_tmp_4_fu_13844_p3() {
    tmp_4_fu_13844_p3 = (!tmp_336_fu_13818_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_336_fu_13818_p3.read()[0].to_bool())? tmp_3_fu_13838_p2.read(): tmp_2_fu_13832_p2.read());
}

void differentiate::thread_tmp_500_cast_fu_8860_p1() {
    tmp_500_cast_fu_8860_p1 = esl_sext<13,11>(r_V_26_1_reg_17745.read());
}

void differentiate::thread_tmp_500_fu_11860_p3() {
    tmp_500_fu_11860_p3 = temp_result_V_1_37_2_2_fu_11854_p2.read().range(14, 14);
}

void differentiate::thread_tmp_507_cast_fu_8866_p1() {
    tmp_507_cast_fu_8866_p1 = esl_sext<12,11>(r_V_26_2_reg_17772.read());
}

void differentiate::thread_tmp_50_fu_6445_p2() {
    tmp_50_fu_6445_p2 = (!tmp337_cast_fu_6442_p1.read().is_01() || !tmp334_cast_fu_6439_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp337_cast_fu_6442_p1.read()) + sc_bigint<15>(tmp334_cast_fu_6439_p1.read()));
}

void differentiate::thread_tmp_512_fu_12116_p3() {
    tmp_512_fu_12116_p3 = temp_result_V_1_38_2_2_fu_12110_p2.read().range(14, 14);
}

void differentiate::thread_tmp_519_cast_fu_9116_p1() {
    tmp_519_cast_fu_9116_p1 = esl_sext<13,11>(r_V_27_1_reg_17839.read());
}

void differentiate::thread_tmp_51_cast_fu_2971_p1() {
    tmp_51_cast_fu_2971_p1 = esl_sext<12,11>(r_V_2_2_reg_15437.read());
}

void differentiate::thread_tmp_51_fu_6451_p2() {
    tmp_51_fu_6451_p2 = (!ap_const_lv15_0.is_01() || !tmp_50_fu_6445_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_50_fu_6445_p2.read()));
}

void differentiate::thread_tmp_524_fu_12372_p3() {
    tmp_524_fu_12372_p3 = temp_result_V_1_39_2_2_fu_12366_p2.read().range(14, 14);
}

void differentiate::thread_tmp_526_cast_fu_9122_p1() {
    tmp_526_cast_fu_9122_p1 = esl_sext<12,11>(r_V_27_2_reg_17866.read());
}

void differentiate::thread_tmp_52_fu_6457_p3() {
    tmp_52_fu_6457_p3 = (!tmp_352_fu_6431_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_352_fu_6431_p3.read()[0].to_bool())? tmp_51_fu_6451_p2.read(): tmp_50_fu_6445_p2.read());
}

void differentiate::thread_tmp_536_fu_12628_p3() {
    tmp_536_fu_12628_p3 = temp_result_V_1_40_2_2_fu_12622_p2.read().range(14, 14);
}

void differentiate::thread_tmp_538_cast_fu_9372_p1() {
    tmp_538_cast_fu_9372_p1 = esl_sext<13,11>(r_V_28_1_reg_17933.read());
}

void differentiate::thread_tmp_53_fu_6709_p2() {
    tmp_53_fu_6709_p2 = (!tmp357_cast_fu_6706_p1.read().is_01() || !tmp354_cast_fu_6703_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp357_cast_fu_6706_p1.read()) + sc_bigint<15>(tmp354_cast_fu_6703_p1.read()));
}

void differentiate::thread_tmp_545_cast_fu_9378_p1() {
    tmp_545_cast_fu_9378_p1 = esl_sext<12,11>(r_V_28_2_reg_17960.read());
}

void differentiate::thread_tmp_548_fu_12884_p3() {
    tmp_548_fu_12884_p3 = temp_result_V_1_41_2_2_fu_12878_p2.read().range(14, 14);
}

void differentiate::thread_tmp_54_fu_6715_p2() {
    tmp_54_fu_6715_p2 = (!ap_const_lv15_0.is_01() || !tmp_53_fu_6709_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_53_fu_6709_p2.read()));
}

void differentiate::thread_tmp_557_cast_fu_9628_p1() {
    tmp_557_cast_fu_9628_p1 = esl_sext<13,11>(r_V_29_1_reg_18027.read());
}

void differentiate::thread_tmp_55_fu_6721_p3() {
    tmp_55_fu_6721_p3 = (!tmp_353_fu_6695_p3.read()[0].is_01())? sc_lv<15>(): ((tmp_353_fu_6695_p3.read()[0].to_bool())? tmp_54_fu_6715_p2.read(): tmp_53_fu_6709_p2.read());
}

void differentiate::thread_tmp_560_fu_13140_p3() {
    tmp_560_fu_13140_p3 = temp_result_V_1_42_2_2_fu_13134_p2.read().range(14, 14);
}

void differentiate::thread_tmp_564_cast_fu_9634_p1() {
    tmp_564_cast_fu_9634_p1 = esl_sext<12,11>(r_V_29_2_reg_18054.read());
}

void differentiate::thread_tmp_56_fu_6973_p2() {
    tmp_56_fu_6973_p2 = (!tmp377_cast_fu_6970_p1.read().is_01() || !tmp374_cast_fu_6967_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(tmp377_cast_fu_6970_p1.read()) + sc_bigint<15>(tmp374_cast_fu_6967_p1.read()));
}

void differentiate::thread_tmp_572_fu_13396_p3() {
    tmp_572_fu_13396_p3 = temp_result_V_1_43_2_2_fu_13390_p2.read().range(14, 14);
}

void differentiate::thread_tmp_576_cast_fu_9884_p1() {
    tmp_576_cast_fu_9884_p1 = esl_sext<13,11>(r_V_30_1_reg_18121.read());
}

void differentiate::thread_tmp_57_fu_6979_p2() {
    tmp_57_fu_6979_p2 = (!ap_const_lv15_0.is_01() || !tmp_56_fu_6973_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(ap_const_lv15_0) - sc_biguint<15>(tmp_56_fu_6973_p2.read()));
}

}

