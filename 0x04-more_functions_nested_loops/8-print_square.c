#include "holberton.h"
/**
 * print_square - print a square in terminal
 * @size: the size of square
 *
 * Description: Square maded with "#"
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
