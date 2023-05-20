#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data
 * (n) of a dlistint_t linked list.
 * @head: pointer to list
 *
 * Return: sum of all nodes, 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
