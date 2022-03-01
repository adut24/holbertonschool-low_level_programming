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
 * argstostr - print arguments separated by a new line
 * @ac: integer
 * @av: array of string
 *
 * Return: NULL or pointer to the array
 */
char *argstostr(int ac, char **av)
{
	int i, j, length;
	char *str, *tmp;


	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		length += _strlen(av[i]);
	str = malloc(length * sizeof(char) + 1);
	tmp = str;
	for (i = 0; i < ac; i++)
	{
		length = _strlen(av[i]);
		for (j = 0; j < length; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}
	str = tmp;
	return (tmp);
}
