#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - find the length of a string recursively
 * @s: string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length = _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
/**
 * compare_ends - compare character by character to say if identical
 * @a: string
 * @b: integer
 * @c: integer
 *
 * Return: 0 or 1
 */
int compare_ends(char *a, int b, int c)
{
	if (a[b] != a[c])
		return (0);
	if (b == c || b + 1 == c)
		return (1);
	return (compare_ends(a, b + 1, c - 1));
}
/**
 * is_palindrome - tell if a string is a palindrome or not
 * @s: string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	if (*s == '\0')
		return (1);

	return (compare_ends(s, i, length));
}
