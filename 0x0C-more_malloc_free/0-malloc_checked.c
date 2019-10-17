#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: input pointer
 *
 * Description: function that allocates memory using malloc
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	double *om;

	om = malloc(b);

	if (om == NULL)
		exit(98);

	return (om);
}
