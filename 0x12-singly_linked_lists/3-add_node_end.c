#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last_node;
	int length;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = _strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	length = 0;
	while (str[length])
	{
		length++;
	}
	temp->len = length;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		last_node = *head;
		while (last_node->next)
		{
			last_node = last_node->next;
		}
		last_node->next = temp;
	}
	return (temp);
}
