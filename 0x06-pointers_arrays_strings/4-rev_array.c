#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to first array element
 * @n: size of array
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, length, temp;

	i = 0;
	length = n - 1;
	while (i < length)
	{
		temp = a[i];
		a[i] = a[length];
		a[length] = temp;
		i++;
		length--;
	}
	return (0);
}
