#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: gap between the ASCII value of the two characters
 */
int _strcmp(char *s1, char *s2)
{
	int val, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
	}
	val = s1[i] - s2[i];
	return (val);
}
