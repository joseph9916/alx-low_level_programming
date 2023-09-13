#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *key_node;
	int j = 0;

	if (!ht)
		printf("{}");
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		key_node = ht->array[i];
		if (key_node)
		{
			if (j)
				printf(", ");
			printf("'%s': '%s'", key_node->key, key_node->value);
			j = 1;
			while (key_node->next)
			{
				printf(", ");
				key_node = key_node->next;
				printf("'%s': '%s'", key_node->key, key_node->value);
			}
		}
	}
	puts("}");
}
