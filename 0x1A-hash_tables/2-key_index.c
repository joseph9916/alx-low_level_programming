#include "hash_tables.h"

/**
 * key_index - key index of hash table
 * @key: key of hash table
 * @size: size of array
 * Return: key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;
	return (key_index);
}
