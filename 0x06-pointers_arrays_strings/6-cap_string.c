#include "holberton.h"

/**
 * _to_upper - changes all lowercase to uppercase
 *
 * @c: input char
 * Description: function that changes all lowercase letters to uppercase
 * Return: array
 */

char _to_upper(char c)
{
        int lowercase[26], uppercase[26], i;
        int ini_lower = 97, ini_upper = 65;

        /* generate array with Alphabet */
        for (i = 0; i < 26; i++, ini_lower++, ini_upper++)
        {
                lowercase[i] = ini_lower;
                uppercase[i] = ini_upper;
        }

        /* sequence the input array */
        for (i = 0; i < 26; i++)
	{
		if (c == lowercase[i])
			c = uppercase[i];

        }
        return (c);
}


/**
 * cap_string - capitalizes all words
 *
 * @str: input string
 * Description: function that capitalizes all words of a string
 * Return: array
 */


char *cap_string(char *str)
{
	int i, j = 0;
	int separators[] = {32, 9, 10, 44, 59, 46, 33, 34, 40, 41, 123,
			    125, 63};

	/* sequence the input array */
	while (str[j] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if(str[j - 1] == separators[i]
			   && str[j] != separators[i])
			{
				str[j] = _to_upper(str[j]);
			}
		}
		j++;
	}
	return (str);
}
