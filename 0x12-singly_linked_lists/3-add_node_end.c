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

/**
 * add_node_end - add a node at the end of the linked list
 * @head: first node
 * @str: string
 * Return: pointer to the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *lastNode;

	if (!head)
		return (NULL);
	if (!*head)
		return (add_node(head, str));
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
	lastNode->next = node;
	return (node);
}
