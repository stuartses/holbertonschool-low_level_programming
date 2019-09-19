/**
 * main - 4. When I was having that alphabet soup,
 * I never thought that it would pay off
 * I play what I call the alphabet except q and e
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (!(x == 'q' || x == 'e'))
			putchar (x);
	}
	putchar('\n');
	return (0);
}
