; ModuleID = 'C:/Users/jonas/source/repos/ERTS/Mini_Project/HLS/Differentiate/solution12/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@differentiate_str = internal unnamed_addr constant [14 x i8] c"differentiate\00"
@RAM_1P_str = internal unnamed_addr constant [7 x i8] c"RAM_1P\00"
@p_str4 = private unnamed_addr constant [7 x i8] c"ImgCol\00", align 1
@p_str3 = private unnamed_addr constant [7 x i8] c"ImgRow\00", align 1
@p_str2 = private unnamed_addr constant [10 x i8] c"s_axilite\00", align 1
@p_str1 = private unnamed_addr constant [8 x i8] c"diff_io\00", align 1
@p_str = private unnamed_addr constant [1 x i8] zeroinitializer, align 1

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @differentiate([3072 x i8]* %img, [9 x i3]* %window_V, [2852 x i15]* %res_V) {
  %window_V_addr = getelementptr [9 x i3]* %window_V, i32 0, i32 0
  %window_V_addr_1 = getelementptr [9 x i3]* %window_V, i32 0, i32 1
  %window_V_addr_2 = getelementptr [9 x i3]* %window_V, i32 0, i32 2
  %window_V_addr_3 = getelementptr [9 x i3]* %window_V, i32 0, i32 3
  %window_V_addr_4 = getelementptr [9 x i3]* %window_V, i32 0, i32 4
  %window_V_addr_5 = getelementptr [9 x i3]* %window_V, i32 0, i32 5
  %window_V_addr_6 = getelementptr [9 x i3]* %window_V, i32 0, i32 6
  %window_V_addr_7 = getelementptr [9 x i3]* %window_V, i32 0, i32 7
  %window_V_addr_8 = getelementptr [9 x i3]* %window_V, i32 0, i32 8
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x i8]* %img), !map !64
  call void (...)* @_ssdm_op_SpecBitsMap([9 x i3]* %window_V), !map !71
  call void (...)* @_ssdm_op_SpecBitsMap([2852 x i15]* %res_V), !map !77
  call void (...)* @_ssdm_op_SpecTopModule([14 x i8]* @differentiate_str) nounwind
  call void (...)* @_ssdm_op_SpecInterface([2852 x i15]* %res_V, [1 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [8 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  %empty = call i32 (...)* @_ssdm_op_SpecMemCore([9 x i3]* %window_V, [1 x i8]* @p_str, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str, i32 -1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface([9 x i3]* %window_V, [10 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [8 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [10 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [8 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str) nounwind
  %empty_2 = call i32 (...)* @_ssdm_op_SpecMemCore([3072 x i8]* %img, [1 x i8]* @p_str, [7 x i8]* @RAM_1P_str, [1 x i8]* @p_str, i32 -1, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str, [1 x i8]* @p_str)
  call void (...)* @_ssdm_op_SpecInterface([3072 x i8]* %img, [10 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str, i32 0, i32 0, [8 x i8]* @p_str1, [1 x i8]* @p_str, [1 x i8]* @p_str, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str, [1 x i8]* @p_str)
  br label %1

; <label>:1                                       ; preds = %5, %0
  %i = phi i6 [ 1, %0 ], [ %i_1, %5 ]
  %tmp_6 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %i, i6 0)
  %p_shl_cast = zext i12 %tmp_6 to i13
  %tmp_7 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %i, i4 0)
  %p_shl1_cast = zext i10 %tmp_7 to i13
  %tmp_8 = sub i13 %p_shl_cast, %p_shl1_cast
  %exitcond1 = icmp eq i6 %i, -1
  %empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 62, i64 62, i64 62)
  br i1 %exitcond1, label %6, label %2

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str3) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([7 x i8]* @p_str3)
  %tmp = add i6 %i, -1
  %tmp_cast_cast = zext i6 %tmp to i12
  %tmp_9 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %tmp, i6 0)
  %p_shl4_cast = zext i12 %tmp_9 to i13
  %tmp_3 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %tmp, i4 0)
  %p_shl5_cast = zext i10 %tmp_3 to i13
  %tmp_10 = sub i13 %p_shl4_cast, %p_shl5_cast
  %tmp_11 = mul i12 %tmp_cast_cast, 46
  %i_1 = add i6 %i, 1
  %tmp_12 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %i_1, i6 0)
  %p_shl2_cast = zext i12 %tmp_12 to i13
  %tmp_13 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %i_1, i4 0)
  %p_shl3_cast = zext i10 %tmp_13 to i13
  %tmp_14 = sub i13 %p_shl2_cast, %p_shl3_cast
  br label %3

; <label>:3                                       ; preds = %4, %2
  %j = phi i6 [ 1, %2 ], [ %j_1, %4 ]
  %j_cast_cast = zext i6 %j to i13
  %tmp_15 = add i13 %tmp_10, %j_cast_cast
  %tmp_16_cast = sext i13 %tmp_15 to i32
  %img_addr_1 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_16_cast
  %tmp_16 = add i13 %tmp_8, %j_cast_cast
  %tmp_17_cast = sext i13 %tmp_16 to i32
  %img_addr_4 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_17_cast
  %tmp_17 = add i13 %tmp_14, %j_cast_cast
  %tmp_18_cast = sext i13 %tmp_17 to i32
  %img_addr_7 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_18_cast
  %exitcond2 = icmp eq i6 %j, -17
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 46, i64 46, i64 46)
  br i1 %exitcond2, label %5, label %4

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str4) nounwind
  %tmp_2 = add i6 %j, -1
  %tmp_2_cast_cast6 = zext i6 %tmp_2 to i12
  %tmp_2_cast_cast = zext i6 %tmp_2 to i13
  %tmp_18 = add i13 %tmp_10, %tmp_2_cast_cast
  %tmp_19_cast = sext i13 %tmp_18 to i32
  %img_addr = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_19_cast
  %tmp_19 = add i13 %tmp_8, %tmp_2_cast_cast
  %tmp_20_cast = sext i13 %tmp_19 to i32
  %img_addr_3 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_20_cast
  %tmp_20 = add i13 %tmp_14, %tmp_2_cast_cast
  %tmp_21_cast = sext i13 %tmp_20 to i32
  %img_addr_6 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_21_cast
  %tmp_21 = add i12 %tmp_11, %tmp_2_cast_cast6
  %tmp_22_cast = zext i12 %tmp_21 to i32
  %res_V_addr = getelementptr [2852 x i15]* %res_V, i32 0, i32 %tmp_22_cast
  %img_load = load i8* %img_addr, align 1
  %lhs_V = zext i8 %img_load to i11
  %window_V_load = load i3* %window_V_addr, align 1
  %rhs_V = sext i3 %window_V_load to i11
  %r_V = mul i11 %rhs_V, %lhs_V
  %tmp_cast = sext i11 %r_V to i12
  %img_load_1 = load i8* %img_addr_1, align 1
  %lhs_V_0_1 = zext i8 %img_load_1 to i11
  %window_V_load_1 = load i3* %window_V_addr_1, align 1
  %rhs_V_0_1 = sext i3 %window_V_load_1 to i11
  %r_V_0_1 = mul i11 %rhs_V_0_1, %lhs_V_0_1
  %tmp_0_1_cast = sext i11 %r_V_0_1 to i12
  %j_1 = add i6 %j, 1
  %j_1_cast_cast = zext i6 %j_1 to i13
  %tmp_22 = add i13 %tmp_10, %j_1_cast_cast
  %tmp_23_cast = sext i13 %tmp_22 to i32
  %img_addr_2 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_23_cast
  %tmp_23 = add i13 %tmp_8, %j_1_cast_cast
  %tmp_24_cast = sext i13 %tmp_23 to i32
  %img_addr_5 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_24_cast
  %tmp_24 = add i13 %tmp_14, %j_1_cast_cast
  %tmp_25_cast = sext i13 %tmp_24 to i32
  %img_addr_8 = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_25_cast
  %img_load_2 = load i8* %img_addr_2, align 1
  %lhs_V_0_2 = zext i8 %img_load_2 to i11
  %window_V_load_2 = load i3* %window_V_addr_2, align 1
  %rhs_V_0_2 = sext i3 %window_V_load_2 to i11
  %r_V_0_2 = mul i11 %rhs_V_0_2, %lhs_V_0_2
  %tmp_0_2_cast = sext i11 %r_V_0_2 to i12
  %img_load_3 = load i8* %img_addr_3, align 1
  %lhs_V_1 = zext i8 %img_load_3 to i11
  %window_V_load_3 = load i3* %window_V_addr_3, align 1
  %rhs_V_1 = sext i3 %window_V_load_3 to i11
  %r_V_1 = mul i11 %rhs_V_1, %lhs_V_1
  %tmp_1_cast = sext i11 %r_V_1 to i12
  %tmp_8_cast = sext i11 %r_V_1 to i13
  %img_load_4 = load i8* %img_addr_4, align 1
  %lhs_V_1_1 = zext i8 %img_load_4 to i11
  %window_V_load_4 = load i3* %window_V_addr_4, align 1
  %rhs_V_1_1 = sext i3 %window_V_load_4 to i11
  %r_V_1_1 = mul i11 %rhs_V_1_1, %lhs_V_1_1
  %tmp_1_1_cast = sext i11 %r_V_1_1 to i12
  %img_load_5 = load i8* %img_addr_5, align 1
  %lhs_V_1_2 = zext i8 %img_load_5 to i11
  %window_V_load_5 = load i3* %window_V_addr_5, align 1
  %rhs_V_1_2 = sext i3 %window_V_load_5 to i11
  %r_V_1_2 = mul i11 %rhs_V_1_2, %lhs_V_1_2
  %tmp_1_2_cast = sext i11 %r_V_1_2 to i12
  %img_load_6 = load i8* %img_addr_6, align 1
  %lhs_V_2 = zext i8 %img_load_6 to i11
  %window_V_load_6 = load i3* %window_V_addr_6, align 1
  %rhs_V_2 = sext i3 %window_V_load_6 to i11
  %r_V_2 = mul i11 %rhs_V_2, %lhs_V_2
  %tmp_2_cast = sext i11 %r_V_2 to i13
  %tmp_15_cast = sext i11 %r_V_2 to i12
  %img_load_7 = load i8* %img_addr_7, align 1
  %lhs_V_2_1 = zext i8 %img_load_7 to i11
  %window_V_load_7 = load i3* %window_V_addr_7, align 1
  %rhs_V_2_1 = sext i3 %window_V_load_7 to i11
  %r_V_2_1 = mul i11 %rhs_V_2_1, %lhs_V_2_1
  %tmp_2_1_cast = sext i11 %r_V_2_1 to i12
  %img_load_8 = load i8* %img_addr_8, align 1
  %lhs_V_2_2 = zext i8 %img_load_8 to i11
  %window_V_load_8 = load i3* %window_V_addr_8, align 1
  %rhs_V_2_2 = sext i3 %window_V_load_8 to i11
  %r_V_2_2 = mul i11 %rhs_V_2_2, %lhs_V_2_2
  %tmp_2_2_cast = sext i11 %r_V_2_2 to i12
  %tmp8 = add i12 %tmp_cast, %tmp_0_1_cast
  %tmp8_cast = sext i12 %tmp8 to i13
  %tmp9 = add i12 %tmp_1_cast, %tmp_0_2_cast
  %tmp9_cast = sext i12 %tmp9 to i13
  %tmp7 = add i13 %tmp8_cast, %tmp9_cast
  %tmp7_cast = sext i13 %tmp7 to i15
  %tmp1 = add i12 %tmp_1_2_cast, %tmp_1_1_cast
  %tmp11_cast = sext i12 %tmp1 to i14
  %tmp2 = add i12 %tmp_2_2_cast, %tmp_2_1_cast
  %tmp13_cast = sext i12 %tmp2 to i13
  %tmp3 = add i13 %tmp_2_cast, %tmp13_cast
  %tmp12_cast = sext i13 %tmp3 to i14
  %tmp4 = add i14 %tmp11_cast, %tmp12_cast
  %tmp10_cast = sext i14 %tmp4 to i15
  %temp_result_V_1_2_2 = add i15 %tmp7_cast, %tmp10_cast
  %tmp_25 = call i1 @_ssdm_op_BitSelect.i1.i15.i32(i15 %temp_result_V_1_2_2, i32 14)
  %tmp5 = add i12 %tmp_2_1_cast, %tmp_15_cast
  %tmp15_cast = sext i12 %tmp5 to i13
  %tmp16_cast = sext i12 %tmp1 to i13
  %tmp10 = add i13 %tmp15_cast, %tmp16_cast
  %tmp14_cast = sext i13 %tmp10 to i15
  %tmp18_cast = sext i12 %tmp8 to i14
  %tmp12 = add i12 %tmp_2_2_cast, %tmp_0_2_cast
  %tmp20_cast = sext i12 %tmp12 to i13
  %tmp13 = add i13 %tmp_8_cast, %tmp20_cast
  %tmp19_cast = sext i13 %tmp13 to i14
  %tmp14 = add i14 %tmp18_cast, %tmp19_cast
  %tmp17_cast = sext i14 %tmp14 to i15
  %tmp_s = add i15 %tmp14_cast, %tmp17_cast
  %tmp_4 = sub i15 0, %tmp_s
  %tmp_5 = select i1 %tmp_25, i15 %tmp_4, i15 %tmp_s
  store i15 %tmp_5, i15* %res_V_addr, align 2
  br label %3

