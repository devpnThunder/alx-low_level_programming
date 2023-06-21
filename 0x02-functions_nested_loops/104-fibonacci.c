#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c, i, j;
	long int a, b, f, f2, n1, n2;

	a = 1;
	b = 2;
	i =  j = 1;
	printf("%ld, %ld", a, b);
	for (c = 0; c < 96; c++)
	{
		if (i)
		{
			f = a + b;
			printf(", %ld", f);
			a = b;
			b = f;
		}
		else
		{
			if (j)
			{
				n1 = a % 1000000000;
				n2 = b % 1000000000;
				n1 = a / 1000000000;
				n2 = b / 1000000000;
				j = 0;
			}
			f2 = (n1 + n2);
			f =  a+ b + (f2 / 1000000000);
			printf(", %ld", f);
			printf("%ld", f2 % 1000000000);
			a = b;
			n1 = n2;
			b = f;
			n2 = (f2 % 1000000000);
		}
		if (((a + b) < 0) && i == 1)
			i = 0;
	}
	printf("\n");
	return (0);
}
