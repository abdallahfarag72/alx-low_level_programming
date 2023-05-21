#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to list
 * @idx: index at which node should be inserted
 * @n: data of new node
 *
 * Return: sum of all nodes, 0 if list is empty
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *p;

	p = *h;
	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
	}
	if (p->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = p->next;
	new_node->prev = p;
	p->next->prev = new_node;
	p->next = new_node;

	return (new_node);
}
