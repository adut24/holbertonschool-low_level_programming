#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer value
 */
int _atoi(char *s)
{
	int i, nb, signe;

	nb = 0;
	signe = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			signe = signe * -1;
		else if (s[i] >= '0' && s[i] <= '9')
			nb = nb * 10 + (s[i] - '0');
		else if (nb > 0)
			break;
	}
	return (nb * signe);
}
