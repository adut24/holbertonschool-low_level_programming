#include "search_algos.h"
#include <stdio.h>

/**
 * binary_recursion - do a binary search recursively
 * @array: array to search
 * @left: min index
 * @right: max index
 * @value: value to find
 * Return: -1 or the index of the value
 */
int binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t i, mid = (left + right) / 2;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i < right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}

	if (left == right)
		return (-1);

	if (array[mid] == value && value > 0 && array[mid - 1] == value)
		return (binary_recursion(array, left, mid, value));

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (binary_recursion(array, 0, mid - 1, value));
	else
		return (binary_recursion(array, mid + 1, right, value));

	return (-1);
}


/**
 * @brief
 * @param array
 * @param size
 * @param value
 * @return int
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recursion(array, 0, size - 1, value));
}
