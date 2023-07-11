#include "main.h"

/**
* create_array - function that creates an array of chars
* @size: unsigned integer character
* @c: a string character
*
* Return: NULL if size is 0 or it fails otherwise pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *val;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	val = malloc(sizeof(c) * size);

	if (val == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		val[i] = c;
	}
	return (val);
}
