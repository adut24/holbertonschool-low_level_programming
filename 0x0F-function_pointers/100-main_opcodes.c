#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, nb;
	char *str = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nb = atoi(argv[1]);
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++, str++)
	{
		printf("%02x", *str & 0xff);
		if (i != nb - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
