#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	long int term1, term2, term_n, i;

	term1 = 1;
	term2 = 2;
	term_n = term1 + term2;
	printf("%ld, %ld\n", term1, term2);
	for (i = 3; i < 51; i++)
	{
		printf("%ld", term_n);
		term1 = term2;
		term2 = term_n;
		term_n = term1 + term2;
		if (i != 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
