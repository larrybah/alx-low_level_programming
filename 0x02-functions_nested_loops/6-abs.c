#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @x: integer value
 * Return: 0 on Success
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else
	{
		return (x * (-1));
	}

	return (0);
}
