#include "lists.h"
#include <stdio.h>

/**
 * add_address - add the address of the node of the linked list
 * @list: list of addresses
 * @new: address to add
 * Return: NULL or pointer to the new node
 */
add_t *add_address(add_t **list, const listint_t *new)
{
	add_t *node = NULL;

	if (!*list)
	{
		node = malloc(sizeof(add_t));
		if (!node)
			return (NULL);
		node->a = new;
		node->next = NULL;
		(*list) = node;
		return (node);
	}
	if (new == (*list)->a)
		return (NULL);
	while ((*list)->next)
	{
		(*list) = (*list)->next;
		if (new == (*list)->a)
			return (NULL);
	}
	node = malloc(sizeof(add_t));
	if (!node)
		return (NULL);
	(*list)->next = node;
	node->a = new;
	node->next = NULL;
	return (node);
}

void free_list(add_t **list)
{
	add_t *tmp = NULL;

	while((*list))
	{
		tmp = (*list)->next;
		if ((*list)->a)
			free((listint_t *)(*list)->a);
		free(*list);
		*list = tmp;
	}
}

/**
 * print_listint_safe - print a linked list
 * @head: linked list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	add_t *ptr = NULL, *tmp = NULL;
	size_t nb = 0;

	if (!head)
		exit(98);

	add_address(&ptr, head);
	tmp = ptr;
	head = head->next;
	while (head)
	{
		ptr = tmp;
		if (!add_address(&ptr, head))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nb++;
	}
	free_list(&ptr);
	return (nb);
}
