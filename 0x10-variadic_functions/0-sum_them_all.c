#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: integer character
*
* Return: 0 if n == 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
}
