#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: linked list
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *node;
	int nb;

	if (!head)
		return (0);

	node = *head;
	temp = node->next;
	nb = node->n;

	free(node);
	*head = temp;
	return (nb);
}
