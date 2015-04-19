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

void splitB (int rowsB, int columnsB, int *input, int *output0, int *output1, int *output2, int *output3, int *output4, int *output5, int *output6, int *output7)
{
	long i, j, k = 0;

	for (i = (0*rowsB/8); i < (1*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output0+((i*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (1*rowsB/8); i < (2*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output1+(((i-(1*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (2*rowsB/8); i < (3*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output2+(((i-(2*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (3*rowsB/8); i < (4*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output3+(((i-(3*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (4*rowsB/8); i < (5*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output4+(((i-(4*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (5*rowsB/8); i < (6*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output5+(((i-(5*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (6*rowsB/8); i < (7*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output6+(((i-(6*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}

	for (i = (7*rowsB/8); i < (8*rowsB/8); i++)
	{
		for (j = 0; j < columnsB; j++)
		{
			*(output7+(((i-(7*rowsB/8))*columnsB) + j)) = *(input+((i*columnsB) + j));
		}
	}
}
