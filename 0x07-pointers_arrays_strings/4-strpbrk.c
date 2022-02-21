#include "main.h"
/**
 * *_strpbrk - search a string for any of a set of bytes
 * @s: the string to check
 * @accept: the character to find in s
 *
 * Return: pointer to the position of character in s or 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *t = accept;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		accept = t;
	}
	return (0);
}
