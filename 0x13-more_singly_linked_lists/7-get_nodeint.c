#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - return the node at the specific index
 * @head: Pointer to head node
 * @index: Index of linked list
 * Return: node or Null if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curnode = head;
	unsigned int i = 0;

	while (i != index && curnode != NULL)
	{
		curnode = curnode->next;
		i++;
	}
	return (curnode);
}
