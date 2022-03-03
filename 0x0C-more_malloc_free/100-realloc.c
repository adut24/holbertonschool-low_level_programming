#include "main.h"
#include <stdlib.h>
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
/**
 * _realloc - reallocate a block of memory
 * @ptr: pointer to reallocate
 * @old_size: old size of the content
 * @new_size: new size of the content
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size > new_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		_memcpy(p, ptr, new_size);
		free(ptr);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(old_size + (new_size - old_size));
		if (p == NULL)
			return (NULL);
		_memcpy(p, ptr, new_size - old_size);
		free(ptr);
	}
	return (p);
}
