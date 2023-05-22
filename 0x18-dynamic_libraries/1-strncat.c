#include "main.h"
/**
 * _strncat - convert a string to an integer.
 * @dest: pointer to first string
 * @src: pointer to second string
 * @n: size of bytes used from src
 * Return: pointer to dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	i = 0;
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
