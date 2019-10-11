#include <stdio.h>
/**
 * main - program to use Arguments
 * @argc: numer of input arguments
 * @argv: Array of input arguments
 *
 * Description: program that prints the number of arguments passed into it
 * Return: void.
 */

int main(int argc, char *argv[])
{
	int len = argc - 1;

	printf("%d\n", len);
	(void)argv;

	return (0);
}
