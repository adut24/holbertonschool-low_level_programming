#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a block of memory
 * @ptr: pointer to reallocate
 * @old_size: old size of the content of the pointer
 * @new_size: new size of the content of the pointer
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
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
		for (i = 0; i < new_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (p);
	}
	if (new_size > old_size)
		ptr = malloc(old_size + (new_size - old_size));
	return (ptr);
}
