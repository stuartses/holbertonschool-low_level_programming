#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat -concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: function that concatenates two strings
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	char *om;
	int size1 = 0, size2 = 0, i, j, size3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;

	size3 = size1 + size2;
	om = malloc((sizeof(char) * size3) + 1);

	if (om == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		om[i] = s1[i];

	j = 0;

	for (; i < size3; i++, j++)
		om[i] = s2[j];

	om[i] = '\0';

	return (om);
}
