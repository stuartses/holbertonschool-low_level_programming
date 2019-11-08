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
	unsigned long int mask = 1, found = 0;
	unsigned int num_bits;

	num_bits = (8 * sizeof(unsigned int)) - 1;

	if (index >= num_bits)
		return (-1);

	mask = mask << index;
	if (n & mask)
		found = 1;
	else
		found = 0;

	return (found);
}
