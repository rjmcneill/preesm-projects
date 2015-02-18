/*
============================================================================
Name        : displayMatrix.h
Author      : Robert McNeill
Description : Display resulting matrix from the multiplication
============================================================================
*/

#include "displayMatrix.h"
#include <stdio.h>

//#include <xdc/runtime/System.h>
//#include <xdc/runtime/Timestamp.h>


void merge (int rowsA, int columnsB, int *input, int *output)
{
	int i = 0;
	long copyIdx = 0;
	long copySize = (rowsA * columnsB)/8;

	for (i = 0; i < 8; i++)
	{
		copyIdx = (i * rowsA * columnsB);
		memcpy((output + copyIdx), (input + copyIdx), copySize);
	}
}
