#include "main.h"
/**
 * wildcmp - compare 2 strings
 * @s1: string
 * @s2: string
 *
 * Return: 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
		return (0);
	if (*s2 == '*' &&)
		wildcmp(s + 1, s);
	return (wildcmp(s1 + 1, s2 + 2));
}
