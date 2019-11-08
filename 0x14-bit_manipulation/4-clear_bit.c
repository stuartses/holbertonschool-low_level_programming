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
	unsigned long int mask, new_number;

	/*
	 * creates a mask of the max unsigned long int
	 * Less -2, makes this has a zero in the last digit
	 */
	mask = (8 * sizeof(unsigned long int)) - 2;

	if (index > mask)
		return (-1);

	/* move de zero index position to the left*/
	mask = mask << index;
	new_number = mask & *n;

	*n = new_number;
	return (1);
}
