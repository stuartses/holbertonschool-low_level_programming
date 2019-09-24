/**
 * main - Putchar "Holberton"
 * Return: 0
 */

#include "holberton.h"

int main(void)
{
	char string[10] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n', '\n'};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(string[i]);
	}
	return (0);
}
