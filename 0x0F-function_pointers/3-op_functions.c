#include "3-calc.h"

/**
 * op_add - Addition of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Remainder of division
 * @a: first number
 * @b: second number
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
