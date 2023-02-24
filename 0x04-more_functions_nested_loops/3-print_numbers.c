#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	char x = '0';

	while (x <= '9')
	{
		_putchar(x);
	}
	_putchar('\n');

	return (0);
}
