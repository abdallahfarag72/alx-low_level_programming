#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: bytes of allocated memory
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
	free(p);
}
