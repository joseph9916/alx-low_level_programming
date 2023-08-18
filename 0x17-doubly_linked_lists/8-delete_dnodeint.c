#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_dnodeint_at_index - delete the node at the specific index
 * @head: Pointer to head node
 * @index: Index of linked list
 * Return: 1 or -1 if not failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curnode = *head, *prevnode = *head;
	unsigned int i = 0;

	while (i != index && curnode != NULL)
	{
		prevnode = curnode;
		curnode = curnode->next;
		i++;
	}
	if (i != index || curnode == NULL)
		return (-1);
	if (curnode == *head)
	{
		*head = curnode->next;
		if (*head)
			(*head)->prev = NULL;
		free(prevnode);
	}
	else
	{
		prevnode->next = curnode->next;
		if (curnode->next)
			curnode->next->prev = prevnode;
		free(curnode);
	}
	return (1);
}
