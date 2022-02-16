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
 * *_strcat - concatenate 2 strings together
 * @dest: the string receiving the other
 * @src: the string to concatenate
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int length;
	int i;

	length = _strlen(dest);
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
