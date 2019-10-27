#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print anything with varidic
 * @format: arguments of type input to print
 *
 * Description: Print anything with format
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *strg;
	va_list list_arguments;

	va_start(list_arguments, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list_arguments, int));
			i++;
			break;
		case 'i':
			printf("%d", va_arg(list_arguments, int));
			i++;
			break;
		case 'f':
			printf("%f", va_arg(list_arguments, double));
			i++;
			break;
		case 's':
			strg = va_arg(list_arguments, char *);
			if (strg == NULL)
				strg = "(nil)";
			printf("%s", strg);
			i++;
			break;
		default:
			i++;
			continue;
		}
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(list_arguments);
}
