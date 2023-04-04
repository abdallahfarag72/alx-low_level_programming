#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to head
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
