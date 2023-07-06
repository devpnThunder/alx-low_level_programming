#include "main.h"

/**
* _puts_recursion - prints a string
* @s: character string
*
* Return: string and a new line
*/
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
