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
	size_t left = 0, right = size - 1, middle = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		_print_binaryserach(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
