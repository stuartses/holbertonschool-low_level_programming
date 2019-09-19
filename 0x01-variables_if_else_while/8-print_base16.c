/**
 * main - 8. Hexadecimal
 * Print Hex
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char x;
	int a;

	for (a = 0; a < 10; a++)
		putchar (a + '0');
	for (x = 'a'; x < 'g'; x++)
		putchar (x);
	putchar('\n');
	return (0);
}
