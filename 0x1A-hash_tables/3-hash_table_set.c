#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: hash table
 * @key: is the key and it can not be an empty string
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	int i;
	char *value_cpy;
	hash_node_t *hash_node;

	value_cpy = malloc(strlen(value));

	if (!value_cpy)
		return (0);

	for (i = 0; value[i]; i++)
		value_cpy[i] = value[i];
	value_cpy[i] = '\0';

	index = key_index((unsigned char *) value, 1024);
	if (!(strlen(key)))
		return (0);

	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (0);
	hash_node->key = (char *)key;
	hash_node->value = value_cpy;
	if (!(ht->array[index]))
	{
		ht->array[index] = hash_node;
		hash_node->next = NULL;
		return (1);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node->next;
	return (1);
}
