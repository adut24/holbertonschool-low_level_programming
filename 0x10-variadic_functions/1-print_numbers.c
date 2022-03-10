#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all the numbers in parameters
 * @separator: string put between the numbers
 * @n: number of parameters to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n != 0)
	{
		unsigned int i;
		va_list ptr;

		va_start(ptr, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ptr, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(ptr);
	}
	printf("\n");
}
