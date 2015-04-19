/*
============================================================================
Name        : tranposeMatrix.c
Author      : Robert McNeill
Description :
============================================================================
*/

#include "sumResults.h"
#include <stdio.h>

void sum (int rows, int columns, long *input0, long *input1, long *input2, long *input3, long *input4, long *input5, long *input6, long *input7, long *output)
{
	int i, j, k;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			*(output+((i*columns) + j)) = *(input0+((i*columns)+j)) + *(input1+((i*columns)+j)) + *(input2+((i*columns)+j)) +
										  *(input3+((i*columns)+j)) + *(input4+((i*columns)+j)) + *(input5+((i*columns)+j)) +
										  *(input6+((i*columns)+j)) + *(input7+((i*columns)+j));
		}
	}
}
