#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
