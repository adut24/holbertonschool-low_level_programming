#include "main.h"
/**
 * _islower - prints 0 or 1 if lowercase or not
 * @c: integer ASCII value
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
