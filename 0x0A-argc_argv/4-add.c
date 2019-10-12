#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to use Arguments
 * @argc: number of input arguments
 * @argv: Array of input arguments
 *
 * Description: program that adds positive numbers
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i, j, a, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[i]);

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if ((int)argv[i][j] < 48 || (int)argv[i][j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += a;
		}
			printf("%d\n", sum);
	}

	return (0);
}
