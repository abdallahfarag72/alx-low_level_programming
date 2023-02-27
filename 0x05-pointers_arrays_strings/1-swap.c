#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first pointer to int
 * @b: second pointer to int
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
