#include "holberton.h"
/**
 * _strncpy - copies a string
 * @src: input string
 * @dest: dstination string
 * @n: lenght to copy of src
 *
 * Description: function that copies a string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	if (i < n)
		dest[i] = '\0';

	return (dest);
}
