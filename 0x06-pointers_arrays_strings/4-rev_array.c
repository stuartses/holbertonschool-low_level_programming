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
	int *b = a, i = n - 1, j = 0;

	for ( ; i >= 0; i--, j++)
		a[j] = b[i];
}
