#include "main.h"
/**
 * print_last_digit - print last digit of an integer
 * @n: integer value
 *
 * Return: integer value
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = -digit;
	}
	_putchar('0' + digit);
	return (digit);
}
