#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input array
 * @height: height dimension of arraysize of array
 *
 * Description: function that frees a 2 dimensional grid previously created by
 * alloc_grid function
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = height; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
