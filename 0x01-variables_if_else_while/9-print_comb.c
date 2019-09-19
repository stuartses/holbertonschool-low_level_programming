/**
 * main - 9. Patience, persistence and perspiration make an unbeatable
 * combination for success
 * Return: 0
 */

#include <stdio.h>
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar (x + '0');
		if (x < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');

	return (0);
}
