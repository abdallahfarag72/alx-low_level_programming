#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char x;

		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x = x + 1;
		}
		_putchar('\n');
	}
}
