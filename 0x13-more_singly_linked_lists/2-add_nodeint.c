#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - returns the number of elements
 * in a linked listint_t list.
 * @head: pointer to head
 * @n: value to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
