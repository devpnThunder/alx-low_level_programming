#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 49;
	int a = 1, b = 2, c, i;

	printf("%d, %d", a, b);
	for (i = 1; i < n; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
