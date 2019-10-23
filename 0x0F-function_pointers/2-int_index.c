#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for the first element different to zero
 * @array: input array
 * @size: number of elements in array
 * @cmp: function to executes comparation
 *
 * Description: function that searches for an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int om, i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		om = (*cmp)(array[i]);
		if (om != 0)
			return (i);
	}
	return (-1);
}
