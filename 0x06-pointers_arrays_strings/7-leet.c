#include "main.h"
/**
 * *leet - encode a string into 1337 (leet)
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i, j;
	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch1[j] != '\0'; j++)
		{
			if (str[i] == ch1[j])
			{
				str[i] = ch2[j];
			}
		}
	}
	return (str);
}
