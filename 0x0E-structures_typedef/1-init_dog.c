#include "dog.h"
/**
 * init_dog - initialize a dog structure
 * @d:structure to initialize
 * @name: string
 * @age: string
 * @owner: string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
