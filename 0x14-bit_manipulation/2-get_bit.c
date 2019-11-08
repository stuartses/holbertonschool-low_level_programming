#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: decimal number
 * @index: position in bits
 *
 * Description:  function that returns the value of a bit at a given index
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int c = 1, found = 0;
	unsigned int a;

	a = 8 * sizeof(unsigned int);

	if (index >= a)
		return (-1);

	c = c << index;
	if (n & c)
		found = 1;
	else
		found = 0;

	return (found);
}
