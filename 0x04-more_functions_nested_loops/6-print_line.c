#include "main.h"
/**
 * print_line - print lines
 *@n: number of lines
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	if (n >= 1)
	{
		_putchar('_');
	}
	_putchar('\n');
}
