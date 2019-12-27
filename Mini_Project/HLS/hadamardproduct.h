#ifndef __HADAMARDPRODUCT_H__
#define __HADAMARDPRODUCT_H__

#include <cmath>
#include <ap_int.h>
using namespace std;

// Uncomment this line to compare TB vs HW C-model and/or RTL
#define HW_COSIM

#define MAT_ROWS 3
#define MAT_COLS 3

typedef ap_int<9> mat_a_t;
typedef ap_int<9> mat_b_t;
typedef ap_int<17> result_t;

// Prototype of top level function for C-synthesis
void hadamardproduct(
      mat_a_t a[MAT_ROWS][MAT_COLS],
      mat_b_t b[MAT_ROWS][MAT_COLS],
      result_t res[MAT_ROWS][MAT_COLS]);

#endif // __HADAMARDPRODUCT_H__ not defined
