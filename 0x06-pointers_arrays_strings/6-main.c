#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "hell fire\tsoar\ntap,on;me.today!first?home\"history(some)one{tell}other";
	char *ptr;

	ptr = cap_string(str);
	printf("%s\n", ptr);
	printf("%s", str);
	return (0);
}
