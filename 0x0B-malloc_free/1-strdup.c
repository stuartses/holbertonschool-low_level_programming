#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: input str
 *
 * Description:   returns a pointer to a newly allocated space in memory
 * Return: char
 */

char *_strdup(char *str)
{
	char *copy;
	int size = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];

	return (copy);
}
