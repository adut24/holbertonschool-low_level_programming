#include "main.h"
/**
 * print_times_table - prints times table
 * @n:
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int i, j, resultat;

		for (i = 0; i < n + 1; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j < n + 1; j++)
			{
				resultat = i * j;
				if (resultat < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(resultat + '0');
				}
				else if (resultat >= 10 && resultat < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(resultat / 10 + '0');
					_putchar(resultat % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(resultat / 100 + '0');
					_putchar((resultat / 10) % 10 + '0');
					_putchar(resultat % 10 + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
