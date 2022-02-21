#include "main.h"
#include <stdio.h>
/**
 * *_strstr - check if a substring is present in a string
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to position of substring in string or 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
