############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
open_project HadamardProduct
set_top hadamardproduct
add_files hadamardproduct.cpp
add_files -tb hadamardproduct_test.cpp
open_solution "solution1"
set_part {xc7z010clg400-1} -tool vivado
create_clock -period 8 -name default
#source "./HadamardProduct/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -format ip_catalog
