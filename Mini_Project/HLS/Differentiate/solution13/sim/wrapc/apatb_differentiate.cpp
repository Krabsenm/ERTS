// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "ap_stream.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "img"
#define AUTOTB_TVIN_img  "../tv/cdatafile/c.differentiate.autotvin_img.dat"
// wrapc file define: "window_V"
#define AUTOTB_TVIN_window_V  "../tv/cdatafile/c.differentiate.autotvin_window_V.dat"
// wrapc file define: "res_V"
#define AUTOTB_TVOUT_res_V  "../tv/cdatafile/c.differentiate.autotvout_res_V.dat"
#define AUTOTB_TVIN_res_V  "../tv/cdatafile/c.differentiate.autotvin_res_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "res_V"
#define AUTOTB_TVOUT_PC_res_V  "../tv/rtldatafile/rtl.differentiate.autotvout_res_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			img_depth = 0;
			window_V_depth = 0;
			res_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{img " << img_depth << "}\n";
			total_list << "{window_V " << window_V_depth << "}\n";
			total_list << "{res_V " << res_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int img_depth;
		int window_V_depth;
		int res_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void differentiate (
unsigned char img[64][48],
ap_int<3> window[3][3],
ap_uint<15> res[62][46]);

void AESL_WRAP_differentiate (
unsigned char img[64][48],
ap_int<3> window[3][3],
ap_uint<15> res[62][46])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "res_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_res_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_res_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_res_V, AESL_token); // data

			sc_bv<15> *res_V_pc_buffer = new sc_bv<15>[2852];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'res_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					res_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_res_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_res_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: res_V
				{
					// bitslice(14, 0)
					// {
						// celement: res.V(14, 0)
						// {
							sc_lv<15>* res_V_lv0_0_61_1_lv1_0_45_1 = new sc_lv<15>[2852];
						// }
					// }

					// bitslice(14, 0)
					{
						int hls_map_index = 0;
						// celement: res.V(14, 0)
						{
							// carray: (0) => (61) @ (1)
							for (int i_0 = 0; i_0 <= 61; i_0 += 1)
							{
								// carray: (0) => (45) @ (1)
								for (int i_1 = 0; i_1 <= 45; i_1 += 1)
								{
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res_V_lv0_0_61_1_lv1_0_45_1[hls_map_index].range(14, 0) = sc_bv<15>(res_V_pc_buffer[hls_map_index].range(14, 0));
										hls_map_index++;
									}
								}
							}
						}
					}

					// bitslice(14, 0)
					{
						int hls_map_index = 0;
						// celement: res.V(14, 0)
						{
							// carray: (0) => (61) @ (1)
							for (int i_0 = 0; i_0 <= 61; i_0 += 1)
							{
								// carray: (0) => (45) @ (1)
								for (int i_1 = 0; i_1 <= 45; i_1 += 1)
								{
									// sub                    : i_0 i_1
									// ori_name               : res[i_0][i_1]
									// sub_1st_elem           : 0 0
									// ori_name_1st_elem      : res[0][0]
									// output_left_conversion : res[i_0][i_1]
									// output_type_conversion : (res_V_lv0_0_61_1_lv1_0_45_1[hls_map_index]).to_string(SC_BIN).c_str()
									if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
									{
										res[i_0][i_1] = (res_V_lv0_0_61_1_lv1_0_45_1[hls_map_index]).to_string(SC_BIN).c_str();
										hls_map_index++;
									}
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] res_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "img"
		char* tvin_img = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_img);

		// "window_V"
		char* tvin_window_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_window_V);

		// "res_V"
		char* tvin_res_V = new char[50];
		aesl_fh.touch(AUTOTB_TVIN_res_V);
		char* tvout_res_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_res_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_img, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_img, tvin_img);

		sc_bv<8>* img_tvin_wrapc_buffer = new sc_bv<8>[3072];

		// RTL Name: img
		{
			// bitslice(7, 0)
			{
				int hls_map_index = 0;
				// celement: img(7, 0)
				{
					// carray: (0) => (63) @ (1)
					for (int i_0 = 0; i_0 <= 63; i_0 += 1)
					{
						// carray: (0) => (47) @ (1)
						for (int i_1 = 0; i_1 <= 47; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : img[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : img[0][0]
							// regulate_c_name       : img
							// input_type_conversion : img[i_0][i_1]
							if (&(img[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<8> img_tmp_mem;
								img_tmp_mem = img[i_0][i_1];
								img_tvin_wrapc_buffer[hls_map_index].range(7, 0) = img_tmp_mem.range(7, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 3072; i++)
		{
			sprintf(tvin_img, "%s\n", (img_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_img, tvin_img);
		}

		tcl_file.set_num(3072, &tcl_file.img_depth);
		sprintf(tvin_img, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_img, tvin_img);

		// release memory allocation
		delete [] img_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_window_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_window_V, tvin_window_V);

		sc_bv<3>* window_V_tvin_wrapc_buffer = new sc_bv<3>[9];

		// RTL Name: window_V
		{
			// bitslice(2, 0)
			{
				int hls_map_index = 0;
				// celement: window.V(2, 0)
				{
					// carray: (0) => (2) @ (1)
					for (int i_0 = 0; i_0 <= 2; i_0 += 1)
					{
						// carray: (0) => (2) @ (1)
						for (int i_1 = 0; i_1 <= 2; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : window[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : window[0][0]
							// regulate_c_name       : window_V
							// input_type_conversion : (window[i_0][i_1]).to_string(2).c_str()
							if (&(window[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<3> window_V_tmp_mem;
								window_V_tmp_mem = (window[i_0][i_1]).to_string(2).c_str();
								window_V_tvin_wrapc_buffer[hls_map_index].range(2, 0) = window_V_tmp_mem.range(2, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 9; i++)
		{
			sprintf(tvin_window_V, "%s\n", (window_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_window_V, tvin_window_V);
		}

		tcl_file.set_num(9, &tcl_file.window_V_depth);
		sprintf(tvin_window_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_window_V, tvin_window_V);

		// release memory allocation
		delete [] window_V_tvin_wrapc_buffer;

		// [[transaction]]
		sprintf(tvin_res_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_res_V, tvin_res_V);

		sc_bv<15>* res_V_tvin_wrapc_buffer = new sc_bv<15>[2852];

		// RTL Name: res_V
		{
			// bitslice(14, 0)
			{
				int hls_map_index = 0;
				// celement: res.V(14, 0)
				{
					// carray: (0) => (61) @ (1)
					for (int i_0 = 0; i_0 <= 61; i_0 += 1)
					{
						// carray: (0) => (45) @ (1)
						for (int i_1 = 0; i_1 <= 45; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res_V
							// input_type_conversion : (res[i_0][i_1]).to_string(2).c_str()
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<15> res_V_tmp_mem;
								res_V_tmp_mem = (res[i_0][i_1]).to_string(2).c_str();
								res_V_tvin_wrapc_buffer[hls_map_index].range(14, 0) = res_V_tmp_mem.range(14, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2852; i++)
		{
			sprintf(tvin_res_V, "%s\n", (res_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_res_V, tvin_res_V);
		}

		tcl_file.set_num(2852, &tcl_file.res_V_depth);
		sprintf(tvin_res_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_res_V, tvin_res_V);

		// release memory allocation
		delete [] res_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		differentiate(img, window, res);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_res_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_res_V, tvout_res_V);

		sc_bv<15>* res_V_tvout_wrapc_buffer = new sc_bv<15>[2852];

		// RTL Name: res_V
		{
			// bitslice(14, 0)
			{
				int hls_map_index = 0;
				// celement: res.V(14, 0)
				{
					// carray: (0) => (61) @ (1)
					for (int i_0 = 0; i_0 <= 61; i_0 += 1)
					{
						// carray: (0) => (45) @ (1)
						for (int i_1 = 0; i_1 <= 45; i_1 += 1)
						{
							// sub                   : i_0 i_1
							// ori_name              : res[i_0][i_1]
							// sub_1st_elem          : 0 0
							// ori_name_1st_elem     : res[0][0]
							// regulate_c_name       : res_V
							// input_type_conversion : (res[i_0][i_1]).to_string(2).c_str()
							if (&(res[0][0]) != NULL) // check the null address if the c port is array or others
							{
								sc_lv<15> res_V_tmp_mem;
								res_V_tmp_mem = (res[i_0][i_1]).to_string(2).c_str();
								res_V_tvout_wrapc_buffer[hls_map_index].range(14, 0) = res_V_tmp_mem.range(14, 0);
                                 		       hls_map_index++;
							}
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 2852; i++)
		{
			sprintf(tvout_res_V, "%s\n", (res_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_res_V, tvout_res_V);
		}

		tcl_file.set_num(2852, &tcl_file.res_V_depth);
		sprintf(tvout_res_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_res_V, tvout_res_V);

		// release memory allocation
		delete [] res_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "img"
		delete [] tvin_img;
		// release memory allocation: "window_V"
		delete [] tvin_window_V;
		// release memory allocation: "res_V"
		delete [] tvout_res_V;
		delete [] tvin_res_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

