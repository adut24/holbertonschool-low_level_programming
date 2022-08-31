#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - free a linked list
 * @h: linked list
 * Return: size of the free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	add_t *ptr = NULL, *tmp = NULL;
	listint_t *t = NULL;
	size_t nb = 0;

	if (!h)
		return (nb);

	add_address(&ptr, *h);
	t = (*h)->next;
	free(*h);
	nb++;
	tmp = ptr;
	*h = t;
	while (*h)
	{
		ptr = tmp;
		if (!add_address(&ptr, *h))
			break;
		t = (*h)->next;
		free(*h);
		nb++;
		*h = t;
	}
	ptr = tmp;
	*h = NULL;
	free_list(&ptr);
	return (nb);
}
