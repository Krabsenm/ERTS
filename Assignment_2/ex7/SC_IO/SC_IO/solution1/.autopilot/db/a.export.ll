; ModuleID = 'C:/Users/krabs/source/repos/ERTS/Assignment_2/ex7/SC_IO/SC_IO/solution1/.autopilot/db/a.o.2.bc'
target datalayout = "e-p:32:32:32-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-f80:128:128-v64:64:64-v128:128:128-a0:0:64-f80:32:32-n8:16:32-S32"
target triple = "i686-pc-mingw32"

@ssdm_ins_iosc_0_0_sw = global i4 0
@ssdm_ins_iosc_0_0_se_1 = global i4 0
@ssdm_ins_iosc_0_0_se = global i1 false
@ssdm_ins_iosc_0_0_re = global i1 false
@ssdm_ins_iosc_0_0_ou = global i4 0
@ssdm_ins_iosc_0_0_in = global i4 0
@ssdm_ins_iosc_0_0_ct = global i4 0
@ssdm_ins_iosc_0_0_co = global i32 0
@ssdm_ins_iosc_0_0_cl = global i1 false
@llvm_global_ctors_1 = appending global [1 x void ()*] [void ()* @_GLOBAL__I_a]
@llvm_global_ctors_0 = appending global [1 x i32] [i32 65535]
@iosc_ssdm_thread_M_iosThread = external global i1
@iosc_ssdm_thread_M_iosPulseThread = external global i1
@p_str9 = private unnamed_addr constant [15 x i8] c"__ssdm_reset__\00", align 1
@p_str8 = private unnamed_addr constant [10 x i8] c"iosThread\00", align 1
@p_str7 = private unnamed_addr constant [8 x i8] c"outLeds\00", align 1
@p_str6 = private unnamed_addr constant [9 x i8] c"inSwitch\00", align 1
@p_str5 = private unnamed_addr constant [5 x i8] c"ctrl\00", align 1
@p_str4 = private unnamed_addr constant [13 x i8] c"\22sc_uint<4>\22\00", align 1
@p_str3 = private unnamed_addr constant [6 x i8] c"reset\00", align 1
@p_str2 = private unnamed_addr constant [4 x i8] c"clk\00", align 1
@p_str18 = private unnamed_addr constant [15 x i8] c"iosPulseThread\00", align 1
@p_str17 = private unnamed_addr constant [17 x i8] c"-bus_bundle slv0\00", align 1
@p_str16 = private unnamed_addr constant [10 x i8] c"AXI4LiteS\00", align 1
@p_str10 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1
@p_str1 = private unnamed_addr constant [7 x i8] c"\22bool\22\00", align 1
@p_str = private unnamed_addr constant [5 x i8] c"iosc\00", align 1

declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

define weak void @"iosc::iosc"(i1* %clk, i1* %reset, i4* %ctrl, i4* %inSwitch, i4* %outLeds, i4* %iosc_switchs_V, i1* %iosc_secPulse_V, i4* %iosc_secCounter_V, i32* %iosc_counter_clk_V) {
  call void (...)* @_ssdm_op_SpecIFCore(i4* %ctrl, [1 x i8]* @p_str10, [10 x i8]* @p_str16, [1 x i8]* @p_str10, i32 -1, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [17 x i8]* @p_str17)
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %clk), !map !121
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %reset), !map !125
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %ctrl), !map !129
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %inSwitch), !map !133
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %outLeds), !map !137
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %iosc_switchs_V), !map !141
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %iosc_secPulse_V), !map !145
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %iosc_secCounter_V), !map !149
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %iosc_counter_clk_V), !map !153
  call void (...)* @_ssdm_op_SpecTopModule([5 x i8]* @p_str, [5 x i8]* @p_str) nounwind
  %iosc_ssdm_thread_s = load i1* @iosc_ssdm_thread_M_iosThread, align 1
  br i1 %iosc_ssdm_thread_s, label %1, label %2

; <label>:1                                       ; preds = %0
  call void @"iosc::iosThread"(i1* %clk, i1* %reset, i4* %ctrl, i4* %inSwitch, i4* %outLeds, i4* %iosc_switchs_V, i1* %iosc_secPulse_V, i4* %iosc_secCounter_V, i32* %iosc_counter_clk_V)
  br label %UnifiedUnreachableBlock

