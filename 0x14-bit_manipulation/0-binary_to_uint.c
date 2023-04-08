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
	unsigned int res, len, pos, i;

	if (b == NULL)
	{
		return (0);
	}
	len = res = 0;
	pos = 1;
	while (b[len])
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		pos *= 2;
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			res += pos;
		}
		pos /= 2;
	}
	return (res);
}
