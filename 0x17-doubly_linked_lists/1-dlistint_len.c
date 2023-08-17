#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * dlistint_len - gets the size of a doubly linked list
 * @h: pointer to the struture list
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	long int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
