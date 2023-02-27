#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
		i--;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n')
}
