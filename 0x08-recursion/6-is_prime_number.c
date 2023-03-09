#include "main.h"
/**
 * secondprime - makes it possible ot evaluate from 1 to n
 * @a: same value as n
 * @b: number thats iterates from 1 ot n
 * Return: 1 on success and -1 on error
 */
int secondprime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else
		return (secondprime(a, b + 1));
}

/**
 * is_prime_number - prints prime numbers
 * @n: parameter
 * Return: Success
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (secondprime(n, 2));
}
