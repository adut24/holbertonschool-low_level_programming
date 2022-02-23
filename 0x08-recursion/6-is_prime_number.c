#include "main.h"
/**
 * prime - find if a number is prime or not
 * @a: integer
 * @b: integer
 * @c: integer
 *
 * Return: 0 or 1
 */
int prime(int a, int b, int c)
{
	if (a % b == 0)
		c++;
	if (a == b && c == 2)
		return (1);
	else if (a == b)
		return (0);
	return (prime(a, b + 1, c));
}
/**
 * is_prime_number - return if a number is prime or not
 * @n: integer
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int prm = 1;
	int count = 0;

	if (n <= 1)
		return (0);
	return (prime(n, prm, count));
}
