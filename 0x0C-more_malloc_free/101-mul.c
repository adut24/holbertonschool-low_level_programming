#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * just_digit - check if a string is only composed of digit
 * @s: string to check
 * Return: 0 if false or 1 if true
 */
int just_digit(char *s)
{
	int i;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] < '0' && s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * _strlen - find the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i, length = 0;

	for (i = 0; s[i] != '\0'; i++)
		length++;
	return (length);
}
/**
 * main
 *
 */
int main(int argc, char **argv)
{
	int verif;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((verif = just_digit(argv[1]) == 0 || (verif = just_digit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
