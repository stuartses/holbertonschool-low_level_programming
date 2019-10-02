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
	int i = 0;
	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);

}
