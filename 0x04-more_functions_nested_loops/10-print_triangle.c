#include "holberton.h"
/**
 * print_triangle -   prints a triangle
 * @size: size of tringle
 *
 * Description: Function that prints a triangle, followed by a new line.
 * Return:
 */

void print_triangle(int size)
{
	int i, j, punter;
	/* punter */
	punter = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= punter)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
			punter--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
