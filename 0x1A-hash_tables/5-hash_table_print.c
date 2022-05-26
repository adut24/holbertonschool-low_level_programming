#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			break;
		}
	}
	printf("{");
	if (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->next;
		while (node)
		{
			printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		i++;
		for (; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
