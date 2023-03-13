#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string
 * given as a parameter.
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	unsigned int i, size;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	size = 0;
	for (i = 0; str[i]; i++)
	{
		size++;
	}
	dup = malloc(++size);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
	free(dup);
}
