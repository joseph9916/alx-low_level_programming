#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head of the node and returns its value
 * @head: The pointer that points to the head node
 * Return: the data stored in the node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
		return (0);
	n = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;
	return (n);
}
