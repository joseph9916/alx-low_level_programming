#include "lists.h"
#include <stdio.h>
#include <stddef.h>


listint_t *swap_values(listint_t *prev, listint_t *curnode, listint_t *nxt)
{
	printf("ok\n");
	nxt = curnode->next;
	curnode->next = prev;
	prev = curnode;
	curnode = nxt;
	return (prev);
}

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the head of the linked list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curnode, *prevnode;

	if (*head == NULL)
		return (NULL);
	curnode = *head;
	prevnode = NULL;

	while (curnode != NULL)
	{
		/**nextnode = curnode->next;
		curnode->next = prevnode;
		prevnode = curnode;
		curnode = nextnode;
		*/
		prevnode = swap_values(prevnode, curnode, curnode->next);
		curnode = prevnode->next;
	}
	*head = prevnode;
	return (*head);
}
