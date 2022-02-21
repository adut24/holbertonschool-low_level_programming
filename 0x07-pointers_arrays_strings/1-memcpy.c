#include "main.h"
/**
 * *_memcpy - copy n bytes from src to dest
 * @dest: array receiving the modification
 * @src: array to copy
 * @n: number of bytes to modify
 * Return: pointer to the modified array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
