#include "main.h"
/**
 * print_triangle - prints a triangle to the terminal
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size  < 0 && size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j <= size; j++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
