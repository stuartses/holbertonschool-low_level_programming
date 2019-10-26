#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
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

	if (n == 0 || separator == NULL)
		return;

	va_start(desires, n);
	printf("%d", va_arg(desires, int));
	for (i = 0; i < n - 1; i++)
		printf("%s%d", separator, va_arg(desires, int));
	va_end(desires);
	printf("\n");
}
