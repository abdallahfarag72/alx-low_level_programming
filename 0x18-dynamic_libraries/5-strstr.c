#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: pointer to string
 * @needle: pointer to other string
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[j + i])
			{
				break;
			}
			if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (0);
}
