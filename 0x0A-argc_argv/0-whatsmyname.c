#include "main.h"

/**
* main - Entry point
* @argc: integer character
* @argv: pointer to a string character
*
* Return: Always return 0 unless otherwise
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
