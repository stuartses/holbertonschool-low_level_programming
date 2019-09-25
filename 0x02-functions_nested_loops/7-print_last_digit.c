#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @x: the input
 * Description: get the last digit of x
 * Return: y the last digit
 */

int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = x * -1;

	y = x % 10;
	_putchar(y + 48);
	return (y);
}
