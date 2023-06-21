#include <stdio.h>

/**
* main - Entry point
*
* Return: always 0 (Success)
*/
int main(void)
{
	int a, b;
	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) || (a % 5))
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
