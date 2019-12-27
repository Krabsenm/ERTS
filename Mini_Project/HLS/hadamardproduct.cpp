#include "hadamardproduct.h"

void hadamardproduct(
      mat_a_t a[MAT_ROWS][MAT_COLS],
      mat_b_t b[MAT_ROWS][MAT_COLS],
      result_t res[MAT_ROWS][MAT_COLS])
{
  // Iterate over the rows of the matrix
  Row: for(int i = 0; i < MAT_ROWS; ++i) {
    // Iterate over the columns of the matrix
    Col: for(int j = 0; j < MAT_COLS; ++j) {
      // Do the product
      res[i][j] = a[i][j] * b[i][j];
    }
  }
}
