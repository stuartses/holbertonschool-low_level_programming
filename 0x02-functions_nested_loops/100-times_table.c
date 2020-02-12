#include "holberton.h"

/**
 *
 *
 */
void _putchar_n(int num)
{
	int i;

	i = num;

	while (i != 0)
	{
		i = i / 10;
		_putchar(i + '0');
	}
	_putchar('\n');
}

/**
 *
 *
 */
void print_times_table(int n)
{
	/* int i; */

	(void)n;

	_putchar_n(123);
	/*
	for (i = 0; i < n; i++)
	{
		_putchar_n(123);

		for (j = 0; j < n; j++)
			mul = i * j;
			_putchar(
			printf("%d, ", i * j);
		printf("\n");

	}
	*/
}
