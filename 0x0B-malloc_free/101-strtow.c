#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * word_len - calculate length of word
 * @s: string
 *
 * Return: length
 */
int word_len(char *s)
{
	int length = 0;

	for (; *s != ' ' && *s != '\0'; s++)
		length++;
	return (length);
}
/**
 * number_words - count the number of words in a string
 * @s: string
 *
 * Return: number of words
 */
int number_words(char *s)
{
	int nb = 0;
	char *tmp;

	tmp = s;
	for (; *s; s++)
	{
		if (*s != ' ' && (*(s + 1) == ' ' || *(s + 1) == '\0'))
			nb++;
	}
	s = tmp;
	return (nb);
}
/**
 * strtow - split a string into words
 * @str: string to split
 *
 * Return: pointer to the words
 */
char **strtow(char *str)
{
	int nb, len, i = 0, j, check = 0;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	nb = number_words(str);
	s = malloc((nb + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	for (; *str; str++)
	{
		if (*str != ' ' && check == 0)
		{
			len = word_len(str);
			s[i] = malloc((len + 1) * sizeof(char));
			if (s[i] == NULL)
				return (NULL);
			for (j = 0; j < len; j++, str++)
				s[i][j] = *str;
			i++;
			check = 1;
		}
		if (*str == ' ')
			check = 0;
	}
	return (s);
}
