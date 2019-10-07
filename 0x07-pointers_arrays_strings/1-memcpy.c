#include "holberton.h"

/**
 * _memcpy - 1. memcpy
 * @src: input array
 * @dest: destination array
 * @n: numbers fo spaces to be replaced
 *
 * Description: Write a function that copies memory area
 * Return: the dest changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
