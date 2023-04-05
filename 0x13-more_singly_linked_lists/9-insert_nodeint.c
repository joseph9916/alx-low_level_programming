#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - insert the node at the specific index
 * @head: Pointer to head node
 * @idx: Index of linked list
 * @n: value of new node
 * Return: node or Null if not found
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curnode = *head, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (i != idx - 1 && curnode->next != NULL)
	{
		curnode = curnode->next;
		i++;
	}
	if (i != idx - 1)
		return (NULL);
	newnode->next = curnode->next;
	curnode->next = newnode;
	return (newnode);
}
