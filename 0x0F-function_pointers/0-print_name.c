#include <stdlib.h>
/**
 * print_name - execute function with iput parameters
 * @name: input value tu pass trought function
 * @f: function to call
 *
 * Description: function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
