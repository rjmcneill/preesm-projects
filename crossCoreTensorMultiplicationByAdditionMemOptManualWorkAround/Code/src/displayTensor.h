/*
============================================================================
Name        : displayMatrix.h
Author      : Robert McNeill
Description : Display resulting matrix from the multiplication
============================================================================
*/

#ifndef DISPLAYMATRIX_H_
#define DISPLAYMATRIX_H_

/**
* Display resulting matrix from the multiplication
*
* @param rowsA
*        The number of rows in arrayC
* @param columnsB
*        The number of columns in arrayC
* @param arrayC
*        The resulting array from arrayA * arrayB
*/

void display (int rowsA, int columnsA, int depth, int *input0, int *input1);

#endif /* DISPLAYMATRIX_H_ */
