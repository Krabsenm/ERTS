#ifndef __DIFFERENTIATE_H__
#define __DIFFERENTIATE_H__

#include <cmath>
#include <ap_int.h>
using namespace std;

// Uncomment this line to compare TB vs HW C-model and/or RTL
#define HW_COSIM

#define IMG_ROWS 64
#define IMG_COLS 48
#define WINDOW_ROWS 3
#define WINDOW_COLS 3

#define WIN_ROFFSET (WINDOW_ROWS-1)/2
#define WIN_COFFSET (WINDOW_COLS-1)/2

typedef unsigned char img_t;
typedef ap_int<3> window_t;
typedef ap_uint<15> result_t;

// Prototype of top level function for C-synthesis
void differentiate(
      img_t img[IMG_ROWS][IMG_COLS],
      window_t window[WINDOW_ROWS][WINDOW_COLS],
      result_t res[IMG_ROWS-(WINDOW_ROWS-1)][IMG_COLS-(WINDOW_COLS-1)]);

#endif // __DIFFERENTIATE_H__ not defined
