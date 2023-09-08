#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table
 * @key: the key we are looking for
 * Return: the value associated with the element,
 * or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *key_node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *) key, 1024);
	key_node = ht->array[index];
	if (!key_node)
		return (NULL);

	while (key_node)
	{
		printf("%s", key_node->value);
		if (!(strcmp(key_node->key, key)))
			return (key_node->value);
		key_node = key_node->next;
	}
	return (NULL);
}
