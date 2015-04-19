/*
============================================================================
Name        : transposeMatrix.c
Author      : Robert McNeill
Description :
============================================================================
*/

#ifndef SUMRESULTS_H_
#define SUMRESULTS_H_

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

void sum (int rows, int columns, long *input0, long *input1, long *input2, long *input3, long *input4, long *input5, long *input6, long *input7, long *output);
#endif /* SUMRESULTS_H_ */
