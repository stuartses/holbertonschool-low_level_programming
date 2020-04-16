#include "search_algos.h"

/**
  * print_array - print array with limits in l and r
  * @array: set of numbers
  * @l: left limit
  * @r: right limit
  * Return: nothing
  */
void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	for (l = l; l < r; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);
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
		print_array(array, left, right);
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
