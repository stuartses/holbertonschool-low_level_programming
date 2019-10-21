#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - print properties of Dog
 * @d: addreess of struct
 *
 * Description: function that prints a struct dog
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
		printf("(nil)");

	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
