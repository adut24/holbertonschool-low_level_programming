#include "main.h"
/**
 * _pow_recursion - return the value of x power y recursively
 * @x: intger
 * @y: integer
 *
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
