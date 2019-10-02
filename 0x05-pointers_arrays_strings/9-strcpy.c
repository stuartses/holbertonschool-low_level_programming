#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed to by src
 * @dest: destination char
 * @src: origin char
 *
 * Description:  function that copies the string pointed to by src
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if (src[i + 1] == '\0')
			dest[i + 1] = src[i + 1];
		i++;
	}

	return (dest);
}
