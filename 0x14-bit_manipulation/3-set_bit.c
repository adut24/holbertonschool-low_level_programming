#include "main.h"

/**
 * set_bit - set a bit to one at a given index
 * @n: number to change
 * @index: index of the bit to set
 * Return: -1 in case of failure or 1 in case of success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > 63)
		return (-1);

	*n |= (1 << index);
	return (1);
}
