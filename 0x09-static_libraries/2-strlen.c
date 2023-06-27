#include "main.h"

/**
* _strlen - function that returns the length of a string
* @s: string character
*
* Return: the length of the string
*/
int _strlen(char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}
	return (j);
}
