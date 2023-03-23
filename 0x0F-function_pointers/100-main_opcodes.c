#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num_bytes, i;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", opcodes[i]);
	}

	printf("\n");

	return (0);
}
