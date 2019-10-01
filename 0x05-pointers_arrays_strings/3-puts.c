#include "holberton.h"
/**
 * _puts - prints a string
 * @str: input string
 *
 * Description: prints a string, followed by a new line
 */

void _puts(char *str)
{
	int i = -1;
	char str_word = ' ';

	while ((str_word != '\0'))
	{
		i++;
		str_word = *(str + i);
		_putchar(str_word);
	}
	_putchar('\n');
}
