#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: number to find the bit
 * @index: place of the researched bit
 * Return: value of the bit (0 or 1) or -1 in case of failure
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 << index)) >> index);
}
