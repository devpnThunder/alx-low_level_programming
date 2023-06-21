#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: always 0
*/
void times_table(void)
{
	int a, b, m;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			if (b != 9)
			{
				printf("%d, ", m);
			}
			else
			{
				printf("%d", m);
			}
		}
		printf("\n");
	}
}
