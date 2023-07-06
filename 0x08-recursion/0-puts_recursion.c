#include "main.h"

/**
* _puts_recursion - prints a string
* @s: character string
*
* Return: string and a new line
*/
void _puts_recursion(char *s)
{
	int i, j;

	i = 1;
	j = 1;

	while (i < '*(s + 1)')
	{
		j = j + i;
		i++;
	}
	_putchar(i);
	_putchar('\n');
}
