; ModuleID = 'C:/Users/jonas/source/repos/ERTS/Mini_Project/HLS/Differentiate/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@llvm_global_ctors_1 = appending global [2 x void ()*] [void ()* @_GLOBAL__I_a, void ()* @_GLOBAL__I_a8]
@llvm_global_ctors_0 = appending global [2 x i32] [i32 65535, i32 65535]
@differentiate_str = internal unnamed_addr constant [14 x i8] c"differentiate\00"
@p_str3 = private unnamed_addr constant [7 x i8] c"WinCol\00", align 1
@p_str24 = private unnamed_addr constant [7 x i8] c"WinRow\00", align 1
@p_str2 = private unnamed_addr constant [4 x i8] c"Row\00", align 1
@p_str13 = private unnamed_addr constant [4 x i8] c"Col\00", align 1

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define void @differentiate([3072 x i8]* %img, [9 x i3]* %window_V, [2852 x i15]* %res_V) {
  call void (...)* @_ssdm_op_SpecBitsMap([3072 x i8]* %img), !map !75
  call void (...)* @_ssdm_op_SpecBitsMap([9 x i3]* %window_V), !map !82
  call void (...)* @_ssdm_op_SpecBitsMap([2852 x i15]* %res_V), !map !88
  call void (...)* @_ssdm_op_SpecTopModule([14 x i8]* @differentiate_str) nounwind
  br label %1

; <label>:1                                       ; preds = %11, %0
  %i = phi i6 [ 1, %0 ], [ %i_1, %11 ]
  %exitcond1 = icmp eq i6 %i, -1
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 62, i64 62, i64 62)
  br i1 %exitcond1, label %12, label %2

; <label>:2                                       ; preds = %1
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str2) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str2)
  %tmp = add i6 %i, -1
  %tmp_cast_cast = zext i6 %tmp to i12
  %tmp_3 = mul i12 %tmp_cast_cast, 46
  br label %3

; <label>:3                                       ; preds = %10, %2
  %j = phi i6 [ 1, %2 ], [ %j_1, %10 ]
  %exitcond2 = icmp eq i6 %j, -17
  %empty_2 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 46, i64 46, i64 46)
  br i1 %exitcond2, label %11, label %4

; <label>:4                                       ; preds = %3
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str13) nounwind
  %tmp_4 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str13)
  %tmp_2 = add i6 %j, -1
  %tmp_2_cast_cast = zext i6 %tmp_2 to i12
  %tmp_5 = add i12 %tmp_3, %tmp_2_cast_cast
  %tmp_11_cast = zext i12 %tmp_5 to i32
  %res_V_addr = getelementptr [2852 x i15]* %res_V, i32 0, i32 %tmp_11_cast
  br label %5

; <label>:5                                       ; preds = %9, %4
  %p_s = phi i16 [ 0, %4 ], [ %p_020_1, %9 ]
  %ii = phi i2 [ 0, %4 ], [ %ii_1, %9 ]
  %ii_cast4 = zext i2 %ii to i6
  %ii_cast3_cast = zext i2 %ii to i5
  %tmp_10 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %ii, i2 0)
  %p_shl_cast = zext i4 %tmp_10 to i5
  %tmp_11 = sub i5 %p_shl_cast, %ii_cast3_cast
  %exitcond3 = icmp eq i2 %ii, -1
  %empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %ii_1 = add i2 %ii, 1
  br i1 %exitcond3, label %10, label %6

; <label>:6                                       ; preds = %5
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str24) nounwind
  %tmp_8 = call i32 (...)* @_ssdm_op_SpecRegionBegin([7 x i8]* @p_str24)
  %sum = add i6 %tmp, %ii_cast4
  %tmp_14 = call i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6 %sum, i6 0)
  %p_shl1_cast = zext i12 %tmp_14 to i13
  %tmp_15 = call i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6 %sum, i4 0)
  %p_shl2_cast = zext i10 %tmp_15 to i13
  %tmp_16 = sub i13 %p_shl1_cast, %p_shl2_cast
  br label %7

; <label>:7                                       ; preds = %8, %6
  %p_020_1 = phi i16 [ %p_s, %6 ], [ %temp_result_V, %8 ]
  %jj = phi i2 [ 0, %6 ], [ %jj_1, %8 ]
  %jj_cast2 = zext i2 %jj to i6
  %jj_cast1_cast = zext i2 %jj to i5
  %tmp_17 = add i5 %tmp_11, %jj_cast1_cast
  %tmp_17_cast = sext i5 %tmp_17 to i32
  %window_V_addr = getelementptr [9 x i3]* %window_V, i32 0, i32 %tmp_17_cast
  %exitcond = icmp eq i2 %jj, -1
  %empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3)
  %jj_1 = add i2 %jj, 1
  br i1 %exitcond, label %9, label %8

