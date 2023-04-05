#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to head
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *ptr;

	if (*head == NULL)
	{
		return (-1);
	}
	ptr = *head;
	node = NULL;
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (ptr == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
	}
	node = ptr->next;
	ptr->next = node->next;
	free(node);
	return (1);
}
