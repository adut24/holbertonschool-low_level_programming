#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char value
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * *infinite_add - add two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer used to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int length;

	length = _strlen(*r);
	if (length > 509)
		return ('0');
	else
		return (*r);
}
