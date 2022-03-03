#include "main.h"
#include <stdlib.h>
/**
 * array_range - print an array going from min to max
 * @min: integer
 * @max: integer
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ar, *tmp, i;

	if (min > max)
		return (NULL);
	ar = malloc((max + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	tmp = ar;
	for (i = 0; i <= max; i++)
		ar[i] = min + i;
	ar = tmp;
	return (ar);
}
