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
 * *str_concat - concatenate 2 strings
 * @s1: string
 * @s2: string
 *
 * Return: NULL or pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	str = malloc((len1 + len2) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		str[i] = *s1;
		s1++;
	}
	for (; i < len1 + len2; i++)
	{
		str[i] = *s2;
		s2++;
	}
	str[i + 1] = '\0';
	return (str);
}
