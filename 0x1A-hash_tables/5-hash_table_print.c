#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *key_node;

	if (!ht)
	{
		printf("{}\n");
		return;
	}
	if (!ht->array)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (j)
				printf(", ");
			j = 1;
			key_node = ht->array[i];
			while (key_node)
			{
				printf("'%s': '%s'", key_node->key, key_node->value);
				key_node = key_node->next;
			}
		}
	}
	printf("}\n");
}
