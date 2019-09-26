#include "holberton.h"
/**
 * _isupper - checks for uppercase character
 * @c: the input
 *
 * Description: Write a function that checks for uppercase character.
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int y;

	if (c >= 65 && c <= 90)
		y = 1;
	else
		y = 0;
	return (y);
}
