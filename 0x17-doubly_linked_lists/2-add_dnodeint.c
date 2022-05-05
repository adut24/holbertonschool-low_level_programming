#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a doubly linked list
 * @head: doubly linked list
 * @n: number to add to the node
 * Return: NULL or pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	if (*head)
		node->next->prev = node;
	else
		node->prev = NULL;
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
