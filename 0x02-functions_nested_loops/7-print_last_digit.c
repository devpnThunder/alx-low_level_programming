#include "main.h"

/**
* print_last_digit - prints last digit of a number
* @i: last digit
*
* Return: always 0 unless otherwise stated
*/
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
