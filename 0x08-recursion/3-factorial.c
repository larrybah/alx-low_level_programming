#include "main.h"
/**
 * factorial - prints the factors of a given number
 * @n: parameter
 * Return: Success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
