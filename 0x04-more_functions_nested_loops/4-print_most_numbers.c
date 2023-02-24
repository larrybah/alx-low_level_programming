#include "main.h"
/**
 * print_most_numbers - print numbers between 0 - 9 excluding 2 and 4
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	for (int i = 0; i <= 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
