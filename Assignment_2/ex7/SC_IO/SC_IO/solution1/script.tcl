############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project SC_IO
set_top iosc
add_files ios.cpp
add_files ios.h
add_files -tb ios_driver.cpp
add_files -tb ios_driver.h
add_files -tb tb_ios.cpp
open_solution "solution1"
set_part {xc7z020clg484-1}
create_clock -period 10 -name default
#source "./SC_IO/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl systemc
export_design -flow impl -rtl vhdl -format ip_catalog
