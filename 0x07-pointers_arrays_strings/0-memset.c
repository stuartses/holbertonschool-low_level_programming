#include "holberton.h"

/**
 * *_memset - 0. memset
 * @s: input pointer
 * @b: input char, to use in change
 * @n: numbers fo spaces to be replaced
 *
 * Description: Write a function that fills memory with a constant byte
 * Return: the s changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
