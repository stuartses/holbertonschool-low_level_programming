#include <stdio.h>
/**
 * main - program to use Arguments
 * @argc: numer of input arguments
 * @argv: Array of input arguments
 *
 * Description: program that prints all arguments it receives
 * Return: void.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	(void)argc;

	return (0);
}
