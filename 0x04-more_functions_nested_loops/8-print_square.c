#include "main.h"
/**
 * print_square - print a square
 * @size: size of the square (integer)
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (j < size)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			j++;
		}
	}
}
