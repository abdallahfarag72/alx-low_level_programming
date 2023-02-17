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

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
