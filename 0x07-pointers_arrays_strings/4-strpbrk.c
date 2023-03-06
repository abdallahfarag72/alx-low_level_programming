#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to string
 * @accept: pointer to other string
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
