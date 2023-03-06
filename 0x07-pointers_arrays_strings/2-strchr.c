#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: pointer to string
 * @c: character to be found
 * Return: pointer to c if found, NULL if not
*/
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
	{
		s++;
	}
	return ((*s == c) ? s : 0);
}
