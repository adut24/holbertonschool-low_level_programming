#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find the length of a string recursively
 * @s: string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
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

	length = _strlen(str);
	s = malloc(length * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		s[i] = *str;
		str++;
	}
	s[i + 1] = '\0';
	return (s);
}
