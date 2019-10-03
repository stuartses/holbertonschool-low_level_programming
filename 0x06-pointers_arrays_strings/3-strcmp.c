#include "holberton.h"

/**
 * _strcmp -  compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: function that compares two strings
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int compare = 0, i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0')
			s1[i] = '0';
		if (s2[i] == '\0')
			s2[i] = '0';

		compare = s2[i] - s1[i];
		i++;
	}

	return (compare);
}
