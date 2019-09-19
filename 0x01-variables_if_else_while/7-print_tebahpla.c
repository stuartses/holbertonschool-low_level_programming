/**
 * main - 7. Smile in the mirror
 * I play what I call the alphabet in reverse
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar (x);
	putchar('\n');
	return (0);
}
