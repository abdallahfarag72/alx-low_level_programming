#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array of elements
 * @size: size of array
 * @action: callback function to call on each element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
