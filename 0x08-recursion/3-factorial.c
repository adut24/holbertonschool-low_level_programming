#include "main.h"
/**
 * factorial - return the factorial of any given number
 * @n: integer we want to find the factorial of
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
