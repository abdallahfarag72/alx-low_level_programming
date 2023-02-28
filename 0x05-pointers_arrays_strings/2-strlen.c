#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: pointer to first char
 * Return: int length
*/
int _strlen(char *s)
{
	char *i, length;

	length = 0;
	for (i = s; *i != '\0'; i++)
	{
		length++;
	}
	return (length);
}
