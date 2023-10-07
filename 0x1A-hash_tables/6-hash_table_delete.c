#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table to delete
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *keynode, *prevnode;
	unsigned long int i;

	if (!ht)
		return;
	if (!ht->array)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		keynode = ht->array[i];
		while (keynode)
		{
			prevnode = keynode;
			keynode = keynode->next;
			free(prevnode->key);
			free(prevnode->value);
			free(prevnode);
		}
	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}
