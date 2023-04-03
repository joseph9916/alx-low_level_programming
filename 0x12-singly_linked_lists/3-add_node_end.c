#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add a node to the end of a linked list
 * @head: pointer to the head of the linked list
 * @str: str to copy to ths new head
 * Return: Address of new address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	struct list_t *cur_node;

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
	cur_node = *head;
	while (cur_node != NULL)
		cur_node = cur_node->next;
	cur_node->next = new_node;
	return (*head);
}
