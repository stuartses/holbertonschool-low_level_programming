/**
 * main - 6. Numberz
 * prints numbers from 0 to 9 with putchar
 * Return: 0
 */

#include <stdio.h>
int main(void)
{
	int x;

	/* print number in a loop */
	for (x = 0; x < 10; x++)
	{
		putchar (x + '0');
	}
	putchar ('\n');

	return (0);
}
