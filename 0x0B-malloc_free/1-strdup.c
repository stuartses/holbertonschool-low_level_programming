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

	while (str[size] != '\0')
		size++;

	copy = malloc(sizeof(char) * size);

	if (str == NULL || copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}
