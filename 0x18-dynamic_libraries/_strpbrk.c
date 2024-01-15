#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: character variable
 * @accept: character variable
 *
 * Return: a pointer to the byte in s that matched one of the bytes in accept
 * or null if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
