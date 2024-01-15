#include "main.h"

/**
 * _islower - Checks the lowercase character
 *
 * @c: is an integer
 *
 * Return: return 1 (if lowercase) return 0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
