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

void display (int rowsA, int columnsA, int depth, int *input0, int *input1)
{
	long i, j, k = 0;

	printf("\nResulting arrays:\n\n");

	printf("\nDepth 0:\n", i);
	for (j = 0; j < rowsA/2; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((input0+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 1:\n", i);
	for (j = 0; j < rowsA/2; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((input1+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	exit(0);
}
