#include "holberton.h"
/**
 * print_sign - print sign of a int
 * @n: the input
 * Description: if the input is postive prints "+"
 * if is negative prints "-"
 * if is zero prints "0"
 * Return: "1" or "0"
 */

int print_sign(int n)
{
	int y;
	char x;

	if (n > 0)
	{
		y = 1;
		x = '+';
	}
	if (n < 0)
	{
		y = -1;
		x = '-';
	}
	if (n == 0)
	{
		y = 0;
		x = '0';
	}
	_putchar(x);

	return (y);
}
