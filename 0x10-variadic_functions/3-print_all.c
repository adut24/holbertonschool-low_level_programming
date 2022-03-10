#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print all the parameters
 * @format: string of character telling the format of the parameters in order
 */
void print_all(const char * const format, ...)
{
	if (format != NULL)
	{
		char *str, *separator;
		int i = 0;
		va_list ptr;

		separator = "";
		va_start(ptr, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ptr, int));
				break;
				case 'i':
					printf("%s%d", separator, va_arg(ptr, int));
				break;
				case 'f':
					printf("%s%f", separator, va_arg(ptr, double));
				break;
				case 's':
					str = va_arg(ptr, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
				break;
				default:
					i++;
					continue;
				break;
			}
			i++;
			separator = ", ";
		}
		va_end(ptr);
	}
	printf("\n");
}
