#include "holberton.h"
/**
 * clear_bit - change a bit to "0" in the index
 * @n: decimal number in pointer
 * @index: position in bits
 *
 * Description:  unction that sets the value of a bit to 0 at a given index
 * Return: 1 if is sucessfull or -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1, new_number, num_bits;

	num_bits = (8 * sizeof(unsigned long int)) - 1;

	if (index > num_bits)
		return (-1);

	mask = mask << index;
	new_number = (~mask) & (*n);

	*n = new_number;
	return (1);
}
