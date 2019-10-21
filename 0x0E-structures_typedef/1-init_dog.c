#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes Dog
 * @d: addreess of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: structure that defines properties of Dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
