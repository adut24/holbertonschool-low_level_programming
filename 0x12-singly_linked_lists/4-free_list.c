#include "lists.h"

/**
 * free_list - free all node of a linked list
 * @head: node to free
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		if (head->str)
			free(head->str);
		free(head);
		head = temp;
	}
}
