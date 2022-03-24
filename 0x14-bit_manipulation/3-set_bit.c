#include "main.h"

/**
 * set_bit
 * @n:
 * @index:
 * Return:
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	*n |= (1 << index);
	return (1);
}
