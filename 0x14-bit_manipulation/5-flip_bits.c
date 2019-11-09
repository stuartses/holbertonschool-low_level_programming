#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - counts the numbers of digits to change between two numbers
 * @n: first numbers
 * @m: second number
 *
 * Description:  eturns the number of bits you would need to flip to get from
 *  one number to another.
 * Return: number of digits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_oper, mask = 1, num_bits, i;
	unsigned int digits = 0;

	num_bits = (8 * sizeof(unsigned long int)) - 1;

	num_oper = n ^ m;

	for (i = 0; i <= num_bits; i++)
	{
		if (mask & num_oper)
			digits++;
		mask = mask << 1;
	}

	return (digits);
}
