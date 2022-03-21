#include "lists.h"

/**
 * sum_listint - add the number of the node of the linked list
 * @head: linked list
 * Return: sum of all numbers or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
