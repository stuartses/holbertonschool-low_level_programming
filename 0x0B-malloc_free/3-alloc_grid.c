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

char int **alloc_grid(int width, int height)
{
	int *om, *ah, i, ;

	om = malloc(sizeof(int) * width);

	for (i = 0; i < width; i++)
		ah = malloc(sizeof(int) * height);
	for (j = 0; j < height; j++)
		ah[i]
}
