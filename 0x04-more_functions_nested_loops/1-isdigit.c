#include "holberton.h"
/**
 * _isdigit - is a digit
 * @c: the input
 *
 * Description: checks if iput is a digit
 * Return: 1 if is a digit or 0 in otherwise
 */

int _isdigit(int c)
{
	int y;

	if (c >=  48 && c <= 57)
		y = 1;
	else
		y = 0;
	return (y);
}
