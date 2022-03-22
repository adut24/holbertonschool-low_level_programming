#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - print a linked list
 * @head: linked list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	/*add_t addresses = {head, NULL}, *ptr;*/
	size_t nb = 0;

	if (!head)
		exit(98);

	while (head)
	{
		head = head->next;
		nb++;
	}
	return (nb);
}
