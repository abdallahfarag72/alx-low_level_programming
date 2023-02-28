#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to first char
 * Return: void
*/
void rev_string(char *s)
{
	int length, i;
	char temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;

	}
	length--;

	i = 0;
	while (i < length)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		length--;
	}
}
