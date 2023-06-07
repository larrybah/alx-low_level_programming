#include "main.h"
/**
 * factorial - calculate factorial of a number
 * @n: parameter, factor value
 * Return: factorial of a number.
 * otherwise -1 on error, 1 on success
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
