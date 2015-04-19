/*
============================================================================
Name        : multiplyMatrices.c
Author      : Robert McNeill
Description :
============================================================================
*/

#ifndef MULTIPLYMATRICES_H_
#define MULTIPLYMATRICES_H_

/**
* Generate the matrices to be multiplied by the 8 cores.
*
* @param rowsA
*        The number of rows in arrayA
* @param columnsA
*        The number of columns in arrayA
* @param rowsB
*        The number of rows in arrayB
* @param columnsB
*        The number of columns in arrayB
* @param arrayA
*        Input arrayA
* @param arrayB
*        Input arrayB
*/

void multiply (int rows, int columns, int *inputA, int *inputB, long *output);
#endif /* MULTIPLYMATRICES_H_ */
