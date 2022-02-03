#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: here 1 is expected
 */
int main(void)
{
	char cit[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(cit, sizeof(cit) - 1, 1, stdout);
	return (1);
}
