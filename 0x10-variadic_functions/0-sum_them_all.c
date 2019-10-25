#include "variadic_functions.h"
/**
 * sum_them_all -  the sum of all its parameters
 * @n: input numbers
 *
 * Description: function that returns the sum of all its parameters
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		add += va_arg(arguments, int);
	va_end(arguments);

	return (add);
}
