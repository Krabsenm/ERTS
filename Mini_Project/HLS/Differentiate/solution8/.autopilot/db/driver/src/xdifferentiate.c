// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xdifferentiate.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XDifferentiate_CfgInitialize(XDifferentiate *InstancePtr, XDifferentiate_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Diff_io_BaseAddress = ConfigPtr->Diff_io_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XDifferentiate_Start(XDifferentiate *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL) & 0x80;
    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL, Data | 0x01);
}

u32 XDifferentiate_IsDone(XDifferentiate *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XDifferentiate_IsIdle(XDifferentiate *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XDifferentiate_IsReady(XDifferentiate *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XDifferentiate_EnableAutoRestart(XDifferentiate *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL, 0x80);
}

void XDifferentiate_DisableAutoRestart(XDifferentiate *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_AP_CTRL, 0);
}

u32 XDifferentiate_Get_img_BaseAddress(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE);
}

u32 XDifferentiate_Get_img_HighAddress(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_IMG_HIGH);
}

u32 XDifferentiate_Get_img_TotalBytes(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XDIFFERENTIATE_DIFF_IO_ADDR_IMG_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + 1);
}

u32 XDifferentiate_Get_img_BitWidth(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDIFFERENTIATE_DIFF_IO_WIDTH_IMG;
}

u32 XDifferentiate_Get_img_Depth(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDIFFERENTIATE_DIFF_IO_DEPTH_IMG;
}

u32 XDifferentiate_Write_img_Words(XDifferentiate *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XDIFFERENTIATE_DIFF_IO_ADDR_IMG_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XDifferentiate_Read_img_Words(XDifferentiate *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XDIFFERENTIATE_DIFF_IO_ADDR_IMG_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + (offset + i)*4);
    }
    return length;
}

u32 XDifferentiate_Write_img_Bytes(XDifferentiate *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XDIFFERENTIATE_DIFF_IO_ADDR_IMG_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XDifferentiate_Read_img_Bytes(XDifferentiate *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XDIFFERENTIATE_DIFF_IO_ADDR_IMG_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_IMG_BASE + offset + i);
    }
    return length;
}

u32 XDifferentiate_Get_window_V_BaseAddress(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE);
}

u32 XDifferentiate_Get_window_V_HighAddress(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_HIGH);
}

u32 XDifferentiate_Get_window_V_TotalBytes(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + 1);
}

u32 XDifferentiate_Get_window_V_BitWidth(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDIFFERENTIATE_DIFF_IO_WIDTH_WINDOW_V;
}

u32 XDifferentiate_Get_window_V_Depth(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDIFFERENTIATE_DIFF_IO_DEPTH_WINDOW_V;
}

u32 XDifferentiate_Write_window_V_Words(XDifferentiate *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XDifferentiate_Read_window_V_Words(XDifferentiate *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XDifferentiate_Write_window_V_Bytes(XDifferentiate *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XDifferentiate_Read_window_V_Bytes(XDifferentiate *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_HIGH - XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Diff_io_BaseAddress + XDIFFERENTIATE_DIFF_IO_ADDR_WINDOW_V_BASE + offset + i);
    }
    return length;
}

void XDifferentiate_InterruptGlobalEnable(XDifferentiate *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_GIE, 1);
}

void XDifferentiate_InterruptGlobalDisable(XDifferentiate *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_GIE, 0);
}

void XDifferentiate_InterruptEnable(XDifferentiate *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_IER);
    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_IER, Register | Mask);
}

void XDifferentiate_InterruptDisable(XDifferentiate *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_IER);
    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_IER, Register & (~Mask));
}

void XDifferentiate_InterruptClear(XDifferentiate *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XDifferentiate_WriteReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_ISR, Mask);
}

u32 XDifferentiate_InterruptGetEnabled(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_IER);
}

u32 XDifferentiate_InterruptGetStatus(XDifferentiate *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XDifferentiate_ReadReg(InstancePtr->Diff_io_BaseAddress, XDIFFERENTIATE_DIFF_IO_ADDR_ISR);
}

