#include "holberton.h"
#include <stdio.h>
int root_look(int x, int look);
/**
 * _sqrt_recursion -  natural square root of a number
 * @n: input number
 *
 * Description:  function that returns the natural square root of a number
 * Return: root(n)
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	root = root_look(n, 1);

	return (root);
}

/**
 * root_look - find the square root
 * @x: root wanted
 * @look: root look
 *
 * Description: return sqr(x)
 * Return: root square
 */

int root_look(int x, int look)
{
	if (look == x)
		return (-1);

	if ((look * look) != x)
		look = root_look(x, look + 1);

	return (look);
}
