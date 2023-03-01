#include "main.h"
/**
 * _strncpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: pointer to buffer
 * @src: pointer to string to be copied
 * @n: size of bytes from src
 * Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
