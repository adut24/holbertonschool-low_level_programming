#include <stdio.h>
/**
 * main - print largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int prime, nb;

	nb = 612852475143;
	for (prime = 2; prime < nb; prime++)
	{
		while (nb % prime == 0)
		{
			nb /= prime;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
