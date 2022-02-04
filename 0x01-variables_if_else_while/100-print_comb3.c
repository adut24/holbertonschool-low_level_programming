#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int uni;

	for (i = 48; i < 57; i++)
	{
		for (uni = i + 1; uni < 58; uni++)
		{
			putchar(i);
			putchar(uni);
			if (i != 56 || uni != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
