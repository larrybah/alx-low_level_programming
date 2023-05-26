#include "main.h"
/**
 * print_square - prints squares to the terminal
 * @size: size of the square
 */
void print_square(int size)
{
	int square_h, square_w;

	if (size == 0 && size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (square_h = 1; square_h <= size; square_h++)
		{
			for (square_w = 1; square_w <= size; square_w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
