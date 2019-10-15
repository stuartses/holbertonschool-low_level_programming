#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: widht dimension of array
 * @height: height dimension of array
 *
 * Description: function that returns a pointer to a 2 dimensional array
 * of integers
 * Return: new array
 */

int **alloc_grid(int width, int height)
{
	int **om, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	om = malloc(sizeof(int *) * width);
	if (om == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		om[i] = malloc(sizeof(int) * height);
		if (om[i] == NULL)
			return (NULL);

		for (j = 0; j < height; j++)
			om[i][j] = 0;
	}

	return (om);
}
