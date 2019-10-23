#include "3-calc.h"
/**
 * main - program to make mathematics operations
 * @argc: number of input arguments
 * @argv: Array of input arguments
 *
 * Description: make methematics operations with input operatos
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b, om, (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = *get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	else
	{
		om = func(a, b);
	}
	printf("%d\n", om);
	return (0);
}
