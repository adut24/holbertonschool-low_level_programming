#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string to check
 * @accept: list of character to check if present
 *
 * Return: number of similar characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nb = 0;
	char *t = accept;

	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				nb++;
				break;
			}
		}
		if (*accept == '\0')
			break;
		accept = t;
	}
	return (nb);
}
