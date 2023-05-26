#include "main.h"
/**
 * print_diagonal - prints a diagonal on the terminal
 * @n: number of diagonal lines to be printed
 */
void print_diagonal(int n)
{
	int j;

	if (n < 0 && n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
