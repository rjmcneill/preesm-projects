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

void splitA (int rowsA, int columnsA, int *input, int *output0, int *output1, int *output2, int *output3, int *output4, int *output5, int *output6, int *output7)
{
	long i, j, k = 0;

	for (i = (0*rowsA/8); i < (1*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output0+((i*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (1*rowsA/8); i < (2*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output1+(((i-(1*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (2*rowsA/8); i < (3*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output2+(((i-(2*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (3*rowsA/8); i < (4*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output3+(((i-(3*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (4*rowsA/8); i < (5*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output4+(((i-(4*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (5*rowsA/8); i < (6*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output5+(((i-(5*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (6*rowsA/8); i < (7*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output6+(((i-(6*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}

	for (i = (7*rowsA/8); i < (8*rowsA/8); i++)
	{
		for (j = 0; j < columnsA; j++)
		{
			*(output7+(((i-(7*rowsA/8))*columnsA) + j)) = *(input+((i*columnsA) + j));
		}
	}
}
