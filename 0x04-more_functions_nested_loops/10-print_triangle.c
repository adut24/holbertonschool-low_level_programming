#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: integer value
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = 0; j < i - 1; j++)
				_putchar(' ');
			for (k = j; k < size; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
