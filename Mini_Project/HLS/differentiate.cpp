#include "differentiate.h"
void differentiate(
      img_t img[IMG_ROWS][IMG_COLS],
      window_t window[WINDOW_ROWS][WINDOW_COLS],
      result_t res[IMG_ROWS-2*WIN_ROFFSET][IMG_COLS-2*WIN_COFFSET])
{
  // Iterate over the rows of the image
  ImgRow: for(int i = 1; i < IMG_ROWS-1; i++) {
    // Iterate over the columns of the image
    ImgCol: for(int j = 1; j < IMG_COLS-1; j++) {
      // Do the inner product of a row of A and col of B
      ap_int<16> temp_result = 0;

      // Iterate over the rows of the window
      WinRow: for(int ii = 0; ii < WINDOW_ROWS; ii++) {
        // Iterate over the columns of the window
        WinCol: for(int jj = 0; jj < WINDOW_COLS; jj++) {
          temp_result += img[i-WIN_ROFFSET+ii][j-WIN_COFFSET+jj] * window[ii][jj];
        }
      }

      if (temp_result < 0)
        temp_result = -1*temp_result;
      res[i-WIN_ROFFSET][j-WIN_COFFSET] = (ap_uint<15>) temp_result;
    }
  }
}
