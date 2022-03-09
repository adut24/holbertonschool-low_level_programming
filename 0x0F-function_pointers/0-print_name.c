#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: string of the name to print
 * @f: pointer to the function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
