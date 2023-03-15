#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concatenated string.
 * It returns NULL if insufficient memory was available
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, length1, length2;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = length2 = 0;
	for (i = 0; s1[i]; i++)
	{
		length1++;
	}
	for (i = 0; s2[i]; i++)
	{
		length2++;
	}
	s3 = malloc(length1 + length2 + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1 + length2; i++)
	{
		if (i < length1)
		{
			s3[i] = s1[i];
		}
		else
		{
			s3[i] = s2[i - length1];
		}
	}
	s3[length1 + length2] = '\0';
	return (s3);
	free(s3);
}
