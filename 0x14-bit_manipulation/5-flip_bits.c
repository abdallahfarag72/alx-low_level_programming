#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: original decimal number
 * @m: desired decimal number
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int flipped;

	count = 0;
	flipped = n ^ m;

	while (flipped)
	{
		flipped &= (flipped - 1);
		count++;
	}
	return (count);
}
