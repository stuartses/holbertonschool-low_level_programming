#include "holberton.h"
/**
 * times_table - prints 9 times table
 * Description: prints all times tables begining with 0
 */

void times_table(void)
{
	int i, j, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			y = i * j;

			if (j == 0)
			{
				_putchar(y + '0');
			}
			if (y <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(y + '0');
			}
			if (y > 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((y / 10) + '0');
				_putchar((y % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
