#include "main.h"
/**
 * main - The start of the program
 * Return: The integer 0
*/
int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		_putchar(x);
		x = x + 1;
	}
	_putchar('\n');
	return (0);
}
