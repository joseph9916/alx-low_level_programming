#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * free_listint2 - free the memory allocation of linked list
 * @head: pointer to the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *curnode = *head, *temp;

	if (*head == NULL)
		printf("Freed!");
	while (curnode != NULL)
	{
		temp = curnode;
		curnode = curnode->next;
		free(temp);
	}
	free(curnode);
	*head = NULL;
}
