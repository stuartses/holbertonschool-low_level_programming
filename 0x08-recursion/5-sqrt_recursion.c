#include "holberton.h"
#include <stdio.h>
int babilon(int b, int x);
/**
 * _sqrt_recursion -  natural square root of a number
 * @n: input number
 *
 * Description:  function that returns the natural square root of a number
 * Return: root(n)
 */

int _sqrt_recursion(int n)
{
	int a, root;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	a = n;
	root = babilon(a, n);

	return (root);
}

/**
 * babilon - babilon comparation
 * @b: input value
 * @x: root wanted
 *
 * Description: return sqr(x)
 */

int babilon(int b, int x)
{
	printf("b: %d\n", b);
	if (b == (x / b))
		return (b);
	b = (1 / 2) * ((x / b) + b);

	if (b == 0)
		return (-1);
	printf("b': %d\n", b);
	babilon(b, x);

	return (b);
}
