#include "main.h"
/**
 * @brief
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *t = accept;
	for (; *s; s++)
	{
		for (; *accept; accept++)
		{
			if (*s == *accept)
			{
				return (s);
			}
		}
		accept = t;
	}
	return (0);
}
