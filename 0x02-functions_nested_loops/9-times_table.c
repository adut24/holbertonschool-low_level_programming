#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, resultat;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			resultat = i * j;
			if (resultat < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(resultat + '0');
			}
			else if (resultat >= 10)
			{
				_putchar(' ');
				_putchar(resultat / 10 + '0');
				_putchar(resultat % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
