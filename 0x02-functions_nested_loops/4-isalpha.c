#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: ASCII value
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
