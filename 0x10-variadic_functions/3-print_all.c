#include "variadic_functions.h"
/**
 * print_all - print anything with varidic
 * @format: arguments of type input to print
 *
 * Description: Print anything with format
 */

void print_all(const char * const format, ...)
{
	unsigned i, j;
	va_list list_arguments;
	char *input_formats;

	va_start(list_arguments, format);

	/* take the first argument of input. These are the print formats */
	input_formats = va_arg(list_arguments, format);

	while (input_formats[i] != '\0')
	{
		switch (input_formats[i])
			case 'c'
		i++;
	}
}
