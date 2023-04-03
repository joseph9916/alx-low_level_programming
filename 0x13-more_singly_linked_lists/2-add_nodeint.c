#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - add a node to the begininng of a linked list
 * @head: pointer to the head of the linked list
 * @n: data of the new node
 * Return: Address of new address
 */

list_t *add_nodeint(list_t **head, const int n)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
