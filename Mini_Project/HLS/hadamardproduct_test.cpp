#include <iostream>
#include "hadamardproduct.h"

using namespace std;


int main(int argc, char **argv)
{
   mat_a_t in_mat_a[3][3] = {
      {2, 3, 4},
      {5, 6, 7},
      {8, 9 ,255}
   };
   mat_b_t in_mat_b[3][3] = {
	  {-2, 3, 4},
	  {5, 6, 7},
	  {8, 9 ,-255}
   };
   result_t hw_result[3][3], sw_result[3][3];
   int err_cnt = 0;

   // Generate the expected result
   // Iterate over the rows of the matrix
     Row: for(int i = 0; i < MAT_ROWS; i++) {
       // Iterate over the columns of the matrix
       Col: for(int j = 0; j < MAT_COLS; j++) {
         // Do the product
         sw_result[i][j] = in_mat_a[i][j] * in_mat_b[i][j];
       }
     }

#ifdef HW_COSIM
   // Run the AutoESL matrix multiply block
   hadamardproduct(in_mat_a, in_mat_b, hw_result);
#endif

   // Print result matrix
   cout << "{" << endl;
   //cout << setw(6);
   for (int i = 0; i < MAT_ROWS; i++) {
      cout << "{";
      for (int j = 0; j < MAT_COLS; j++) {
#ifdef HW_COSIM
         cout << hw_result[i][j];
         // Check HW result against SW
         if (hw_result[i][j] != sw_result[i][j]) {
            err_cnt++;
            cout << "*";
         }
#else
         cout << sw_result[i][j];
#endif
         if (j == MAT_COLS - 1)
            cout << "}" << endl;
         else
            cout << ",";
      }
   }
   cout << "}" << endl;

#ifdef HW_COSIM
   if (err_cnt)
      cout << "ERROR: " << err_cnt << " mismatches detected!" << endl;
   else
      cout << "Test passed." << endl;
#endif
   return err_cnt;
}
