#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - 3. strspn
 * @s: input string
 * @accept: string wanted
 *
 * Description: function that locates a character in a string
 * Return: position of last match
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		if (found == 1)
			found = 0;
	}
	return (i);
}
