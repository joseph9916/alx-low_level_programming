#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - a function that prints a hash table.
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *key_node, *nextnode;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		key_node = ht->array[i];
		while (key_node)
		{
			nextnode = key_node->next;
			free(key_node->key);
			free(key_node->value);
			free(key_node);
			key_node = nextnode;
		}
	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}
