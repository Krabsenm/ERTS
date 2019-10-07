-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity iosc is
port (
    clk : IN STD_LOGIC;
    reset : IN STD_LOGIC;
    ctrl : IN STD_LOGIC_VECTOR (3 downto 0);
    inSwitch : IN STD_LOGIC_VECTOR (3 downto 0);
    outLeds : OUT STD_LOGIC_VECTOR (3 downto 0) );
end;


architecture behav of iosc is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "iosc,hls_ip_2017_2,{HLS_INPUT_TYPE=sc,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.162000,HLS_SYN_LAT=3,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=171,HLS_SYN_LUT=155}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal iosc_ssdm_thread_s_load_fu_152_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0);
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld : STD_LOGIC;
    signal grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld : STD_LOGIC;
    signal grp_iosc_iosThread_fu_130_outLeds : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_iosc_iosThread_fu_130_outLeds_ap_vld : STD_LOGIC;
    signal grp_iosc_iosThread_fu_130_iosc_switchs_V : STD_LOGIC_VECTOR (3 downto 0);
    signal grp_iosc_iosThread_fu_130_iosc_switchs_V_ap_vld : STD_LOGIC;
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal iosc_secCounter_V : STD_LOGIC_VECTOR (3 downto 0);
    signal iosc_counter_clk_V : STD_LOGIC_VECTOR (31 downto 0);
    signal iosc_ssdm_thread_1_load_fu_156_p1 : STD_LOGIC_VECTOR (0 downto 0);

    component iosc_iosPulseThread IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        iosc_secCounter_V_i : IN STD_LOGIC_VECTOR (3 downto 0);
        iosc_secCounter_V_o : OUT STD_LOGIC_VECTOR (3 downto 0);
        iosc_secCounter_V_o_ap_vld : OUT STD_LOGIC;
        iosc_counter_clk_V_i : IN STD_LOGIC_VECTOR (31 downto 0);
        iosc_counter_clk_V_o : OUT STD_LOGIC_VECTOR (31 downto 0);
        iosc_counter_clk_V_o_ap_vld : OUT STD_LOGIC );
    end component;


    component iosc_iosThread IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ctrl : IN STD_LOGIC_VECTOR (3 downto 0);
        inSwitch : IN STD_LOGIC_VECTOR (3 downto 0);
        outLeds : OUT STD_LOGIC_VECTOR (3 downto 0);
        outLeds_ap_vld : OUT STD_LOGIC;
        iosc_switchs_V : OUT STD_LOGIC_VECTOR (3 downto 0);
        iosc_switchs_V_ap_vld : OUT STD_LOGIC;
        iosc_secCounter_V : IN STD_LOGIC_VECTOR (3 downto 0) );
    end component;



begin
    grp_iosc_iosPulseThread_fu_108 : component iosc_iosPulseThread
    port map (
        ap_clk => clk,
        ap_rst => reset,
        iosc_secCounter_V_i => iosc_secCounter_V,
        iosc_secCounter_V_o => grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o,
        iosc_secCounter_V_o_ap_vld => grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld,
        iosc_counter_clk_V_i => iosc_counter_clk_V,
        iosc_counter_clk_V_o => grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o,
        iosc_counter_clk_V_o_ap_vld => grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld);

    grp_iosc_iosThread_fu_130 : component iosc_iosThread
    port map (
        ap_clk => clk,
        ap_rst => reset,
        ctrl => ctrl,
        inSwitch => inSwitch,
        outLeds => grp_iosc_iosThread_fu_130_outLeds,
        outLeds_ap_vld => grp_iosc_iosThread_fu_130_outLeds_ap_vld,
        iosc_switchs_V => grp_iosc_iosThread_fu_130_iosc_switchs_V,
        iosc_switchs_V_ap_vld => grp_iosc_iosThread_fu_130_iosc_switchs_V_ap_vld,
        iosc_secCounter_V => iosc_secCounter_V);





    iosc_counter_clk_V_assign_proc : process(clk)
    begin
        if (clk'event and clk =  '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_const_lv1_0 = iosc_ssdm_thread_s_load_fu_152_p1) and (ap_const_lv1_0 = iosc_ssdm_thread_1_load_fu_156_p1))) then 
                iosc_counter_clk_V <= ap_const_lv32_0;
            elsif ((ap_const_logic_1 = grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o_ap_vld)) then 
                iosc_counter_clk_V <= grp_iosc_iosPulseThread_fu_108_iosc_counter_clk_V_o;
            end if; 
        end if;
    end process;


    iosc_secCounter_V_assign_proc : process(clk)
    begin
        if (clk'event and clk =  '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_const_lv1_0 = iosc_ssdm_thread_s_load_fu_152_p1) and (ap_const_lv1_0 = iosc_ssdm_thread_1_load_fu_156_p1))) then 
                iosc_secCounter_V <= ap_const_lv4_0;
            elsif ((ap_const_logic_1 = grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o_ap_vld)) then 
                iosc_secCounter_V <= grp_iosc_iosPulseThread_fu_108_iosc_secCounter_V_o;
            end if; 
        end if;
    end process;


    outLeds_assign_proc : process(clk)
    begin
        if (clk'event and clk =  '1') then
            if ((ap_const_logic_1 = grp_iosc_iosThread_fu_130_outLeds_ap_vld)) then 
                outLeds <= grp_iosc_iosThread_fu_130_outLeds;
            end if; 
        end if;
    end process;

    ap_CS_fsm <= ap_const_lv2_0;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    iosc_ssdm_thread_1_load_fu_156_p1 <= ap_const_lv1_0;
    iosc_ssdm_thread_s_load_fu_152_p1 <= ap_const_lv1_0;
end behav;
