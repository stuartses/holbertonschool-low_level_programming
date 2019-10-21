#ifndef DOG_H
#define DOG_H

/**
 * struct dog - get properties of Dog
 * @name: name of Dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: structure that defines properties of Dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
