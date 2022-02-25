#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: number of argument(s)
 * @argv: array containing the argument(s)
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[argc - 2]) * atoi(argv[argc - 1]));
		return (0);
	}
}
