#include "holberton.h"
#include "stdio.h"
/**
 * _strchr - 2. strchr
 * @s: input string;
 * @c: char wanted
 *
 * Description: function that locates a character in a string
 * Return: string in position or NULL
 */

char *_strchr(char *s, char c)
{
	char *ph = s;

	while (*ph != '\0')
	{
		if (*ph == c)
			return (ph);
		else
			return (NULL);
		ph++;
	}
	return (ph);
}
