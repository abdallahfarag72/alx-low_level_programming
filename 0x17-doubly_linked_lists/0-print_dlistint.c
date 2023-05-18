#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		exit(1);

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
