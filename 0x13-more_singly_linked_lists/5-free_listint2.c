#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *temp, *node;

		node = *head;
		while (node)
		{
			temp = node->next;
			free(node);
			node = temp;
		}
		*head = NULL;
	}
}
