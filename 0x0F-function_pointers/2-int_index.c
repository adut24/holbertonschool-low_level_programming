#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function comparing values
 * Return: -1 or the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int comp, i;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++, array++)
		{
			comp = (*cmp)(*array);
			if (comp != 0)
				return (i);
		}
	}
	return (-1);
}
