#include "main.h"
/**
 * _strcat - convert a string to an integer.
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: pointer to dest string
*/
char *_strcat(char *dest, char *src)
{
	int i, length;

	i = 0;
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	while (src[i] != '\0')
	{
		dest[length] = src[i];
		length++;
		i++;
	}
	dest[length] = '\0';
	return (dest);
}
