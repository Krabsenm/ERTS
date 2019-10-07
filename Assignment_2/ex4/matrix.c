/*
 * matrix.c
 *
 *  Created on: 27. sep. 2019
 *      Author: jonas
 */

#include "matrix.h"

void setInputMatrices(VectorArray A, VectorArray B)
{
	for (int i=0; i<MSIZE*MSIZE; i++)
	{
		A[i/MSIZE].comp[i%MSIZE] = i+1;
		B[i/MSIZE].comp[i%MSIZE] = (i/MSIZE)+1;
	}
}

void displayMatrix(VectorArray input)
{
	for (int i=0; i<MSIZE*MSIZE; i++)
	{
		xil_printf("%3d ", input[i/MSIZE].comp[i%MSIZE]);
		if (i % MSIZE == MSIZE-1)
			xil_printf("\r\n");
	}
}

void multiMatrixSoft(VectorArray A, VectorArray B, VectorArray P)
{
	for (int i=0; i<MSIZE; i++)
	{
		for (int j=0; j<MSIZE; j++)
		{
			P[i].comp[j] = 0;
			for (int k=0; k<MSIZE; k++)
			{
				P[i].comp[j] += A[i].comp[k]*B[j].comp[k];
			}
		}
	}
}

void multiMatrixHard(VectorArray A, VectorArray B, VectorArray P)
{
	//TBD
}
