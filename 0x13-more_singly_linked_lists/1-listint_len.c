#include "lists.h"

/**
 * listint_len - find the number of elements
 * @h: list to check
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}
