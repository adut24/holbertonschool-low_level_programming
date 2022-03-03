#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	for (; *s; s++)
		length++;
	return (length);
}
/**
 * string_nconcat - concatenate 2 strings accordin
 * @s1: string
 * @s2: string
 * @n: unsigned integer
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		str = malloc((len1 + len2 + 1) * sizeof(char));
	else
		str = malloc((len1 + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	if (n >= len2)
	{
		for (j = 0; j < len2; j++)
			str[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
