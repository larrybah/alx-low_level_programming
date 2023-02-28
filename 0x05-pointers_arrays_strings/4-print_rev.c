#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: variable
 */
void print_rev(char *s)
{
	int i;

	for (i = s - 1; i >= 0; i--)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
