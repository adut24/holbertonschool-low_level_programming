#include "main.h"
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
