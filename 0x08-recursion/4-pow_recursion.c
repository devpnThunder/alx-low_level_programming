#include "main.h"

/**
* _pow_recursion - function that returns the value of x raised to power y
* @x: first integer value
* @y: second integer value
*
* Return: value of x raised to power y
*/
int _pow_recursion(int x, int y)
{
	int pwr;

	if (y < 0)
	{
		return (-1);
	}
	pwr = x**y;
	return (pwr);
}
