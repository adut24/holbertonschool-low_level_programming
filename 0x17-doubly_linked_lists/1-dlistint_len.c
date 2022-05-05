#include "lists.h"

/**
 * dlistint_len - count the number of nodes
 * @h: list to count
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nb_nodes = 0;

	while (h)
	{
		h = h->next;
		nb_nodes++;
	}
	return (nb_nodes);
}
