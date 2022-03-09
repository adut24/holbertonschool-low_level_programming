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
	if (array != NULL && cmp != NULL)
	{
		int comp, i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++, array++)
		{
			comp = (*cmp)(*array);
			if (comp != 0)
				break;
		}
		if (i == size)
			return (-1);
		return (i);
	}
}
