#include "holberton.h"
/**
 * get_endianness - determines if the machine is big or little endian
 *
 * Description: Determines if the machine is a big or little endian
 * Return: void
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
