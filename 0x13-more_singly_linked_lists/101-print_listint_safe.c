#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint_safe - prints all elements in a linked list
 * @head: pointer to the struture list
 * Return: Number of nodes in the linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	long int len = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", &head, head->n);
		head = head->next;
		len++;
	}
	return (len);
}
