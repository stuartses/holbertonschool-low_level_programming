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
	int i, a, sum = 0, error = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			a = atoi(argv[i]);
			if (a == 0)
			{
				printf("Error\n");
				error = 1;
				break;
			}
			sum += a;
		}
		if (error == 0)
			printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);

	return (0);
}
