#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: number of args
 * @argv: array of args
 *
 * Return: pointer to function
 */
int main(int argc, char **argv)
{
	char *operator, *num1, *num2;
	int (*res_func)(int, int);
	int res;

	argc--;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res_func = get_op_func(operator);
	if (res_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator[0] == '/' || operator[0] == '%')
		&& num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = res_func(num1, num2);
	printf("%d\n", res);
}
