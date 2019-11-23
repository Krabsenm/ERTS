-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity iosc_iosPulseThread is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    iosc_secCounter_V_i : IN STD_LOGIC_VECTOR (3 downto 0);
    iosc_secCounter_V_o : OUT STD_LOGIC_VECTOR (3 downto 0);
    iosc_secCounter_V_o_ap_vld : OUT STD_LOGIC;
    iosc_counter_clk_V_i : IN STD_LOGIC_VECTOR (31 downto 0);
    iosc_counter_clk_V_o : OUT STD_LOGIC_VECTOR (31 downto 0);
    iosc_counter_clk_V_o_ap_vld : OUT STD_LOGIC );
end;


architecture behav of iosc_iosPulseThread is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2FAF07F : STD_LOGIC_VECTOR (31 downto 0) := "00000010111110101111000001111111";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal tmp_2_fu_118_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_2_reg_131 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "010";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal iosc_counter_clk_V_a_fu_111_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state2;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;

    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                tmp_2_reg_131 <= tmp_2_fu_118_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_CS_fsm)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state2 => 
                ap_NS_fsm <= ap_ST_fsm_state3;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    iosc_counter_clk_V_a_fu_111_p2 <= std_logic_vector(unsigned(iosc_counter_clk_V_i) + unsigned(ap_const_lv32_1));

    iosc_counter_clk_V_o_assign_proc : process(tmp_2_reg_131, ap_CS_fsm_state2, iosc_counter_clk_V_a_fu_111_p2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_2_reg_131 = ap_const_lv1_1))) then 
            iosc_counter_clk_V_o <= ap_const_lv32_0;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            iosc_counter_clk_V_o <= iosc_counter_clk_V_a_fu_111_p2;
        else 
            iosc_counter_clk_V_o <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    iosc_counter_clk_V_o_ap_vld_assign_proc : process(tmp_2_reg_131, ap_CS_fsm_state2, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or ((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_2_reg_131 = ap_const_lv1_1)))) then 
            iosc_counter_clk_V_o_ap_vld <= ap_const_logic_1;
        else 
            iosc_counter_clk_V_o_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    iosc_secCounter_V_o <= std_logic_vector(unsigned(iosc_secCounter_V_i) + unsigned(ap_const_lv4_1));

    iosc_secCounter_V_o_ap_vld_assign_proc : process(tmp_2_reg_131, ap_CS_fsm_state3)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (tmp_2_reg_131 = ap_const_lv1_1))) then 
            iosc_secCounter_V_o_ap_vld <= ap_const_logic_1;
        else 
            iosc_secCounter_V_o_ap_vld <= ap_const_logic_0;
        end if; 
    end process;

    tmp_2_fu_118_p2 <= "1" when (unsigned(iosc_counter_clk_V_a_fu_111_p2) > unsigned(ap_const_lv32_2FAF07F)) else "0";
end behav;