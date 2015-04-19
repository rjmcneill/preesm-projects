/*
============================================================================
Name        : tranposeMatrix.c
Author      : Robert McNeill
Description :
============================================================================
*/

#include "transposeTensor.h"
#include <stdio.h>

void transpose (int rowsB, int columnsB, int *input, int *output)
{
	int i, j, k;

	for (i = 0; i < rowsB; i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output+((j*columnsB) + i)) = *(input+((i*columnsB) + j));
		}
	}
}
