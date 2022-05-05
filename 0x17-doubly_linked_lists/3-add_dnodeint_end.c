#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the doubly linked list
 * @head: doubly linked list
 * @n: number to add to the node
 * Return: NULL or pointer to the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	current = *head;

	while (current->next)
		current = current->next;

	current->next = node;
	node->prev = current;

	return (node);
}
