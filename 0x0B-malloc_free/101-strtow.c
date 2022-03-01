#include "main.h"
#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @s: char value
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to the words
 */
char **strtow(char *str)
{
	int i, length = 0;
	char **s;

	if (str == NULL || str == "")
		return (NULL);
}
