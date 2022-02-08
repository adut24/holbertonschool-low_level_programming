#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long term1, term2, term_n, part1, part2;
	int i;

	term1 = 1;
	term2 = 2;
	term_n = term1 + term2;
	printf("%lu, %lu, ", term1, term2);
	for (i = 3; i < 99; i++)
	{
		part1 = term_n / 2;
		part2 = term_n / 2;
		if (term_n % 2 != 0)
		{
			printf("%lu", part1 + part2 + 1);
		}
		else
		{
			printf("%lu", part1 + part2);
		}
		term1 = term2;
		term2 = term_n;
		term_n = term1 + term2;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
