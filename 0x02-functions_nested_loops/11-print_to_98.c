#include "main.h"

/**
* print_to_98 - prints all natural number to 98
* @n: natural number
*
* Return: always 0
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
		n--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
