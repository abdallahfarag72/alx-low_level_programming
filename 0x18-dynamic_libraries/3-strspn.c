#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to other string
 * Return: number of bytes in the initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
