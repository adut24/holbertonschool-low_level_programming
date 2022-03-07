#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: string with the name of the dog
 * @age: floating number being the age of the dog
 * @owner: string with the name of the owner
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *copy_n, *copy_o;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	copy_n = name;
	copy_o = owner;
	return (new);
}
