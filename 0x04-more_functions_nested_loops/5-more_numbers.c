#include "holberton.h"
/**
 * more_numbers - print a series of numbers 10 times
 *
 * Description: prints the numbers from 0-14, 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14;  j++)
		{
			if (j > 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
