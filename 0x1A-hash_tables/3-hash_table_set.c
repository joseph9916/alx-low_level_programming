#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_hash_node - creates a hash node
 * @key: key of the node
 * @value: value of the node
 * Return: hash_node created
 */

hash_node_t *create_hash_node(char *key, char *value)
{
	hash_node_t *node;
	char *key_cpy;

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(value);
		return (NULL);
	}
	key_cpy = malloc(strlen(key) + 1);
	strcpy(key_cpy, key);
	node->key = key_cpy;
	node->value = value;
	return (node);
}

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
	char *value_cpy;
	hash_node_t *new_node, *keynode;

	value_cpy = malloc(strlen(value) + 1);
	if (!value_cpy)
		return (0);
	strcpy(value_cpy, value);
	index = key_index((unsigned char *) key, ht->size);
	if (!(strlen(key)))
		return (0);

	if (!ht->array[index])
	{
		new_node = create_hash_node((char *) key, value_cpy);
		if (!new_node)
			return (0);
		ht->array[index] = new_node;
		ht->array[index]->next = NULL;
		return (1);
	}
	keynode = ht->array[index];
	while (keynode->next)
	{
		if (!strcmp(keynode->key, key))
		{
			free(keynode->value);
			keynode->value = value_cpy;
			return (1);
		}
		keynode = keynode->next;
	}
	new_node = create_hash_node((char *) key, value_cpy);
	if (!new_node)
		return (0);
	keynode->next = new_node;
	new_node->next = NULL;

	return (1);
}
