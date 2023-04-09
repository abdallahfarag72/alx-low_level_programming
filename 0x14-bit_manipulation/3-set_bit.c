#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to decimal number
 * @index: index of bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (*n & (1 << index))
	{
		return (-1);
	}
	else
	{
		*n = *n | (1 << index);
		return (1);
	}
}
