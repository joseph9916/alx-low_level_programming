#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_dnodeint_at_index -  returns the nth node of a dlistint_t linked
 * list.
 * @h: head of list
 * @idx: is the index of the node, starting from 0
 * @n: number value to insert
 * Return: node does not exist, else return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curnode = *h, *new_node, *prevnode;
	unsigned int i = 0;

	if (!idx)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (curnode)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->prev = prevnode;
			prevnode->next = new_node;
			new_node->next = curnode;
			curnode->prev = new_node;
			new_node->n = n;
			return (new_node);
		}
		prevnode = curnode;
		curnode = curnode->next;
		i++;
	}
	if (i == idx)
	{
		new_node = malloc(sizeof(dlistint_t));
		prevnode->next = new_node;
		new_node->prev = prevnode;
		new_node->next = NULL;
		return (new_node);
	}
	return (NULL);
}
