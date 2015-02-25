/*
============================================================================
Name        : displayMatrix.h
Author      : Robert McNeill
Description : Display resulting matrix from the multiplication
============================================================================
*/

#include "displayMatrix.h"
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>
#include <xdc/std.h>
#include <stdio.h>

void display (int rows, int columns, long *outputArray, double *startTime)
{
	int 				i, j, k = 0;
	Types_Timestamp64	endTime64;
	Types_FreqHz		freq;
	unsigned long long	endClockCycles;
	double				endTime, timeTaken;

	Timestamp_get64(&endTime64);
	Timestamp_getFreq(&freq);
	endClockCycles = ((endTime64.hi*4294967296) + endTime64.lo);
	endTime = ((endClockCycles/(double)freq.lo));
	timeTaken = endTime - *startTime;

/*
	printf ("\nResulting Arrays: \n");

	for (k = 0; k < loops; k++)
	{
		for (i = 0; i < rows; i++)
		{
			for (j = 0; j < columns; j++)
			{
				printf("%ld\t", *((outputArray+((i*columns)+(k*rows*columns))) + j));
			}
			printf("\n");
		}
		printf("\n");
	}
*/
	printf ("\nResulting Array: \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%ld\t", *((outputArray+i*columns) + j));
		}
		printf("\n");
	}

	printf("\nAccumulating square matrices of size %d took %fs and %llu clock cycles\n", rows , timeTaken, endClockCycles);

}
