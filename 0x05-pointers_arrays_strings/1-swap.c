#include "main.h"
/**
 * swap_int - swap the value of a and b
 * @a: integer value
 * @b: integer value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
