#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: linked list
 * @index: index of the node to delete
 * Return: -1 in case of failure or 1 in case of success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if(!head)
		return (-1);
	if (!*head)
		return (-1);
	node = *head;
	if (index == 0)
	{
		temp = node->next;
		free(node);
		*head = temp;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!node)
			return (-1);
		node = node->next;
	}
	temp = node->next;
	node->next = node->next->next;
	node = temp;
	printf("ok\n");
	free(node);
	return (1);
}
