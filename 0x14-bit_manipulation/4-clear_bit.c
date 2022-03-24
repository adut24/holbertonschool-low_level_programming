#include "main.h"

/**
 * clear_bit - set a bit to 0 at a given index
 * @n: number to modify
 * @index: index of the bit to modify
 * Return: -1 or 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
