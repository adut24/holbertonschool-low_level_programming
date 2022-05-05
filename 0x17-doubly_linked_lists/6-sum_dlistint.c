#include "lists.h"

/**
 * sum_dlistint - add the number of the node of the linked list
 * @head: linked list
 * Return: sum of all numbers or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
