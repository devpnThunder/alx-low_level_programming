#include "main.h"

/**
 * _isalpha - Checks for alphabetic character lowercase or uppercase
 *
 * @c: is an integer
 *
 * Return: 1 (is c is letter) 0 (otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
