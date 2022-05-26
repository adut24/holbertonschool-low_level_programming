#include "hash_tables.h"

/**
 * hash_table_get - retrieve the value of a key
 * @ht: hash table
 * @key: key to retrieve the value
 * Return: pointer to the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *cur;

	if (!ht)
		return (NULL);
	index = key_index((unsigned const char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	cur = ht->array[index];
	while (cur)
	{
		if (!strcmp(key, cur->key))
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
