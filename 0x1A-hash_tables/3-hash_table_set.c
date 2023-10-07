#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_key_node - creates a node in hash table
 * @key: key to find
 * @value: value
 * Return: Address to key_node
 */

hash_node_t *create_key_node(const char *key, const char *value)
{
	hash_node_t *node;
	char *val_cpy, *key_cpy;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	val_cpy = malloc(strlen(value) + 1);
	if (!val_cpy)
	{
		free(node);
		return (NULL);
	}
	key_cpy = malloc(strlen(key) + 1);
	if (!key_cpy)
	{
		free(node);
		free(val_cpy);
		return (NULL);
	}
	strcpy(val_cpy, value);
	strcpy(key_cpy, key);
	node->key = key_cpy;
	node->value = val_cpy;
	return (node);
}

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @key: key of the value
 * @value: value
 * Return: 1 if succussful 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *val_cpy;
	hash_node_t *key_node, *prev_node;

	if (!ht)
		return (0);
	if (!strlen(key))
		return (0);
	index =  key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		key_node = create_key_node(key, value);
		if (!key_node)
			return (0);
		ht->array[index] = key_node;
		return (1);
	}
	key_node = ht->array[index];
	while (key_node)
	{
		if (!strcmp((key), key_node->key))
		{
			val_cpy = malloc(strlen(value) + 1);
			if (!val_cpy)
				return (0);
			strcpy(val_cpy, value);
			free(key_node->value);
			key_node->value = val_cpy;
			return (1);
		}
		prev_node = key_node;
		key_node = key_node->next;
	}
	key_node = create_key_node(key, value);
	if (!key_node)
		return (0);
	key_node->next = ht->array[index];
	ht->array[index] = keynode;

	return (1);
}
