#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: array of char
 *
 * Description: function that prints a string, in reverse
 */
void print_rev(char *s)
{
	int lenght = -1, i;

	while ((*s != '\0'))
	{
		lenght++;
		s++;
	}

	for (i = 1; i <= lenght + 1; i++)
	{
		_putchar(*(s - i));
	}
	_putchar('\n');
}
