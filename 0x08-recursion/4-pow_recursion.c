#include "holberton.h"

/**
 * _pow_recursion - potential
 * @x: base number
 * @y: potential number
 *
 * Description:  x^y - returns the value of x raised to the power of y
 * Return: potential
 */

int _pow_recursion(int x, int y)
{
	int res_pow;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	res_pow = x * _pow_recursion(x, y - 1);

	return (res_pow);
}
