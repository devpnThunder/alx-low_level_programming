#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: is an integer absolute value
 *
 * Return: Absolute value
 */

int _abs(int n)
{
    if (n >= 0)
    {
        return (n);
    }
    else
    {
        return (n * -1);
    }
    _putchar('\n');
}
