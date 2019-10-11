#include "holberton.h"
#include <stdio.h>
int pali_look(char *str, int c1, int c2, int is_par);

/**
 * pali_look - find if is palidrome
 * @str: input str;
 * @c1: position initial
 * @c2: psition final
 * @is_par: if lenght of string is par => 1
 *
 * Description: Determine if is palindrome
 * Return: 1 or 0
 */

int pali_look(char *str, int c1, int c2, int is_par)
{
	int pal = 0;

	if (is_par == 0 && c1 == c2)
		return (1);

	if (is_par == 1 && (c1 + 1) == c2)
		return (1);

	if (str[c1] == str[c2])
		pal = pali_look(str, c1 + 1, c2 - 1, is_par);
	else
		return (0);

	return (pal);
}


/**
 * is_palindrome -  determine palindrome
 * @s: input string
 *
 * Description:  returns 1 if is palindrome
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int is_pali, len = 0, len_par;
	char *strg = s;

	while (s[len] != '\0')
		len++;

	if (len == 0)
		return (1);

	if ((len % 2) == 0)
		len_par = 1;
	else
		len_par = 0;

	len = len - 1;

	is_pali = pali_look(strg, 0, len, len_par);

	return (is_pali);
}
