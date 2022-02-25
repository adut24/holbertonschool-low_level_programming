#include <stdio.h>
/**
 * main - print all the argument(s) one by line
 * @argc: number of argument(s)
 * @argv: array of the argument(s)
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
