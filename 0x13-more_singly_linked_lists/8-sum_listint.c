#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - Adds all the values in a linked list
 * @head: head of the linked list
 * Return: Sum result or 0 if empty
 */

int sum_listint(listint_t *head)
{
	listint_t *curnode = head;
	int sum = 0;

	while (curnode != NULL)
	{
		sum += curnode->n;
		curnode = curnode->next;
	}
	return (sum);
}