; <label>:8                                       ; preds = %7
  call void (...)* @_ssdm_op_SpecLoopName([7 x i8]* @p_str3) nounwind
  %tmp_9 = add i6 %tmp_2, %jj_cast2
  %tmp_9_cast_cast = zext i6 %tmp_9 to i13
  %tmp_18 = add i13 %tmp_16, %tmp_9_cast_cast
  %tmp_18_cast = sext i13 %tmp_18 to i32
  %img_addr = getelementptr [3072 x i8]* %img, i32 0, i32 %tmp_18_cast
  %img_load = load i8* %img_addr, align 1
  %lhs_V = zext i8 %img_load to i11
  %window_V_load = load i3* %window_V_addr, align 1
  %rhs_V = sext i3 %window_V_load to i11
  %r_V = mul i11 %rhs_V, %lhs_V
  %tmp_s = sext i11 %r_V to i16
  %temp_result_V = add i16 %p_020_1, %tmp_s
  br label %7

; <label>:9                                       ; preds = %7
  %empty_5 = call i32 (...)* @_ssdm_op_SpecRegionEnd([7 x i8]* @p_str24, i32 %tmp_8)
  br label %5

; <label>:10                                      ; preds = %5
  %tmp_12 = call i1 @_ssdm_op_BitSelect.i1.i16.i32(i16 %p_s, i32 15)
  %tmp_13 = trunc i16 %p_s to i15
  %tmp_6 = sub i15 0, %tmp_13
  %tmp_7 = select i1 %tmp_12, i15 %tmp_6, i15 %tmp_13
  store i15 %tmp_7, i15* %res_V_addr, align 2
  %empty_6 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str13, i32 %tmp_4)
  %j_1 = add i6 1, %j
  br label %3

; <label>:11                                      ; preds = %3
  %empty_7 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str2, i32 %tmp_1)
  %i_1 = add i6 %i, 1
  br label %1

; <label>:12                                      ; preds = %1
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

define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

declare i15 @_ssdm_op_PartSelect.i15.i16.i32.i32(i16, i32, i32) nounwind readnone

define weak i1 @_ssdm_op_BitSelect.i1.i16.i32(i16, i32) nounwind readnone {
entry:
  %empty = trunc i32 %1 to i16
  %empty_8 = shl i16 1, %empty
  %empty_9 = and i16 %0, %empty_8
  %empty_10 = icmp ne i16 %empty_9, 0
  ret i1 %empty_10
}

define weak i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2, i2) nounwind readnone {
entry:
  %empty = zext i2 %0 to i4
  %empty_11 = zext i2 %1 to i4
  %empty_12 = shl i4 %empty, 2
  %empty_13 = or i4 %empty_12, %empty_11
  ret i4 %empty_13
}

define weak i12 @_ssdm_op_BitConcatenate.i12.i6.i6(i6, i6) nounwind readnone {
entry:
  %empty = zext i6 %0 to i12
  %empty_14 = zext i6 %1 to i12
  %empty_15 = shl i12 %empty, 6
  %empty_16 = or i12 %empty_15, %empty_14
  ret i12 %empty_16
}

define weak i10 @_ssdm_op_BitConcatenate.i10.i6.i4(i6, i4) nounwind readnone {
entry:
  %empty = zext i6 %0 to i10
  %empty_17 = zext i4 %1 to i10
  %empty_18 = shl i10 %empty, 4
  %empty_19 = or i10 %empty_18, %empty_17
  ret i10 %empty_19
}

declare void @_GLOBAL__I_a8() nounwind

declare void @_GLOBAL__I_a() nounwind

