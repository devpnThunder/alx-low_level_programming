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

	if (size = 0)
	{
		return (NULL);
	}
	else
	{
		val = malloc(sizeof(c));
		val[0] = c;
		return (val);
	}
}
