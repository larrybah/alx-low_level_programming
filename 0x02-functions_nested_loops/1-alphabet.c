#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet to stdout
 * @i: character to be printed on stdout.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
