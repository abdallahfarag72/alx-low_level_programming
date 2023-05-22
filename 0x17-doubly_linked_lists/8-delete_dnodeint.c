#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a dlistint_t linked list.
 * @head: pointer to list
 * @index: index at which node should be removed
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *p;

	p = *head;
	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (p == NULL)
			return (-1);
		p = p->next;
	}

	p->prev->next = p->next;
	if (p->next != NULL)
		p->next->prev = p->prev;

	free(p);
	return (1);
}
