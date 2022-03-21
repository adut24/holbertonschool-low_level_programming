#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the linked list
 * @head: linked list
 * @n: number to add
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * add_nodeint_end - add a new node at the end of the linked list
 * @head: linked list
 * @n: number to add
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *lastNode;

	if (!head)
		return (NULL);
	if (!*head)
		return (add_nodeint(head, n));
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	lastNode->next = node;
	return (node);
}
