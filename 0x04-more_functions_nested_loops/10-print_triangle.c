#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: integer value
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (i > 0)
			{
				for (j = size; j > 0; j--)
				{
					_putchar(' ');
				}
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
