#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: head of list
 * @index: is the index of the node, starting from 0
 * Return: node does not exist, else return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curnode = head;
	unsigned int i = 0;

	while (curnode)
	{
		if (i == index)
			return (curnode);
		curnode = curnode->next;
		i++;
	}
	return (NULL);
}
