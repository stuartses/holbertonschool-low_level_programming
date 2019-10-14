#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to use Arguments
 * @argc: numer of input arguments
 * @argv: Array of input arguments
 *
 * Description: program that multiplies two numbers
 * Return: void.
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
		printf("Error\n");

	return (0);
}
