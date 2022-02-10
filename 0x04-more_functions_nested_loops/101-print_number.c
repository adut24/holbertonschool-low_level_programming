#include "main.h"
/**
 * print_number - print integers
 * @n: integer value
 *
 * Return: void
 */
void print_number(int n)
{
	int base;

	if (n < 0)
	{
		if (n == -2147483648)
		{
			base = n;
			n /= 10;
		}
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
	if (base == -2147483648)
	{
		_putchar('8');
	}
}
