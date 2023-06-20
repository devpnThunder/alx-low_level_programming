#include "main.h"

/**
* _isalpha - checks for alphabetic characters
* @c: prints the character
*
*Return: 1 for letter or 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		if (c >= 97 && c <= 122)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
