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
