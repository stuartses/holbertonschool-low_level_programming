#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: matrix
 * @size: size of matrix
 * Description: function that prints the sum of the two diagonals of a square
 * matrix of integers
 */

void print_diagsums(int *a, int size)
{
	int i, j, diag1 = 0, diag2 = 0;
	int *b = a;
	int *row = *a[0], *row2 = *a[0];

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				*row = b[i];
				diag1 += row[j];
			}
		}
	}

	for (i = size - 1; i >= 0; i--)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (i == j)
			{
				*row2 = b[i];
				diag2 += row2[j];
			}
		}
	}

	printf("%d, %d\n", diag1, diag2);
}
