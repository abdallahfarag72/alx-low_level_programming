#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The start of the program
 * Return: The integer 0
*/
int main(void)
{
	char x, y;

	x = 'a';
	y = 'A';
	while (x <= 'z')
	{
		putchar(x);
		x = x + 1;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y = y + 1;
	}
	putchar('\n');
	return (0);
}
