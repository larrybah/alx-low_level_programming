#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = s[0]; i < (s[i] - 1); i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
