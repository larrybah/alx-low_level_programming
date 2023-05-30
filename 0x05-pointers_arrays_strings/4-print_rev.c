#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	char *ptr = NULL;

	ptr = s[0];

	while (*s != '\0')
	{
		_putchar(*s);
		s--;
		ptr++;
	}
	_putchar('\n');
}

