#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print the strings passed as parameters
 * @separator: string put between the parameters
 * @n: number of string parameters to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		va_list ptr;
		char *str;

		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ptr, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