; <label>:2                                       ; preds = %0
  call void (...)* @_ssdm_op_SpecProcessDecl([5 x i8]* @p_str, i32 2, [10 x i8]* @p_str8) nounwind
  call void (...)* @_ssdm_op_SpecSensitive([10 x i8]* @p_str8, [4 x i8]* @p_str2, i1* %clk, i32 1) nounwind
  call void (...)* @_ssdm_op_SpecSensitive([10 x i8]* @p_str8, [6 x i8]* @p_str3, i1* %reset, i32 3) nounwind
  %iosc_ssdm_thread_1 = load i1* @iosc_ssdm_thread_M_iosPulseThread, align 1
  br i1 %iosc_ssdm_thread_1, label %3, label %4

; <label>:3                                       ; preds = %2
  call void @"iosc::iosPulseThread"(i1* %clk, i1* %reset, i4* %ctrl, i4* %inSwitch, i4* %outLeds, i4* %iosc_switchs_V, i1* %iosc_secPulse_V, i4* %iosc_secCounter_V, i32* %iosc_counter_clk_V)
  br label %UnifiedUnreachableBlock

; <label>:4                                       ; preds = %2
  call void (...)* @_ssdm_op_SpecProcessDecl([5 x i8]* @p_str, i32 2, [15 x i8]* @p_str18) nounwind
  call void (...)* @_ssdm_op_SpecSensitive([15 x i8]* @p_str18, [4 x i8]* @p_str2, i1* %clk, i32 1) nounwind
  call void (...)* @_ssdm_op_SpecSensitive([15 x i8]* @p_str18, [6 x i8]* @p_str3, i1* %reset, i32 3) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [7 x i8]* @p_str1, [4 x i8]* @p_str2, i32 0, i32 0, i1* %clk) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [7 x i8]* @p_str1, [6 x i8]* @p_str3, i32 0, i32 0, i1* %reset) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [13 x i8]* @p_str4, [5 x i8]* @p_str5, i32 0, i32 0, i4* %ctrl) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [13 x i8]* @p_str4, [9 x i8]* @p_str6, i32 0, i32 0, i4* %inSwitch) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 1, [13 x i8]* @p_str4, [8 x i8]* @p_str7, i32 0, i32 0, i4* %outLeds) nounwind
  call void @_ssdm_op_Write.ap_auto.i1P(i1* %iosc_secPulse_V, i1 false)
  call void @_ssdm_op_Write.ap_auto.i4P(i4* %iosc_secCounter_V, i4 0)
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %iosc_counter_clk_V, i32 0)
  ret void

UnifiedUnreachableBlock:                          ; preds = %3, %1
  unreachable
}

define void @"iosc::iosThread"(i1* %clk, i1* %reset, i4* %ctrl, i4* %inSwitch, i4* %outLeds, i4* %iosc_switchs_V, i1* %iosc_secPulse_V, i4* %iosc_secCounter_V, i32* %iosc_counter_clk_V) {
_ZN7_ap_sc_7sc_core4waitEi.exit:
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %clk), !map !121
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %reset), !map !125
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %ctrl), !map !129
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %inSwitch), !map !133
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %outLeds), !map !137
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %iosc_switchs_V), !map !141
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %iosc_secPulse_V), !map !145
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %iosc_secCounter_V), !map !149
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %iosc_counter_clk_V), !map !153
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [7 x i8]* @p_str1, [4 x i8]* @p_str2, i32 0, i32 0, i1* %clk) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [7 x i8]* @p_str1, [6 x i8]* @p_str3, i32 0, i32 0, i1* %reset) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [13 x i8]* @p_str4, [5 x i8]* @p_str5, i32 0, i32 0, i4* %ctrl) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [13 x i8]* @p_str4, [9 x i8]* @p_str6, i32 0, i32 0, i4* %inSwitch) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 1, [13 x i8]* @p_str4, [8 x i8]* @p_str7, i32 0, i32 0, i4* %outLeds) nounwind
  call void (...)* @_ssdm_op_SpecProcessDef([5 x i8]* @p_str, i32 2, [10 x i8]* @p_str8) nounwind
  %tmp_1 = call i32 (...)* @_ssdm_op_SpecRegionBegin([15 x i8]* @p_str9)
  call void (...)* @_ssdm_op_SpecProtocol(i32 1, [1 x i8]* @p_str10) nounwind
  %p_ssdm_reset_v = call i32 (...)* @_ssdm_op_SpecStateBegin(i32 0, i32 0, i32 1) nounwind
  call void (...)* @_ssdm_op_SpecIFCore(i4* %ctrl, [1 x i8]* @p_str10, [10 x i8]* @p_str16, [1 x i8]* @p_str10, i32 -1, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [17 x i8]* @p_str17)
  %empty = call i32 (...)* @_ssdm_op_SpecStateEnd(i32 %p_ssdm_reset_v) nounwind
  %empty_2 = call i32 (...)* @_ssdm_op_SpecRegionEnd([15 x i8]* @p_str9, i32 %tmp_1)
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind
  br label %_ZN7_ap_sc_7sc_core4waitEi.exit2

