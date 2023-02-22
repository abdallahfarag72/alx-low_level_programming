#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: number of tables
 * Return: void
*/
void print_times_table(int n)
{
	int i, j, res;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			_putchar(' ');
			if (res <= 99)
			{
				_putchar(' ');
			}
			if (res < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			else
			{
				if (res > 99)
				{
					_putchar(res / 100 + '0');
				}
				_putchar((res / 10) % 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
