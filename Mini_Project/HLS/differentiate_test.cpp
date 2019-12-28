#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "differentiate.h"

using namespace std;

FILE *input_file;
double data, *data_ptr;

int main(int argc, char **argv)
{
  unsigned char data[IMG_COLS];
  int row = 0;
  img_t in_img[IMG_ROWS][IMG_COLS];
  window_t in_window[3][3] = {
    {-1, 0, 1},
    {-2, 0, 2},
    {-1, 0, 1}
  };
   result_t hw_result[IMG_ROWS-2][IMG_COLS-2], sw_result[IMG_ROWS-2][IMG_COLS-2];
   int err_cnt = 0;

  // Load image from file
  ifstream infile( "C:/Users/jonas/source/repos/ERTS/Mini_Project/HLS/small_cameraman.txt" , ifstream::in);
  if (infile.is_open())
  {
    while (infile.good())
    {
      string s;
      if (!getline( infile, s )) break;

      istringstream ss( s );
      int i = 0;
      while (ss)
      {
        string s;
        for(char j; ss >> j; ){
          if (j == ',')
            break;
          else
            s += j;
        }
        data[i++] = atoi(s.c_str());
      }

      for(int col = 0; col < IMG_COLS; col++)
        in_img[row][col] = data[col];
      row++;
    }
  }
  else {
    cout << "error infile" <<endl;
  }



  // Generate the expected result
  // Iterate over the rows of the image
  for(int i = 1; i < IMG_ROWS-1; i++) {
    // Iterate over the columns of the image
    for(int j = 1; j < IMG_COLS-1; j++) {
    // Do the sobel calulation
    int i_res = i-WIN_ROFFSET;
    int j_res = j-WIN_COFFSET;
    int temp_result = 0;

    // Iterate over the rows of the window
    for(int ii = 0; ii < WINDOW_ROWS; ii++) {
    // Iterate over the columns of the window
      for(int jj = 0; jj < WINDOW_COLS; jj++) {
        int img_val = in_img[i_res+ii][j_res+jj];
        int win_val = in_window[ii][jj];
        temp_result += img_val * win_val;
      }
    }
    if (temp_result < 0)
      temp_result = temp_result * -1;
    sw_result[i_res][j_res] = (unsigned int)temp_result;
    }
  }

#ifdef HW_COSIM
  // Run the AutoESL matrix multiply block
  differentiate(in_img, in_window, hw_result);
#endif

  // Print result
  for (int i = 0; i < IMG_ROWS-2; i++) {
    for (int j = 0; j < IMG_COLS-2; j++) {
      // Check HW result against SW
      if (hw_result[i][j] != sw_result[i][j]) {
        err_cnt++;
      }
    }
  }

#ifdef HW_COSIM
  if (err_cnt)
    cout << "ERROR: " << err_cnt << " mismatches detected!" << endl;
  else
    cout << "Test passed." << endl;
#endif


   // Save result to file
   ofstream outfile( "C:/Users/jonas/source/repos/ERTS/Mini_Project/HLS/small_cameraman_result.txt" , ofstream::out);
     if (outfile.is_open())
     {
    for (int i = 0; i < IMG_ROWS-2; i++) {
      for (int j = 0; j < IMG_COLS-2; j++) {
        char s[3];
#ifdef HW_COSIM
        sprintf(s, "%d", (int)hw_result[i][j]);
#else
        sprintf(s, "%d", (int)sw_result[i][j]);
#endif
        outfile << s;
        if ( j < IMG_COLS-2-1)
          outfile << ',';
      }
      outfile << '\n';
    }

    outfile.close();
     }
     else {
       cout << "error outfile" <<endl;
     }

   return err_cnt;
}
