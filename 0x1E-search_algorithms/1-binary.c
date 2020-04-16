#include "search_algos.h"

/**
 * _print_binaryserach - print element of array by binary search
 * @array: array of integers
 * @left: left limit integer
 * @right: right limit integer
 *
 * Description: print each element of an array in binary search limits
 * Return: void
 */
void _print_binaryserach(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Seraching in array: ");
	for (i = left; i < right; i++)
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
	size_t l = 0, r = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		_print_binaryserach(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
