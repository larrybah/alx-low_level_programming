#include "main.h"
/**
 * _pow_recursion - get power of a number
 * @x: parameter, number
 * @y: parameter, exponent number
 * Return: power of the number, otherwise -1 on error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
