#include "holberton.h"
/**
 * _puts - prints a string
 * @str: input string
 *
 * Description: prints a string, followed by a new line
 */

void _puts(char *str)
{

	while ((*str != '\0'))
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
