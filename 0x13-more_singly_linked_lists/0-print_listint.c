#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a list
 * @h: list to print
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb++;
	}
	return (nb);
}
