#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocate a block of memory
 * @ptr: pointer to reallocate
 * @old_size: old size of the pointer
 * @new_size: new size of the pointer
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (old_size > new_size)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	ptr = malloc(new_size);
	return (ptr);
}
