#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer to string
 * @c: character to be found
 * Return: pointer to c if found, NULL if not
*/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
