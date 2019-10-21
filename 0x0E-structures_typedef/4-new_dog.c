#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: name of Dog
 * @age: age of Dog
 * @owner: owner of Dog
 *
 * Description: function that creates a new Dog
 * Return: new Dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
