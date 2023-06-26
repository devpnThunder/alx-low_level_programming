#include "main.h"

/**
* reset_to_98 - takes a pointer and updates the value it points to
* @*n: pointer to an integer
*
* Return: Always 0 unless otherwise
*/
void reset_to_98(int *n)
{
	int *p;

	p = &*n;
	*p = 98;
}
