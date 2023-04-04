#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list. sets head to NULL.
 * @head: pointer to head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL)
	{
		return;
	}
	ptr = *head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
	*head = NULL;
}
