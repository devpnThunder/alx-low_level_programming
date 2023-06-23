#include "main.h"

/**
* more_numbers - prints 10 times numbers from 0 to 14
*
* Return: Always 0 unless otherwise
*/
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar('\n');
}
