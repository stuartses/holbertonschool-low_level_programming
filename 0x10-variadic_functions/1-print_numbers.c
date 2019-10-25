#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print number with variadic
 * @separator: separator string between numbers
 * @n: number of input arguments
 *
 * Description: function that prints numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list desires;

	va_start(desires, n);
	printf("%d", va_arg(desires, int));
	for (i = 1; i < n; i++)
	{
		printf("%s%d", separator, va_arg(desires, int));
	}
	va_end(desires);
	printf("\n");
}