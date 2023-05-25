#include "main.h"

/**
 * print_number - prints a number using _putchar function
 * @n: number to be printed
 */
void print_number(int n)
{
	int digit, reverse;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	reverse = 0;
	while (n > 0)
	{
		digit = n % 10;
		reverse = reverse * 10 + digit;
		n /= 10;
	}

	while (reverse > 0)
	{
		digit = reverse % 10;
		_putchar(digit + '0');
		reverse /= 10;
	}
}
