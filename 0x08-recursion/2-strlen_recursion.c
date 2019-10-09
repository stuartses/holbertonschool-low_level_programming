#include "holberton.h"

/**
 * _strlen_recursion - eturns the length of a string
 * @s: input string
 * Description:  function that returns the length of a string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = 1;
		s++;
		len += _strlen_recursion(s);
	}
	return len;
}
