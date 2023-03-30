#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to list to be printed
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *node;
	size_t node_count;

	node = malloc(sizeof(list_t));
	node = h;
	node_count = 0;
	while (node != NULL)
	{
		if (node->str)
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		node_count++;
		node = node->next;
	}
	return (node_count);
}
