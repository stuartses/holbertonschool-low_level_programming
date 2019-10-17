#include "holberton.h"
#include <stdlib.h>

int _strln(char *str);
/**
 * _strln - The numbers of chars of a string
 * @str: input string
 *
 * Description: return the lenght of str
 * Return: lenght
 */

int _strln(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: frist "n" chars of s2
 *
 * Description: concatenates s1 with "n" char of s2
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, lens1, lens2;
	char *s3;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = _strln(s1);
	lens2 = _strln(s2);

	if (n > lens2)
		n = lens2;

	s3 = malloc((lens1 + n) * sizeof(char) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';

	return (s3);
}
