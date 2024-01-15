#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: this is an integer
 *
 * Return: 1 if a digit or 0 if otherwise
 */

int _isdigit(int c)
{
    if (c >= 48 && c <= 57)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
