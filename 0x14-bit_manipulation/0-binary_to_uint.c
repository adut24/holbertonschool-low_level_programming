#include "main.h"

/**
 * binary_to_uint - convert a string of 0 and 1 to a number
 * @b: string to convert
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nb = 0;

	if (!b)
		return (0);

	for (; *b; b++)
	{
		nb *= 2;
		if (*b >= '0' && *b <= '9')
			nb += *b - '0';
		else
			return (0);
	}
	return (nb);
}
