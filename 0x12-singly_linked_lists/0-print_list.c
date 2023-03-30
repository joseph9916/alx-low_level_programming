#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all elements in a linked list
 * @h: pointer to the struture list
 * Return: length of linked list
 */

size_t print_list(const list_t *h)
{
	long int len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
