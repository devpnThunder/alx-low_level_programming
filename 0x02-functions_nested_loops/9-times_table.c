#include "main.h"

/**
* main - entry point
*
* Return: always 0
*/
void times_tables(void)
{
	int a, b, m;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			m = a * b;
			if (b != 57)
			{
				_putchar(m);
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar(m);
			}
		}
		_putchar('\n');
	}
}
