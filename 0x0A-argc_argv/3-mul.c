#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string
 * Return: int converted
*/
int _atoi(char *s)
{
	int i, sign, num;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] != '\0')
	{
		/* Check if number is over */
		if (num != 0 && !(s[i] >= 48 && s[i] <= 57))
		{
			break;
		}
		/* Change sign */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if ((s[i] >= 48 && s[i] <= 57))
		{
			num = num * 10 + (s[i] - '0');
		}
		i++;
	}
	return (num * sign);
}
/**
 * print_int - converts an integer to a string and
 * prints it using putchar
 * @num: number to be converted
 * Return: void
 */
void print_int(int num)
{
	int i, sign;
	char temp, str[20];

	i = 0;
	sign = 1;
	temp;
	if (num < 0)
	{
		sign = -1;
		num = -num;
	}
	do {
		str[i] = (num % 10) + '0';
		i++;
		num = num / 10;
	} while (num > 0);
	if (sign == -1)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	for (int j = 0; j < i / 2; j++)
	{
		temp = str[j];
		str[j] = str[i - j - 1];
		str[i - j - 1] = temp;
	}
	for (int k = 0; k < i; k++)
	{
		_putchar(str[k]);
	}
}
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int first, second, res;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	first = _atoi(argv[1]);
	second = _atoi(argv[2]);
	res = first * second;
	print_int(res);
	_putchar('\n');
	return (0);
}
