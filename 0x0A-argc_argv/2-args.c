#include "main.h"

/**
* main - Entry point
* @argc: integer character
* @argv: pointer to a string character
*
* Return: Always 0 (successful)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		_putchar(argv[i]);
		_putchar('\n');
	}
	return (0);
}
