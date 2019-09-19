/**
 * main - 10. 00...99
 * combination for success
 * Return: 0
 */

#include <stdio.h>
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar (x + '0');
			putchar (y + '0');
			if (x < 9 || y < 9)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');

	return (0);
}
