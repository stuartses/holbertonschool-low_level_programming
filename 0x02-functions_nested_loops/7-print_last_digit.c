#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @x: the input
 * Description: get the last digit of x
 * Return: y the last digit
 */

int print_last_digit(int x)
{
	int y = x % 10;

	if (y < 0)
	{
		y = -y;
		_putchar(y + 48);
	}
	else
	{
		_putchar(y + 48);
	}

	return (y);
}