_ZN7_ap_sc_7sc_core4waitEi.exit2:                 ; preds = %2, %_ZN7_ap_sc_7sc_core4waitEi.exit
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind
  %val_V = call i4 @_ssdm_op_Read.ap_auto.volatile.i4P(i4* %ctrl)
  %tmp = icmp eq i4 %val_V, 0
  br i1 %tmp, label %1, label %0

; <label>:0                                       ; preds = %_ZN7_ap_sc_7sc_core4waitEi.exit2
  %val_V_3 = call i4 @_ssdm_op_Read.ap_auto.volatile.i4P(i4* %inSwitch)
  %val_V_4 = call i4 @_ssdm_op_Read.ap_auto.volatile.i4P(i4* %ctrl)
  %r_V = and i4 %val_V_4, %val_V_3
  br label %2

; <label>:1                                       ; preds = %_ZN7_ap_sc_7sc_core4waitEi.exit2
  %iosc_secCounter_V_re = call i4 @_ssdm_op_Read.ap_auto.i4P(i4* %iosc_secCounter_V)
  br label %2

; <label>:2                                       ; preds = %1, %0
  %v_V = phi i4 [ %r_V, %0 ], [ %iosc_secCounter_V_re, %1 ]
  call void @_ssdm_op_Write.ap_auto.i4P(i4* %iosc_switchs_V, i4 %v_V)
  call void @_ssdm_op_Write.ap_auto.volatile.i4P(i4* %outLeds, i4 %v_V)
  br label %_ZN7_ap_sc_7sc_core4waitEi.exit2
}

define void @"iosc::iosPulseThread"(i1* %clk, i1* %reset, i4* %ctrl, i4* %inSwitch, i4* %outLeds, i4* %iosc_switchs_V, i1* %iosc_secPulse_V, i4* %iosc_secCounter_V, i32* %iosc_counter_clk_V) {
  call void (...)* @_ssdm_op_SpecIFCore(i4* %ctrl, [1 x i8]* @p_str10, [10 x i8]* @p_str16, [1 x i8]* @p_str10, i32 -1, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [1 x i8]* @p_str10, [17 x i8]* @p_str17)
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %clk), !map !121
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %reset), !map !125
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %ctrl), !map !129
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %inSwitch), !map !133
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %outLeds), !map !137
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %iosc_switchs_V), !map !141
  call void (...)* @_ssdm_op_SpecBitsMap(i1* %iosc_secPulse_V), !map !145
  call void (...)* @_ssdm_op_SpecBitsMap(i4* %iosc_secCounter_V), !map !149
  call void (...)* @_ssdm_op_SpecBitsMap(i32* %iosc_counter_clk_V), !map !153
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [7 x i8]* @p_str1, [4 x i8]* @p_str2, i32 0, i32 0, i1* %clk) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [7 x i8]* @p_str1, [6 x i8]* @p_str3, i32 0, i32 0, i1* %reset) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [13 x i8]* @p_str4, [5 x i8]* @p_str5, i32 0, i32 0, i4* %ctrl) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 0, [13 x i8]* @p_str4, [9 x i8]* @p_str6, i32 0, i32 0, i4* %inSwitch) nounwind
  call void (...)* @_ssdm_op_SpecPort([5 x i8]* @p_str, i32 1, [13 x i8]* @p_str4, [8 x i8]* @p_str7, i32 0, i32 0, i4* %outLeds) nounwind
  call void (...)* @_ssdm_op_SpecProcessDef([5 x i8]* @p_str, i32 2, [15 x i8]* @p_str18) nounwind
  %tmp = call i32 (...)* @_ssdm_op_SpecRegionBegin([15 x i8]* @p_str9)
  call void (...)* @_ssdm_op_SpecProtocol(i32 1, [1 x i8]* @p_str10) nounwind
  %p_ssdm_reset_v = call i32 (...)* @_ssdm_op_SpecStateBegin(i32 0, i32 0, i32 1) nounwind
  %empty = call i32 (...)* @_ssdm_op_SpecStateEnd(i32 %p_ssdm_reset_v) nounwind
  %empty_3 = call i32 (...)* @_ssdm_op_SpecRegionEnd([15 x i8]* @p_str9, i32 %tmp)
  br label %1

