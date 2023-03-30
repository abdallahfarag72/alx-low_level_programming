#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t node_count;

	node_count = 0;
	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
