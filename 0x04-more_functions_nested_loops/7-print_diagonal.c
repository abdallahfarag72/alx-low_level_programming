#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n: size of line
 * Return: void
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n ; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
