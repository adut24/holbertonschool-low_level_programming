#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	char nb[20] = "01234567891011121314";
	int i, limite;

	limite = 1;

	for (i = 0; i < 20; i++)
	{
		_putchar(nb[i]);
		if (i == 19)
		{
			_putchar('\n');
			if (limite == 10)
			{
				i = 26;
			}
			else
			{
				i = -1;
				limite++;
			}
		}
	}
}
