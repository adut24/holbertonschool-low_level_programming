#include <stdio.h>
/**
 * main - print first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	unsigned long t1, t2, tN, t1G, t1D, t2G, t2D, tNG, tND;
	int i;

	t1 = 1;
	t2 = 2;
	t1G = t1D = t2G = t2D = tNG = tND = 0;
	tN = t1 + t2;
	printf("%lu, %lu, ", t1, t2);
	for (i = 3; i < 93; i++)
	{
		printf("%lu, ", tN);
		t1 = t2;
		t2 = tN;
		tN = t1 + t2;
	}
	t1G = t1 / 10000000000;
	t1D = t1 % 10000000000;
	t2G = t2 / 10000000000;
	t2D = t2 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		tNG = t1G + t2G;
		tND = t1D + t2D;
		if (tND > 999999999)
		{
			tNG++;
			tND %= 10000000000;
		}
		printf("%lu%lu", tNG, tND);
		if (i != 98)
		{
			printf(", ");
		}
		t1G = t2G;
		t1D = t2D;
		t2G = tNG;
		t2D = tND;
	}
	printf("\n");
	return (0);
}
