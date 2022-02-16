#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse the content of the array
 * @a: array to reverse
 * @n: size of the array
 */
void reverse_array(int *a, int n)
{
	int i, temp, size;

	size = n;
	for (i = 0; i < size / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
