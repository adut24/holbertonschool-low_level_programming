#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create an array of chars
 * @size: size of the array
 * @c: char to assign
 *
 * Return: 0 or pointer to ar
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == NULL)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ar[i] = c;
	}
	return (ar);
	free(ar);
}
