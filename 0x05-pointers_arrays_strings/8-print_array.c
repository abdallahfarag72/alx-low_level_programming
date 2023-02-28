#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to be printed
 *
 * Description: Numbers must be separated by
 * comma, followed by a space
 * The numbers should be displayed in the
 * same order as they are stored in the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++) /* loop through the array */
	{
		printf("%d", a[i]); /* print the current element */
		if (i < n - 1) /* if not the last element */
		{
			printf(", "); /* print a comma and a space */
		}
	}
	printf("\n"); /* print a new line */
}
