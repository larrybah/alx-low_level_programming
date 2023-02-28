#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	for (int i = 0; i <= *(s - 1); i++)
	{
		if (i == '\0')
		{
			_putchar('i');
		}
	}
	-putchar('\n');
}
