#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of coins needed for change
 * @argc: number of argument(s)
 * @argv: array of argument(s)
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int nb1, nb2 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb1 = atoi(argv[1]);
	while (nb1 != 0)
	{
		if (nb1 >= 25)
		{
			nb1 -= 25;
			nb2++;
		}
		else if (nb1 >= 10)
		{
			nb1 -= 10;
			nb2++;
		}
		else if (nb1 >= 5)
		{
			nb1 -= 5;
			nb2++;
		}
		else if (nb1 >= 2)
		{
			nb1 -= 2;
			nb2++;
		}
		else if (nb1 >= 1)
		{
			nb1 -= 1;
			nb2++;
		}
	}
	printf("%d\n", nb2);
	return (0);
}
