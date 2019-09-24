/**
 * main - Putchar "Holberton"
 * Return: 0
 */

#include <stdio.h>
int main(void)
{
	char string[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = string[i];
		putchar(c);
	}
	return (0);
}
