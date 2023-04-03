#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - free the memory allocation of linked list
 * @head: pointer to the linked list
 */

void free_list(list_t *head)
{
	list_t *curnode = head, *temp;

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
			free(temp->str);
			free(temp);
		}
		free(curnode);
	}
}
