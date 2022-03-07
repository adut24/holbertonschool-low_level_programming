#include "dog.h"
/**
 * init_dog - initialize a dog structure
 * @d: structure to initialize
 * @name: string with the name of the dog
 * @age: floating number corresponding to the age of the dog
 * @owner: string with the name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