!opencl.kernels = !{!0, !7, !7, !13, !13, !19, !22, !13, !13, !13, !28, !28, !30, !33, !35, !35, !13, !13, !37, !37, !13, !13, !39, !40, !43, !43, !13, !45, !13, !13, !13, !47, !47, !49, !49, !51, !53, !54, !56, !58, !58, !13, !60, !13, !13, !13, !62, !62, !64, !64, !66, !66}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!68}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"mat_a_t [3]*", metadata !"mat_b_t [3]*", metadata !"result_t [3]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"res"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<18, true> &"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!13 = metadata !{null, metadata !14, metadata !15, metadata !16, metadata !17, metadata !18, metadata !6}
!14 = metadata !{metadata !"kernel_arg_addr_space"}
!15 = metadata !{metadata !"kernel_arg_access_qual"}
!16 = metadata !{metadata !"kernel_arg_type"}
!17 = metadata !{metadata !"kernel_arg_type_qual"}
!18 = metadata !{metadata !"kernel_arg_name"}
!19 = metadata !{null, metadata !8, metadata !9, metadata !20, metadata !11, metadata !21, metadata !6}
!20 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<17> &"}
!21 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!22 = metadata !{null, metadata !23, metadata !24, metadata !25, metadata !26, metadata !27, metadata !6}
!23 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!24 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!25 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<9, true> &", metadata !"const ap_int_base<9, true> &"}
!26 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!27 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!28 = metadata !{null, metadata !8, metadata !9, metadata !29, metadata !11, metadata !12, metadata !6}
!29 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<9, true> &"}
!30 = metadata !{null, metadata !1, metadata !2, metadata !31, metadata !4, metadata !32, metadata !6}
!31 = metadata !{metadata !"kernel_arg_type", metadata !"img_t [48]*", metadata !"window_t [3]*", metadata !"result_t [46]*"}
!32 = metadata !{metadata !"kernel_arg_name", metadata !"img", metadata !"window", metadata !"res"}
!33 = metadata !{null, metadata !8, metadata !9, metadata !34, metadata !11, metadata !21, metadata !6}
!34 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_uint<15> &"}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !12, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int<16> &"}
!37 = metadata !{null, metadata !8, metadata !9, metadata !38, metadata !11, metadata !12, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<48, true> &"}
!39 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !21, metadata !6}
!40 = metadata !{null, metadata !23, metadata !24, metadata !41, metadata !26, metadata !42, metadata !6}
!41 = metadata !{metadata !"kernel_arg_type", metadata !"int", metadata !"const ap_int_base<16, true> &"}
!42 = metadata !{metadata !"kernel_arg_name", metadata !"i_op", metadata !"op"}
!43 = metadata !{null, metadata !8, metadata !9, metadata !44, metadata !11, metadata !12, metadata !6}
!44 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!45 = metadata !{null, metadata !23, metadata !24, metadata !46, metadata !26, metadata !27, metadata !6}
!46 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &", metadata !"const ap_int_base<16, true> &"}
!47 = metadata !{null, metadata !8, metadata !9, metadata !48, metadata !11, metadata !12, metadata !6}
!48 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<16, true> &"}
!49 = metadata !{null, metadata !8, metadata !9, metadata !50, metadata !11, metadata !12, metadata !6}
!50 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!51 = metadata !{null, metadata !23, metadata !24, metadata !52, metadata !26, metadata !27, metadata !6}
!52 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<16, true> &", metadata !"int"}
!53 = metadata !{null, metadata !8, metadata !9, metadata !50, metadata !11, metadata !21, metadata !6}
!54 = metadata !{null, metadata !8, metadata !9, metadata !55, metadata !11, metadata !21, metadata !6}
!55 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<11, true> &"}
!56 = metadata !{null, metadata !23, metadata !24, metadata !57, metadata !26, metadata !42, metadata !6}
!57 = metadata !{metadata !"kernel_arg_type", metadata !"uchar", metadata !"const ap_int_base<3, true> &"}
!58 = metadata !{null, metadata !8, metadata !9, metadata !59, metadata !11, metadata !12, metadata !6}
!59 = metadata !{metadata !"kernel_arg_type", metadata !"uchar"}
!60 = metadata !{null, metadata !23, metadata !24, metadata !61, metadata !26, metadata !27, metadata !6}
!61 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &", metadata !"const ap_int_base<3, true> &"}
!62 = metadata !{null, metadata !8, metadata !9, metadata !63, metadata !11, metadata !12, metadata !6}
!63 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<3, true> &"}
!64 = metadata !{null, metadata !8, metadata !9, metadata !65, metadata !11, metadata !12, metadata !6}
!65 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<8, false> &"}
!66 = metadata !{null, metadata !8, metadata !9, metadata !44, metadata !11, metadata !67, metadata !6}
!67 = metadata !{metadata !"kernel_arg_name", metadata !"val"}
!68 = metadata !{metadata !69, [2 x i32]* @llvm_global_ctors_0}
!69 = metadata !{metadata !70}
!70 = metadata !{i32 0, i32 31, metadata !71}
!71 = metadata !{metadata !72}
!72 = metadata !{metadata !"llvm.global_ctors.0", metadata !73, metadata !"", i32 0, i32 31}
!73 = metadata !{metadata !74}
!74 = metadata !{i32 0, i32 1, i32 1}
!75 = metadata !{metadata !76}
!76 = metadata !{i32 0, i32 7, metadata !77}
!77 = metadata !{metadata !78}
!78 = metadata !{metadata !"img", metadata !79, metadata !"unsigned char", i32 0, i32 7}
!79 = metadata !{metadata !80, metadata !81}
!80 = metadata !{i32 0, i32 63, i32 1}
!81 = metadata !{i32 0, i32 47, i32 1}
!82 = metadata !{metadata !83}
!83 = metadata !{i32 0, i32 2, metadata !84}
!84 = metadata !{metadata !85}
!85 = metadata !{metadata !"window.V", metadata !86, metadata !"int3", i32 0, i32 2}
!86 = metadata !{metadata !87, metadata !87}
!87 = metadata !{i32 0, i32 2, i32 1}
!88 = metadata !{metadata !89}
!89 = metadata !{i32 0, i32 14, metadata !90}
!90 = metadata !{metadata !91}
!91 = metadata !{metadata !"res.V", metadata !92, metadata !"uint15", i32 0, i32 14}
!92 = metadata !{metadata !93, metadata !94}
!93 = metadata !{i32 0, i32 61, i32 1}
!94 = metadata !{i32 0, i32 45, i32 1}
