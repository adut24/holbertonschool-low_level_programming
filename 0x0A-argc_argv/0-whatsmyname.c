#include <stdio.h>
/**
 * main - print the name of the executable
 * @argc: number of argument(s)
 * @argv: array holding the argument(s)
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
