#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * number - check if there is something other than a digit
 * @s: string to check
 *
 * Return: 0 or 1
 */
int number(char *s)
{
	for (; *s; s++)
	{
		if (isdigit(*s) == 0)
			return (1);
	}
	return (0);
}
/**
 * main - multiply two numbers
 * @argc: number of argument(s)
 * @argv: array containing the argument(s)
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i, sum;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (number(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
