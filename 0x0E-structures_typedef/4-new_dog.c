#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @s: char value
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * *_strcpy - copy a string
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = _strlen(src);
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
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
	char *copy_name, *copy_owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	_strcpy(copy_name, name);
	_strcpy(copy_owner, owner);
	return (new);
}
