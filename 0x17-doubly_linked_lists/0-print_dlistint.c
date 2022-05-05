#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t nb_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb_nodes++;
	}
	return (nb_nodes);
}
