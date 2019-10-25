#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints string with vardic
 * @separator: separator string
 * @n: number of input arguments
 *
 * Description: function that prints strings, followed by a new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_string;
	char *argmt;

	if (separator == NULL || n == 0)
		return;

	va_start(list_string, n);
	printf("%s", va_arg(list_string, char *));

	for (i = 0; i < n; i++)
	{
		argmt = va_arg(list_string, char *);
		if (argmt == NULL)
			printf("%s(nil)", separator);
		else
			printf("%s%s", separator, argmt);
	}

	va_end(list_string);
	printf("\n");
}
