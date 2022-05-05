#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at a given index
 * @h: linked list
 * @idx: index of where to add the node
 * @n: number to assign to the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *node, *a, *temp;

	if (!h)
		return (NULL);
	temp = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	a = temp->next;
	temp->next = node;
	temp->next->next->prev = node;
	node->n = n;
	node->next = a;
	node->prev = temp;

	return (node);
}
