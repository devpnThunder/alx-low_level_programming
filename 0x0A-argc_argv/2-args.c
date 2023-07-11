#include "main.h"

/**
* main - Entry point
* @argc: integer character
* @argv: a pointer to a character string
*
* Return: Always 0 unless otherwise
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
