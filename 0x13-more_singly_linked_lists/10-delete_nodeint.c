#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - delete the node at the specific index
 * @head: Pointer to head node
 * @index: Index of linked list
 * Return: 1 or -1 if not failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curnode = *head, *prevnode = *head;
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
		prevnode = *head;
		*head = curnode->next;
		free(prevnode);
	}
	else
	{
		prevnode->next = curnode->next;
		free(curnode);
	}
	return (1);
}
