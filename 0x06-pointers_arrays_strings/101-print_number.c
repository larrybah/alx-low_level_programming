#include "main.h"
#define ROT13IN  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ROT13OUT "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"
/**
 * print_number - using only _putchar
 * @n: the integer to print
 * Return: void
 */

void print_number(int n)
{
	int a, c;

	if (n < 0)
		_putchar('-');
	for (c = 0, a = 1000000000; a > 0; a /= 10)
	{
		int d = (n / a) % 10;

		d = d < 0 ? -d : d;
		if (d || c || a == 1)
		{
			_putchar(d + '0');
			c++;
		}

	}
}
