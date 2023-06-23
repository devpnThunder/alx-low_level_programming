#include "main.h"

/**
 * print_square - prints square
 * @size: interger number
	*
	* Return: no return
 */

void print_square(int size)
{
	int j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= size; j++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
