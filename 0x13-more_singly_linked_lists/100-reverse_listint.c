#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: linked list to reverse
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1, *node2;

	if (!head)
		return (NULL);

	if (!*head)
		return (NULL);

	node1 = *head;
	*head = (*head)->next;
	node2 = *head;
	node1->next = NULL;

	while (*head)
	{
		*head = (*head)->next;
		node2->next = node1;
		node1 = node2;
		node2 = *head;
	}
	*head = node1;
	return (*head);
}
