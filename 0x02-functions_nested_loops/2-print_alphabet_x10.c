#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int limite = 1;
	int i;

	for (i = 0; i < 26; i++)
	{

		_putchar(alpha[i]);

		if (i == 25)
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
