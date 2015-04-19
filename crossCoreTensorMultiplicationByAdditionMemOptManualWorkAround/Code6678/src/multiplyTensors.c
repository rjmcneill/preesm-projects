/*
============================================================================
Name        : multiplyMatrices.c
Author      : Robert McNeill
Description :
============================================================================
*/

#include "multiplyTensors.h"
#include <xdc/runtime/Timestamp.h>
#include <stdio.h>


void multiply (int rows, int columns, int *inputA, int *inputB, long *output)
{
	int i, j, k;

	for (i = 0; i < columns; i++)
	{
		for (j = 0; j < rows; j++)
		{
			for (k = 0; k < columns/8; k++)
			{
				if (k == 0)
				{
					*(output+((i*columns) + j)) = ((*(inputA+((k*rows) + j))) * (*(inputB+((k*columns) + i))));
				}
				else
				{
					*(output+((i*columns) + j)) = *(output+((j*columns) + i)) + ((*(inputA+((k*rows) + j))) * (*(inputB+((k*columns) + i))));
				}
			}
		}
	}
}
