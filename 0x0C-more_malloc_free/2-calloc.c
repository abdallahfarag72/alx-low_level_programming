#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	p = malloc(nmemb * size);
	if (p == NULL || nmemb == 0 || size == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
	free(p);
}
