#include "main.h"
/**
 * check_prime -  returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number to be calculated
 * @i: number to be checked as a prime
 * Return: true if prime, false otherwise
*/
int check_prime(int n, int i)
{
	if (n == 1)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is
 * a prime number, otherwise return 0.
 * @n: number to be calculated
 * Return: true if prime, false otherwise
*/
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
