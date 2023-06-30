#include "main.h"

/**
* *_strcat - function that concatenates two strings
* @dest: first string
* @src: secong string
*
* Return: two concatenated strings
*/
char *_strcat(char *dest, char *src)
{
	stpcpy(dest + strlen(dest), src);
	return dest;
}
