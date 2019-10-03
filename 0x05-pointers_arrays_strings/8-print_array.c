#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array input
 * @n: numbers of elements
 *
 * Description: function that prints n elements of an array of integers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");

}
