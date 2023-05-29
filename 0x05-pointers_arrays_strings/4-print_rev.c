#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	char temp;
	char start = s[0], end = '\0'; 

	while (*s != '\0')
	{
		temp = start;
		start = end;
		end = temp;
		end++;
		*s--;
	}

	_putchar(*s);
	_putchar('\n');
}

