#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long int a, b, f, af;

	a = 1;
	b = 2;
	f = af = 0;
	while (f <= 4000000)
	{
		f = a + b;
		a = b;
		b = f;
		if ((a % 2) == 0)
		{
			af += a;
		}
	}
	printf("%ld\n", af);
	return (0);
}
