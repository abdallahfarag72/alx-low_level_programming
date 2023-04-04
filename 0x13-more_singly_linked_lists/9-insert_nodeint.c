#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head
 * @idx: index in which new node is inserted
 * @n: new data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *previous_node, *ptr;

	if (*head == NULL)
	{
		return (NULL);
	}
	ptr = *head;
	previous_node = NULL;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	for (i = 0; i < idx; i++)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		if (i == idx - 1)
		{
			previous_node = ptr;
		}
		ptr = ptr->next;
	}
	new_node->next = ptr;
	if (idx == 0)
	{
		*head = new_node;
	}
	else
	{
		previous_node->next = new_node;
	}
	return (new_node);
}
