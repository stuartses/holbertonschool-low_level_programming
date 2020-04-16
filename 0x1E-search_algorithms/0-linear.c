#include "search_algos.h"

/**
 * linear_search - find the value in array
 * @array: input array
 * @size: lenght of array
 * @value: looked value
 *
 * Description: find the value in array using the linear search algorithm
 * Return: the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
