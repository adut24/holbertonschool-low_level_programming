#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print the string and buffer
 * @b: string
 * @size: size of the string
 *
 */
void print_buffer(char *b, int size)
{
	int i, j, count;

	count = 0;
	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		printf("%08x: ", count);
		for (j = 0; j < 10; j++)
		{
			printf("%02x", b[j]);
			if ((j + 1) % 2 == 0)
				printf(" ");
		}
		for (i = 0; i < size; i++)
		{
			if (b[i] >= 32 && b[i] <= 126)
				printf("%c", b[i]);
			else
				printf(".");
			count++;
			if (count % 10 == 0 && i != size - 1)
			{
				printf("\n");
				printf("%08x: ", count);
				for (j = 1; j < 11; j++)
				{
					if (i + j < size)
						printf("%02x", b[i + j]);
					else
						printf("  ");
					if (j % 2 == 0)
						printf(" ");
				}
			}
		}
		printf("\n");
	}
}
