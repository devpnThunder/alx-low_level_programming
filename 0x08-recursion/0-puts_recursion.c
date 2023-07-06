#include "main.h"

/**
* _puts_recursion - prints a string
* @s: character string
*
* Return: string and a new line
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
