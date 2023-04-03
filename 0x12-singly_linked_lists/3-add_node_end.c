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

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *cur_node = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (cur_node->next != NULL)
		cur_node = cur_node->next;
	cur_node->next = new_node;
	return (*head);
}
