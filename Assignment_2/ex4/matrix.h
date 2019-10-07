/*
 * matrix.h
 *
 *  Created on: 24. sep. 2019
 *      Author: jonas
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include "xgpio.h"

// --- Definitions ---
#ifndef MSIZE
#define MSIZE 4
#endif


// --- Types ---
typedef union
{
	uint8_t comp[MSIZE];
	uint32_t vect;
} vectorType;

typedef vectorType VectorArray[MSIZE];


// --- Functions ---
void setInputMatrices(VectorArray A, VectorArray B);

void displayMatrix(VectorArray input);

void multiMatrixSoft(VectorArray A, VectorArray B, VectorArray P);

void multiMatrixHard(VectorArray A, VectorArray B, VectorArray P);

#endif /* MATRIX_H_ */
