#include "main.h"
/**
 * _isalpha - checks if int c is an alphabetical character
 * @c: integer the represents the char in ascii
 * Return: 1 if c is alpha, 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
