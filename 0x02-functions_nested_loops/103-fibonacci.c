#include <stdio.h>
/**
 * main - print the sum of even-valued terms in fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int term1, term2, term_n, i, addition;

	term1 = 1;
	term2 = 2;
	term_n = term1 + term2;
	for (i = 3; i < 33; i++)
	{
		term1 = term2;
		term2 = term_n;
		term_n = term1 + term2;
		if (term1 % 2 == 0)
			addition += term1;
	}
	printf("%d\n", addition);
	return (0);
}
