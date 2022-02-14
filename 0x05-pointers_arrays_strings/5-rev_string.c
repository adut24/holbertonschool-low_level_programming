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
 * rev_string - reverse the string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int length, i;
	char *begin, *end, temp;

	length = _strlen(s);
	begin = s;
	end = s;

	for (i = 0; i < length - 1; i++)
		end++;

	for (i = 0; i < length / 2; i++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
