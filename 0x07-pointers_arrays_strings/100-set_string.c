#include "main.h"
#include <stdio.h>
/**
 * set_string - set the value of "s" to "to"
 * @s: the double pointer that needs to change
 * @to: the pointer to point to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
