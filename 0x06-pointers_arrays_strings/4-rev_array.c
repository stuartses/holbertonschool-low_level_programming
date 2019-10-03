#include "holberton.h"

/**
 * reverse_array -  reverses the content of an array
 * @a: array
 * @n: lengh of array
 *
 * Description: function that reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int b, i = n - 1, j = 0;

	for ( ; i > j; i--, j++)
	{
		b = a[i];
		a[i] = a[j];
		a[j] = b;
	}
}
