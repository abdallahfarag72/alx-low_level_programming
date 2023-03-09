#include "main.h"
/**
 * check_sqrt -  returns the natural square root of a number.
 * @x: number to be checked as the square root
 * @n: number to be calculated
 * Return: square root of n
*/
int check_sqrt(int x, int n)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (check_sqrt(x + 1, n));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number to be calculated
 * Return: square root of n
*/
int _sqrt_recursion(int n)
{
	return (check_sqrt(1, n));
}
