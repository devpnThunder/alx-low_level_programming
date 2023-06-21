#include "main.h"

/**
* print_times_table - prints n times table
* @n: integer number
*
* Return: times table
*/
void print_times_table(int n)
{
	int i, j, mult;

if (n >= 0 && n <= 15)
{
	for (i = 0; i <= n; i++)
	{
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			mult = i * j;
			_putchar(44);
			_putchar(32);
			if (mult <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(mult + 48);
			}
			else if (mult <= 99)
			{
				_putchar(32);
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
			else
			{
				_putchar(((mult / 100) % 10) + 48);
				_putchar(((mult / 10) % 10) + 48);
				_putchar((mult % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
}
