#include "main.h"

/**
* main - entry point
* @argc: integer variable
* @argv: pointer character variable
*
* Return: return 0 if Successful
*/

int main(int argc, char *argv[])
{
	int m, n, add = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				_putchar('Error');
				_putchar('\n');
				return (1);
			}
		}
		add += atoi(argv[m]);
	}
	_putchar(add);
	_putchar('\n');
	return (0);
}
