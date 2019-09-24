#include "holberton.h"
/**
 * _islower - Say if a char is lowercase
 * @c: the input
 *
 * Description: if the input is lowercase prints "1" otherwise print "0"
 * Return: "1" or "0"
 */

int _islower(int c)
{
	int y;

	if (c >= 97 && c <= 122)
		y = 1;
	else
		y = 0;
	return (y);
}
