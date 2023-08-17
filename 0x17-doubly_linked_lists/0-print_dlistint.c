#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all elements in a doubly linked list
 * @h: pointer to the struture list
 * Return: length of linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	long int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
