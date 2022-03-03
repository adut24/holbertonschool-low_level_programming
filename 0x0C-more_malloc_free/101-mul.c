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
 * into_int - transform a string into integer
 * @s: string
 * @size: integer
 */
void into_int(char *s, int size)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] -= '0';
}
/**
 * into_char - transform an array into a string
 * @s: array
 * @size: integer
 */
void into_char(char *s, int size)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] += '0';
}
/**
 * rev_array - reverse the array
 * @s: string to reverse
 * @size: size of the string
 */
void rev_array(char *s, int size)
{
	int i, j = size;
	char *temp;

	for (i = 0; s[i] != '\0'; i++, j--)
	{
		*temp = s[j];
		s[j] = s[i];
		s[i] = *temp;
	}
}
/**
 * mul - multiply the number
 * @dest: pointer array receiving the multiplication
 * @src1: "number" one
 * @src2: "number" two
 * @len1: length of "number" one
 * @len2: length of "number" two
 */
void mul(char *dest, char *src1, char *src2, int len1, int len2)
{

}
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int len1, len2, i, *ar;

	if (argc != 3 || just_digit(argv[1]) == 0 || just_digit(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	ar = malloc((len1 + len2 + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (len1 + len2 + 1); i++)
		ar[i] = 0;
	rev_array(argv[1], len1 - 1);
	rev_array(argv[2], len2 - 1);
	into_int(argv[1], len1 - 1);
	into_int(argv[2], len2 - 1);
	into_char(ar, len1 + len2 + 1);
	rev_array(ar, len1 + len2 + 1);
	mul(ar, argv[1], argv[2], len1 - 1, len2 - 1);
	printf("%s\n", ar);
	free(ar);
	return (0);
}
