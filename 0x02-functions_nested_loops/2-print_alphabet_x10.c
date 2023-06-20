#include "main.h"

/**
* print_alphabet_x10 - prints alphabets x10
*
* Return: nothing (0)
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	i++;
	}
	_putchar('\n');
}
