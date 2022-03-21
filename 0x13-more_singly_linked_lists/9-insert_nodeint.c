#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: linked list
 * @idx: index of where to add the node
 * @n: number to assign to the node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *a, *temp;

	if (!head)
		return (NULL);
	temp = *head;
	if (idx == 0)
		return (add_nodeint(head, n));
	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	a = temp->next;
	temp->next = node;
	node->n = n;
	node->next = a;

	return (node);
}