; <label>:1                                       ; preds = %_ZN7_ap_sc_7sc_core4waitEi.exit, %0
  %iosc_counter_clk_V_r = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %iosc_counter_clk_V)
  %iosc_counter_clk_V_a = add i32 %iosc_counter_clk_V_r, 1
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %iosc_counter_clk_V, i32 %iosc_counter_clk_V_a)
  %tmp_2 = icmp ugt i32 %iosc_counter_clk_V_a, 49999999
  br i1 %tmp_2, label %2, label %_ZN7_ap_sc_7sc_core4waitEi.exit

; <label>:2                                       ; preds = %1
  %iosc_secCounter_V_re = call i4 @_ssdm_op_Read.ap_auto.i4P(i4* %iosc_secCounter_V)
  %tmp_3 = add i4 %iosc_secCounter_V_re, 1
  call void @_ssdm_op_Write.ap_auto.i4P(i4* %iosc_secCounter_V, i4 %tmp_3)
  call void @_ssdm_op_Write.ap_auto.i32P(i32* %iosc_counter_clk_V, i32 0)
  br label %_ZN7_ap_sc_7sc_core4waitEi.exit

_ZN7_ap_sc_7sc_core4waitEi.exit:                  ; preds = %2, %1
  call void (...)* @_ssdm_op_Wait(i32 1) nounwind
  br label %1
}

