#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and set to zero
 * @nmemb: numer of elements in array
 * @size: size of each element
 *
 * Description: function that allocates memory for an array, using malloc
 * Return: pointer to memory assigned
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *om;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	om = malloc(size * nmemb);
	if (om == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		om[i] = 0;
	return (om);
}
