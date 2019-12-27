############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline "differentiate/Col"
set_directive_interface -mode s_axilite -bundle diff_io "differentiate" img
set_directive_interface -mode s_axilite -bundle diff_io "differentiate"
set_directive_interface -mode s_axilite -bundle diff_io "differentiate" window
set_directive_interface -bundle diff_io "differentiate" res
set_directive_unroll "differentiate/WinCol"
set_directive_pipeline "differentiate/WinRow"
