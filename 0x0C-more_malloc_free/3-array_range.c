#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - print an array going from min to max
 * @min: integer
 * @max: integer
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc((max - min + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		ar[i] = min + i;
	return (ar);
}
