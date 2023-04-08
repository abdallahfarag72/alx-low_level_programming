#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary format string
 *
 * Return: the converted number, or 0 if it failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	if (b == NULL)
	{
		return (0);
	}
	res = 0;
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = (res << 1) + (*b - '0');
		b++;
	}
	return (res);
}
