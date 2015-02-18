/*
============================================================================
Name        : mergeResults.h
Author      : Robert McNeill
Description : Display resulting matrix from the multiplication
============================================================================
*/

#ifndef MERGERESULTS_H_
#define MERGERESULTS_H_

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

void merge (int rowsA, int columnsB, int *input, int *output);

#endif /* MERGERESULTS_H_ */
