#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes from s2
 * Return: a pointer to concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	s3 = malloc(length1 + n + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1 + n; i++)
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
	s3[length1 + n] = '\0';
	return (s3);
	free(s3);
}
