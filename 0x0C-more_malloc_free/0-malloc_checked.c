#include "main.h"

/**
* malloc_checked - allocates memory
* @b: amount of bytes
*
* Return: pointer to the allocated memory with exit 98
*/
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
