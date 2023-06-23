#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer number
	*
	* Return: no return
 */

void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (k = 1; k <= j; k++)
			{
				if (k == j)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
