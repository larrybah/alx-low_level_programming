#include "main.h"
/**
 * _sqrt_recursion - gets the square root of a number
 * @n: parameter, number
 * Return: n, otherwise on error -1
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else
	{
		return (n * _sqrt_recursion(n - 1));
	}
}
