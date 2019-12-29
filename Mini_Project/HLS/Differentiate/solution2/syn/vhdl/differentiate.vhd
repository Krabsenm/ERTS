-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity differentiate is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    img_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
    img_ce0 : OUT STD_LOGIC;
    img_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    img_address1 : OUT STD_LOGIC_VECTOR (11 downto 0);
    img_ce1 : OUT STD_LOGIC;
    img_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
    window_V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    window_V_ce0 : OUT STD_LOGIC;
    window_V_q0 : IN STD_LOGIC_VECTOR (2 downto 0);
    window_V_address1 : OUT STD_LOGIC_VECTOR (3 downto 0);
    window_V_ce1 : OUT STD_LOGIC;
    window_V_q1 : IN STD_LOGIC_VECTOR (2 downto 0);
    res_V_address0 : OUT STD_LOGIC_VECTOR (11 downto 0);
    res_V_ce0 : OUT STD_LOGIC;
    res_V_we0 : OUT STD_LOGIC;
    res_V_d0 : OUT STD_LOGIC_VECTOR (14 downto 0) );
end;


architecture behav of differentiate is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "differentiate,hls_ip_2017_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=1,HLS_INPUT_PART=xc7z010clg400-1,HLS_INPUT_CLOCK=8.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=9.400000,HLS_SYN_LAT=68697,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=2,HLS_SYN_FF=765,HLS_SYN_LUT=502}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (12 downto 0) := "0000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (12 downto 0) := "0000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (12 downto 0) := "0000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (12 downto 0) := "0000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (12 downto 0) := "0000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (12 downto 0) := "0000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (12 downto 0) := "0000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (12 downto 0) := "0001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (12 downto 0) := "0010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (12 downto 0) := "0100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (12 downto 0) := "1000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv15_0 : STD_LOGIC_VECTOR (14 downto 0) := "000000000000000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv6_3F : STD_LOGIC_VECTOR (5 downto 0) := "111111";
    constant ap_const_lv12_2E : STD_LOGIC_VECTOR (11 downto 0) := "000000101110";
    constant ap_const_lv6_2F : STD_LOGIC_VECTOR (5 downto 0) := "101111";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv5_2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (12 downto 0) := "0000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_fu_191_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_reg_464 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond1_fu_185_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal grp_fu_200_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_8_reg_475 : STD_LOGIC_VECTOR (11 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal j_cast4_cast_fu_206_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal j_cast4_cast_reg_480 : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_2_cast_cast3_fu_222_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_2_cast_cast3_reg_488 : STD_LOGIC_VECTOR (12 downto 0);
    signal exitcond2_fu_210_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal res_V_addr_reg_493 : STD_LOGIC_VECTOR (11 downto 0);
    signal j_1_fu_240_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal j_1_reg_498 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_9_2_cast_cast_fu_246_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_9_2_cast_cast_reg_503 : STD_LOGIC_VECTOR (12 downto 0);
    signal i_1_fu_250_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal window_V_addr_1_reg_518 : STD_LOGIC_VECTOR (3 downto 0);
    signal window_V_addr_2_reg_523 : STD_LOGIC_VECTOR (3 downto 0);
    signal ii_1_fu_315_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal ii_1_reg_531 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_16_fu_356_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_16_reg_536 : STD_LOGIC_VECTOR (12 downto 0);
    signal exitcond3_fu_309_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_17_fu_361_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_17_reg_541 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_18_fu_366_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_18_reg_546 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_6_fu_371_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_6_reg_551 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal window_V_load_reg_566 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal img_load_reg_576 : STD_LOGIC_VECTOR (7 downto 0);
    signal img_load_1_reg_581 : STD_LOGIC_VECTOR (7 downto 0);
    signal window_V_load_1_reg_586 : STD_LOGIC_VECTOR (2 downto 0);
    signal window_V_load_2_reg_591 : STD_LOGIC_VECTOR (2 downto 0);
    signal img_load_2_reg_596 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal r_V_2_fu_395_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal r_V_2_reg_601 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal grp_fu_444_p3 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_5_reg_606 : STD_LOGIC_VECTOR (12 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal temp_result_V_1_2_fu_422_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal i_reg_139 : STD_LOGIC_VECTOR (5 downto 0);
    signal j_reg_151 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal p_s_reg_162 : STD_LOGIC_VECTOR (14 downto 0);
    signal ii_reg_174 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_9_cast_fu_235_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_11_cast_fu_282_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_12_cast_fu_293_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_13_cast_fu_304_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_17_cast_fu_377_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_18_cast_fu_381_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_19_cast_fu_385_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_200_p0 : STD_LOGIC_VECTOR (5 downto 0);
    signal grp_fu_200_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_2_fu_216_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_2_cast_cast_fu_226_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_9_fu_230_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_s_fu_264_p3 : STD_LOGIC_VECTOR (3 downto 0);
    signal p_shl_cast_fu_272_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal ii_cast2_cast_fu_260_p1 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_3_fu_276_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_10_fu_287_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_11_fu_298_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ii_cast3_fu_256_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal sum_fu_321_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_13_fu_326_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_14_fu_338_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal p_shl1_cast_fu_334_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal p_shl2_cast_fu_346_p1 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_15_fu_350_p2 : STD_LOGIC_VECTOR (12 downto 0);
    signal r_V_2_fu_395_p0 : STD_LOGIC_VECTOR (2 downto 0);
    signal r_V_2_fu_395_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_fu_452_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_cast_fu_419_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_12_fu_428_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_444_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_fu_452_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (12 downto 0);
    signal grp_fu_200_p00 : STD_LOGIC_VECTOR (11 downto 0);
    signal grp_fu_444_p10 : STD_LOGIC_VECTOR (10 downto 0);
    signal grp_fu_452_p10 : STD_LOGIC_VECTOR (10 downto 0);
    signal r_V_2_fu_395_p10 : STD_LOGIC_VECTOR (10 downto 0);

    component differentiate_mulbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (5 downto 0);
        din1 : IN STD_LOGIC_VECTOR (6 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (11 downto 0) );
    end component;


    component differentiate_maccud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (2 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (11 downto 0);
        dout : OUT STD_LOGIC_VECTOR (12 downto 0) );
    end component;


    component differentiate_macdEe IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (2 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (10 downto 0);
        dout : OUT STD_LOGIC_VECTOR (11 downto 0) );
    end component;



begin
    differentiate_mulbkb_U0 : component differentiate_mulbkb
    generic map (
        ID => 1,
        NUM_STAGE => 2,
        din0_WIDTH => 6,
        din1_WIDTH => 7,
        dout_WIDTH => 12)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_200_p0,
        din1 => grp_fu_200_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_200_p2);

    differentiate_maccud_U1 : component differentiate_maccud
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 3,
        din1_WIDTH => 8,
        din2_WIDTH => 12,
        dout_WIDTH => 13)
    port map (
        din0 => window_V_load_reg_566,
        din1 => grp_fu_444_p1,
        din2 => grp_fu_452_p3,
        dout => grp_fu_444_p3);

    differentiate_macdEe_U2 : component differentiate_macdEe
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 3,
        din1_WIDTH => 8,
        din2_WIDTH => 11,
        dout_WIDTH => 12)
    port map (
        din0 => window_V_load_1_reg_586,
        din1 => grp_fu_452_p1,
        din2 => r_V_2_reg_601,
        dout => grp_fu_452_p3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    i_reg_139_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond2_fu_210_p2 = ap_const_lv1_1))) then 
                i_reg_139 <= i_1_fu_250_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_139 <= ap_const_lv6_1;
            end if; 
        end if;
    end process;

    ii_reg_174_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
                ii_reg_174 <= ii_1_reg_531;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond2_fu_210_p2))) then 
                ii_reg_174 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    j_reg_151_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
                j_reg_151 <= j_1_reg_498;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
                j_reg_151 <= ap_const_lv6_1;
            end if; 
        end if;
    end process;

    p_s_reg_162_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
                p_s_reg_162 <= temp_result_V_1_2_fu_422_p2;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond2_fu_210_p2))) then 
                p_s_reg_162 <= ap_const_lv15_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                ii_1_reg_531 <= ii_1_fu_315_p2;
                window_V_addr_1_reg_518 <= tmp_12_cast_fu_293_p1(4 - 1 downto 0);
                window_V_addr_2_reg_523 <= tmp_13_cast_fu_304_p1(4 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                img_load_1_reg_581 <= img_q1;
                img_load_reg_576 <= img_q0;
                window_V_load_1_reg_586 <= window_V_q0;
                window_V_load_2_reg_591 <= window_V_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                img_load_2_reg_596 <= img_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond2_fu_210_p2))) then
                j_1_reg_498 <= j_1_fu_240_p2;
                res_V_addr_reg_493 <= tmp_9_cast_fu_235_p1(12 - 1 downto 0);
                    tmp_2_cast_cast3_reg_488(5 downto 0) <= tmp_2_cast_cast3_fu_222_p1(5 downto 0);
                    tmp_9_2_cast_cast_reg_503(5 downto 0) <= tmp_9_2_cast_cast_fu_246_p1(5 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                    j_cast4_cast_reg_480(5 downto 0) <= j_cast4_cast_fu_206_p1(5 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                r_V_2_reg_601 <= r_V_2_fu_395_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_0 = exitcond3_fu_309_p2))) then
                tmp_16_reg_536 <= tmp_16_fu_356_p2;
                tmp_17_reg_541 <= tmp_17_fu_361_p2;
                tmp_18_reg_546 <= tmp_18_fu_366_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state11)) then
                tmp_5_reg_606 <= grp_fu_444_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_1 = exitcond3_fu_309_p2))) then
                tmp_6_reg_551 <= tmp_6_fu_371_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                tmp_8_reg_475 <= grp_fu_200_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_185_p2 = ap_const_lv1_0))) then
                tmp_reg_464 <= tmp_fu_191_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                window_V_load_reg_566 <= window_V_q0;
            end if;
        end if;
    end process;
    j_cast4_cast_reg_480(12 downto 6) <= "0000000";
    tmp_2_cast_cast3_reg_488(12 downto 6) <= "0000000";
    tmp_9_2_cast_cast_reg_503(12 downto 6) <= "0000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_185_p2, ap_CS_fsm_state5, exitcond2_fu_210_p2, ap_CS_fsm_state6, exitcond3_fu_309_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_185_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond2_fu_210_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_1 = exitcond3_fu_309_p2))) then
                    ap_NS_fsm <= ap_ST_fsm_state13;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_185_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_185_p2 = ap_const_lv1_1))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_185_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_185_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_185_p2 <= "1" when (i_reg_139 = ap_const_lv6_3F) else "0";
    exitcond2_fu_210_p2 <= "1" when (j_reg_151 = ap_const_lv6_2F) else "0";
    exitcond3_fu_309_p2 <= "1" when (ii_reg_174 = ap_const_lv2_3) else "0";
    grp_fu_200_p0 <= grp_fu_200_p00(6 - 1 downto 0);
    grp_fu_200_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_reg_464),12));
    grp_fu_200_p1 <= ap_const_lv12_2E(7 - 1 downto 0);
    grp_fu_444_p1 <= grp_fu_444_p10(8 - 1 downto 0);
    grp_fu_444_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(img_load_reg_576),11));
    grp_fu_452_p1 <= grp_fu_452_p10(8 - 1 downto 0);
    grp_fu_452_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(img_load_1_reg_581),11));
    i_1_fu_250_p2 <= std_logic_vector(unsigned(i_reg_139) + unsigned(ap_const_lv6_1));
    ii_1_fu_315_p2 <= std_logic_vector(unsigned(ii_reg_174) + unsigned(ap_const_lv2_1));
    ii_cast2_cast_fu_260_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ii_reg_174),5));
    ii_cast3_fu_256_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ii_reg_174),6));

    img_address0_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8, tmp_17_cast_fu_377_p1, tmp_19_cast_fu_385_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            img_address0 <= tmp_19_cast_fu_385_p1(12 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            img_address0 <= tmp_17_cast_fu_377_p1(12 - 1 downto 0);
        else 
            img_address0 <= "XXXXXXXXXXXX";
        end if; 
    end process;

    img_address1 <= tmp_18_cast_fu_381_p1(12 - 1 downto 0);

    img_ce0_assign_proc : process(ap_CS_fsm_state7, ap_CS_fsm_state8)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state8))) then 
            img_ce0 <= ap_const_logic_1;
        else 
            img_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    img_ce1_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            img_ce1 <= ap_const_logic_1;
        else 
            img_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    j_1_fu_240_p2 <= std_logic_vector(unsigned(j_reg_151) + unsigned(ap_const_lv6_1));
    j_cast4_cast_fu_206_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_reg_151),13));
        p_cast_fu_419_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_5_reg_606),15));

    p_shl1_cast_fu_334_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_13_fu_326_p3),13));
    p_shl2_cast_fu_346_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_14_fu_338_p3),13));
    p_shl_cast_fu_272_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_264_p3),5));
    r_V_2_fu_395_p0 <= window_V_load_2_reg_591;
    r_V_2_fu_395_p1 <= r_V_2_fu_395_p10(8 - 1 downto 0);
    r_V_2_fu_395_p10 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(img_load_2_reg_596),11));
    r_V_2_fu_395_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(r_V_2_fu_395_p0) * signed('0' &r_V_2_fu_395_p1))), 11));
    res_V_address0 <= res_V_addr_reg_493;

    res_V_ce0_assign_proc : process(ap_CS_fsm_state13)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            res_V_ce0 <= ap_const_logic_1;
        else 
            res_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    res_V_d0 <= 
        tmp_6_reg_551 when (tmp_12_fu_428_p3(0) = '1') else 
        p_s_reg_162;

    res_V_we0_assign_proc : process(ap_CS_fsm_state13)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            res_V_we0 <= ap_const_logic_1;
        else 
            res_V_we0 <= ap_const_logic_0;
        end if; 
    end process;

    sum_fu_321_p2 <= std_logic_vector(unsigned(tmp_reg_464) + unsigned(ii_cast3_fu_256_p1));
    temp_result_V_1_2_fu_422_p2 <= std_logic_vector(signed(p_cast_fu_419_p1) + signed(p_s_reg_162));
    tmp_10_fu_287_p2 <= std_logic_vector(unsigned(tmp_3_fu_276_p2) + unsigned(ap_const_lv5_1));
        tmp_11_cast_fu_282_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_3_fu_276_p2),32));

    tmp_11_fu_298_p2 <= std_logic_vector(unsigned(tmp_3_fu_276_p2) + unsigned(ap_const_lv5_2));
        tmp_12_cast_fu_293_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_10_fu_287_p2),32));

    tmp_12_fu_428_p3 <= p_s_reg_162(14 downto 14);
        tmp_13_cast_fu_304_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_11_fu_298_p2),32));

    tmp_13_fu_326_p3 <= (sum_fu_321_p2 & ap_const_lv6_0);
    tmp_14_fu_338_p3 <= (sum_fu_321_p2 & ap_const_lv4_0);
    tmp_15_fu_350_p2 <= std_logic_vector(unsigned(p_shl1_cast_fu_334_p1) - unsigned(p_shl2_cast_fu_346_p1));
    tmp_16_fu_356_p2 <= std_logic_vector(unsigned(tmp_15_fu_350_p2) + unsigned(tmp_2_cast_cast3_reg_488));
        tmp_17_cast_fu_377_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_16_reg_536),32));

    tmp_17_fu_361_p2 <= std_logic_vector(unsigned(tmp_15_fu_350_p2) + unsigned(j_cast4_cast_reg_480));
        tmp_18_cast_fu_381_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_17_reg_541),32));

    tmp_18_fu_366_p2 <= std_logic_vector(unsigned(tmp_15_fu_350_p2) + unsigned(tmp_9_2_cast_cast_reg_503));
        tmp_19_cast_fu_385_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_18_reg_546),32));

    tmp_2_cast_cast3_fu_222_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_216_p2),13));
    tmp_2_cast_cast_fu_226_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_2_fu_216_p2),12));
    tmp_2_fu_216_p2 <= std_logic_vector(unsigned(j_reg_151) + unsigned(ap_const_lv6_3F));
    tmp_3_fu_276_p2 <= std_logic_vector(unsigned(p_shl_cast_fu_272_p1) - unsigned(ii_cast2_cast_fu_260_p1));
    tmp_6_fu_371_p2 <= std_logic_vector(unsigned(ap_const_lv15_0) - unsigned(p_s_reg_162));
    tmp_9_2_cast_cast_fu_246_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_1_fu_240_p2),13));
    tmp_9_cast_fu_235_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_9_fu_230_p2),32));
    tmp_9_fu_230_p2 <= std_logic_vector(unsigned(tmp_8_reg_475) + unsigned(tmp_2_cast_cast_fu_226_p1));
    tmp_fu_191_p2 <= std_logic_vector(unsigned(i_reg_139) + unsigned(ap_const_lv6_3F));
    tmp_s_fu_264_p3 <= (ii_reg_174 & ap_const_lv2_0);

    window_V_address0_assign_proc : process(ap_CS_fsm_state6, window_V_addr_1_reg_518, ap_CS_fsm_state7, tmp_11_cast_fu_282_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            window_V_address0 <= window_V_addr_1_reg_518;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            window_V_address0 <= tmp_11_cast_fu_282_p1(4 - 1 downto 0);
        else 
            window_V_address0 <= "XXXX";
        end if; 
    end process;

    window_V_address1 <= window_V_addr_2_reg_523;

    window_V_ce0_assign_proc : process(ap_CS_fsm_state6, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state7))) then 
            window_V_ce0 <= ap_const_logic_1;
        else 
            window_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    window_V_ce1_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            window_V_ce1 <= ap_const_logic_1;
        else 
            window_V_ce1 <= ap_const_logic_0;
        end if; 
    end process;

end behav;