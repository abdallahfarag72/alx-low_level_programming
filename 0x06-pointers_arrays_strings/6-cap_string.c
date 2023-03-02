#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: pointer to string
 * Return: pointer to uppercase string
*/
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 97 && s[i] <= 122)
			&& (i == 0 || s[i - 1] == '.' || s[i - 1] == ' '
			|| s[i - 1] == 9 || s[i - 1] == ',' || s[i - 1] == '"' ||
			s[i - 1] == '\n' || s[i - 1] == ';' || s[i - 1] == '?' ||
			s[i - 1] == '!' || s[i - 1] == '(' || s[i - 1] == ')' ||
			s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
