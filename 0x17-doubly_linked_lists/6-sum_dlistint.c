#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: head of linked list
 * Return: 0 or sum
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *curnode = head;

	while (curnode)
	{
		result += curnode->n;
		curnode = curnode->next;
	}
	return (result);
}
