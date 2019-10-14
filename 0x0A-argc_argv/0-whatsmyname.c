#include <stdio.h>
/**
 * main - program to use Arguments
 * @argc: numer of input arguments
 * @argv: Array of input arguments
 *
 * Description: program that prints its name, followed by a new line
 * Return: void.
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
