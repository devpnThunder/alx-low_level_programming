#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: This is an Integer
 *
 * Return: Returns 1 (if c is uppercase) or 0 otherwise
 */

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
