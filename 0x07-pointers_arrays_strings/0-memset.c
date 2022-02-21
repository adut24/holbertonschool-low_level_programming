#include "main.h"
/**
 * *_memset - fill the first n byte of the memory pointed by s
 * @s: pointer to the memory to modify
 * @b: character to fill
 * @n: number of bytes to modify
 *
 * Return: modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
