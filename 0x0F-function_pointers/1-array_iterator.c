#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: number of elements in array
 * @action: function to executes
 *
 * Description:  function that executes a function given as a parameter on each
 * element of an array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
