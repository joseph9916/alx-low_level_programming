#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to find
 * Return: value found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *key_node;

	if (!ht || !ht->array)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		return (NULL);
	key_node = ht->array[index];
	while (key_node)
	{
		if (!strcmp(key, key_node->key))
			return (key_node->value);
		key_node = key_node->next;
	}
	return (NULL);
}
