#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/**
 * main - generates random valid passwords
 *
 * Return: string with value of 2772
 */
int main(void)
{
	int i, nb, key;

	srand(time(NULL));
	for (i = 0; key < 2646; i++)
	{
		nb = rand() % 126 + 1;
		key += nb;
		printf("%c", nb);
	}
	nb = 2772 - key;
	printf("%c", nb);
	return (0);
}
