#include "holberton.h"
/**
 * print_binary - print the binary of a decimal
 * @n: decimal number
 *
 * Description: function that prints de binary convert of a decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int c, k, print_cod = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (c = 31; c >= 0; c--)
	{
		k = n >> c;

		if (k & 1)
		{
			_putchar('1');
			print_cod = 1;
		}
		else if (print_cod)
			_putchar('0');
	}
}
