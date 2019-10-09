#include "holberton.h"

/**
 * factorial - Factorial
 * @n: input number
 *
 * Description:  n! - function that returns the factorial of a given number
 * Return: factorial
 */

int factorial(int n)
{
	int num;

	if (n == 1 || n == 0)
		return (1);
	if (n < 0)
		return (-1);

	num = n * factorial(n - 1);

	return (num);
}
