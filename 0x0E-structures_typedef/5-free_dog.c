#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free memory of Dog
 * @d: input
 *
 * Description: function that frees dogs
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
