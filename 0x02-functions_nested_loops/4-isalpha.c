#include "holberton.h"
/**
 * _isalpha - Say if a char is lowercase or uppercase
 * @c: the input
 *
 * Description: if the input is lowercase or uppercase prints "1"
 *              otherwise print "0"
 * Return: "1" or "0"
 */

int _isalpha(int c)
{
	int y;

	if (c >= 97 && c <= 122)
		y = 1;
	else if (c >= 65 && c <= 90)
		y = 1;
	else
		y = 0;

	return (y);
}
