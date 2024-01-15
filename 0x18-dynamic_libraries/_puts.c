#include "main.h"

/**
 * _puts - function that prints a strings
 * @str: a string character
 *
 * Return: nothing to return
 */

void _puts(char *s)
{
	int i = 0;

	while (s >= 0)
	{
		if (s[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[i]);
		s++;
	}
}
