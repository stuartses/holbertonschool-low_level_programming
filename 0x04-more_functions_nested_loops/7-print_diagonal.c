#include "holberton.h"
/**
 * print_diagonal - print a diagonal
 * @n: lengh of diagonal
 *
 * Description: prints a diagonal in terminal
 */

void print_diagonal(int n)
{
	int i, j, x;

	if (n > 0)
	{
		x = 1;
		for (i = 0; i < n; i++)
		{
			for (j = 1; j < x; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			x++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
