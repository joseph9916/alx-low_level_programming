#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listinz - free the memory allocation of linked list
 * @head: pointer to the linked list
 */

void free_listint(listint_t *head)
{
listint_t *curnode = head, *temp;

	if (head == NULL)
	{
		free(head);
	}
	else
	{
		while (curnode != NULL)
		{
			temp = curnode;
			curnode = curnode->next;
			free(temp);
		}
		free(curnode);
	}
}
