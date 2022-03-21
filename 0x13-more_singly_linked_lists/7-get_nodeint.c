#include "lists.h"

/**
 * get_nodeint_at_index - return pointer to the wanted node
 * @head: linked list
 * @index: index of the node to return
 * Return: NULL or pointer to the node we want
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
