#include "variadic_functions.h"
/**
 * sum_them_all - sums up all the numbers
 * @n: total elements
 * Return: 0 Always
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
