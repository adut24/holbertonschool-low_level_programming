#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: node
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h != NULL)
	{
		nb_nodes++;
		h = h->next;
	}
	return (nb_nodes);
}
