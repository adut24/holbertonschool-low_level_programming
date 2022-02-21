#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonals
 * @a: matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, nb;

	nb = 0;
	for (i = 0; i < size; i++)
	{
		nb += a[i * size + i];
	}
	printf("%d, ", nb);

	nb = 0;
	for (i = 0; i < size; i++)
	{
		nb += a[(i + 1) * (size - 1)];
	}
	printf("%d\n", nb);
}
