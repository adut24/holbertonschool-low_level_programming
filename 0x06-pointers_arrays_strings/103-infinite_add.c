#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
/**
 * *infinite_add - add two numbers
 * @n1: number one
 * @n2: number two
 * @r: buffer used to store the result
 * @size_r: size of the buffer
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), ret = 0, res, i, tmp;

	tmp = (*n1 - '0') + (*n2 - '0');
	if ((l1 >= size_r - 1 && tmp > 9) || (l2 >= size_r - 1 && tmp > 9)
	 || (l1 == size_r) || (l2 == size_r))
		return (0);
	while (*(n1 + 1) != '\0')
		n1++;
	while (*(n2 + 1) != '\0')
		n2++;

	r[size_r - 1] = '\0';
	for (i = size_r - 2; *n1 && *n2; n1--, n2--, i--)
	{
		res = (*n1 - '0') + (*n2 - '0') + ret;
		ret = res / 10;
		r[i] = res % 10 + '0';
	}
	for (; *n1; n1--, i--)
	{
		res = (*n1 - '0') + ret;
		ret = res / 10;
		r[i] = res % 10 + '0';
	}
	for (; *n2; n2--, r--)
	{
		res = (*n1 - '0') + ret;
		ret = res / 10;
		r[i] = res % 10 + '0';
	}
	if (ret > 0)
	{
		r[i] = '1';
		return (r + i);
	}
	return (r + i + 1);
}
