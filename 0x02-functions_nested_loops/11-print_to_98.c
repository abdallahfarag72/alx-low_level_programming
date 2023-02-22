#include "main.h"
/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line.
 * @n: starting point
 * Return: void
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		int i;

		i = n;
		if (i < 0)
		{
			_putchar('-');
			i = i * -1;
		}
		if (i < 10)
		{
			_putchar(i + '0');
		}
		else
		{
			if (i > 99)
			{
				_putchar(i / 100 + '0');
			}
			_putchar((i / 10) % 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	_putchar('9');
	_putchar('8');
}
