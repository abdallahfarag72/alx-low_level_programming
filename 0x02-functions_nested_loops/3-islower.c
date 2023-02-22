#include "main.h"
/**
 * _islower - checks if int c is a lowercase character
 * @c: integer c that the represents the char in ascii
 * Return: 1 if c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
