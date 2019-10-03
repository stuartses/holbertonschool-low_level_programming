#include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @c: input string
 * Description: function that changes all lowercase letters to uppercase
 * Return: array
 */

char *string_toupper(char *c)
{
	int lowercase[26], uppercase[26], i, j = 0;
	int ini_lower = 97, ini_upper = 65;

	/* generate array with Alphabet */
	for (i = 0; i < 26; i++, ini_lower++, ini_upper++)
	{
		lowercase[i] = ini_lower;
		uppercase[i] = ini_upper;
	}

	/* sequence the input array */
	while (c[j] != '\0')
	{
		for (i = 0; i < 26; i++)
		{
			if (c[j] == lowercase[i])
				c[j] = uppercase[i];
		}
		j++;
	}
	return (c);
}
