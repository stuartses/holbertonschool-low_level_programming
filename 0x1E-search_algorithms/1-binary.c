#include "search_algos.h"

/**
 * _print_binaryserach - print element of array by binary search
 * @array: array of integers
 * @L: left limit integer
 * @R: right limit integer
 *
 * Description: print each element of an array in binary search limits
 * Return: void
 */
void _print_binaryserach(int *array, unsigned int L, unsigned int R)
{
	unsigned int i;

	printf("Seraching in array: ");
	for (i = L; i < R; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - find a value in array
 * @array: input array of integers
 * @size: lenght of array
 * @value: looked value
 *
 * Description: find a value in array using the binary search algorithm
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int L, R, m;

	if (array == NULL)
		return (-1);

	L = 0;
	R = size - 1;

	while (L <= R)
	{
		m = (L + R) / 2;
		_print_binaryserach(array, L, R);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}

	return (-1);
}
