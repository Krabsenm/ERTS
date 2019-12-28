#include <iostream>
#include "differentiate.h"

using namespace std;

int main(int argc, char **argv)
{
   img_t in_img[4][4] = {
      {255, 255, 255,   0},
      {255, 255, 255,   0},
      {255, 255, 255,   0},
	  {  0,   0,   0,   0}
   };
   window_t in_window[3][3] = {
      {-1, 0, 1},
      {-2, 0, 2},
      {-1, 0, 1}
   };
   result_t hw_result[2][2], sw_result[2][2];
   int err_cnt = 0;

   // Generate the expected result
   // Iterate over the rows of the image
   for(int i = 1; i < IMG_ROWS-1; i++) {
       // Iterate over the columns of the image
       for(int j = 1; j < IMG_COLS-1; j++) {
         // Do the sobel calulation
    	 int i_res = i-(WINDOW_ROWS-1)/2;
    	 int j_res = j-(WINDOW_COLS-1)/2;

	     sw_result[i_res][j_res] = 0;

         // Iterate over the rows of the window
         for(int ii = 0; ii < WINDOW_ROWS; ii++) {
			// Iterate over the columns of the window
			for(int jj = 0; jj < WINDOW_COLS; jj++) {
				int img_val = in_img[i_res+ii][j_res+jj];
				int win_val = in_window[ii][jj];
				sw_result[i_res][j_res] += img_val * win_val;
			}
         }
       }
     }

#ifdef HW_COSIM
   // Run the AutoESL matrix multiply block
   differentiate(in_img, in_window, hw_result);
#endif

   // Print result matrix
   cout << "{" << endl;
   //cout << setw(6);
   for (int i = 0; i < 2; i++) {
      cout << "{";
      for (int j = 0; j < 2; j++) {
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
         if (j == 2 - 1)
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
