#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: linked list
 * Return: NULL or adress of the node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop1, *loop2;

	if (!head)
		return (NULL);
	if (head = head->next)
		return (head);
	loop1 = head;
	loop2 = head;
	while (loop1 && loop2 && loop2->next)
	{
		loop2 = loop2->next;
		loop1 = loop1->next->next;

		if (loop1 == loop2)
			return (loop1);
	}
	return (NULL);
}
