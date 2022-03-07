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
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_strdup - copy a string
 * @str: string to copy
 *
 * Return: NULL or pointer to the copy
 */
char *_strdup(char *str)
{
	int length, i;
	char *s;

	if (str == NULL)
		return (NULL);
	length = _strlen(str);
	s = malloc(length * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		s[i] = *str;
		str++;
	}
	s[i] = '\0';
	return (s);
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

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->age = age;
	new->name = _strdup(name);
	if (new->name == NULL)
	{
		free(new);
	}
	new->owner = _strdup(owner);
	if (new->owner == NULL)
	{
		free(new);
	}
	return (new);
}
