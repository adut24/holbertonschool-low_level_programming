#include "main.h"
/**
 * *rot13 - encode a string using rot13
 * @str: string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char ch1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ch2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch1[j] != '\0'; j++)
		{
			if (str[i] == ch1[j])
			{
				str[i] = ch2[j];
				break;
			}
		}
	}
	return (str);
}
