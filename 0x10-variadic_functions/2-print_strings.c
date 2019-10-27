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

	va_start(list_string, n);

	for (i = 0; i < n; i++)
	{
		argmt = va_arg(list_string, char *);

		if (argmt == NULL)
			printf("(nil)");
		else
			printf("%s", argmt);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);

	}

	va_end(list_string);
	printf("\n");
}
