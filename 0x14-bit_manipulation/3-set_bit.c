#include "holberton.h"
/**
 * set_bit - change a bit to "1" in the index
 * @n: decimal number in pointer
 * @index: position in bits
 *
 * Description:  unction that sets the value of a bit to 1 at a given index
 * Return: 1 if is sucessfull or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_bits, mask = 1, new_number;

	num_bits = (8 * sizeof(unsigned long int)) - 1;

	if (index > num_bits)
		return (-1);

	mask = mask << index;
	new_number = mask | *n;
	*n = new_number;
	return (1);
}
