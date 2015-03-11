/*
============================================================================
Name        : multiplyMatrices.c
Author      : Robert McNeill
Description :
============================================================================
*/

#include "multiplyTensors.h"
#include <stdio.h>


void multiply (int rowsA, int columnsA, int depthA, int rowsB, int columnsB, int depthB, int *arrayA, int *arrayB, int *arrayC)
{
	int i, j , k, l;

	for (i = 0; i < depthA; i++)
	{
		for (j = 0; j < rowsA; j++)
		{
			for (k = 0; k < columnsB; k++)
			{
				for (l = 0; l < columnsA; l++)
				{
					*((arrayC+i*rowsA*columnsB+j*rowsA) + k) = (*((arrayC+i*rowsA*columnsB+j*rowsA) + k) + ((*((arrayA+i*rowsA*columnsB+j*columnsB) + l)) * (*((arrayB+i*rowsA*columnsB+l*columnsB) + k))));
				}
				//*((arrayC+i*columnsB) + j) = ((*((arrayC+i*columnsB) + j)) + ((*((arrayA+i*columnsB) + k)) * (*((arrayB+k*columnsB) + j))));
			}
		}
	}
}
