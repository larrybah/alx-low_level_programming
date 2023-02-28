#include "main.h"
/**
 * puts_half - prints half of string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len = len + 1;
	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
