#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: input old pointer
 * @old_size: size of old pinter
 * @new_size: nuew size of pointer
 *
 * Description: function that reallocates a memory block using malloc and free
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	old_ptr = (char *)ptr;

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (ptr !=NULL && new_size == 0)
	{
		free (ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	if (new_size == old_size)
		return (ptr);


	free(ptr);
	return (new_ptr);
}
