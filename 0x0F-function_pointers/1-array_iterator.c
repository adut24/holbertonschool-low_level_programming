#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to use with the functions
 * @size: size of the array
 * @action: pointer to the function needed to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++, array++)
		(*action)(*array);
}
