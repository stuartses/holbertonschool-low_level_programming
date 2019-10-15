#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create a array with Malloc
 * @size: size of array
 * @c: initialized char
 *
 * Description: creates an array of chars, and initializes it with a
 * specific char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i, limit;

	limit = (int)size;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * (size + 1));

	for (i = 0; i < limit; i++)
		str[i] = c;

	str[i] = '\0';
	return (str);

}
