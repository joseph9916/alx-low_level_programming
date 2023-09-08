#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Write a function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table or
 * If something went wrong, your function should return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;

	array = malloc(sizeof(hash_node_t) * size);
	table = malloc(sizeof(hash_table_t));
	if (!(table && array))
		return (NULL);
	table->array = array;
	table->size = size;
	return (table);
}
