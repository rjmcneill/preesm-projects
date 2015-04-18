/*
============================================================================
Name        : displayMatrix.h
Author      : Robert McNeill
Description : Display resulting matrix from the multiplication
============================================================================
*/

#include "displayTensor.h"
#include <stdio.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

void split (int rowsA, int columnsA, int *input, int *output0, int *output1)
{
	long i, j, k = 0;

	memcpy(*input, *output0, (sizeof(int)*columnsA*(rowsA/2)));
	memcpy(*(input+columnsA*(rowsA/2)), *output1, (sizeof(int)*columnsA*(rowsA/2)));

	exit(0);
}
