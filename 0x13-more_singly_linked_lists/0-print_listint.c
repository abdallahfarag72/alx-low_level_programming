#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t count;

	ptr = h;
	count = 0;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
