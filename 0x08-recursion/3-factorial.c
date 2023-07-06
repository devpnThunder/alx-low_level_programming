#include "main.h"

/**
* factorial - function that return the factorial of a given number
* @n: integer number
*
* Return: factorial. Factorial of 0 is 1 if n < 0 return -1
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
