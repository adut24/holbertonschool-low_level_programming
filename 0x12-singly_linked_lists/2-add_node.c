#include "lists.h"
#include <string.h>

/**
 * _strlen - calculate the length of a string
 * @s: string
 * Return: length
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	for (; *s; s++)
		len++;
	return (len);
}

/**
 * add_node - add a new node at the beginning
 * @head: head of the linked list
 * @str: string to duplicate
 * Return: pointer on the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
