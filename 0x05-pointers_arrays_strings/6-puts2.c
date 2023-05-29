#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: charaters to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < (*str / 2 != '0'); i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
