#include "main.h"

/**
* prime_number - function that returns a prime number
* @n: first integer character
* @m: second integer character
*
* Return: return 1 if prime otherwise 0
*/
int prime_number(int n, int m)
{
	if (n % m == 0)
	{
		if (n == m)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (prime_number(n, m + 1));
}

/**
* is_prime_number - function that check if a number is a prime number
* @n: integer character
*
* Return: return 1 if n is prime number otherwise 0
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
	{
		return (0);
	}
	return (prime_number(n, 2));
}
