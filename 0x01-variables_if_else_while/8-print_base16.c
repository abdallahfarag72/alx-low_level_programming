#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The start of the program
 * Return: The integer 0
*/
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
