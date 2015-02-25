/*
============================================================================
Name        : generateMatrices.c
Author      : Robert McNeill
Description : Generate matrices to be multiplied by the TI device
============================================================================
*/

#include "generateMatrices.h"
#include <stdio.h>

#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

void generate (int rows, int columns, int loops, long *startArray, double *startTime)
{
	// !!! TODO: add checking around the matrices size

	printf("\n\nCross Core Accumulation Beginning\n");

	int generationCount = 1;
	int i, j, k = 0;
	Types_Timestamp64	startTime64;
	Types_FreqHz		freq;

	for (i = 0; i < rows; i++)			// Generate array A
	{
		for (j = 0; j < columns; j++)
		{
			for (k = 0; k < loops; k++)
			{
				*((startArray+i*columns+k*columns*rows) + j) = (generationCount);
			}
		}
		generationCount++;
	}
/*
	printf ("\Input Array: \n");

	for (k = 0; k < loops; k++)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < columns; j++)
			{
					printf("%ld\t", *((startArray+i*columns+k*columns*rows) + j));
			}
			printf("\n");
		}
	}
*/
	Timestamp_getFreq(&freq);
	Timestamp_get64(&startTime64);
	*startTime = ((startTime64.lo/(double)freq.lo));
}
