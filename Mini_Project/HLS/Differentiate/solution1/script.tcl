############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Differentiate
set_top differentiate
add_files differentiate.cpp
add_files -tb differentiate_test.cpp
open_solution "solution1"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 8 -name default
source "./Differentiate/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl
export_design -flow impl -rtl vhdl -format ip_catalog
