#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string-char input
 *
 * Description: function should print the second half of the string
 */

void puts_half(char *str)
{
	int length_of_the_string = 0, i = 0, n;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}


	if (length_of_the_string % 2 != 0)
		n = (length_of_the_string - 1) / 2;
	else
		n = length_of_the_string / 2;

	for (i = n; i <= length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
