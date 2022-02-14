#include "main.h"
/**
 * *_strcpy - copy a string
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: string to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] >= '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
