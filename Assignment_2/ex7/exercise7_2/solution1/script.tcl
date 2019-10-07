############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project exercise7_2
set_top iosThread
add_files SC_IO/ios.cpp
add_files SC_IO/ios_driver.cpp
add_files -tb SC_IO/tb_ios.cpp
open_solution "solution1"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 8 -name default
#source "./exercise7_2/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