; <label>:5                                       ; preds = %3
  %empty_5 = call i32 (...)* @_ssdm_op_SpecRegionEnd([7 x i8]* @p_str3, i32 %tmp_1)
  br label %1

; <label>:6                                       ; preds = %1
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecMemCore(...) {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i1 @_ssdm_op_BitSelect.i1.i15.i32(i15, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i15
  %empty_6 = shl i15 1, %empty
  %empty_7 = and i15 %0, %empty_6
  %empty_8 = icmp ne i15 %empty_7, 0
  ret i1 %empty_8
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_9 = zext i6 %1 to i12
  %empty_10 = shl i12 %empty, 6
  %empty_11 = or i12 %empty_10, %empty_9
  ret i12 %empty_11
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_12 = zext i4 %1 to i10
  %empty_13 = shl i10 %empty, 4
  %empty_14 = or i10 %empty_13, %empty_12
  ret i10 %empty_14
}

declare void @_GLOBAL__I_a() nounwind

!opencl.kernels = !{!0, !7, !13, !13, !16, !16, !22, !22, !16, !16, !24, !25, !31, !31, !16, !33, !16, !16, !16, !36, !36, !38, !38, !40, !42, !43, !45, !47, !47, !16, !49, !16, !16, !16, !51, !51, !53, !53, !55, !55}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!57}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"img_t [48]*", metadata !"window_t [3]*", metadata !"result_t [46]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"img", metadata !"window", metadata !"res"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<15> &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!13 = metadata !{null, metadata !8, metadata !9, metadata !14, metadata !11, metadata !15, metadata !6}
!14 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<16> &"}
!15 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!16 = metadata !{null, metadata !17, metadata !18, metadata !19, metadata !20, metadata !21, metadata !6}
!17 = metadata !{metadata !"kernel_arg_addr_space"}
!18 = metadata !{metadata !"kernel_arg_access_qual"}
!19 = metadata !{metadata !"kernel_arg_type"}
!20 = metadata !{metadata !"kernel_arg_type_qual"}
!21 = metadata !{metadata !"kernel_arg_name"}
!22 = metadata !{null, metadata !8, metadata !9, metadata !23, metadata !11, metadata !15, metadata !6}
!23 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<48, true> &"}
!24 = metadata !{null, metadata !8, metadata !9, metadata !14, metadata !11, metadata !12, metadata !6}
!25 = metadata !{null, metadata !26, metadata !27, metadata !28, metadata !29, metadata !30, metadata !6}
!26 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!27 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!28 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_int_base<16, true> &"}
!29 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!30 = metadata !{metadata !"kernel_arg_name", metadata !"i_op", metadata !"op"}
!31 = metadata !{null, metadata !8, metadata !9, metadata !32, metadata !11, metadata !15, metadata !6}
!32 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!33 = metadata !{null, metadata !26, metadata !27, metadata !34, metadata !29, metadata !35, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<16, true> &"}
!35 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!36 = metadata !{null, metadata !8, metadata !9, metadata !37, metadata !11, metadata !15, metadata !6}
!37 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<16, true> &"}
!38 = metadata !{null, metadata !8, metadata !9, metadata !39, metadata !11, metadata !15, metadata !6}
!39 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!40 = metadata !{null, metadata !26, metadata !27, metadata !41, metadata !29, metadata !35, metadata !6}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<16, true> &", metadata !"int"}
!42 = metadata !{null, metadata !8, metadata !9, metadata !39, metadata !11, metadata !12, metadata !6}
!43 = metadata !{null, metadata !8, metadata !9, metadata !44, metadata !11, metadata !12, metadata !6}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &"}
!45 = metadata !{null, metadata !26, metadata !27, metadata !46, metadata !29, metadata !30, metadata !6}
!46 = metadata !{metadata !"kernel_arg_type", metadata !"uchar", metadata !"const ap_int_base<3, true> &"}
!47 = metadata !{null, metadata !8, metadata !9, metadata !48, metadata !11, metadata !15, metadata !6}
!48 = metadata !{metadata !"kernel_arg_type", metadata !"uchar"}
!49 = metadata !{null, metadata !26, metadata !27, metadata !50, metadata !29, metadata !35, metadata !6}
!50 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &", metadata !"const ap_int_base<3, true> &"}
!51 = metadata !{null, metadata !8, metadata !9, metadata !52, metadata !11, metadata !15, metadata !6}
!52 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<3, true> &"}
!53 = metadata !{null, metadata !8, metadata !9, metadata !54, metadata !11, metadata !15, metadata !6}
!54 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &"}
!55 = metadata !{null, metadata !8, metadata !9, metadata !32, metadata !11, metadata !56, metadata !6}
!56 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!57 = metadata !{metadata !58, [1 x i32]* @llvm_global_ctors_0}
!58 = metadata !{metadata !59}
!59 = metadata !{i32 0, i32 31, metadata !60}
!60 = metadata !{metadata !61}
!61 = metadata !{metadata !"llvm.global_ctors.0", metadata !62, metadata !"", i32 0, i32 31}
!62 = metadata !{metadata !63}
!63 = metadata !{i32 0, i32 0, i32 1}
!64 = metadata !{metadata !65}
!65 = metadata !{i32 0, i32 7, metadata !66}
!66 = metadata !{metadata !67}
!67 = metadata !{metadata !"img", metadata !68, metadata !"unsigned char", i32 0, i32 7}
!68 = metadata !{metadata !69, metadata !70}
!69 = metadata !{i32 0, i32 63, i32 1}
!70 = metadata !{i32 0, i32 47, i32 1}
!71 = metadata !{metadata !72}
!72 = metadata !{i32 0, i32 2, metadata !73}
!73 = metadata !{metadata !74}
!74 = metadata !{metadata !"window.V", metadata !75, metadata !"int3", i32 0, i32 2}
!75 = metadata !{metadata !76, metadata !76}
!76 = metadata !{i32 0, i32 2, i32 1}
!77 = metadata !{metadata !78}
!78 = metadata !{i32 0, i32 14, metadata !79}
!79 = metadata !{metadata !80}
!80 = metadata !{metadata !"res.V", metadata !81, metadata !"uint15", i32 0, i32 14}
!81 = metadata !{metadata !82, metadata !83}
!82 = metadata !{i32 0, i32 61, i32 1}
!83 = metadata !{i32 0, i32 45, i32 1}
