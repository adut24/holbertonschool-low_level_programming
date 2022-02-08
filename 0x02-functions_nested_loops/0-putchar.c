#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
