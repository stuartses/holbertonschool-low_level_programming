#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints until 98
 * @n: firt numer of series
 *
 * Description: prints until 18
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			printf(", ");
		}
	}

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			printf(", ");
		}
	}
	printf("\n");
}
