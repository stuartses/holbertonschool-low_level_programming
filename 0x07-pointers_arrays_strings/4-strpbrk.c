#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string
 * @accept: string wanted
 *
 * Description: function that searches a string for any of a set of bytes.
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j, len = 0, primero, guardado;
	char *str;

	str = s;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	primero = len;
	guardado = primero;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (str[i] == accept[j])
			{
				primero = i;
				break;
			}
			if (primero < guardado)
				guardado = primero;

		}

	}

	if (guardado == len)
		return (NULL);
	else
		return (str + guardado);
}
