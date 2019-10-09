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
	int i, j, k, diag1 = 0, diag2 = 0;

	i = 0;
	j = size - 1;

	for (k = 0; k < size; k++)
	{
		diag1 += a[i];
		diag2 += a[j];
		i += size + 1;
		j += size - 1;
	}

	printf("%d, %d\n", diag1, diag2);
}
