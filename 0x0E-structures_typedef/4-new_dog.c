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
	int len_name = 0, len_owner = 0, i, j;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;

	my_dog->name = malloc((sizeof(char) * len_name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc((sizeof(char) * len_owner) + 1);

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		my_dog->name[i] = name[i];
	for (j = 0; j < len_owner; j++)
		my_dog->owner[j] = owner[j];

	my_dog->age = age;
	return (my_dog);
}
