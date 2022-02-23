#include "main.h"
/**
 * square_root - find and return the square root of a
 * @a: intger
 * @b: integer
 *
 * Return: b or -1
 */
int square_root(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (a <= b)
		return (-1);

	return (square_root(a, b + 1));
}
/**
 * _sqrt_recursion - return the natural square root of n
 * @n: integer
 *
 * Return: -1, 0 or square root value
 */
int _sqrt_recursion(int n)
{
	int square = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (square_root(n, square));
}
