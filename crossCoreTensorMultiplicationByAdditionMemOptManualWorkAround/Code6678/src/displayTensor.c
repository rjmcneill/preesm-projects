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

void display (int rowsA, int columnsA, int depth, int *depth0, int *depth1, int *depth2, int *depth3, int *depth4, int *depth5, int *depth6, int *depth7)
{
	long i, j, k = 0;

	printf("\nResulting arrays:\n\n");

	printf("\nDepth 0:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth0+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 1:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth1+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 2:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth2+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 3:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth3+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 4:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth4+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 5:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth5+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 6:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth6+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	printf("\nDepth 7:\n", i);
	for (j = 0; j < rowsA; j++)
	{
		for (k = 0; k < columnsA; k++)
		{
			printf("%d\t", *((depth7+i*rowsA*columnsA+j*rowsA) + k));
		}
		printf("\n");
	}

	exit(0);
}
