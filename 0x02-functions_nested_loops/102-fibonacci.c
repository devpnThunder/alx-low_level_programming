#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 50;
	int a = 1, b = 2, c, i;

	printf("%d, %d, ", a, b);
	for (i = 2; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (i == (n - 1))
		{
			printf("%d", c);
		}
		else
		{
			printf("%d, ", c);
		}
	}
	return (0);
}
