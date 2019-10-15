#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: arguments
 *
 * Description: function that concatenates all the arguments
 * Return: concatenate string
 */

char *argstostr(int ac, char **av)
{
	char *om;
	int i, r, j, k = 0, len, lenbig = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* find lenght of full future string */
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
			len++;
		/* plus + 1 for change line */
		lenbig += len;
		lenbig += 1;
	}

	om = malloc(sizeof(char) * lenbig);
	if (om == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		j = 0;
		while (av[r][j] != '\0')
		{
			om[k] = av[r][j];
			k++;
			j++;
		}
		om[k] = '\n';
		k++;
	}
	om[k] = '\0';

	return (om);
}
