#include "holberton.h"
/**
 * _strncat - concatenates two strings with n lenght
 * @src: first string
 * @dest: destination string
 * @n: lenght of src to take
 *
 * Return: dest
 * Description: function that concatenates two strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i = 0;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			dest[dest_len + i] = src[i];
		}
	}
	return (dest);
}
