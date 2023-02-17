#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
		putchar(x);
		x = x + 1;
	}
	putchar('\n');
	return (0);
}