define weak void @_ssdm_op_Write.ap_auto.volatile.i4P(i4*, i4) {
entry:
  store i4 %1, i4* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i4P(i4*, i4) {
entry:
  store i4 %1, i4* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i32P(i32*, i32) {
entry:
  store i32 %1, i32* %0
  ret void
}

define weak void @_ssdm_op_Write.ap_auto.i1P(i1*, i1) {
entry:
  store i1 %1, i1* %0
  ret void
}

define weak void @_ssdm_op_Wait(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecTopModule(...) nounwind {
entry:
  ret void
}

define weak i32 @_ssdm_op_SpecStateEnd(...) nounwind {
entry:
  ret i32 0
}

define weak i32 @_ssdm_op_SpecStateBegin(...) nounwind {
entry:
  ret i32 0
}

define weak void @_ssdm_op_SpecSensitive(...) nounwind {
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

define weak void @_ssdm_op_SpecProtocol(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecProcessDef(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecProcessDecl(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecPort(...) nounwind {
entry:
  ret void
}

define weak void @_ssdm_op_SpecIFCore(...) {
entry:
  ret void
}

define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

define weak i4 @_ssdm_op_Read.ap_auto.volatile.i4P(i4*) {
entry:
  %empty = load i4* %0
  ret i4 %empty
}

define weak i4 @_ssdm_op_Read.ap_auto.i4P(i4*) {
entry:
  %empty = load i4* %0
  ret i4 %empty
}

define weak i32 @_ssdm_op_Read.ap_auto.i32P(i32*) {
entry:
  %empty = load i32* %0
  ret i32 %empty
}

declare void @_GLOBAL__I_a() nounwind

!opencl.kernels = !{!0, !0, !7, !13, !13, !0, !15, !18, !13, !13, !0, !24, !0, !15, !26, !29, !31, !34, !35, !35, !0, !0, !37, !0, !39, !24, !0, !0, !41, !44, !0, !0, !46, !46, !13, !0, !47, !34, !49, !49, !53, !53, !46, !46, !13, !46, !46, !55, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !57}
!hls.encrypted.func = !{}
!llvm.map.gv = !{!59, !66, !71, !76, !81, !86, !91, !96, !101, !106, !111, !116}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space"}
!2 = metadata !{metadata !"kernel_arg_access_qual"}
!3 = metadata !{metadata !"kernel_arg_type"}
!4 = metadata !{metadata !"kernel_arg_type_qual"}
!5 = metadata !{metadata !"kernel_arg_name"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !12, metadata !6}
!8 = metadata !{metadata !"kernel_arg_addr_space", i32 0}
!9 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none"}
!10 = metadata !{metadata !"kernel_arg_type", metadata !"int"}
!11 = metadata !{metadata !"kernel_arg_type_qual", metadata !""}
!12 = metadata !{metadata !"kernel_arg_name", metadata !""}
!13 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !14, metadata !6}
!14 = metadata !{metadata !"kernel_arg_name", metadata !"op"}
!15 = metadata !{null, metadata !8, metadata !9, metadata !16, metadata !11, metadata !17, metadata !6}
!16 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<1, false> &"}
!17 = metadata !{metadata !"kernel_arg_name", metadata !"op2"}
!18 = metadata !{null, metadata !19, metadata !20, metadata !21, metadata !22, metadata !23, metadata !6}
!19 = metadata !{metadata !"kernel_arg_addr_space", i32 0, i32 0}
!20 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none"}
!21 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, false> &", metadata !"int"}
!22 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !""}
!23 = metadata !{metadata !"kernel_arg_name", metadata !"op", metadata !"op2"}
!24 = metadata !{null, metadata !8, metadata !9, metadata !25, metadata !11, metadata !17, metadata !6}
!25 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<32, true> &"}
!26 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !28, metadata !6}
!27 = metadata !{metadata !"kernel_arg_type", metadata !"const struct _ap_sc_::sc_dt::sc_uint<4> &"}
!28 = metadata !{metadata !"kernel_arg_name", metadata !"v"}
!29 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !30, metadata !6}
!30 = metadata !{metadata !"kernel_arg_name", metadata !"v2"}
!31 = metadata !{null, metadata !19, metadata !20, metadata !32, metadata !22, metadata !33, metadata !6}
!32 = metadata !{metadata !"kernel_arg_type", metadata !"volatile sc_uint<4> &", metadata !"const struct _ap_sc_::sc_dt::sc_uint<4> &"}
!33 = metadata !{metadata !"kernel_arg_name", metadata !"P", metadata !"val"}
!34 = metadata !{null, metadata !8, metadata !9, metadata !27, metadata !11, metadata !17, metadata !6}
!35 = metadata !{null, metadata !8, metadata !9, metadata !36, metadata !11, metadata !14, metadata !6}
!36 = metadata !{metadata !"kernel_arg_type", metadata !"const sc_uint_base &"}
!37 = metadata !{null, metadata !19, metadata !20, metadata !38, metadata !22, metadata !23, metadata !6}
!38 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &", metadata !"const ap_int_base<4, false> &"}
!39 = metadata !{null, metadata !19, metadata !20, metadata !40, metadata !22, metadata !23, metadata !6}
!40 = metadata !{metadata !"kernel_arg_type", metadata !"const ap_int_base<4, false> &", metadata !"int"}
!41 = metadata !{null, metadata !8, metadata !9, metadata !42, metadata !11, metadata !43, metadata !6}
!42 = metadata !{metadata !"kernel_arg_type", metadata !"volatile sc_uint<4> &"}
!43 = metadata !{metadata !"kernel_arg_name", metadata !"P"}
!44 = metadata !{null, metadata !8, metadata !9, metadata !45, metadata !11, metadata !17, metadata !6}
!45 = metadata !{metadata !"kernel_arg_type", metadata !"const volatile struct _ap_sc_::sc_dt::sc_uint<4> &"}
!46 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !28, metadata !6}
!47 = metadata !{null, metadata !8, metadata !9, metadata !48, metadata !11, metadata !17, metadata !6}
!48 = metadata !{metadata !"kernel_arg_type", metadata !"const struct _ap_sc_::sc_dt::sc_uint<32> &"}
!49 = metadata !{null, metadata !50, metadata !9, metadata !51, metadata !52, metadata !12, metadata !6}
!50 = metadata !{metadata !"kernel_arg_addr_space", i32 1}
!51 = metadata !{metadata !"kernel_arg_type", metadata !"char*"}
!52 = metadata !{metadata !"kernel_arg_type_qual", metadata !"const"}
!53 = metadata !{null, metadata !8, metadata !9, metadata !54, metadata !11, metadata !12, metadata !6}
!54 = metadata !{metadata !"kernel_arg_type", metadata !"::sc_core::sc_module_name"}
!55 = metadata !{null, metadata !8, metadata !9, metadata !56, metadata !11, metadata !17, metadata !6}
!56 = metadata !{metadata !"kernel_arg_type", metadata !"const struct _ap_sc_::sc_dt::sc_uint<1> &"}
!57 = metadata !{null, metadata !8, metadata !9, metadata !10, metadata !11, metadata !58, metadata !6}
!58 = metadata !{metadata !"kernel_arg_name", metadata !"n"}
!59 = metadata !{metadata !60, i4* @ssdm_ins_iosc_0_0_sw}
!60 = metadata !{metadata !61}
!61 = metadata !{i32 0, i32 3, metadata !62}
!62 = metadata !{metadata !63}
!63 = metadata !{metadata !"ssdm_ins_iosc_0_0.switchs.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!64 = metadata !{metadata !65}
!65 = metadata !{i32 0, i32 0, i32 1}
!66 = metadata !{metadata !67, i1* @ssdm_ins_iosc_0_0_se}
!67 = metadata !{metadata !68}
!68 = metadata !{i32 0, i32 0, metadata !69}
!69 = metadata !{metadata !70}
!70 = metadata !{metadata !"ssdm_ins_iosc_0_0.secPulse.V", metadata !64, metadata !"uint1", i32 0, i32 0}
!71 = metadata !{metadata !72, i4* @ssdm_ins_iosc_0_0_se_1}
!72 = metadata !{metadata !73}
!73 = metadata !{i32 0, i32 3, metadata !74}
!74 = metadata !{metadata !75}
!75 = metadata !{metadata !"ssdm_ins_iosc_0_0.secCounter.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!76 = metadata !{metadata !77, i1* @ssdm_ins_iosc_0_0_re}
!77 = metadata !{metadata !78}
!78 = metadata !{i32 0, i32 0, metadata !79}
!79 = metadata !{metadata !80}
!80 = metadata !{metadata !"ssdm_ins_iosc_0_0.reset.m_if.Val", metadata !64, metadata !"bool", i32 0, i32 0}
!81 = metadata !{metadata !82, i4* @ssdm_ins_iosc_0_0_ou}
!82 = metadata !{metadata !83}
!83 = metadata !{i32 0, i32 3, metadata !84}
!84 = metadata !{metadata !85}
!85 = metadata !{metadata !"ssdm_ins_iosc_0_0.outLeds.m_if.Val.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!86 = metadata !{metadata !87, i4* @ssdm_ins_iosc_0_0_in}
!87 = metadata !{metadata !88}
!88 = metadata !{i32 0, i32 3, metadata !89}
!89 = metadata !{metadata !90}
!90 = metadata !{metadata !"ssdm_ins_iosc_0_0.inSwitch.m_if.Val.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!91 = metadata !{metadata !92, i4* @ssdm_ins_iosc_0_0_ct}
!92 = metadata !{metadata !93}
!93 = metadata !{i32 0, i32 3, metadata !94}
!94 = metadata !{metadata !95}
!95 = metadata !{metadata !"ssdm_ins_iosc_0_0.ctrl.m_if.Val.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!96 = metadata !{metadata !97, i32* @ssdm_ins_iosc_0_0_co}
!97 = metadata !{metadata !98}
!98 = metadata !{i32 0, i32 31, metadata !99}
!99 = metadata !{metadata !100}
!100 = metadata !{metadata !"ssdm_ins_iosc_0_0.counter_clk.V", metadata !64, metadata !"uint32", i32 0, i32 31}
!101 = metadata !{metadata !102, i1* @ssdm_ins_iosc_0_0_cl}
!102 = metadata !{metadata !103}
!103 = metadata !{i32 0, i32 0, metadata !104}
!104 = metadata !{metadata !105}
!105 = metadata !{metadata !"ssdm_ins_iosc_0_0.clk.m_if.Val", metadata !64, metadata !"bool", i32 0, i32 0}
!106 = metadata !{metadata !107, [1 x i32]* @llvm_global_ctors_0}
!107 = metadata !{metadata !108}
!108 = metadata !{i32 0, i32 31, metadata !109}
!109 = metadata !{metadata !110}
!110 = metadata !{metadata !"llvm.global_ctors.0", metadata !64, metadata !"", i32 0, i32 31}
!111 = metadata !{metadata !112, i1* @iosc_ssdm_thread_M_iosThread}
!112 = metadata !{metadata !113}
!113 = metadata !{i32 0, i32 0, metadata !114}
!114 = metadata !{metadata !115}
!115 = metadata !{metadata !"iosc::__ssdm_thread_M_iosThread", metadata !64, metadata !"bool", i32 0, i32 0}
!116 = metadata !{metadata !117, i1* @iosc_ssdm_thread_M_iosPulseThread}
!117 = metadata !{metadata !118}
!118 = metadata !{i32 0, i32 0, metadata !119}
!119 = metadata !{metadata !120}
!120 = metadata !{metadata !"iosc::__ssdm_thread_M_iosPulseThread", metadata !64, metadata !"bool", i32 0, i32 0}
!121 = metadata !{metadata !122}
!122 = metadata !{i32 0, i32 0, metadata !123}
!123 = metadata !{metadata !124}
!124 = metadata !{metadata !"iosc.clk.m_if.Val", metadata !64, metadata !"bool", i32 0, i32 0}
!125 = metadata !{metadata !126}
!126 = metadata !{i32 0, i32 0, metadata !127}
!127 = metadata !{metadata !128}
!128 = metadata !{metadata !"iosc.reset.m_if.Val", metadata !64, metadata !"bool", i32 0, i32 0}
!129 = metadata !{metadata !130}
!130 = metadata !{i32 0, i32 3, metadata !131}
!131 = metadata !{metadata !132}
!132 = metadata !{metadata !"iosc.ctrl.m_if.Val.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!133 = metadata !{metadata !134}
!134 = metadata !{i32 0, i32 3, metadata !135}
!135 = metadata !{metadata !136}
!136 = metadata !{metadata !"iosc.inSwitch.m_if.Val.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!137 = metadata !{metadata !138}
!138 = metadata !{i32 0, i32 3, metadata !139}
!139 = metadata !{metadata !140}
!140 = metadata !{metadata !"iosc.outLeds.m_if.Val.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!141 = metadata !{metadata !142}
!142 = metadata !{i32 0, i32 3, metadata !143}
!143 = metadata !{metadata !144}
!144 = metadata !{metadata !"iosc.switchs.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!145 = metadata !{metadata !146}
!146 = metadata !{i32 0, i32 0, metadata !147}
!147 = metadata !{metadata !148}
!148 = metadata !{metadata !"iosc.secPulse.V", metadata !64, metadata !"uint1", i32 0, i32 0}
!149 = metadata !{metadata !150}
!150 = metadata !{i32 0, i32 3, metadata !151}
!151 = metadata !{metadata !152}
!152 = metadata !{metadata !"iosc.secCounter.V", metadata !64, metadata !"uint4", i32 0, i32 3}
!153 = metadata !{metadata !154}
!154 = metadata !{i32 0, i32 31, metadata !155}
!155 = metadata !{metadata !156}
!156 = metadata !{metadata !"iosc.counter_clk.V", metadata !64, metadata !"uint32", i32 0, i32 31}
