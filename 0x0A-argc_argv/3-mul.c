#include "main.h"

/**
* main - Entry point
* @argc: integer character
* @argv: a pointer to a string character
*
* Return: ALways 0 unless otherwise
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[3]);
		printf("%d\n", mul);
		return (0);
	}
}
