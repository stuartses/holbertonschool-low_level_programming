#include "holberton.h"
/**
 * binary_to_uint - convertion from binary to decimal
 * @b: input binary in string
 *
 * Description: function that converts a binary number to an unsigned int
 * Return: decimal in unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, dig;
	unsigned int j = 1, len, sum = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		dig = b[i] - 48;
		if (dig != 0 && dig != 1)
			return (0);
		sum += dig * j;
		j *= 2;
	}
	return (sum);
}
