#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: str to copy to ths new head
 * Return: Address of new address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *cur_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (cur_node->next != NULL)
		cur_node = cur_node->next;
	cur_node->next = new_node;
	new_node->next = NULL;
	return (*head);
}
