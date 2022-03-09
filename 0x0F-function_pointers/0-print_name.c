#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: string of the name to print
 * @f: pointer to the function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(0);
	else
		(*f)(name);
}
