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
	argc--;
	while (argc--)
	{
		j = 0;
		while (argv[i][j])
		{
			_putchar(argv[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
