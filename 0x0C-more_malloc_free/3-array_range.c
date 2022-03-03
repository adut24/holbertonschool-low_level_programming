#include "main.h"
#include <stdlib.h>
/**
 * @brief
 *
 */
int *array_range(int min, int max)
{
	int *ar, i;

	if (min > max)
		return (NULL);
	ar = malloc((max + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		ar[i] = min + i;
	return (ar);
}
