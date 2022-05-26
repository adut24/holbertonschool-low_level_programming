#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: size of the hash table to create
 * Return: NULL for failure or a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = NULL;

	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
		return (NULL);
	new_hash->size = size;
	new_hash->array = malloc(size * sizeof(hash_node_t *));
	if (!new_hash->array)
		return (NULL);
	return (new_hash);
}
