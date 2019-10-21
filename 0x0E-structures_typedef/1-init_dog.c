#include "dog.h"
/**
 * init_dog - initializes Dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: structure that defines properties of Dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
