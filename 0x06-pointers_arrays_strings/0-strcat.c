#include "main.h"

/**
* _strcat - function that concatenates two strings
* @dest: first string
* @src: second string
*
* Return: pointer to dest 
*/
char *_strcat(char *dest, char *src)
{
	stpcpy(dest + strlen(dest), src);
	return dest;
}
