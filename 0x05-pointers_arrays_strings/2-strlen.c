#include "holberton.h"
/**
 * _strlen -  the length of a string
 * @s: input string
 *
 * Description:  function that returns the length of a string.
 * Return: integer
 */

int _strlen(char *s)
{
	int lenght = -1;
	char str_word = ' ';

	while ((str_word != '\0'))
	{
		lenght++;
		str_word = *(s + lenght);
	}

	return (lenght);
}
