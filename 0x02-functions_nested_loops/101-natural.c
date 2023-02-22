#include "main.h"
/**
 * print_multiples - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: void
*/
void print_multiples(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	_putchar(sum / 100000 + '0');
	_putchar((sum / 10000) % 10 + '0');
	_putchar((sum / 1000) % 10 + '0');
	_putchar((sum / 100) % 10 + '0');
	_putchar((sum / 10) % 10 + '0');
	_putchar(sum % 10 + '0');
}
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_multiples();
	return (0);
}
