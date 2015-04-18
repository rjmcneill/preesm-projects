/*
============================================================================
Name        : generateMatrices.c
Author      : Robert McNeill
Description : Generate matrices to be multiplied by the TI device
============================================================================
*/

#include "generateTensors.h"
#include <stdio.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

void generate (int rowsA, int columnsA, int depth, int *arrayA)
{
	long generationCount = 1;
	int i, j, k = 0;

	printf("\n\nCross Core Multiplication Beginning\n");


	for (i = 0; i < depthA; i++)			// Generate array A
	{
		for (j = 0; j < rowsA; j++)
		{
			for (k = 0; k < columnsA; k++)
			{
				*((arrayA+i*rowsA*columnsA+j*rowsA) + k) = generationCount;
			}
			generationCount++;
		}
	}
}
