#include "hash_tables.h"

/**
 * key_index - give the index of a key
 * @key: key to find the index
 * @size: size of the array of the hash table
 * Return: the index hashed
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index %= size;
	return (index);
}
