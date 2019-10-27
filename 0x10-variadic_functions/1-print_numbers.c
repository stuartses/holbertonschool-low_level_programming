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

	va_start(desires, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(desires, unsigned int));

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(desires);
	printf("\n");
}
