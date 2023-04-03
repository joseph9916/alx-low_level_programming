#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - Returns no of elements in a linked list
 * @h: pointer to the struture list
 * Return: length of linked list
 */

size_t listint_len(const listint_t *h)
{
	long int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
