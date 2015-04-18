/*
============================================================================
Name        : multiplyMatrices.c
Author      : Robert McNeill
Description :
============================================================================
*/

#include "multiplyTensors.h"
#include <stdio.h>


void multiply (int rowsA, int columnsA, int rowsB, int columnsB, int *arrayA, int *arrayB, long *arrayC)
{
	int i, j , k, l;

	for (i = 0; i < rowsA; i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			for (k = 0; k < columnsA; k++)
			{
				if (k == 0)			// Takes away the need to initialise the memory
				{
					*((arrayC+i*columnsB) + j) = ((*((arrayA+i*columnsA) + k)) * (*((arrayB+k*columnsB) + j)));
				}
				else
				{
					*((arrayC+i*columnsB) + j) = ((*((arrayC+i*columnsB) + j)) + ((*((arrayA+i*columnsA) + k)) * (*((arrayB+k*columnsB) + j))));
				}
			}
		}
	}
}
