#include "main.h"
/**
 * *_strchr - locate a character in a string
 * @s: string to verify
 * @c: character to check if present
 *
 * Return: pointer to the position of c or 0
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			break;
	}
	return (s);
}
