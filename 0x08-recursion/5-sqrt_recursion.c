#include "main.h"
/**
 * _sqrt_recursion - gets the square root of a number
 * @n: parameter, number
 * Return: n, otherwise on error -1
 */

int calculate_sqrt(int n, int x, int y);

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (n * calculate_sqrt(n, 1, n));
	}
}

/**
 * calculate_sqrt - calculates square root value
 * @start: starting point
 * @end: ending point
 * @n: number
 * Return: square root
 */
int calculate_sqrt(int n, int x, int y)
{
	int i;

	i = (x + y) / 2;

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (calculate_sqrt(n, x, i - 1));
	}
	else
		return (calculate_sqrt(n, i + 1, y));

	return (calculate_sqrt(n, 1, n));
}
