#include "main.h"
/**
 * print_sign - prints a plus sign if number is greater
 * and minus sign if its less, otherwise zero.
 * @n: value to check conditions on.
 * Return: 0 on Success.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

	return (0);

}
