#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: callback function to manipulate name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
