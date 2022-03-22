#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: linked list
 * Return: NULL or adress of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop;

	if (!head)
		return (NULL);

	loop = head;

	while (head)
	{
		head = head->next;
		loop = loop->next->next;

		if (head == loop)
			return (head);
	}
	return (NULL);
}
