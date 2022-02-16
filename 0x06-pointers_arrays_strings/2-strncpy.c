#include "main.h"
/**
 * *_strncpy - copy a string to a destination
 * @dest: the string that will receive the copy
 * @src: the string to copy
 * @n: number of times to print
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
