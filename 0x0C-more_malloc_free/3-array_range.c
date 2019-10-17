#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min value of array
 * @max: max value of array
 *
 * Description: function that creates an array of integers
 * Return: array
 */

int *array_range(int min, int max)
{
	int *om, i, j, lenght;

	if (min > max)
		return (NULL);

	lenght = max - min + 1;
	om = malloc(sizeof(int) * lenght);

	if (om == NULL)
		return (NULL);
	j = min;
	for (i = 0; i < lenght; i++)
	{
		om[i] = j;
		j++;
	}
	return (om);
}
