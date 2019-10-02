#include "holberton.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string-char input
 *
 * Description: prints every other character of a string
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len - 2; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
