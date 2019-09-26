#include "holberton.h"
/**
 * print_line - print a line in the terminal
 * @n: the lenght of the line
 *
 * Description: prints a line in the terminal of a "n" lenght
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
