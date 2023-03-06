#include "main.h"
/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to buffer
 * @b: value to be copied
 * @n: bytes to be filled
 * Return: encoded string
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i, j;

	i = 0;
	while (i < n || s[i])
	{
		s[i] = b;
		i++;
	}
	return (s);
}
