#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at an index
 * @head: doubly linked list
 * @index: index of the node to return
 * Return: NULL or pointer to the node we want
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);

		head = head->next;
	}

	return (head);
}
