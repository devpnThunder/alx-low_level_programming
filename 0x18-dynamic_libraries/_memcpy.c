#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: character variable
 * @src: character variable
 * @n: unsigned integer variable
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}

	return (dest);
}
