#include "main.h"
/**
 * *string_toupper - convert lowercase to uppercase
 * @str: string to convert
 *
 * Return: converted string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
