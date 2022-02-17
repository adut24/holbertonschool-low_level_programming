#include "main.h"
#include <stdio.h>
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
 * *cap_string - convert first letter to uppercase
 * @str: string to convert
 *
 * Return: converted string
 */
char *cap_string(char *str)
{
	int i;
	char last_ch;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','
		|| str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
		str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		last_ch = str[i];
	}
	if (last_ch == '\n')
		str[0] -= 32;
	return (str);
}
