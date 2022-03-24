#include "main.h"

/**
 * flip_bits - find the number of bit different between n and m
 * @n: unsigned long
 * @m: unsigned long
 * Return: number of bits different
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0, i;

	for (i = 0; i < 64; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			nb++;
	}
	return (nb);
}
