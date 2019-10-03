#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @src: first string
 * @dest: second string
 *
 * Description: function that concatenates two strings
 * Return: poninter with dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		if (src[i + 1] == '\0')
			dest[dest_len + i + 1] = src[i + 1];
		i++;
	}

	return (dest);
}
