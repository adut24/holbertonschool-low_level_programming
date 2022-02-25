#include <stdio.h>
/**
 * main - print the number of argument(s) passed to the program
 * @argc: number of argument(s)
 * @argv: array containing the argument(s)
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
