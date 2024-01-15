#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: character variable
 * @c: character variable
 *
 * Return: a pointer to the first occurence of the character c
 * in the string s or null is character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; *(s + j) != '\0'; j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	if (*(s + j) == c)
	{
		return (s + j);
	}
	return ('\0');
}
