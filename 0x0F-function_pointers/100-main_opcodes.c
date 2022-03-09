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
	int i, nb = atoi(argv[1]);
	char *str = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nb; i++, str++)
	{
		printf("%02hhx", *str);
		if (i != nb - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
