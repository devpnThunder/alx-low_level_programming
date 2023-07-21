#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - function that prints strings
* @separator: string printed between the lines
* @n: constant integer arguments
*
* Return: the strings to be printed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nill)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
