#include "holberton.h"
/**
 * _abs - print abs ()
 * @x: the input
 * Description: print the absoulute value of a number y = |x|
 * Return: abs value
 */

int _abs(int x)
{
	int y;

	if (x >= 0)
		y = x;
	if (x < 0)
		y = x * -1;

	return (y);
}
