#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * list_len - Returns no of elements in a linked list
 * @h: pointer to the struture list
 * Return: length of linked list
 */

size_t list_len(const list_t *h)
{
	long int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
