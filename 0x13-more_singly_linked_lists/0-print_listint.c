#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all elements in a linked list
 * @h: pointer to the struture list
 * Return: Number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	long int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
