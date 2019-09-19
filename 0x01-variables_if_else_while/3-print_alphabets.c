/**
 * main - 3. alphABET
 * I play what I call the alphabet in lowercase and before in uppercase
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar (x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar (x);
	putchar('\n');
	return (0);
}
