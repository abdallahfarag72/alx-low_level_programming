#include "main.h"
/**
 * print_last_digit - prints the last digit of a number and returns it.
 * @n: integer from which last digit will be extracted
 * Return: last digit
*/
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = n * -1;
	}

	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
