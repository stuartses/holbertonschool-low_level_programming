#include "holberton.h"
/**
 * print_binary - print the binary of a decimal number
 * @n: decimal number
 *
 * Description: function that prints de binary convert of a decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, k;
	int c, print_cod = 0;

	a = (8 * sizeof(unsigned long int)) - 1;
	c = (int)a;

	if (n == 0)
		_putchar('0');

	for (; c >= 0; c--)
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
