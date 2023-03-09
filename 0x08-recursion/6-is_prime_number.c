#include "main.h"
/**
 * is_prime_number - prints prime numbers
 * @n: parameter
 * Return: Success
 */
int is_prime_number(int n)
{
	int i;

	if (n == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
			return (is_prime_number(n, i - 1));
	}
}
