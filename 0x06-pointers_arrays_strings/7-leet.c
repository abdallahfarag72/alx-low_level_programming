#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: pointer to string
 * Return: encoded string
*/
char *leet(char *s)
{
	int i, j;

	char chars[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char symbols[10] = { '4', '4', '3', '3', '0', '0', '7', '7', '1', '1' };

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == chars[j])
			{
				s[i] = symbols[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
