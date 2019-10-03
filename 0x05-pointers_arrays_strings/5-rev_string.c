#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string-char input
 *
 * Description: function that reverses a string
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char b;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		b = s[i];
		s[i] = s[len - 1];
		s[len - 1] = b;
		len--;
	}
}
