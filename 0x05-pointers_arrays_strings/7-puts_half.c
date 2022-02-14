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
 * puts_half - print second half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int length, i;

	length = _strlen(str);
	if (length % 2 == 0)
	{
		for (i = (length + 1) / 2; i < length; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i < length; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
