#include "holberton.h"

/**
 * print_alphabet_x10 - Print Alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c  = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
