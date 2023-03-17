#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: number to start from
 * @max: number to reach
 * Return: a pointer to the allocated array.
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		*(arr + j) = i;
		j++;
	}
	return (arr);
	free(arr);
}
