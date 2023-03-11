#include "main.h"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i, j;

	i = 1;
	j = 0;
	argc--;
	while (argc--)
	{
		while (argv[i][j])
		{
			_putchar(argv[0][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
