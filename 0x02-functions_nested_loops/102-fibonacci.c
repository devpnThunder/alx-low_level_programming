#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;
	long int a, b, f;

	a = 1;
	b = 2;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 48; c++)
	{
		f = a + b;
		printf(", %ld", f);
		a = b;
		b = f;
	}
	printf("\n");
	return (0);
}
