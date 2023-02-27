#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int i;

	for (i = s - 1; i > s[i]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n')
}
