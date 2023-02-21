#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: void
*/
void print_alphabet(void)
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
